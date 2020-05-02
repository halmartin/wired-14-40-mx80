/***************************************************************************
 *
 * This file is provided under a dual BSD/GPLv2 license.  When using or 
 *   redistributing this file, you may do so under either license.
 * 
 *   GPL LICENSE SUMMARY
 * 
 *   Copyright(c) 2007-2013 Intel Corporation. All rights reserved.
 * 
 *   This program is free software; you can redistribute it and/or modify 
 *   it under the terms of version 2 of the GNU General Public License as
 *   published by the Free Software Foundation.
 * 
 *   This program is distributed in the hope that it will be useful, but 
 *   WITHOUT ANY WARRANTY; without even the implied warranty of 
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 *   General Public License for more details.
 * 
 *   You should have received a copy of the GNU General Public License 
 *   along with this program; if not, write to the Free Software 
 *   Foundation, Inc., 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *   The full GNU General Public License is included in this distribution 
 *   in the file called LICENSE.GPL.
 * 
 *   Contact Information:
 *   Intel Corporation
 * 
 *   BSD LICENSE 
 * 
 *   Copyright(c) 2007-2013 Intel Corporation. All rights reserved.
 *   All rights reserved.
 * 
 *   Redistribution and use in source and binary forms, with or without 
 *   modification, are permitted provided that the following conditions 
 *   are met:
 * 
 *     * Redistributions of source code must retain the above copyright 
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright 
 *       notice, this list of conditions and the following disclaimer in 
 *       the documentation and/or other materials provided with the 
 *       distribution.
 *     * Neither the name of Intel Corporation nor the names of its 
 *       contributors may be used to endorse or promote products derived 
 *       from this software without specific prior written permission.
 * 
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * 
 *  version: QAT1.6.L.2.6.0-65
 *
 ***************************************************************************/

/**
 ***************************************************************************
 * @file lac_sym_hash_precomputes.h
 *
 * @defgroup LacHashDefs Hash Definitions
 *
 * @ingroup  LacHash
 *
 * Constants for hash algorithms
 *
 ***************************************************************************/
#ifndef LAC_SYM_HASH_PRECOMPUTES_H
#define LAC_SYM_HASH_PRECOMPUTES_H



#include "lac_sym_hash.h"

#define LAC_SYM_AES_CMAC_RB_128     0x87 /* constant used for   */
                                         /* CMAC calculation    */

#define LAC_SYM_HASH_MSBIT_MASK     0x80 /* Mask to check MSB top bit */
                                         /* zero or one */


#define LAC_SINGLE_BUFFER_HW_META_SIZE \
    (sizeof(icp_buffer_list_desc_t) + sizeof(icp_flat_buffer_desc_t))
/**< size of memory to allocate for the HW buffer list that is sent to the
 * QAT */

#define LAC_SYM_HASH_PRECOMP_MAX_WORKING_BUFFER         \
    ( (sizeof(lac_sym_hash_precomp_op_data_t) * 2) +    \
       sizeof(lac_sym_hash_precomp_op_t))
/**< maximum size of the working data for the HMAC precompute operations
 *
 * Maximum size of lac_sym_hash_precomp_op_data_t is 264 bytes. For hash
 * precomputes there are 2 of these structrues and a further
 * lac_sym_hash_precomp_op_t structure required. This comes to a total of 536
 * bytes.
 * For the asynchronous version of the precomputes, the memory for the hash
 * state prefix buffer is used as the working memory. There are 584 bytes
 * which are alloacted for the hash state prefix buffer which is enough to
 * carve up for the precomputes.
 */

#define LAC_SYM_HASH_PRECOMP_MAX_AES_ECB_DATA   \
    ((ICP_QAT_HW_AES_128_KEY_SZ) * (3))
/**< Maximum size for the data that an AES ECB precompute is generated on */



/**
 *****************************************************************************
 * @ingroup LacHashDefs
 *      Precompute type enum
 * @description
 *      Enum used to distinguish between precompute types
 *
 *****************************************************************************/
typedef enum
{
    LAC_SYM_HASH_PRECOMP_HMAC = 1,
    /**< Hmac precompute operation. Copy state from hash state buffer */
    LAC_SYM_HASH_PRECOMP_AES_ECB,
    /**< XCBC/CGM precompute, Copy state from data buffer */
} lac_sym_hash_precomp_type_t;

/**
 *****************************************************************************
 * @ingroup LacHashDefs
 *      overall precompute management structure
 * @description
 *      structure used to manage the precompute operations for a session
 *
 *****************************************************************************/
typedef struct lac_sym_hash_precomp_op_s
{
    lac_hash_precompute_done_cb_t callbackFn;
    /**< Callback function to be invoked when the final precompute completes */

    void *pCallbackTag;
    /**< Opaque data to be passed back as a parameter in the callback */

    OsalAtomic opsPending;
    /**< counter used to determine if the current precompute is the
     * final one. */


}lac_sym_hash_precomp_op_t;

/**
 *****************************************************************************
 * @ingroup LacHashDefs
 *      hmac precompute structure as used by the QAT
 * @description
 *      data used by the QAT for HMAC precomputes
 *
 *      Must be allocated on an 8-byte aligned memory address.
 *
 *****************************************************************************/
typedef struct lac_sym_hash_hmac_precomp_qat_s
{
    Cpa8U data[LAC_HASH_SHA512_BLOCK_SIZE];
    /**< data to be hashed - block size of data for the algorithm */
    /* NOTE: to save space we could have got the QAT to overwrite
     * this with the hash state storage */
    icp_qat_fw_la_auth_req_params_t hashReqParams;
    /**< Request parameters as read in by the QAT */
    Cpa8U bufferDesc[LAC_SINGLE_BUFFER_HW_META_SIZE];
    /**< Buffer descriptor structure */
    Cpa8U hashStateStorage[LAC_MAX_HASH_STATE_STORAGE_SIZE];
    /**< Internal buffer where QAT writes the intermediate partial
     * state that is used in the precompute */
} lac_sym_hash_hmac_precomp_qat_t;

/**
 *****************************************************************************
 * @ingroup LacHashDefs
 *      AES ECB precompute structure as used by the QAT
 * @description
 *      data used by the QAT for AES ECB precomptes
 *
 *      Must be allocated on an 8-byte aligned memory address.
 *
 *****************************************************************************/
typedef struct lac_sym_hash_aes_precomp_qat_s
{
    Cpa8U contentDesc[LAC_SYM_QAT_MAX_CIPHER_SETUP_BLK_SZ];
    /**< Content descriptor for a cipher operation */
    Cpa8U data[LAC_SYM_HASH_PRECOMP_MAX_AES_ECB_DATA];
    /**< The data to be ciphered is conatined here and the result is
     * written in place back into this buffer */
    icp_qat_fw_la_cipher_req_params_t cipherReqParams;
    /**< Request parameters as read in by the QAT */
    Cpa8U bufferDesc[LAC_SINGLE_BUFFER_HW_META_SIZE];
    /**< Buffer descriptor structure */
} lac_sym_hash_aes_precomp_qat_t;




/**
 *****************************************************************************
 * @ingroup LacHashDefs
 *      overall structure for managing a single precompute operation
 * @description
 *      overall structure for managing a single precompute operation
 *
 *      Must be allocated on an 8-byte aligned memory address.
 *
 *****************************************************************************/
typedef struct lac_sym_hash_precomp_op_data_s
{
    sal_crypto_service_t* pInstance;
    /**< Instance handle for the operation */
    Cpa8U reserved[4];
    /**< padding to align later structures on minimum 8-Byte address */
    lac_sym_hash_precomp_type_t opType;
    /**< operation type to determine the precompute type in the callback */
    lac_sym_hash_precomp_op_t *pOpStatus;
    /**< structure containing the counter and the condition for the overall
     * precompute operation. This is a pointer because the memory structure
     * may be shared between precomputes when there are more than 1 as in the
     * case of HMAC */
    union
    {
        lac_sym_hash_hmac_precomp_qat_t hmacQatData;
        /**< Data sent to the QAT for hmac precomputes */
        lac_sym_hash_aes_precomp_qat_t aesQatData;
        /**< Data sent to the QAT for AES ECB precomputes */
    } u;

    /**< ASSUMPTION: The above structures are 8 byte aligned if the overall
     * struct is 8 byte aligned, as there are two 4 byte fields before this
     * union */
    Cpa32U stateSize;
    /**< Size of the state to be copied into the state pointer in the content
     * descriptor */
    Cpa8U *pState;
    /**< pointer to the state in the content descriptor where the result of
     * the precompute should be copied to */
} lac_sym_hash_precomp_op_data_t;

#endif /* LAC_SYM_HASH_PRECOMPUTES_H */
