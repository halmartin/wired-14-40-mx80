#ifndef _MB_MPA_H__
#define _MB_MPA_H__

/*	Global Base Address	*/
#define MPA_GLBL_DIAG_CSR_BASE_ADDR				0xddd8b7000ULL

/*    Address GLBL_DIAG_CSR  Registers */
#define MPA_CFG_DIAG_SEL_ADDR                                        0x00000000
#define MPA_CFG_DIAG_SEL_DEFAULT                                     0x00000000
#define MPA_CFG_READ_BW_LAT_ADDR_MASK_ADDR                           0x00000004
#define MPA_CFG_READ_BW_LAT_ADDR_MASK_DEFAULT                        0x00000000
#define MPA_CFG_READ_BW_LAT_ADDR_PAT_ADDR                            0x00000008
#define MPA_CFG_READ_BW_LAT_ADDR_PAT_DEFAULT                         0xffffffff
#define MPA_CFG_WRITE_BW_LAT_ADDR_MASK_ADDR                          0x0000000c
#define MPA_CFG_WRITE_BW_LAT_ADDR_MASK_DEFAULT                       0x00000000
#define MPA_CFG_WRITE_BW_LAT_ADDR_PAT_ADDR                           0x00000010
#define MPA_CFG_WRITE_BW_LAT_ADDR_PAT_DEFAULT                        0xffffffff
#define MPA_CFG_DIAG_START_STOP_ADDR                                 0x00000014
#define MPA_CFG_DIAG_START_STOP_DEFAULT                              0x0000001f
#define MPA_CFG_BW_MSTR_STOP_CNT_ADDR                                0x00000018
#define MPA_CFG_BW_MSTR_STOP_CNT_DEFAULT                             0x00040004
#define MPA_CFG_BW_SLV_STOP_CNT_ADDR                                 0x0000001c
#define MPA_CFG_BW_SLV_STOP_CNT_DEFAULT                              0x00040004
#define MPA_STS_READ_LATENCY_OUTPUT_ADDR                             0x00000020
#define MPA_STS_READ_LATENCY_OUTPUT_DEFAULT                          0x00000000
#define MPA_STS_AXI_MRD_BW_CLK_CNT_ADDR                              0x00000024
#define MPA_STS_AXI_MRD_BW_CLK_CNT_DEFAULT                           0x00000000
#define MPA_STS_AXI_MRD_BW_BYTE_CNT_ADDR                             0x00000028
#define MPA_STS_AXI_MRD_BW_BYTE_CNT_DEFAULT                          0x00000000
#define MPA_STS_AXI_MWR_BW_CLK_CNT_ADDR                              0x0000002c
#define MPA_STS_AXI_MWR_BW_CLK_CNT_DEFAULT                           0x00000000
#define MPA_STS_AXI_MWR_BW_BYTE_CNT_ADDR                             0x00000030
#define MPA_STS_AXI_MWR_BW_BYTE_CNT_DEFAULT                          0x00000000
#define MPA_STS_AXI_SRD_BW_CLK_CNT_ADDR                              0x00000034
#define MPA_STS_AXI_SRD_BW_CLK_CNT_DEFAULT                           0x00000000
#define MPA_STS_AXI_SRD_BW_BYTE_CNT_ADDR                             0x00000038
#define MPA_STS_AXI_SRD_BW_BYTE_CNT_DEFAULT                          0x00000000
#define MPA_STS_AXI_SWR_BW_CLK_CNT_ADDR                              0x0000003c
#define MPA_STS_AXI_SWR_BW_CLK_CNT_DEFAULT                           0x00000000
#define MPA_STS_AXI_SWR_BW_BYTE_CNT_ADDR                             0x00000040
#define MPA_STS_AXI_SWR_BW_BYTE_CNT_DEFAULT                          0x00000000
#define MPA_CFG_DBG_TRIG_CTRL_ADDR                                   0x00000044
#define MPA_CFG_DBG_TRIG_CTRL_DEFAULT                                0x00000000
#define MPA_CFG_DBG_PAT_REG_0_ADDR                                   0x00000048
#define MPA_CFG_DBG_PAT_REG_0_DEFAULT                                0x00000000
#define MPA_CFG_DBG_PAT_MASK_REG_0_ADDR                              0x0000004c
#define MPA_CFG_DBG_PAT_MASK_REG_0_DEFAULT                           0x00000000
#define MPA_CFG_DBG_PAT_REG_1_ADDR                                   0x00000050
#define MPA_CFG_DBG_PAT_REG_1_DEFAULT                                0x00000000
#define MPA_CFG_DBG_PAT_MASK_REG_1_ADDR                              0x00000054
#define MPA_CFG_DBG_PAT_MASK_REG_1_DEFAULT                           0x00000000
#define MPA_DBG_TRIG_OUT_ADDR                                        0x00000058
#define MPA_DBG_TRIG_OUT_DEFAULT                                     0x00000000
#define MPA_DBG_ECC_INT_OUT_ADDR                                     0x0000005c
#define MPA_DBG_ECC_INT_OUT_DEFAULT                                  0x00000000
#define MPA_DBG_ECC_INT_OUTMASK_ADDR                                 0x00000060
#define MPA_CFG_SECC_INT_THRSH_REG_ADDR                              0x00000064
#define MPA_CFG_SECC_INT_THRSH_REG_DEFAULT                           0x000000fe
#define MPA_CFG_MEM_ECC_BYPASS_ADDR                                  0x00000068
#define MPA_CFG_MEM_ECC_BYPASS_DEFAULT                               0x00000000
#define MPA_CFG_MEM_PWRDN_DIS_ADDR                                   0x0000006c
#define MPA_CFG_MEM_PWRDN_DIS_DEFAULT                                0x00000000
#define MPA_CFG_MEM_RAM_SHUTDOWN_ADDR                                0x00000070
#define MPA_CFG_MEM_RAM_SHUTDOWN_DEFAULT                             0xffffffff
#define MPA_BLOCK_MEM_RDY_ADDR                                       0x00000074
#define MPA_BLOCK_MEM_RDY_DEFAULT                                    0xffffffff
#define MPA_CFG_AXI_SLV_RD_TMO_ADDR                                  0x00000078
#define MPA_CFG_AXI_SLV_RD_TMO_DEFAULT                               0x83ff83ff
#define MPA_CFG_AXI_SLV_WR_TMO_ADDR                                  0x0000007c
#define MPA_CFG_AXI_SLV_WR_TMO_DEFAULT                               0x83ff83ff
#define MPA_STS_AXI_SLV_TMO_ADDR                                     0x00000080
#define MPA_STS_AXI_SLV_TMO_DEFAULT                                  0x00000000
#define MPA_CFG_AXI_SS_CSR_TMO_ADDR                                  0x00000084
#define MPA_CFG_AXI_SS_CSR_TMO_DEFAULT                               0x02008000
#define MPA_STS_READ_LATENCY_TOT_READ_REQS_ADDR                      0x0000008c
#define MPA_STS_READ_LATENCY_TOT_READ_REQS_DEFAULT                   0x00000000

/*	Register CFG_DIAG_SEL	*/ 
/*	 Fields CFG_AXI_NON_AXI_MUX_SELECT	 */
#define MPA_CFG_AXI_NON_AXI_MUX_SELECT_WIDTH                                  1
#define MPA_CFG_AXI_NON_AXI_MUX_SELECT_SHIFT                                 11
#define MPA_CFG_AXI_NON_AXI_MUX_SELECT_MASK                          0x00000800
#define MPA_CFG_AXI_NON_AXI_MUX_SELECT_RD(src)       (((src) & 0x00000800)>>11)
#define MPA_CFG_AXI_NON_AXI_MUX_SELECT_WR(src)  (((u32)(src)<<11) & 0x00000800)
#define MPA_CFG_AXI_NON_AXI_MUX_SELECT_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields CFG_MUX_SELECTOR	 */
#define MPA_CFG_MUX_SELECTOR_WIDTH                                           11
#define MPA_CFG_MUX_SELECTOR_SHIFT                                            0
#define MPA_CFG_MUX_SELECTOR_MASK                                    0x000007ff
#define MPA_CFG_MUX_SELECTOR_RD(src)                     (((src) & 0x000007ff))
#define MPA_CFG_MUX_SELECTOR_WR(src)                (((u32)(src)) & 0x000007ff)
#define MPA_CFG_MUX_SELECTOR_SET(dst,src) \
                          (((dst) & ~0x000007ff) | (((u32)(src)) & 0x000007ff))

/*	Register CFG_READ_BW_LAT_ADDR_MASK	*/ 
/*	 Fields READ_ADDR_MASK	 */
#define MPA_READ_ADDR_MASK_WIDTH                                             32
#define MPA_READ_ADDR_MASK_SHIFT                                              0
#define MPA_READ_ADDR_MASK_MASK                                      0xffffffff
#define MPA_READ_ADDR_MASK_RD(src)                       (((src) & 0xffffffff))
#define MPA_READ_ADDR_MASK_WR(src)                  (((u32)(src)) & 0xffffffff)
#define MPA_READ_ADDR_MASK_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_READ_BW_LAT_ADDR_PAT	*/ 
/*	 Fields READ_ADDR_PAT	 */
#define MPA_READ_ADDR_PAT_WIDTH                                              32
#define MPA_READ_ADDR_PAT_SHIFT                                               0
#define MPA_READ_ADDR_PAT_MASK                                       0xffffffff
#define MPA_READ_ADDR_PAT_RD(src)                        (((src) & 0xffffffff))
#define MPA_READ_ADDR_PAT_WR(src)                   (((u32)(src)) & 0xffffffff)
#define MPA_READ_ADDR_PAT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_WRITE_BW_LAT_ADDR_MASK	*/ 
/*	 Fields WRITE_ADDR_MASK	 */
#define MPA_WRITE_ADDR_MASK_WIDTH                                            32
#define MPA_WRITE_ADDR_MASK_SHIFT                                             0
#define MPA_WRITE_ADDR_MASK_MASK                                     0xffffffff
#define MPA_WRITE_ADDR_MASK_RD(src)                      (((src) & 0xffffffff))
#define MPA_WRITE_ADDR_MASK_WR(src)                 (((u32)(src)) & 0xffffffff)
#define MPA_WRITE_ADDR_MASK_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_WRITE_BW_LAT_ADDR_PAT	*/ 
/*	 Fields WRITE_ADDR_PAT	 */
#define MPA_WRITE_ADDR_PAT_WIDTH                                             32
#define MPA_WRITE_ADDR_PAT_SHIFT                                              0
#define MPA_WRITE_ADDR_PAT_MASK                                      0xffffffff
#define MPA_WRITE_ADDR_PAT_RD(src)                       (((src) & 0xffffffff))
#define MPA_WRITE_ADDR_PAT_WR(src)                  (((u32)(src)) & 0xffffffff)
#define MPA_WRITE_ADDR_PAT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_DIAG_START_STOP	*/ 
/*	 Fields START_RD_LATENCY	 */
#define MPA_START_RD_LATENCY_WIDTH                                            1
#define MPA_START_RD_LATENCY_SHIFT                                            4
#define MPA_START_RD_LATENCY_MASK                                    0x00000010
#define MPA_START_RD_LATENCY_RD(src)                  (((src) & 0x00000010)>>4)
#define MPA_START_RD_LATENCY_WR(src)             (((u32)(src)<<4) & 0x00000010)
#define MPA_START_RD_LATENCY_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields START_SRD_BW	 */
#define MPA_START_SRD_BW_WIDTH                                                1
#define MPA_START_SRD_BW_SHIFT                                                3
#define MPA_START_SRD_BW_MASK                                        0x00000008
#define MPA_START_SRD_BW_RD(src)                      (((src) & 0x00000008)>>3)
#define MPA_START_SRD_BW_WR(src)                 (((u32)(src)<<3) & 0x00000008)
#define MPA_START_SRD_BW_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields START_MRD_BW	 */
#define MPA_START_MRD_BW_WIDTH                                                1
#define MPA_START_MRD_BW_SHIFT                                                2
#define MPA_START_MRD_BW_MASK                                        0x00000004
#define MPA_START_MRD_BW_RD(src)                      (((src) & 0x00000004)>>2)
#define MPA_START_MRD_BW_WR(src)                 (((u32)(src)<<2) & 0x00000004)
#define MPA_START_MRD_BW_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields START_SWR_BW	 */
#define MPA_START_SWR_BW_WIDTH                                                1
#define MPA_START_SWR_BW_SHIFT                                                1
#define MPA_START_SWR_BW_MASK                                        0x00000002
#define MPA_START_SWR_BW_RD(src)                      (((src) & 0x00000002)>>1)
#define MPA_START_SWR_BW_WR(src)                 (((u32)(src)<<1) & 0x00000002)
#define MPA_START_SWR_BW_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields START_MWR_BW	 */
#define MPA_START_MWR_BW_WIDTH                                                1
#define MPA_START_MWR_BW_SHIFT                                                0
#define MPA_START_MWR_BW_MASK                                        0x00000001
#define MPA_START_MWR_BW_RD(src)                         (((src) & 0x00000001))
#define MPA_START_MWR_BW_WR(src)                    (((u32)(src)) & 0x00000001)
#define MPA_START_MWR_BW_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CFG_BW_MSTR_STOP_CNT	*/ 
/*	 Fields MSTR_STOP_RD_CNT	 */
#define MPA_MSTR_STOP_RD_CNT_WIDTH                                           16
#define MPA_MSTR_STOP_RD_CNT_SHIFT                                           16
#define MPA_MSTR_STOP_RD_CNT_MASK                                    0xffff0000
#define MPA_MSTR_STOP_RD_CNT_RD(src)                 (((src) & 0xffff0000)>>16)
#define MPA_MSTR_STOP_RD_CNT_WR(src)            (((u32)(src)<<16) & 0xffff0000)
#define MPA_MSTR_STOP_RD_CNT_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields MSTR_STOP_WR_CNT	 */
#define MPA_MSTR_STOP_WR_CNT_WIDTH                                           16
#define MPA_MSTR_STOP_WR_CNT_SHIFT                                            0
#define MPA_MSTR_STOP_WR_CNT_MASK                                    0x0000ffff
#define MPA_MSTR_STOP_WR_CNT_RD(src)                     (((src) & 0x0000ffff))
#define MPA_MSTR_STOP_WR_CNT_WR(src)                (((u32)(src)) & 0x0000ffff)
#define MPA_MSTR_STOP_WR_CNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register CFG_BW_SLV_STOP_CNT	*/ 
/*	 Fields SLV_STOP_RD_CNT	 */
#define MPA_SLV_STOP_RD_CNT_WIDTH                                            16
#define MPA_SLV_STOP_RD_CNT_SHIFT                                            16
#define MPA_SLV_STOP_RD_CNT_MASK                                     0xffff0000
#define MPA_SLV_STOP_RD_CNT_RD(src)                  (((src) & 0xffff0000)>>16)
#define MPA_SLV_STOP_RD_CNT_WR(src)             (((u32)(src)<<16) & 0xffff0000)
#define MPA_SLV_STOP_RD_CNT_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields SLV_STOP_WR_CNT	 */
#define MPA_SLV_STOP_WR_CNT_WIDTH                                            16
#define MPA_SLV_STOP_WR_CNT_SHIFT                                             0
#define MPA_SLV_STOP_WR_CNT_MASK                                     0x0000ffff
#define MPA_SLV_STOP_WR_CNT_RD(src)                      (((src) & 0x0000ffff))
#define MPA_SLV_STOP_WR_CNT_WR(src)                 (((u32)(src)) & 0x0000ffff)
#define MPA_SLV_STOP_WR_CNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register STS_READ_LATENCY_OUTPUT	*/ 
/*	 Fields READ_MAX	 */
#define MPA_READ_MAX_WIDTH                                                   10
#define MPA_READ_MAX_SHIFT                                                   22
#define MPA_READ_MAX_MASK                                            0xffc00000
#define MPA_READ_MAX_RD(src)                         (((src) & 0xffc00000)>>22)
#define MPA_READ_MAX_SET(dst,src) \
                      (((dst) & ~0xffc00000) | (((u32)(src)<<22) & 0xffc00000))
/*	 Fields READ_TOT	 */
#define MPA_READ_TOT_WIDTH                                                   22
#define MPA_READ_TOT_SHIFT                                                    0
#define MPA_READ_TOT_MASK                                            0x003fffff
#define MPA_READ_TOT_RD(src)                             (((src) & 0x003fffff))
#define MPA_READ_TOT_SET(dst,src) \
                          (((dst) & ~0x003fffff) | (((u32)(src)) & 0x003fffff))

/*	Register STS_AXI_MRD_BW_CLK_CNT	*/ 
/*	 Fields MSTR_READ_BW_CLK_CNT	 */
#define MPA_MSTR_READ_BW_CLK_CNT_WIDTH                                       32
#define MPA_MSTR_READ_BW_CLK_CNT_SHIFT                                        0
#define MPA_MSTR_READ_BW_CLK_CNT_MASK                                0xffffffff
#define MPA_MSTR_READ_BW_CLK_CNT_RD(src)                 (((src) & 0xffffffff))
#define MPA_MSTR_READ_BW_CLK_CNT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register STS_AXI_MRD_BW_BYTE_CNT	*/ 
/*	 Fields MSTR_READ_BW_BYTE_CNT	 */
#define MPA_MSTR_READ_BW_BYTE_CNT_WIDTH                                      32
#define MPA_MSTR_READ_BW_BYTE_CNT_SHIFT                                       0
#define MPA_MSTR_READ_BW_BYTE_CNT_MASK                               0xffffffff
#define MPA_MSTR_READ_BW_BYTE_CNT_RD(src)                (((src) & 0xffffffff))
#define MPA_MSTR_READ_BW_BYTE_CNT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register STS_AXI_MWR_BW_CLK_CNT	*/ 
/*	 Fields MSTR_WRITE_BW_CLK_CNT	 */
#define MPA_MSTR_WRITE_BW_CLK_CNT_WIDTH                                      32
#define MPA_MSTR_WRITE_BW_CLK_CNT_SHIFT                                       0
#define MPA_MSTR_WRITE_BW_CLK_CNT_MASK                               0xffffffff
#define MPA_MSTR_WRITE_BW_CLK_CNT_RD(src)                (((src) & 0xffffffff))
#define MPA_MSTR_WRITE_BW_CLK_CNT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register STS_AXI_MWR_BW_BYTE_CNT	*/ 
/*	 Fields MSTR_WRITE_BW_BYTE_CNT	 */
#define MPA_MSTR_WRITE_BW_BYTE_CNT_WIDTH                                     32
#define MPA_MSTR_WRITE_BW_BYTE_CNT_SHIFT                                      0
#define MPA_MSTR_WRITE_BW_BYTE_CNT_MASK                              0xffffffff
#define MPA_MSTR_WRITE_BW_BYTE_CNT_RD(src)               (((src) & 0xffffffff))
#define MPA_MSTR_WRITE_BW_BYTE_CNT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register STS_AXI_SRD_BW_CLK_CNT	*/ 
/*	 Fields SLV_READ_BW_CLK_CNT	 */
#define MPA_SLV_READ_BW_CLK_CNT_WIDTH                                        32
#define MPA_SLV_READ_BW_CLK_CNT_SHIFT                                         0
#define MPA_SLV_READ_BW_CLK_CNT_MASK                                 0xffffffff
#define MPA_SLV_READ_BW_CLK_CNT_RD(src)                  (((src) & 0xffffffff))
#define MPA_SLV_READ_BW_CLK_CNT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register STS_AXI_SRD_BW_BYTE_CNT	*/ 
/*	 Fields SLV_READ_BW_BYTE_CNT	 */
#define MPA_SLV_READ_BW_BYTE_CNT_WIDTH                                       32
#define MPA_SLV_READ_BW_BYTE_CNT_SHIFT                                        0
#define MPA_SLV_READ_BW_BYTE_CNT_MASK                                0xffffffff
#define MPA_SLV_READ_BW_BYTE_CNT_RD(src)                 (((src) & 0xffffffff))
#define MPA_SLV_READ_BW_BYTE_CNT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register STS_AXI_SWR_BW_CLK_CNT	*/ 
/*	 Fields SLV_WRITE_BW_CLK_CNT	 */
#define MPA_SLV_WRITE_BW_CLK_CNT_WIDTH                                       32
#define MPA_SLV_WRITE_BW_CLK_CNT_SHIFT                                        0
#define MPA_SLV_WRITE_BW_CLK_CNT_MASK                                0xffffffff
#define MPA_SLV_WRITE_BW_CLK_CNT_RD(src)                 (((src) & 0xffffffff))
#define MPA_SLV_WRITE_BW_CLK_CNT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register STS_AXI_SWR_BW_BYTE_CNT	*/ 
/*	 Fields SLV_WRITE_BW_BYTE_CNT	 */
#define MPA_SLV_WRITE_BW_BYTE_CNT_WIDTH                                      32
#define MPA_SLV_WRITE_BW_BYTE_CNT_SHIFT                                       0
#define MPA_SLV_WRITE_BW_BYTE_CNT_MASK                               0xffffffff
#define MPA_SLV_WRITE_BW_BYTE_CNT_RD(src)                (((src) & 0xffffffff))
#define MPA_SLV_WRITE_BW_BYTE_CNT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_DBG_TRIG_CTRL	*/ 
/*	 Fields TRIG_EN	 */
#define MPA_TRIG_EN_WIDTH                                                     1
#define MPA_TRIG_EN_SHIFT                                                     4
#define MPA_TRIG_EN_MASK                                             0x00000010
#define MPA_TRIG_EN_RD(src)                           (((src) & 0x00000010)>>4)
#define MPA_TRIG_EN_WR(src)                      (((u32)(src)<<4) & 0x00000010)
#define MPA_TRIG_EN_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields AND_E	 */
#define MPA_AND_E_WIDTH                                                       2
#define MPA_AND_E_SHIFT                                                       2
#define MPA_AND_E_MASK                                               0x0000000c
#define MPA_AND_E_RD(src)                             (((src) & 0x0000000c)>>2)
#define MPA_AND_E_WR(src)                        (((u32)(src)<<2) & 0x0000000c)
#define MPA_AND_E_SET(dst,src) \
                       (((dst) & ~0x0000000c) | (((u32)(src)<<2) & 0x0000000c))
/*	 Fields OR_E	 */
#define MPA_OR_E_WIDTH                                                        2
#define MPA_OR_E_SHIFT                                                        0
#define MPA_OR_E_MASK                                                0x00000003
#define MPA_OR_E_RD(src)                                 (((src) & 0x00000003))
#define MPA_OR_E_WR(src)                            (((u32)(src)) & 0x00000003)
#define MPA_OR_E_SET(dst,src) \
                          (((dst) & ~0x00000003) | (((u32)(src)) & 0x00000003))

/*	Register CFG_DBG_PAT_REG_0	*/ 
/*	 Fields PATTERN	 */
#define MPA_PATTERN0_WIDTH                                                   32
#define MPA_PATTERN0_SHIFT                                                    0
#define MPA_PATTERN0_MASK                                            0xffffffff
#define MPA_PATTERN0_RD(src)                             (((src) & 0xffffffff))
#define MPA_PATTERN0_WR(src)                        (((u32)(src)) & 0xffffffff)
#define MPA_PATTERN0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_DBG_PAT_MASK_REG_0	*/ 
/*	 Fields PAT_MASK	 */
#define MPA_PAT_MASK0_WIDTH                                                  32
#define MPA_PAT_MASK0_SHIFT                                                   0
#define MPA_PAT_MASK0_MASK                                           0xffffffff
#define MPA_PAT_MASK0_RD(src)                            (((src) & 0xffffffff))
#define MPA_PAT_MASK0_WR(src)                       (((u32)(src)) & 0xffffffff)
#define MPA_PAT_MASK0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_DBG_PAT_REG_1	*/ 
/*	 Fields PATTERN	 */
#define MPA_PATTERN1_WIDTH                                                   32
#define MPA_PATTERN1_SHIFT                                                    0
#define MPA_PATTERN1_MASK                                            0xffffffff
#define MPA_PATTERN1_RD(src)                             (((src) & 0xffffffff))
#define MPA_PATTERN1_WR(src)                        (((u32)(src)) & 0xffffffff)
#define MPA_PATTERN1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_DBG_PAT_MASK_REG_1	*/ 
/*	 Fields PAT_MASK	 */
#define MPA_PAT_MASK1_WIDTH                                                  32
#define MPA_PAT_MASK1_SHIFT                                                   0
#define MPA_PAT_MASK1_MASK                                           0xffffffff
#define MPA_PAT_MASK1_RD(src)                            (((src) & 0xffffffff))
#define MPA_PAT_MASK1_WR(src)                       (((u32)(src)) & 0xffffffff)
#define MPA_PAT_MASK1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register DBG_TRIG_OUT	*/ 
/*	 Fields DBG_OUT	 */
#define MPA_DBG_OUT_WIDTH                                                    32
#define MPA_DBG_OUT_SHIFT                                                     0
#define MPA_DBG_OUT_MASK                                             0xffffffff
#define MPA_DBG_OUT_RD(src)                              (((src) & 0xffffffff))
#define MPA_DBG_OUT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register DBG_ECC_INT_OUT	*/ 
/*	 Fields SLV_TMO	 */
#define MPA_SLV_TMO_WIDTH                                                     1
#define MPA_SLV_TMO_SHIFT                                                     3
#define MPA_SLV_TMO_MASK                                             0x00000008
#define MPA_SLV_TMO_RD(src)                           (((src) & 0x00000008)>>3)
#define MPA_SLV_TMO_WR(src)                      (((u32)(src)<<3) & 0x00000008)
#define MPA_SLV_TMO_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields SECC_INT	 */
#define MPA_SECC_INT_WIDTH                                                    1
#define MPA_SECC_INT_SHIFT                                                    2
#define MPA_SECC_INT_MASK                                            0x00000004
#define MPA_SECC_INT_RD(src)                          (((src) & 0x00000004)>>2)
#define MPA_SECC_INT_WR(src)                     (((u32)(src)<<2) & 0x00000004)
#define MPA_SECC_INT_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields DECC_INT	 */
#define MPA_DECC_INT_WIDTH                                                    1
#define MPA_DECC_INT_SHIFT                                                    1
#define MPA_DECC_INT_MASK                                            0x00000002
#define MPA_DECC_INT_RD(src)                          (((src) & 0x00000002)>>1)
#define MPA_DECC_INT_WR(src)                     (((u32)(src)<<1) & 0x00000002)
#define MPA_DECC_INT_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields DBG_INT	 */
#define MPA_DBG_INT_WIDTH                                                     1
#define MPA_DBG_INT_SHIFT                                                     0
#define MPA_DBG_INT_MASK                                             0x00000001
#define MPA_DBG_INT_RD(src)                              (((src) & 0x00000001))
#define MPA_DBG_INT_WR(src)                         (((u32)(src)) & 0x00000001)
#define MPA_DBG_INT_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register DBG_ECC_INT_OUTMask	*/
/*    Mask Register Fields SLV_TMOMask    */
#define MPA_SLV_TMOMASK_WIDTH                                                 1
#define MPA_SLV_TMOMASK_SHIFT                                                 3
#define MPA_SLV_TMOMASK_MASK                                         0x00000008
#define MPA_SLV_TMOMASK_RD(src)                       (((src) & 0x00000008)>>3)
#define MPA_SLV_TMOMASK_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define MPA_SLV_TMOMASK_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*    Mask Register Fields SECC_INTMask    */
#define MPA_SECC_INTMASK_WIDTH                                                1
#define MPA_SECC_INTMASK_SHIFT                                                2
#define MPA_SECC_INTMASK_MASK                                        0x00000004
#define MPA_SECC_INTMASK_RD(src)                      (((src) & 0x00000004)>>2)
#define MPA_SECC_INTMASK_WR(src)                 (((u32)(src)<<2) & 0x00000004)
#define MPA_SECC_INTMASK_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*    Mask Register Fields DECC_INTMask    */
#define MPA_DECC_INTMASK_WIDTH                                                1
#define MPA_DECC_INTMASK_SHIFT                                                1
#define MPA_DECC_INTMASK_MASK                                        0x00000002
#define MPA_DECC_INTMASK_RD(src)                      (((src) & 0x00000002)>>1)
#define MPA_DECC_INTMASK_WR(src)                 (((u32)(src)<<1) & 0x00000002)
#define MPA_DECC_INTMASK_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*    Mask Register Fields DBG_INTMask    */
#define MPA_DBG_INTMASK_WIDTH                                                 1
#define MPA_DBG_INTMASK_SHIFT                                                 0
#define MPA_DBG_INTMASK_MASK                                         0x00000001
#define MPA_DBG_INTMASK_RD(src)                          (((src) & 0x00000001))
#define MPA_DBG_INTMASK_WR(src)                     (((u32)(src)) & 0x00000001)
#define MPA_DBG_INTMASK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CFG_SECC_INT_THRSH_REG	*/ 
/*	 Fields SECC_INT_THRSH	 */
#define MPA_SECC_INT_THRSH_WIDTH                                              8
#define MPA_SECC_INT_THRSH_SHIFT                                              0
#define MPA_SECC_INT_THRSH_MASK                                      0x000000ff
#define MPA_SECC_INT_THRSH_RD(src)                       (((src) & 0x000000ff))
#define MPA_SECC_INT_THRSH_WR(src)                  (((u32)(src)) & 0x000000ff)
#define MPA_SECC_INT_THRSH_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register CFG_MEM_ECC_BYPASS	*/ 
/*	 Fields CFG_ECC_BYPASS	 */
#define MPA_CFG_ECC_BYPASS_WIDTH                                             16
#define MPA_CFG_ECC_BYPASS_SHIFT                                              0
#define MPA_CFG_ECC_BYPASS_MASK                                      0x0000ffff
#define MPA_CFG_ECC_BYPASS_RD(src)                       (((src) & 0x0000ffff))
#define MPA_CFG_ECC_BYPASS_WR(src)                  (((u32)(src)) & 0x0000ffff)
#define MPA_CFG_ECC_BYPASS_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register CFG_MEM_PWRDN_DIS	*/ 
/*	 Fields CFG_ECC_PWRDN_DIS	 */
#define MPA_CFG_ECC_PWRDN_DIS_WIDTH                                          16
#define MPA_CFG_ECC_PWRDN_DIS_SHIFT                                          16
#define MPA_CFG_ECC_PWRDN_DIS_MASK                                   0xffff0000
#define MPA_CFG_ECC_PWRDN_DIS_RD(src)                (((src) & 0xffff0000)>>16)
#define MPA_CFG_ECC_PWRDN_DIS_WR(src)           (((u32)(src)<<16) & 0xffff0000)
#define MPA_CFG_ECC_PWRDN_DIS_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields CFG_PWRDN_DIS	 */
#define MPA_CFG_PWRDN_DIS_WIDTH                                              16
#define MPA_CFG_PWRDN_DIS_SHIFT                                               0
#define MPA_CFG_PWRDN_DIS_MASK                                       0x0000ffff
#define MPA_CFG_PWRDN_DIS_RD(src)                        (((src) & 0x0000ffff))
#define MPA_CFG_PWRDN_DIS_WR(src)                   (((u32)(src)) & 0x0000ffff)
#define MPA_CFG_PWRDN_DIS_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register CFG_MEM_RAM_SHUTDOWN	*/ 
/*	 Fields CFG_RAM_SHUTDOWN_EN	 */
#define MPA_CFG_RAM_SHUTDOWN_EN_WIDTH                                        32
#define MPA_CFG_RAM_SHUTDOWN_EN_SHIFT                                         0
#define MPA_CFG_RAM_SHUTDOWN_EN_MASK                                 0xffffffff
#define MPA_CFG_RAM_SHUTDOWN_EN_RD(src)                  (((src) & 0xffffffff))
#define MPA_CFG_RAM_SHUTDOWN_EN_WR(src)             (((u32)(src)) & 0xffffffff)
#define MPA_CFG_RAM_SHUTDOWN_EN_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register BLOCK_MEM_RDY	*/ 
/*	 Fields MEM_RDY	 */
#define MPA_MEM_RDY_WIDTH                                                    32
#define MPA_MEM_RDY_SHIFT                                                     0
#define MPA_MEM_RDY_MASK                                             0xffffffff
#define MPA_MEM_RDY_RD(src)                              (((src) & 0xffffffff))
#define MPA_MEM_RDY_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CFG_AXI_SLV_RD_TMO	*/ 
/*	 Fields SLV_ID_TMO_ENABLE	 */
#define MPA_SLV_ID_TMO_ENABLE_WIDTH                                           1
#define MPA_SLV_ID_TMO_ENABLE_SHIFT                                          31
#define MPA_SLV_ID_TMO_ENABLE_MASK                                   0x80000000
#define MPA_SLV_ID_TMO_ENABLE_RD(src)                (((src) & 0x80000000)>>31)
#define MPA_SLV_ID_TMO_ENABLE_WR(src)           (((u32)(src)<<31) & 0x80000000)
#define MPA_SLV_ID_TMO_ENABLE_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields SS_ID_TRK_ENABLE	 */
#define MPA_SS_ID_TRK_ENABLE_WIDTH                                            1
#define MPA_SS_ID_TRK_ENABLE_SHIFT                                           30
#define MPA_SS_ID_TRK_ENABLE_MASK                                    0x40000000
#define MPA_SS_ID_TRK_ENABLE_RD(src)                 (((src) & 0x40000000)>>30)
#define MPA_SS_ID_TRK_ENABLE_WR(src)            (((u32)(src)<<30) & 0x40000000)
#define MPA_SS_ID_TRK_ENABLE_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields SLV_ID_TMO_VALUE	 */
#define MPA_SLV_ID_TMO_VALUE_WIDTH                                           10
#define MPA_SLV_ID_TMO_VALUE_SHIFT                                           16
#define MPA_SLV_ID_TMO_VALUE_MASK                                    0x03ff0000
#define MPA_SLV_ID_TMO_VALUE_RD(src)                 (((src) & 0x03ff0000)>>16)
#define MPA_SLV_ID_TMO_VALUE_WR(src)            (((u32)(src)<<16) & 0x03ff0000)
#define MPA_SLV_ID_TMO_VALUE_SET(dst,src) \
                      (((dst) & ~0x03ff0000) | (((u32)(src)<<16) & 0x03ff0000))
/*	 Fields SLV_RDY_TMO_ENABLE	 */
#define MPA_SLV_RDY_TMO_ENABLE_WIDTH                                          1
#define MPA_SLV_RDY_TMO_ENABLE_SHIFT                                         15
#define MPA_SLV_RDY_TMO_ENABLE_MASK                                  0x00008000
#define MPA_SLV_RDY_TMO_ENABLE_RD(src)               (((src) & 0x00008000)>>15)
#define MPA_SLV_RDY_TMO_ENABLE_WR(src)          (((u32)(src)<<15) & 0x00008000)
#define MPA_SLV_RDY_TMO_ENABLE_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields SLV_RDY_TMO_VALUE	 */
#define MPA_SLV_RDY_TMO_VALUE_WIDTH                                          10
#define MPA_SLV_RDY_TMO_VALUE_SHIFT                                           0
#define MPA_SLV_RDY_TMO_VALUE_MASK                                   0x000003ff
#define MPA_SLV_RDY_TMO_VALUE_RD(src)                    (((src) & 0x000003ff))
#define MPA_SLV_RDY_TMO_VALUE_WR(src)               (((u32)(src)) & 0x000003ff)
#define MPA_SLV_RDY_TMO_VALUE_SET(dst,src) \
                          (((dst) & ~0x000003ff) | (((u32)(src)) & 0x000003ff))

/*	Register CFG_AXI_SLV_WR_TMO	*/ 
/*	 Fields SLV_ID_TMO_ENABLE	 */
#define MPA_SLV_ID_TMO_ENABLE_F1_WIDTH                                        1
#define MPA_SLV_ID_TMO_ENABLE_F1_SHIFT                                       31
#define MPA_SLV_ID_TMO_ENABLE_F1_MASK                                0x80000000
#define MPA_SLV_ID_TMO_ENABLE_F1_RD(src)             (((src) & 0x80000000)>>31)
#define MPA_SLV_ID_TMO_ENABLE_F1_WR(src)        (((u32)(src)<<31) & 0x80000000)
#define MPA_SLV_ID_TMO_ENABLE_F1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields SS_ID_TRK_ENABLE	 */
#define MPA_SS_ID_TRK_ENABLE_F1_WIDTH                                         1
#define MPA_SS_ID_TRK_ENABLE_F1_SHIFT                                        30
#define MPA_SS_ID_TRK_ENABLE_F1_MASK                                 0x40000000
#define MPA_SS_ID_TRK_ENABLE_F1_RD(src)              (((src) & 0x40000000)>>30)
#define MPA_SS_ID_TRK_ENABLE_F1_WR(src)         (((u32)(src)<<30) & 0x40000000)
#define MPA_SS_ID_TRK_ENABLE_F1_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields SLV_ID_TMO_VALUE	 */
#define MPA_SLV_ID_TMO_VALUE_F1_WIDTH                                        10
#define MPA_SLV_ID_TMO_VALUE_F1_SHIFT                                        16
#define MPA_SLV_ID_TMO_VALUE_F1_MASK                                 0x03ff0000
#define MPA_SLV_ID_TMO_VALUE_F1_RD(src)              (((src) & 0x03ff0000)>>16)
#define MPA_SLV_ID_TMO_VALUE_F1_WR(src)         (((u32)(src)<<16) & 0x03ff0000)
#define MPA_SLV_ID_TMO_VALUE_F1_SET(dst,src) \
                      (((dst) & ~0x03ff0000) | (((u32)(src)<<16) & 0x03ff0000))
/*	 Fields SLV_RDY_TMO_ENABLE	 */
#define MPA_SLV_RDY_TMO_ENABLE_F1_WIDTH                                       1
#define MPA_SLV_RDY_TMO_ENABLE_F1_SHIFT                                      15
#define MPA_SLV_RDY_TMO_ENABLE_F1_MASK                               0x00008000
#define MPA_SLV_RDY_TMO_ENABLE_F1_RD(src)            (((src) & 0x00008000)>>15)
#define MPA_SLV_RDY_TMO_ENABLE_F1_WR(src)       (((u32)(src)<<15) & 0x00008000)
#define MPA_SLV_RDY_TMO_ENABLE_F1_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields SLV_RDY_TMO_VALUE	 */
#define MPA_SLV_RDY_TMO_VALUE_F1_WIDTH                                       10
#define MPA_SLV_RDY_TMO_VALUE_F1_SHIFT                                        0
#define MPA_SLV_RDY_TMO_VALUE_F1_MASK                                0x000003ff
#define MPA_SLV_RDY_TMO_VALUE_F1_RD(src)                 (((src) & 0x000003ff))
#define MPA_SLV_RDY_TMO_VALUE_F1_WR(src)            (((u32)(src)) & 0x000003ff)
#define MPA_SLV_RDY_TMO_VALUE_F1_SET(dst,src) \
                          (((dst) & ~0x000003ff) | (((u32)(src)) & 0x000003ff))

/*	Register STS_AXI_SLV_TMO	*/ 
/*	 Fields SLV_ARID_TMO	 */
#define MPA_SLV_ARID_TMO_WIDTH                                                1
#define MPA_SLV_ARID_TMO_SHIFT                                                3
#define MPA_SLV_ARID_TMO_MASK                                        0x00000008
#define MPA_SLV_ARID_TMO_RD(src)                      (((src) & 0x00000008)>>3)
#define MPA_SLV_ARID_TMO_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields SLV_ARRDY_TMO	 */
#define MPA_SLV_ARRDY_TMO_WIDTH                                               1
#define MPA_SLV_ARRDY_TMO_SHIFT                                               2
#define MPA_SLV_ARRDY_TMO_MASK                                       0x00000004
#define MPA_SLV_ARRDY_TMO_RD(src)                     (((src) & 0x00000004)>>2)
#define MPA_SLV_ARRDY_TMO_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields SLV_AWID_TMO	 */
#define MPA_SLV_AWID_TMO_WIDTH                                                1
#define MPA_SLV_AWID_TMO_SHIFT                                                1
#define MPA_SLV_AWID_TMO_MASK                                        0x00000002
#define MPA_SLV_AWID_TMO_RD(src)                      (((src) & 0x00000002)>>1)
#define MPA_SLV_AWID_TMO_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields SLV_AWRDY_TMO	 */
#define MPA_SLV_AWRDY_TMO_WIDTH                                               1
#define MPA_SLV_AWRDY_TMO_SHIFT                                               0
#define MPA_SLV_AWRDY_TMO_MASK                                       0x00000001
#define MPA_SLV_AWRDY_TMO_RD(src)                        (((src) & 0x00000001))
#define MPA_SLV_AWRDY_TMO_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CFG_AXI_SS_CSR_TMO	*/ 
/*	 Fields CFG_CSR_TMO	 */
#define MPA_CFG_CSR_TMO_WIDTH                                                16
#define MPA_CFG_CSR_TMO_SHIFT                                                16
#define MPA_CFG_CSR_TMO_MASK                                         0xffff0000
#define MPA_CFG_CSR_TMO_RD(src)                      (((src) & 0xffff0000)>>16)
#define MPA_CFG_CSR_TMO_WR(src)                 (((u32)(src)<<16) & 0xffff0000)
#define MPA_CFG_CSR_TMO_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields CSR_ERR_RESP_EN	 */
#define MPA_CSR_ERR_RESP_EN_WIDTH                                             1
#define MPA_CSR_ERR_RESP_EN_SHIFT                                            15
#define MPA_CSR_ERR_RESP_EN_MASK                                     0x00008000
#define MPA_CSR_ERR_RESP_EN_RD(src)                  (((src) & 0x00008000)>>15)
#define MPA_CSR_ERR_RESP_EN_WR(src)             (((u32)(src)<<15) & 0x00008000)
#define MPA_CSR_ERR_RESP_EN_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))

/*	Register STS_READ_LATENCY_TOT_READ_REQS	*/ 
/*	 Fields TOT_READS	 */
#define MPA_TOT_READS_WIDTH                                                  16
#define MPA_TOT_READS_SHIFT                                                   0
#define MPA_TOT_READS_MASK                                           0x0000ffff
#define MPA_TOT_READS_RD(src)                            (((src) & 0x0000ffff))
#define MPA_TOT_READS_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Global Base Address	*/
#define MPA_MPA_IIC_I_BASE_ADDR				0xd00411000ULL

/*    Address MPA_IIC_I  Registers */
#define MPA_I2C_CON_ADDR                                             0x00000000
#define MPA_I2C_CON_DEFAULT                                          0x00000045
#define MPA_I2C_TAR_ADDR                                             0x00000004
#define MPA_I2C_TAR_DEFAULT                                          0x00000056
#define MPA_I2C_SAR_ADDR                                             0x00000008
#define MPA_I2C_SAR_DEFAULT                                          0x00000055
#define MPA_I2C_HS_MADDR_ADDR                                        0x0000000c
#define MPA_I2C_HS_MADDR_DEFAULT                                     0x00000001
#define MPA_I2C_DATA_CMD_ADDR                                        0x00000010
#define MPA_I2C_DATA_CMD_DEFAULT                                     0x00000000
#define MPA_I2C_SS_SCL_HCNT_ADDR                                     0x00000014
#define MPA_I2C_SS_SCL_HCNT_DEFAULT                                  0x00000190
#define MPA_I2C_SS_SCL_LCNT_ADDR                                     0x00000018
#define MPA_I2C_SS_SCL_LCNT_DEFAULT                                  0x000001d6
#define MPA_I2C_FS_SCL_HCNT_ADDR                                     0x0000001c
#define MPA_I2C_FS_SCL_HCNT_DEFAULT                                  0x0000003c
#define MPA_I2C_FS_SCL_LCNT_ADDR                                     0x00000020
#define MPA_I2C_FS_SCL_LCNT_DEFAULT                                  0x00000082
#define MPA_I2C_HS_SCL_HCNT_ADDR                                     0x00000024
#define MPA_I2C_HS_SCL_HCNT_DEFAULT                                  0x00000006
#define MPA_I2C_HS_SCL_LCNT_ADDR                                     0x00000028
#define MPA_I2C_HS_SCL_LCNT_DEFAULT                                  0x00000010
#define MPA_I2C_INTR_STAT_ADDR                                       0x0000002c
#define MPA_I2C_INTR_STAT_DEFAULT                                    0x00000000
#define MPA_I2C_INTR_MASK_ADDR                                       0x00000030
#define MPA_I2C_INTR_MASK_DEFAULT                                    0x00000000
#define MPA_I2C_RAW_INTR_STAT_ADDR                                   0x00000034
#define MPA_I2C_RAW_INTR_STAT_DEFAULT                                0x00000000
#define MPA_I2C_RX_TL_ADDR                                           0x00000038
#define MPA_I2C_RX_TL_DEFAULT                                        0x00000000
#define MPA_I2C_TX_TL_ADDR                                           0x0000003c
#define MPA_I2C_TX_TL_DEFAULT                                        0x00000000
#define MPA_I2C_CLR_INTR_ADDR                                        0x00000040
#define MPA_I2C_CLR_INTR_DEFAULT                                     0x00000000
#define MPA_I2C_CLR_RX_UNDER_ADDR                                    0x00000044
#define MPA_I2C_CLR_RX_UNDER_DEFAULT                                 0x00000000
#define MPA_I2C_CLR_RX_OVER_ADDR                                     0x00000048
#define MPA_I2C_CLR_RX_OVER_DEFAULT                                  0x00000000
#define MPA_I2C_CLR_TX_OVER_ADDR                                     0x0000004c
#define MPA_I2C_CLR_TX_OVER_DEFAULT                                  0x00000000
#define MPA_I2C_CLR_RD_REQ_ADDR                                      0x00000050
#define MPA_I2C_CLR_RD_REQ_DEFAULT                                   0x00000000
#define MPA_I2C_CLR_TX_ABRT_ADDR                                     0x00000054
#define MPA_I2C_CLR_TX_ABRT_DEFAULT                                  0x00000000
#define MPA_I2C_CLR_RX_DONE_ADDR                                     0x00000058
#define MPA_I2C_CLR_RX_DONE_DEFAULT                                  0x00000000
#define MPA_I2C_CLR_ACTIVITY_ADDR                                    0x0000005c
#define MPA_I2C_CLR_ACTIVITY_DEFAULT                                 0x00000000
#define MPA_I2C_CLR_STOP_DET_ADDR                                    0x00000060
#define MPA_I2C_CLR_STOP_DET_DEFAULT                                 0x00000000
#define MPA_I2C_CLR_START_DET_ADDR                                   0x00000064
#define MPA_I2C_CLR_START_DET_DEFAULT                                0x00000000
#define MPA_I2C_CLR_GEN_CALL_ADDR                                    0x00000068
#define MPA_I2C_CLR_GEN_CALL_DEFAULT                                 0x00000000
#define MPA_I2C_ENABLE_ADDR                                          0x0000006c
#define MPA_I2C_ENABLE_DEFAULT                                       0x00000000
#define MPA_I2C_STATUS_ADDR                                          0x00000070
#define MPA_I2C_STATUS_DEFAULT                                       0x00000006
#define MPA_I2C_TXFLR_ADDR                                           0x00000074
#define MPA_I2C_TXFLR_DEFAULT                                        0x00000000
#define MPA_I2C_RXFLR_ADDR                                           0x00000078
#define MPA_I2C_RXFLR_DEFAULT                                        0x00000000
#define MPA_I2C_TX_ABRT_SOURCE_ADDR                                  0x00000080
#define MPA_I2C_TX_ABRT_SOURCE_DEFAULT                               0x00000000
#define MPA_I2C_SLV_DATA_NACK_ONLY_ADDR                              0x00000084
#define MPA_I2C_SLV_DATA_NACK_ONLY_DEFAULT                           0x00000000
#define MPA_I2C_SDA_SETUP_ADDR                                       0x00000094
#define MPA_I2C_SDA_SETUP_DEFAULT                                    0x00000064
#define MPA_I2C_ACK_GENERAL_CALL_ADDR                                0x00000098
#define MPA_I2C_ACK_GENERAL_CALL_DEFAULT                             0x00000001
#define MPA_I2C_ENABLE_STATUS_ADDR                                   0x0000009c
#define MPA_I2C_ENABLE_STATUS_DEFAULT                                0x00000000
#define MPA_I2C_COMP_PARAM_1_ADDR                                    0x000000f4
#define MPA_I2C_COMP_PARAM_1_DEFAULT                                 0x000303aa
#define MPA_I2C_COMP_VERSION_ADDR                                    0x000000f8
#define MPA_I2C_COMP_VERSION_DEFAULT                                 0x00000000
#define MPA_I2C_COMP_TYPE_ADDR                                       0x000000fc
#define MPA_I2C_COMP_TYPE_DEFAULT                                    0x44570140

/*	Register I2C_CON	*/ 
/*	 Fields IC_SALVE_DISABLE	 */
#define MPA_IC_SALVE_DISABLE_WIDTH                                            1
#define MPA_IC_SALVE_DISABLE_SHIFT                                            6
#define MPA_IC_SALVE_DISABLE_MASK                                    0x00000040
#define MPA_IC_SALVE_DISABLE_RD(src)                  (((src) & 0x00000040)>>6)
#define MPA_IC_SALVE_DISABLE_WR(src)             (((u32)(src)<<6) & 0x00000040)
#define MPA_IC_SALVE_DISABLE_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields IC_RESTART_EN	 */
#define MPA_IC_RESTART_EN_WIDTH                                               1
#define MPA_IC_RESTART_EN_SHIFT                                               5
#define MPA_IC_RESTART_EN_MASK                                       0x00000020
#define MPA_IC_RESTART_EN_RD(src)                     (((src) & 0x00000020)>>5)
#define MPA_IC_RESTART_EN_WR(src)                (((u32)(src)<<5) & 0x00000020)
#define MPA_IC_RESTART_EN_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields IC_10BITADDR_MASTER	 */
#define MPA_IC_10BITADDR_MASTER_WIDTH                                         1
#define MPA_IC_10BITADDR_MASTER_SHIFT                                         4
#define MPA_IC_10BITADDR_MASTER_MASK                                 0x00000010
#define MPA_IC_10BITADDR_MASTER_RD(src)               (((src) & 0x00000010)>>4)
#define MPA_IC_10BITADDR_MASTER_WR(src)          (((u32)(src)<<4) & 0x00000010)
#define MPA_IC_10BITADDR_MASTER_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields IC_10BITADDR_SLAVE	 */
#define MPA_IC_10BITADDR_SLAVE_WIDTH                                          1
#define MPA_IC_10BITADDR_SLAVE_SHIFT                                          3
#define MPA_IC_10BITADDR_SLAVE_MASK                                  0x00000008
#define MPA_IC_10BITADDR_SLAVE_RD(src)                (((src) & 0x00000008)>>3)
#define MPA_IC_10BITADDR_SLAVE_WR(src)           (((u32)(src)<<3) & 0x00000008)
#define MPA_IC_10BITADDR_SLAVE_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields IC_MAX_SPEED_MODE	 */
#define MPA_IC_MAX_SPEED_MODE_WIDTH                                           2
#define MPA_IC_MAX_SPEED_MODE_SHIFT                                           1
#define MPA_IC_MAX_SPEED_MODE_MASK                                   0x00000006
#define MPA_IC_MAX_SPEED_MODE_RD(src)                 (((src) & 0x00000006)>>1)
#define MPA_IC_MAX_SPEED_MODE_WR(src)            (((u32)(src)<<1) & 0x00000006)
#define MPA_IC_MAX_SPEED_MODE_SET(dst,src) \
                       (((dst) & ~0x00000006) | (((u32)(src)<<1) & 0x00000006))
/*	 Fields IC_MASTER_MODE	 */
#define MPA_IC_MASTER_MODE_WIDTH                                              1
#define MPA_IC_MASTER_MODE_SHIFT                                              0
#define MPA_IC_MASTER_MODE_MASK                                      0x00000001
#define MPA_IC_MASTER_MODE_RD(src)                       (((src) & 0x00000001))
#define MPA_IC_MASTER_MODE_WR(src)                  (((u32)(src)) & 0x00000001)
#define MPA_IC_MASTER_MODE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_TAR	*/ 
/*	 Fields SPECIAL	 */
#define MPA_SPECIAL_WIDTH                                                     1
#define MPA_SPECIAL_SHIFT                                                    11
#define MPA_SPECIAL_MASK                                             0x00000800
#define MPA_SPECIAL_RD(src)                          (((src) & 0x00000800)>>11)
#define MPA_SPECIAL_WR(src)                     (((u32)(src)<<11) & 0x00000800)
#define MPA_SPECIAL_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GC_OR_START	 */
#define MPA_GC_OR_START_WIDTH                                                 1
#define MPA_GC_OR_START_SHIFT                                                10
#define MPA_GC_OR_START_MASK                                         0x00000400
#define MPA_GC_OR_START_RD(src)                      (((src) & 0x00000400)>>10)
#define MPA_GC_OR_START_WR(src)                 (((u32)(src)<<10) & 0x00000400)
#define MPA_GC_OR_START_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields IC_TAR	 */
#define MPA_IC_TAR_WIDTH                                                     10
#define MPA_IC_TAR_SHIFT                                                      0
#define MPA_IC_TAR_MASK                                              0x000003ff
#define MPA_IC_TAR_RD(src)                               (((src) & 0x000003ff))
#define MPA_IC_TAR_WR(src)                          (((u32)(src)) & 0x000003ff)
#define MPA_IC_TAR_SET(dst,src) \
                          (((dst) & ~0x000003ff) | (((u32)(src)) & 0x000003ff))

/*	Register I2C_SAR	*/ 
/*	 Fields I2C_SAR	 */
#define MPA_I2C_SAR_WIDTH                                                    10
#define MPA_I2C_SAR_SHIFT                                                     0
#define MPA_I2C_SAR_MASK                                             0x000003ff
#define MPA_I2C_SAR_RD(src)                              (((src) & 0x000003ff))
#define MPA_I2C_SAR_WR(src)                         (((u32)(src)) & 0x000003ff)
#define MPA_I2C_SAR_SET(dst,src) \
                          (((dst) & ~0x000003ff) | (((u32)(src)) & 0x000003ff))

/*	Register I2C_HS_MADDR	*/ 
/*	 Fields I2C_HS_MADDR	 */
#define MPA_I2C_HS_MADDR_WIDTH                                                3
#define MPA_I2C_HS_MADDR_SHIFT                                                0
#define MPA_I2C_HS_MADDR_MASK                                        0x00000007
#define MPA_I2C_HS_MADDR_RD(src)                         (((src) & 0x00000007))
#define MPA_I2C_HS_MADDR_WR(src)                    (((u32)(src)) & 0x00000007)
#define MPA_I2C_HS_MADDR_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register I2C_DATA_CMD	*/ 
/*	 Fields CMD	 */
#define MPA_CMD_WIDTH                                                         1
#define MPA_CMD_SHIFT                                                         8
#define MPA_CMD_MASK                                                 0x00000100
#define MPA_CMD_RD(src)                               (((src) & 0x00000100)>>8)
#define MPA_CMD_WR(src)                          (((u32)(src)<<8) & 0x00000100)
#define MPA_CMD_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields DAT	 */
#define MPA_DAT_WIDTH                                                         8
#define MPA_DAT_SHIFT                                                         0
#define MPA_DAT_MASK                                                 0x000000ff
#define MPA_DAT_RD(src)                                  (((src) & 0x000000ff))
#define MPA_DAT_WR(src)                             (((u32)(src)) & 0x000000ff)
#define MPA_DAT_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register I2C_SS_SCL_HCNT	*/ 
/*	 Fields I2C_SS_SCL_HCNT	 */
#define MPA_I2C_SS_SCL_HCNT_WIDTH                                            16
#define MPA_I2C_SS_SCL_HCNT_SHIFT                                             0
#define MPA_I2C_SS_SCL_HCNT_MASK                                     0x0000ffff
#define MPA_I2C_SS_SCL_HCNT_RD(src)                      (((src) & 0x0000ffff))
#define MPA_I2C_SS_SCL_HCNT_WR(src)                 (((u32)(src)) & 0x0000ffff)
#define MPA_I2C_SS_SCL_HCNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register I2C_SS_SCL_LCNT	*/ 
/*	 Fields I2C_SS_SCL_LCNT	 */
#define MPA_I2C_SS_SCL_LCNT_WIDTH                                            16
#define MPA_I2C_SS_SCL_LCNT_SHIFT                                             0
#define MPA_I2C_SS_SCL_LCNT_MASK                                     0x0000ffff
#define MPA_I2C_SS_SCL_LCNT_RD(src)                      (((src) & 0x0000ffff))
#define MPA_I2C_SS_SCL_LCNT_WR(src)                 (((u32)(src)) & 0x0000ffff)
#define MPA_I2C_SS_SCL_LCNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register I2C_FS_SCL_HCNT	*/ 
/*	 Fields I2C_FS_SCL_HCNT	 */
#define MPA_I2C_FS_SCL_HCNT_WIDTH                                            16
#define MPA_I2C_FS_SCL_HCNT_SHIFT                                             0
#define MPA_I2C_FS_SCL_HCNT_MASK                                     0x0000ffff
#define MPA_I2C_FS_SCL_HCNT_RD(src)                      (((src) & 0x0000ffff))
#define MPA_I2C_FS_SCL_HCNT_WR(src)                 (((u32)(src)) & 0x0000ffff)
#define MPA_I2C_FS_SCL_HCNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register I2C_FS_SCL_LCNT	*/ 
/*	 Fields I2C_FS_SCL_LCNT	 */
#define MPA_I2C_FS_SCL_LCNT_WIDTH                                            16
#define MPA_I2C_FS_SCL_LCNT_SHIFT                                             0
#define MPA_I2C_FS_SCL_LCNT_MASK                                     0x0000ffff
#define MPA_I2C_FS_SCL_LCNT_RD(src)                      (((src) & 0x0000ffff))
#define MPA_I2C_FS_SCL_LCNT_WR(src)                 (((u32)(src)) & 0x0000ffff)
#define MPA_I2C_FS_SCL_LCNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register I2C_HS_SCL_HCNT	*/ 
/*	 Fields I2C_HS_SCL_HCNT	 */
#define MPA_I2C_HS_SCL_HCNT_WIDTH                                            16
#define MPA_I2C_HS_SCL_HCNT_SHIFT                                             0
#define MPA_I2C_HS_SCL_HCNT_MASK                                     0x0000ffff
#define MPA_I2C_HS_SCL_HCNT_RD(src)                      (((src) & 0x0000ffff))
#define MPA_I2C_HS_SCL_HCNT_WR(src)                 (((u32)(src)) & 0x0000ffff)
#define MPA_I2C_HS_SCL_HCNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register I2C_HS_SCL_LCNT	*/ 
/*	 Fields I2C_HS_SCL_LCNT	 */
#define MPA_I2C_HS_SCL_LCNT_WIDTH                                            16
#define MPA_I2C_HS_SCL_LCNT_SHIFT                                             0
#define MPA_I2C_HS_SCL_LCNT_MASK                                     0x0000ffff
#define MPA_I2C_HS_SCL_LCNT_RD(src)                      (((src) & 0x0000ffff))
#define MPA_I2C_HS_SCL_LCNT_WR(src)                 (((u32)(src)) & 0x0000ffff)
#define MPA_I2C_HS_SCL_LCNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register I2C_INTR_STAT	*/ 
/*	 Fields R_GEN_CALL	 */
#define MPA_R_GEN_CALL_WIDTH                                                  1
#define MPA_R_GEN_CALL_SHIFT                                                 11
#define MPA_R_GEN_CALL_MASK                                          0x00000800
#define MPA_R_GEN_CALL_RD(src)                       (((src) & 0x00000800)>>11)
#define MPA_R_GEN_CALL_WR(src)                  (((u32)(src)<<11) & 0x00000800)
#define MPA_R_GEN_CALL_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields R_START_DET	 */
#define MPA_R_START_DET_WIDTH                                                 1
#define MPA_R_START_DET_SHIFT                                                10
#define MPA_R_START_DET_MASK                                         0x00000400
#define MPA_R_START_DET_RD(src)                      (((src) & 0x00000400)>>10)
#define MPA_R_START_DET_WR(src)                 (((u32)(src)<<10) & 0x00000400)
#define MPA_R_START_DET_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields R_STOP_DET	 */
#define MPA_R_STOP_DET_WIDTH                                                  1
#define MPA_R_STOP_DET_SHIFT                                                  9
#define MPA_R_STOP_DET_MASK                                          0x00000200
#define MPA_R_STOP_DET_RD(src)                        (((src) & 0x00000200)>>9)
#define MPA_R_STOP_DET_WR(src)                   (((u32)(src)<<9) & 0x00000200)
#define MPA_R_STOP_DET_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields R_ACTIVITY	 */
#define MPA_R_ACTIVITY_WIDTH                                                  1
#define MPA_R_ACTIVITY_SHIFT                                                  8
#define MPA_R_ACTIVITY_MASK                                          0x00000100
#define MPA_R_ACTIVITY_RD(src)                        (((src) & 0x00000100)>>8)
#define MPA_R_ACTIVITY_WR(src)                   (((u32)(src)<<8) & 0x00000100)
#define MPA_R_ACTIVITY_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields R_RX_DONE	 */
#define MPA_R_RX_DONE_WIDTH                                                   1
#define MPA_R_RX_DONE_SHIFT                                                   7
#define MPA_R_RX_DONE_MASK                                           0x00000080
#define MPA_R_RX_DONE_RD(src)                         (((src) & 0x00000080)>>7)
#define MPA_R_RX_DONE_WR(src)                    (((u32)(src)<<7) & 0x00000080)
#define MPA_R_RX_DONE_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields R_TX_ABRT	 */
#define MPA_R_TX_ABRT_WIDTH                                                   1
#define MPA_R_TX_ABRT_SHIFT                                                   6
#define MPA_R_TX_ABRT_MASK                                           0x00000040
#define MPA_R_TX_ABRT_RD(src)                         (((src) & 0x00000040)>>6)
#define MPA_R_TX_ABRT_WR(src)                    (((u32)(src)<<6) & 0x00000040)
#define MPA_R_TX_ABRT_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields R_RD_REQ	 */
#define MPA_R_RD_REQ_WIDTH                                                    1
#define MPA_R_RD_REQ_SHIFT                                                    5
#define MPA_R_RD_REQ_MASK                                            0x00000020
#define MPA_R_RD_REQ_RD(src)                          (((src) & 0x00000020)>>5)
#define MPA_R_RD_REQ_WR(src)                     (((u32)(src)<<5) & 0x00000020)
#define MPA_R_RD_REQ_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields R_TX_EMPTY	 */
#define MPA_R_TX_EMPTY_WIDTH                                                  1
#define MPA_R_TX_EMPTY_SHIFT                                                  4
#define MPA_R_TX_EMPTY_MASK                                          0x00000010
#define MPA_R_TX_EMPTY_RD(src)                        (((src) & 0x00000010)>>4)
#define MPA_R_TX_EMPTY_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define MPA_R_TX_EMPTY_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields R_TX_OVER	 */
#define MPA_R_TX_OVER_WIDTH                                                   1
#define MPA_R_TX_OVER_SHIFT                                                   3
#define MPA_R_TX_OVER_MASK                                           0x00000008
#define MPA_R_TX_OVER_RD(src)                         (((src) & 0x00000008)>>3)
#define MPA_R_TX_OVER_WR(src)                    (((u32)(src)<<3) & 0x00000008)
#define MPA_R_TX_OVER_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields R_RX_FULL	 */
#define MPA_R_RX_FULL_WIDTH                                                   1
#define MPA_R_RX_FULL_SHIFT                                                   2
#define MPA_R_RX_FULL_MASK                                           0x00000004
#define MPA_R_RX_FULL_RD(src)                         (((src) & 0x00000004)>>2)
#define MPA_R_RX_FULL_WR(src)                    (((u32)(src)<<2) & 0x00000004)
#define MPA_R_RX_FULL_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields R_RX_OVER	 */
#define MPA_R_RX_OVER_WIDTH                                                   1
#define MPA_R_RX_OVER_SHIFT                                                   1
#define MPA_R_RX_OVER_MASK                                           0x00000002
#define MPA_R_RX_OVER_RD(src)                         (((src) & 0x00000002)>>1)
#define MPA_R_RX_OVER_WR(src)                    (((u32)(src)<<1) & 0x00000002)
#define MPA_R_RX_OVER_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields R_RX_UNDER	 */
#define MPA_R_RX_UNDER_WIDTH                                                  1
#define MPA_R_RX_UNDER_SHIFT                                                  0
#define MPA_R_RX_UNDER_MASK                                          0x00000001
#define MPA_R_RX_UNDER_RD(src)                           (((src) & 0x00000001))
#define MPA_R_RX_UNDER_WR(src)                      (((u32)(src)) & 0x00000001)
#define MPA_R_RX_UNDER_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_INTR_MASK	*/ 
/*	 Fields M_GEN_CALL	 */
#define MPA_M_GEN_CALL_WIDTH                                                  1
#define MPA_M_GEN_CALL_SHIFT                                                 11
#define MPA_M_GEN_CALL_MASK                                          0x00000800
#define MPA_M_GEN_CALL_RD(src)                       (((src) & 0x00000800)>>11)
#define MPA_M_GEN_CALL_WR(src)                  (((u32)(src)<<11) & 0x00000800)
#define MPA_M_GEN_CALL_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields M_START_DET	 */
#define MPA_M_START_DET_WIDTH                                                 1
#define MPA_M_START_DET_SHIFT                                                10
#define MPA_M_START_DET_MASK                                         0x00000400
#define MPA_M_START_DET_RD(src)                      (((src) & 0x00000400)>>10)
#define MPA_M_START_DET_WR(src)                 (((u32)(src)<<10) & 0x00000400)
#define MPA_M_START_DET_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields M_STOP_DET	 */
#define MPA_M_STOP_DET_WIDTH                                                  1
#define MPA_M_STOP_DET_SHIFT                                                  9
#define MPA_M_STOP_DET_MASK                                          0x00000200
#define MPA_M_STOP_DET_RD(src)                        (((src) & 0x00000200)>>9)
#define MPA_M_STOP_DET_WR(src)                   (((u32)(src)<<9) & 0x00000200)
#define MPA_M_STOP_DET_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields M_ACTIVITY	 */
#define MPA_M_ACTIVITY_WIDTH                                                  1
#define MPA_M_ACTIVITY_SHIFT                                                  8
#define MPA_M_ACTIVITY_MASK                                          0x00000100
#define MPA_M_ACTIVITY_RD(src)                        (((src) & 0x00000100)>>8)
#define MPA_M_ACTIVITY_WR(src)                   (((u32)(src)<<8) & 0x00000100)
#define MPA_M_ACTIVITY_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields M_RX_DONE	 */
#define MPA_M_RX_DONE_WIDTH                                                   1
#define MPA_M_RX_DONE_SHIFT                                                   7
#define MPA_M_RX_DONE_MASK                                           0x00000080
#define MPA_M_RX_DONE_RD(src)                         (((src) & 0x00000080)>>7)
#define MPA_M_RX_DONE_WR(src)                    (((u32)(src)<<7) & 0x00000080)
#define MPA_M_RX_DONE_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields M_TX_ABRT	 */
#define MPA_M_TX_ABRT_WIDTH                                                   1
#define MPA_M_TX_ABRT_SHIFT                                                   6
#define MPA_M_TX_ABRT_MASK                                           0x00000040
#define MPA_M_TX_ABRT_RD(src)                         (((src) & 0x00000040)>>6)
#define MPA_M_TX_ABRT_WR(src)                    (((u32)(src)<<6) & 0x00000040)
#define MPA_M_TX_ABRT_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields M_RD_REQ	 */
#define MPA_M_RD_REQ_WIDTH                                                    1
#define MPA_M_RD_REQ_SHIFT                                                    5
#define MPA_M_RD_REQ_MASK                                            0x00000020
#define MPA_M_RD_REQ_RD(src)                          (((src) & 0x00000020)>>5)
#define MPA_M_RD_REQ_WR(src)                     (((u32)(src)<<5) & 0x00000020)
#define MPA_M_RD_REQ_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields M_TX_EMPTY	 */
#define MPA_M_TX_EMPTY_WIDTH                                                  1
#define MPA_M_TX_EMPTY_SHIFT                                                  4
#define MPA_M_TX_EMPTY_MASK                                          0x00000010
#define MPA_M_TX_EMPTY_RD(src)                        (((src) & 0x00000010)>>4)
#define MPA_M_TX_EMPTY_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define MPA_M_TX_EMPTY_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields M_TX_OVER	 */
#define MPA_M_TX_OVER_WIDTH                                                   1
#define MPA_M_TX_OVER_SHIFT                                                   3
#define MPA_M_TX_OVER_MASK                                           0x00000008
#define MPA_M_TX_OVER_RD(src)                         (((src) & 0x00000008)>>3)
#define MPA_M_TX_OVER_WR(src)                    (((u32)(src)<<3) & 0x00000008)
#define MPA_M_TX_OVER_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields M_RX_FULL	 */
#define MPA_M_RX_FULL_WIDTH                                                   1
#define MPA_M_RX_FULL_SHIFT                                                   2
#define MPA_M_RX_FULL_MASK                                           0x00000004
#define MPA_M_RX_FULL_RD(src)                         (((src) & 0x00000004)>>2)
#define MPA_M_RX_FULL_WR(src)                    (((u32)(src)<<2) & 0x00000004)
#define MPA_M_RX_FULL_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields M_RX_OVER	 */
#define MPA_M_RX_OVER_WIDTH                                                   1
#define MPA_M_RX_OVER_SHIFT                                                   1
#define MPA_M_RX_OVER_MASK                                           0x00000002
#define MPA_M_RX_OVER_RD(src)                         (((src) & 0x00000002)>>1)
#define MPA_M_RX_OVER_WR(src)                    (((u32)(src)<<1) & 0x00000002)
#define MPA_M_RX_OVER_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields M_RX_UNDER	 */
#define MPA_M_RX_UNDER_WIDTH                                                  1
#define MPA_M_RX_UNDER_SHIFT                                                  0
#define MPA_M_RX_UNDER_MASK                                          0x00000001
#define MPA_M_RX_UNDER_RD(src)                           (((src) & 0x00000001))
#define MPA_M_RX_UNDER_WR(src)                      (((u32)(src)) & 0x00000001)
#define MPA_M_RX_UNDER_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_RAW_INTR_STAT	*/ 
/*	 Fields GEN_CALL	 */
#define MPA_GEN_CALL_WIDTH                                                    1
#define MPA_GEN_CALL_SHIFT                                                   11
#define MPA_GEN_CALL_MASK                                            0x00000800
#define MPA_GEN_CALL_RD(src)                         (((src) & 0x00000800)>>11)
#define MPA_GEN_CALL_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields START_DET	 */
#define MPA_START_DET_WIDTH                                                   1
#define MPA_START_DET_SHIFT                                                  10
#define MPA_START_DET_MASK                                           0x00000400
#define MPA_START_DET_RD(src)                        (((src) & 0x00000400)>>10)
#define MPA_START_DET_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields STOP_DET	 */
#define MPA_STOP_DET_WIDTH                                                    1
#define MPA_STOP_DET_SHIFT                                                    9
#define MPA_STOP_DET_MASK                                            0x00000200
#define MPA_STOP_DET_RD(src)                          (((src) & 0x00000200)>>9)
#define MPA_STOP_DET_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields ACTIVITY	 */
#define MPA_ACTIVITY_WIDTH                                                    1
#define MPA_ACTIVITY_SHIFT                                                    8
#define MPA_ACTIVITY_MASK                                            0x00000100
#define MPA_ACTIVITY_RD(src)                          (((src) & 0x00000100)>>8)
#define MPA_ACTIVITY_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields RX_DONE	 */
#define MPA_RX_DONE_WIDTH                                                     1
#define MPA_RX_DONE_SHIFT                                                     7
#define MPA_RX_DONE_MASK                                             0x00000080
#define MPA_RX_DONE_RD(src)                           (((src) & 0x00000080)>>7)
#define MPA_RX_DONE_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields TX_ABRT	 */
#define MPA_TX_ABRT_WIDTH                                                     1
#define MPA_TX_ABRT_SHIFT                                                     6
#define MPA_TX_ABRT_MASK                                             0x00000040
#define MPA_TX_ABRT_RD(src)                           (((src) & 0x00000040)>>6)
#define MPA_TX_ABRT_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields RD_REQ	 */
#define MPA_RD_REQ_WIDTH                                                      1
#define MPA_RD_REQ_SHIFT                                                      5
#define MPA_RD_REQ_MASK                                              0x00000020
#define MPA_RD_REQ_RD(src)                            (((src) & 0x00000020)>>5)
#define MPA_RD_REQ_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields TX_EMPTY	 */
#define MPA_TX_EMPTY_WIDTH                                                    1
#define MPA_TX_EMPTY_SHIFT                                                    4
#define MPA_TX_EMPTY_MASK                                            0x00000010
#define MPA_TX_EMPTY_RD(src)                          (((src) & 0x00000010)>>4)
#define MPA_TX_EMPTY_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields TX_OVER	 */
#define MPA_TX_OVER_WIDTH                                                     1
#define MPA_TX_OVER_SHIFT                                                     3
#define MPA_TX_OVER_MASK                                             0x00000008
#define MPA_TX_OVER_RD(src)                           (((src) & 0x00000008)>>3)
#define MPA_TX_OVER_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields RX_FULL	 */
#define MPA_RX_FULL_WIDTH                                                     1
#define MPA_RX_FULL_SHIFT                                                     2
#define MPA_RX_FULL_MASK                                             0x00000004
#define MPA_RX_FULL_RD(src)                           (((src) & 0x00000004)>>2)
#define MPA_RX_FULL_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields RX_OVER	 */
#define MPA_RX_OVER_WIDTH                                                     1
#define MPA_RX_OVER_SHIFT                                                     1
#define MPA_RX_OVER_MASK                                             0x00000002
#define MPA_RX_OVER_RD(src)                           (((src) & 0x00000002)>>1)
#define MPA_RX_OVER_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields RX_UNDER	 */
#define MPA_RX_UNDER_WIDTH                                                    1
#define MPA_RX_UNDER_SHIFT                                                    0
#define MPA_RX_UNDER_MASK                                            0x00000001
#define MPA_RX_UNDER_RD(src)                             (((src) & 0x00000001))
#define MPA_RX_UNDER_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_RX_TL	*/ 
/*	 Fields I2C_RX_TL	 */
#define MPA_I2C_RX_TL_WIDTH                                                   8
#define MPA_I2C_RX_TL_SHIFT                                                   0
#define MPA_I2C_RX_TL_MASK                                           0x000000ff
#define MPA_I2C_RX_TL_RD(src)                            (((src) & 0x000000ff))
#define MPA_I2C_RX_TL_WR(src)                       (((u32)(src)) & 0x000000ff)
#define MPA_I2C_RX_TL_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register I2C_TX_TL	*/ 
/*	 Fields I2C_TX_TL	 */
#define MPA_I2C_TX_TL_WIDTH                                                   8
#define MPA_I2C_TX_TL_SHIFT                                                   0
#define MPA_I2C_TX_TL_MASK                                           0x000000ff
#define MPA_I2C_TX_TL_RD(src)                            (((src) & 0x000000ff))
#define MPA_I2C_TX_TL_WR(src)                       (((u32)(src)) & 0x000000ff)
#define MPA_I2C_TX_TL_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register I2C_CLR_INTR	*/ 
/*	 Fields CLR_INTR	 */
#define MPA_CLR_INTR_WIDTH                                                    1
#define MPA_CLR_INTR_SHIFT                                                    0
#define MPA_CLR_INTR_MASK                                            0x00000001
#define MPA_CLR_INTR_RD(src)                             (((src) & 0x00000001))
#define MPA_CLR_INTR_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_RX_UNDER	*/ 
/*	 Fields CLR_RX_UNDER	 */
#define MPA_CLR_RX_UNDER_WIDTH                                                1
#define MPA_CLR_RX_UNDER_SHIFT                                                0
#define MPA_CLR_RX_UNDER_MASK                                        0x00000001
#define MPA_CLR_RX_UNDER_RD(src)                         (((src) & 0x00000001))
#define MPA_CLR_RX_UNDER_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_RX_OVER	*/ 
/*	 Fields CLR_RX_OVER	 */
#define MPA_CLR_RX_OVER_WIDTH                                                 1
#define MPA_CLR_RX_OVER_SHIFT                                                 0
#define MPA_CLR_RX_OVER_MASK                                         0x00000001
#define MPA_CLR_RX_OVER_RD(src)                          (((src) & 0x00000001))
#define MPA_CLR_RX_OVER_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_TX_OVER	*/ 
/*	 Fields CLR_TX_OVER	 */
#define MPA_CLR_TX_OVER_WIDTH                                                 1
#define MPA_CLR_TX_OVER_SHIFT                                                 0
#define MPA_CLR_TX_OVER_MASK                                         0x00000001
#define MPA_CLR_TX_OVER_RD(src)                          (((src) & 0x00000001))
#define MPA_CLR_TX_OVER_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_RD_REQ	*/ 
/*	 Fields CLR_RD_REQ	 */
#define MPA_CLR_RD_REQ_WIDTH                                                  1
#define MPA_CLR_RD_REQ_SHIFT                                                  0
#define MPA_CLR_RD_REQ_MASK                                          0x00000001
#define MPA_CLR_RD_REQ_RD(src)                           (((src) & 0x00000001))
#define MPA_CLR_RD_REQ_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_TX_ABRT	*/ 
/*	 Fields CLR_TX_ABRT	 */
#define MPA_CLR_TX_ABRT_WIDTH                                                 1
#define MPA_CLR_TX_ABRT_SHIFT                                                 0
#define MPA_CLR_TX_ABRT_MASK                                         0x00000001
#define MPA_CLR_TX_ABRT_RD(src)                          (((src) & 0x00000001))
#define MPA_CLR_TX_ABRT_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_RX_DONE	*/ 
/*	 Fields CLR_RX_DONE	 */
#define MPA_CLR_RX_DONE_WIDTH                                                 1
#define MPA_CLR_RX_DONE_SHIFT                                                 0
#define MPA_CLR_RX_DONE_MASK                                         0x00000001
#define MPA_CLR_RX_DONE_RD(src)                          (((src) & 0x00000001))
#define MPA_CLR_RX_DONE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_ACTIVITY	*/ 
/*	 Fields CLR_ACTIVITY	 */
#define MPA_CLR_ACTIVITY_WIDTH                                                1
#define MPA_CLR_ACTIVITY_SHIFT                                                0
#define MPA_CLR_ACTIVITY_MASK                                        0x00000001
#define MPA_CLR_ACTIVITY_RD(src)                         (((src) & 0x00000001))
#define MPA_CLR_ACTIVITY_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_STOP_DET	*/ 
/*	 Fields CLR_STOP_DET	 */
#define MPA_CLR_STOP_DET_WIDTH                                                1
#define MPA_CLR_STOP_DET_SHIFT                                                0
#define MPA_CLR_STOP_DET_MASK                                        0x00000001
#define MPA_CLR_STOP_DET_RD(src)                         (((src) & 0x00000001))
#define MPA_CLR_STOP_DET_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_START_DET	*/ 
/*	 Fields CLR_START_DET	 */
#define MPA_CLR_START_DET_WIDTH                                               1
#define MPA_CLR_START_DET_SHIFT                                               0
#define MPA_CLR_START_DET_MASK                                       0x00000001
#define MPA_CLR_START_DET_RD(src)                        (((src) & 0x00000001))
#define MPA_CLR_START_DET_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_CLR_GEN_CALL	*/ 
/*	 Fields CLR_GEN_CALL	 */
#define MPA_CLR_GEN_CALL_WIDTH                                                1
#define MPA_CLR_GEN_CALL_SHIFT                                                0
#define MPA_CLR_GEN_CALL_MASK                                        0x00000001
#define MPA_CLR_GEN_CALL_RD(src)                         (((src) & 0x00000001))
#define MPA_CLR_GEN_CALL_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_ENABLE	*/ 
/*	 Fields ENABLE	 */
#define MPA_ENABLE_WIDTH                                                      1
#define MPA_ENABLE_SHIFT                                                      0
#define MPA_ENABLE_MASK                                              0x00000001
#define MPA_ENABLE_RD(src)                               (((src) & 0x00000001))
#define MPA_ENABLE_WR(src)                          (((u32)(src)) & 0x00000001)
#define MPA_ENABLE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_STATUS	*/ 
/*	 Fields SLV_ACTIVITY	 */
#define MPA_SLV_ACTIVITY_WIDTH                                                1
#define MPA_SLV_ACTIVITY_SHIFT                                                6
#define MPA_SLV_ACTIVITY_MASK                                        0x00000040
#define MPA_SLV_ACTIVITY_RD(src)                      (((src) & 0x00000040)>>6)
#define MPA_SLV_ACTIVITY_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields MST_ACTIVITY	 */
#define MPA_MST_ACTIVITY_WIDTH                                                1
#define MPA_MST_ACTIVITY_SHIFT                                                5
#define MPA_MST_ACTIVITY_MASK                                        0x00000020
#define MPA_MST_ACTIVITY_RD(src)                      (((src) & 0x00000020)>>5)
#define MPA_MST_ACTIVITY_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields RFF	 */
#define MPA_RFF_WIDTH                                                         1
#define MPA_RFF_SHIFT                                                         4
#define MPA_RFF_MASK                                                 0x00000010
#define MPA_RFF_RD(src)                               (((src) & 0x00000010)>>4)
#define MPA_RFF_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields RFNE	 */
#define MPA_RFNE_WIDTH                                                        1
#define MPA_RFNE_SHIFT                                                        3
#define MPA_RFNE_MASK                                                0x00000008
#define MPA_RFNE_RD(src)                              (((src) & 0x00000008)>>3)
#define MPA_RFNE_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields TFE	 */
#define MPA_TFE_WIDTH                                                         1
#define MPA_TFE_SHIFT                                                         2
#define MPA_TFE_MASK                                                 0x00000004
#define MPA_TFE_RD(src)                               (((src) & 0x00000004)>>2)
#define MPA_TFE_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields TFNF	 */
#define MPA_TFNF_WIDTH                                                        1
#define MPA_TFNF_SHIFT                                                        1
#define MPA_TFNF_MASK                                                0x00000002
#define MPA_TFNF_RD(src)                              (((src) & 0x00000002)>>1)
#define MPA_TFNF_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields ACTIVITY	 */
#define MPA_ACTIVITY_F1_WIDTH                                                 1
#define MPA_ACTIVITY_F1_SHIFT                                                 0
#define MPA_ACTIVITY_F1_MASK                                         0x00000001
#define MPA_ACTIVITY_F1_RD(src)                          (((src) & 0x00000001))
#define MPA_ACTIVITY_F1_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_TXFLR	*/ 
/*	 Fields TXFLR	 */
#define MPA_TXFLR_WIDTH                                                       3
#define MPA_TXFLR_SHIFT                                                       0
#define MPA_TXFLR_MASK                                               0x00000007
#define MPA_TXFLR_RD(src)                                (((src) & 0x00000007))
#define MPA_TXFLR_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register I2C_RXFLR	*/ 
/*	 Fields RXFLR	 */
#define MPA_RXFLR_WIDTH                                                       3
#define MPA_RXFLR_SHIFT                                                       0
#define MPA_RXFLR_MASK                                               0x00000007
#define MPA_RXFLR_RD(src)                                (((src) & 0x00000007))
#define MPA_RXFLR_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register I2C_TX_ABRT_SOURCE	*/ 
/*	 Fields ABRT_SLVRD_INTX	 */
#define MPA_ABRT_SLVRD_INTX_WIDTH                                             1
#define MPA_ABRT_SLVRD_INTX_SHIFT                                            15
#define MPA_ABRT_SLVRD_INTX_MASK                                     0x00008000
#define MPA_ABRT_SLVRD_INTX_RD(src)                  (((src) & 0x00008000)>>15)
#define MPA_ABRT_SLVRD_INTX_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields ABRT_SLV_ARBLOST	 */
#define MPA_ABRT_SLV_ARBLOST_WIDTH                                            1
#define MPA_ABRT_SLV_ARBLOST_SHIFT                                           14
#define MPA_ABRT_SLV_ARBLOST_MASK                                    0x00004000
#define MPA_ABRT_SLV_ARBLOST_RD(src)                 (((src) & 0x00004000)>>14)
#define MPA_ABRT_SLV_ARBLOST_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))
/*	 Fields ABRT_SLVFLUSH_TXFIFO	 */
#define MPA_ABRT_SLVFLUSH_TXFIFO_WIDTH                                        1
#define MPA_ABRT_SLVFLUSH_TXFIFO_SHIFT                                       13
#define MPA_ABRT_SLVFLUSH_TXFIFO_MASK                                0x00002000
#define MPA_ABRT_SLVFLUSH_TXFIFO_RD(src)             (((src) & 0x00002000)>>13)
#define MPA_ABRT_SLVFLUSH_TXFIFO_SET(dst,src) \
                      (((dst) & ~0x00002000) | (((u32)(src)<<13) & 0x00002000))
/*	 Fields ARB_LOST	 */
#define MPA_ARB_LOST_WIDTH                                                    1
#define MPA_ARB_LOST_SHIFT                                                   12
#define MPA_ARB_LOST_MASK                                            0x00001000
#define MPA_ARB_LOST_RD(src)                         (((src) & 0x00001000)>>12)
#define MPA_ARB_LOST_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields ABRT_MASTER_DIS	 */
#define MPA_ABRT_MASTER_DIS_WIDTH                                             1
#define MPA_ABRT_MASTER_DIS_SHIFT                                            11
#define MPA_ABRT_MASTER_DIS_MASK                                     0x00000800
#define MPA_ABRT_MASTER_DIS_RD(src)                  (((src) & 0x00000800)>>11)
#define MPA_ABRT_MASTER_DIS_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields ABRT_10B_RD_NORSTRT	 */
#define MPA_ABRT_10B_RD_NORSTRT_WIDTH                                         1
#define MPA_ABRT_10B_RD_NORSTRT_SHIFT                                        10
#define MPA_ABRT_10B_RD_NORSTRT_MASK                                 0x00000400
#define MPA_ABRT_10B_RD_NORSTRT_RD(src)              (((src) & 0x00000400)>>10)
#define MPA_ABRT_10B_RD_NORSTRT_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields ABRT_SBYTE_NORSTRT	 */
#define MPA_ABRT_SBYTE_NORSTRT_WIDTH                                          1
#define MPA_ABRT_SBYTE_NORSTRT_SHIFT                                          9
#define MPA_ABRT_SBYTE_NORSTRT_MASK                                  0x00000200
#define MPA_ABRT_SBYTE_NORSTRT_RD(src)                (((src) & 0x00000200)>>9)
#define MPA_ABRT_SBYTE_NORSTRT_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields ABRT_HS_NORSTRT	 */
#define MPA_ABRT_HS_NORSTRT_WIDTH                                             1
#define MPA_ABRT_HS_NORSTRT_SHIFT                                             8
#define MPA_ABRT_HS_NORSTRT_MASK                                     0x00000100
#define MPA_ABRT_HS_NORSTRT_RD(src)                   (((src) & 0x00000100)>>8)
#define MPA_ABRT_HS_NORSTRT_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields ABRT_SBYTE_ACKDET	 */
#define MPA_ABRT_SBYTE_ACKDET_WIDTH                                           1
#define MPA_ABRT_SBYTE_ACKDET_SHIFT                                           7
#define MPA_ABRT_SBYTE_ACKDET_MASK                                   0x00000080
#define MPA_ABRT_SBYTE_ACKDET_RD(src)                 (((src) & 0x00000080)>>7)
#define MPA_ABRT_SBYTE_ACKDET_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields ABRT_HS_ACKDET	 */
#define MPA_ABRT_HS_ACKDET_WIDTH                                              1
#define MPA_ABRT_HS_ACKDET_SHIFT                                              6
#define MPA_ABRT_HS_ACKDET_MASK                                      0x00000040
#define MPA_ABRT_HS_ACKDET_RD(src)                    (((src) & 0x00000040)>>6)
#define MPA_ABRT_HS_ACKDET_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields ABRT_GCALL_READ	 */
#define MPA_ABRT_GCALL_READ_WIDTH                                             1
#define MPA_ABRT_GCALL_READ_SHIFT                                             5
#define MPA_ABRT_GCALL_READ_MASK                                     0x00000020
#define MPA_ABRT_GCALL_READ_RD(src)                   (((src) & 0x00000020)>>5)
#define MPA_ABRT_GCALL_READ_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields ABRT_GCALL_NOACK	 */
#define MPA_ABRT_GCALL_NOACK_WIDTH                                            1
#define MPA_ABRT_GCALL_NOACK_SHIFT                                            4
#define MPA_ABRT_GCALL_NOACK_MASK                                    0x00000010
#define MPA_ABRT_GCALL_NOACK_RD(src)                  (((src) & 0x00000010)>>4)
#define MPA_ABRT_GCALL_NOACK_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields ABRT_TXDATA_NOACK	 */
#define MPA_ABRT_TXDATA_NOACK_WIDTH                                           1
#define MPA_ABRT_TXDATA_NOACK_SHIFT                                           3
#define MPA_ABRT_TXDATA_NOACK_MASK                                   0x00000008
#define MPA_ABRT_TXDATA_NOACK_RD(src)                 (((src) & 0x00000008)>>3)
#define MPA_ABRT_TXDATA_NOACK_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields ABRT_10ADDR2_NOACK	 */
#define MPA_ABRT_10ADDR2_NOACK_WIDTH                                          1
#define MPA_ABRT_10ADDR2_NOACK_SHIFT                                          2
#define MPA_ABRT_10ADDR2_NOACK_MASK                                  0x00000004
#define MPA_ABRT_10ADDR2_NOACK_RD(src)                (((src) & 0x00000004)>>2)
#define MPA_ABRT_10ADDR2_NOACK_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields ABRT_10ADDR1_NOACK	 */
#define MPA_ABRT_10ADDR1_NOACK_WIDTH                                          1
#define MPA_ABRT_10ADDR1_NOACK_SHIFT                                          1
#define MPA_ABRT_10ADDR1_NOACK_MASK                                  0x00000002
#define MPA_ABRT_10ADDR1_NOACK_RD(src)                (((src) & 0x00000002)>>1)
#define MPA_ABRT_10ADDR1_NOACK_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields ABRT_7B_ADDR_NOACK	 */
#define MPA_ABRT_7B_ADDR_NOACK_WIDTH                                          1
#define MPA_ABRT_7B_ADDR_NOACK_SHIFT                                          0
#define MPA_ABRT_7B_ADDR_NOACK_MASK                                  0x00000001
#define MPA_ABRT_7B_ADDR_NOACK_RD(src)                   (((src) & 0x00000001))
#define MPA_ABRT_7B_ADDR_NOACK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_SLV_DATA_NACK_ONLY	*/ 
/*	 Fields NACK	 */
#define MPA_NACK_WIDTH                                                        1
#define MPA_NACK_SHIFT                                                        0
#define MPA_NACK_MASK                                                0x00000001
#define MPA_NACK_RD(src)                                 (((src) & 0x00000001))
#define MPA_NACK_WR(src)                            (((u32)(src)) & 0x00000001)
#define MPA_NACK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_SDA_SETUP	*/ 
/*	 Fields SDA_SETUP	 */
#define MPA_SDA_SETUP_WIDTH                                                   8
#define MPA_SDA_SETUP_SHIFT                                                   0
#define MPA_SDA_SETUP_MASK                                           0x000000ff
#define MPA_SDA_SETUP_RD(src)                            (((src) & 0x000000ff))
#define MPA_SDA_SETUP_WR(src)                       (((u32)(src)) & 0x000000ff)
#define MPA_SDA_SETUP_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register I2C_ACK_GENERAL_CALL	*/ 
/*	 Fields ACK_GEN_CALL	 */
#define MPA_ACK_GEN_CALL_WIDTH                                                1
#define MPA_ACK_GEN_CALL_SHIFT                                                0
#define MPA_ACK_GEN_CALL_MASK                                        0x00000001
#define MPA_ACK_GEN_CALL_RD(src)                         (((src) & 0x00000001))
#define MPA_ACK_GEN_CALL_WR(src)                    (((u32)(src)) & 0x00000001)
#define MPA_ACK_GEN_CALL_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_ENABLE_STATUS	*/ 
/*	 Fields SLV_FIFO_FILLED_AND_FLUSHED	 */
#define MPA_SLV_FIFO_FILLED_AND_FLUSHED_WIDTH                                 1
#define MPA_SLV_FIFO_FILLED_AND_FLUSHED_SHIFT                                 2
#define MPA_SLV_FIFO_FILLED_AND_FLUSHED_MASK                         0x00000004
#define MPA_SLV_FIFO_FILLED_AND_FLUSHED_RD(src)       (((src) & 0x00000004)>>2)
#define MPA_SLV_FIFO_FILLED_AND_FLUSHED_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields SLV_RX_ABORTED	 */
#define MPA_SLV_RX_ABORTED_WIDTH                                              1
#define MPA_SLV_RX_ABORTED_SHIFT                                              1
#define MPA_SLV_RX_ABORTED_MASK                                      0x00000002
#define MPA_SLV_RX_ABORTED_RD(src)                    (((src) & 0x00000002)>>1)
#define MPA_SLV_RX_ABORTED_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields IC_EN	 */
#define MPA_IC_EN_WIDTH                                                       1
#define MPA_IC_EN_SHIFT                                                       0
#define MPA_IC_EN_MASK                                               0x00000001
#define MPA_IC_EN_RD(src)                                (((src) & 0x00000001))
#define MPA_IC_EN_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_COMP_PARAM_1	*/ 
/*	 Fields TX_BUFFER_DEPTH	 */
#define MPA_TX_BUFFER_DEPTH1_WIDTH                                            8
#define MPA_TX_BUFFER_DEPTH1_SHIFT                                           16
#define MPA_TX_BUFFER_DEPTH1_MASK                                    0x00ff0000
#define MPA_TX_BUFFER_DEPTH1_RD(src)                 (((src) & 0x00ff0000)>>16)
#define MPA_TX_BUFFER_DEPTH1_SET(dst,src) \
                      (((dst) & ~0x00ff0000) | (((u32)(src)<<16) & 0x00ff0000))
/*	 Fields RX_BUFFER_DEPTH	 */
#define MPA_RX_BUFFER_DEPTH1_WIDTH                                            8
#define MPA_RX_BUFFER_DEPTH1_SHIFT                                            8
#define MPA_RX_BUFFER_DEPTH1_MASK                                    0x0000ff00
#define MPA_RX_BUFFER_DEPTH1_RD(src)                  (((src) & 0x0000ff00)>>8)
#define MPA_RX_BUFFER_DEPTH1_SET(dst,src) \
                       (((dst) & ~0x0000ff00) | (((u32)(src)<<8) & 0x0000ff00))
/*	 Fields ADD_ENCODED_PARAMS	 */
#define MPA_ADD_ENCODED_PARAMS1_WIDTH                                         1
#define MPA_ADD_ENCODED_PARAMS1_SHIFT                                         7
#define MPA_ADD_ENCODED_PARAMS1_MASK                                 0x00000080
#define MPA_ADD_ENCODED_PARAMS1_RD(src)               (((src) & 0x00000080)>>7)
#define MPA_ADD_ENCODED_PARAMS1_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields HAS_DMA	 */
#define MPA_HAS_DMA1_WIDTH                                                    1
#define MPA_HAS_DMA1_SHIFT                                                    6
#define MPA_HAS_DMA1_MASK                                            0x00000040
#define MPA_HAS_DMA1_RD(src)                          (((src) & 0x00000040)>>6)
#define MPA_HAS_DMA1_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields INTR_IO	 */
#define MPA_INTR_IO1_WIDTH                                                    1
#define MPA_INTR_IO1_SHIFT                                                    5
#define MPA_INTR_IO1_MASK                                            0x00000020
#define MPA_INTR_IO1_RD(src)                          (((src) & 0x00000020)>>5)
#define MPA_INTR_IO1_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields HC_COUNT_VALUES	 */
#define MPA_HC_COUNT_VALUES1_WIDTH                                            1
#define MPA_HC_COUNT_VALUES1_SHIFT                                            4
#define MPA_HC_COUNT_VALUES1_MASK                                    0x00000010
#define MPA_HC_COUNT_VALUES1_RD(src)                  (((src) & 0x00000010)>>4)
#define MPA_HC_COUNT_VALUES1_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields MAX_SPEED_MODE	 */
#define MPA_MAX_SPEED_MODE1_WIDTH                                             2
#define MPA_MAX_SPEED_MODE1_SHIFT                                             2
#define MPA_MAX_SPEED_MODE1_MASK                                     0x0000000c
#define MPA_MAX_SPEED_MODE1_RD(src)                   (((src) & 0x0000000c)>>2)
#define MPA_MAX_SPEED_MODE1_SET(dst,src) \
                       (((dst) & ~0x0000000c) | (((u32)(src)<<2) & 0x0000000c))
/*	 Fields APB_DATA_WIDTH	 */
#define MPA_APB_DATA_WIDTH1_WIDTH                                             2
#define MPA_APB_DATA_WIDTH1_SHIFT                                             0
#define MPA_APB_DATA_WIDTH1_MASK                                     0x00000003
#define MPA_APB_DATA_WIDTH1_RD(src)                      (((src) & 0x00000003))
#define MPA_APB_DATA_WIDTH1_SET(dst,src) \
                          (((dst) & ~0x00000003) | (((u32)(src)) & 0x00000003))

/*	Register I2C_COMP_VERSION	*/ 
/*	 Fields I2C_COMP_VERSION	 */
#define MPA_I2C_COMP_VERSION_WIDTH                                           32
#define MPA_I2C_COMP_VERSION_SHIFT                                            0
#define MPA_I2C_COMP_VERSION_MASK                                    0xffffffff
#define MPA_I2C_COMP_VERSION_RD(src)                     (((src) & 0xffffffff))
#define MPA_I2C_COMP_VERSION_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register I2C_COMP_TYPE	*/ 
/*	 Fields I2C_COMP_TYPE	 */
#define MPA_I2C_COMP_TYPE_WIDTH                                              32
#define MPA_I2C_COMP_TYPE_SHIFT                                               0
#define MPA_I2C_COMP_TYPE_MASK                                       0xffffffff
#define MPA_I2C_COMP_TYPE_RD(src)                        (((src) & 0xffffffff))
#define MPA_I2C_COMP_TYPE_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Global Base Address	*/
#define MPA_AHB_CSR_I_BASE_ADDR			0xddd8b1000ULL

/*    Address MPA_AHB_CSR_I  Registers */
#define MPA_DMA_STAT_ADDR                                            0x00000000
#define MPA_DMA_STAT_DEFAULT                                         0x00000000
#define MPA_PG_MAP0_ADDR                                             0x00000010
#define MPA_PG_MAP0_DEFAULT                                          0x00000003
#define MPA_PG_MAP1_ADDR                                             0x00000014
#define MPA_PG_MAP1_DEFAULT                                          0x00000004
#define MPA_PG_MAP2_ADDR                                             0x00000018
#define MPA_PG_MAP2_DEFAULT                                          0x00000005
#define MPA_PG_MAP3_ADDR                                             0x0000001c
#define MPA_PG_MAP3_DEFAULT                                          0x00000006
#define MPA_QMI_INTSTAT_RO_ADDR                                      0x00000100
#define MPA_QMI_INTSTAT_RO_DEFAULT                                   0x00000000
#define MPA_QMI_STAT_ADDR                                            0x00000108
#define MPA_QMI_STAT_DEFAULT                                         0x00000000
#define MPA_QMI_FP_CTL_ADDR                                          0x00000120
#define MPA_QMI_FP_CTL_DEFAULT                                       0x00000000
#define MPA_QMI_WQ_CTL_ADDR                                          0x00000124
#define MPA_QMI_WQ_CTL_DEFAULT                                       0x00000000
#define MPA_QMI_FPDE_CTL_ADDR                                        0x00000128
#define MPA_QMI_FPDE_CTL_DEFAULT                                     0x00000000
#define MPA_QMI_CM_CTL_ADDR                                          0x0000012c
#define MPA_QMI_CM_CTL_DEFAULT                                       0x00000000
#define MPA_QMI_FP_MSG0_ADDR                                         0x00000130
#define MPA_QMI_FP_MSG0_DEFAULT                                      0x00000000
#define MPA_QMI_FP_MSG1_ADDR                                         0x00000134
#define MPA_QMI_FP_MSG1_DEFAULT                                      0x00000000
#define MPA_QMI_FP_MSG2_ADDR                                         0x00000138
#define MPA_QMI_FP_MSG2_DEFAULT                                      0x00000000
#define MPA_QMI_FP_MSG3_ADDR                                         0x0000013c
#define MPA_QMI_FP_MSG3_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG0_ADDR                                         0x00000140
#define MPA_QMI_WQ_MSG0_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG1_ADDR                                         0x00000144
#define MPA_QMI_WQ_MSG1_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG2_ADDR                                         0x00000148
#define MPA_QMI_WQ_MSG2_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG3_ADDR                                         0x0000014c
#define MPA_QMI_WQ_MSG3_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG4_ADDR                                         0x00000150
#define MPA_QMI_WQ_MSG4_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG5_ADDR                                         0x00000154
#define MPA_QMI_WQ_MSG5_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG6_ADDR                                         0x00000158
#define MPA_QMI_WQ_MSG6_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG7_ADDR                                         0x0000015c
#define MPA_QMI_WQ_MSG7_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG8_ADDR                                         0x00000160
#define MPA_QMI_WQ_MSG8_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG9_ADDR                                         0x00000164
#define MPA_QMI_WQ_MSG9_DEFAULT                                      0x00000000
#define MPA_QMI_WQ_MSG10_ADDR                                        0x00000168
#define MPA_QMI_WQ_MSG10_DEFAULT                                     0x00000000
#define MPA_QMI_WQ_MSG11_ADDR                                        0x0000016c
#define MPA_QMI_WQ_MSG11_DEFAULT                                     0x00000000
#define MPA_QMI_WQ_MSG12_ADDR                                        0x00000170
#define MPA_QMI_WQ_MSG12_DEFAULT                                     0x00000000
#define MPA_QMI_WQ_MSG13_ADDR                                        0x00000174
#define MPA_QMI_WQ_MSG13_DEFAULT                                     0x00000000
#define MPA_QMI_WQ_MSG14_ADDR                                        0x00000178
#define MPA_QMI_WQ_MSG14_DEFAULT                                     0x00000000
#define MPA_QMI_WQ_MSG15_ADDR                                        0x0000017c
#define MPA_QMI_WQ_MSG15_DEFAULT                                     0x00000000
#define MPA_QMI_FPDE_MSG0_ADDR                                       0x00000180
#define MPA_QMI_FPDE_MSG0_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG1_ADDR                                       0x00000184
#define MPA_QMI_FPDE_MSG1_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG2_ADDR                                       0x00000188
#define MPA_QMI_FPDE_MSG2_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG3_ADDR                                       0x0000018c
#define MPA_QMI_FPDE_MSG3_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG4_ADDR                                       0x00000190
#define MPA_QMI_FPDE_MSG4_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG5_ADDR                                       0x00000194
#define MPA_QMI_FPDE_MSG5_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG6_ADDR                                       0x00000198
#define MPA_QMI_FPDE_MSG6_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG7_ADDR                                       0x0000019c
#define MPA_QMI_FPDE_MSG7_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG8_ADDR                                       0x000001a0
#define MPA_QMI_FPDE_MSG8_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG9_ADDR                                       0x000001a4
#define MPA_QMI_FPDE_MSG9_DEFAULT                                    0x00000000
#define MPA_QMI_FPDE_MSG10_ADDR                                      0x000001a8
#define MPA_QMI_FPDE_MSG10_DEFAULT                                   0x00000000
#define MPA_QMI_FPDE_MSG11_ADDR                                      0x000001ac
#define MPA_QMI_FPDE_MSG11_DEFAULT                                   0x00000000
#define MPA_QMI_FPDE_MSG12_ADDR                                      0x000001b0
#define MPA_QMI_FPDE_MSG12_DEFAULT                                   0x00000000
#define MPA_QMI_FPDE_MSG13_ADDR                                      0x000001b4
#define MPA_QMI_FPDE_MSG13_DEFAULT                                   0x00000000
#define MPA_QMI_FPDE_MSG14_ADDR                                      0x000001b8
#define MPA_QMI_FPDE_MSG14_DEFAULT                                   0x00000000
#define MPA_QMI_FPDE_MSG15_ADDR                                      0x000001bc
#define MPA_QMI_FPDE_MSG15_DEFAULT                                   0x00000000
#define MPA_QMI_RIDA_ADDR                                            0x000001e0
#define MPA_QMI_RIDA_DEFAULT                                         0x00000000
#define MPA_QMI_RIDB_ADDR                                            0x000001e4
#define MPA_QMI_RIDB_DEFAULT                                         0x00000000
#define MPA_QMI_RIDC_ADDR                                            0x000001e8
#define MPA_QMI_RIDC_DEFAULT                                         0x00000000
#define MPA_QMI_RID_IENA_ADDR                                        0x000001f0
#define MPA_QMI_RID_IENA_DEFAULT                                     0x00000000
#define MPA_QMI_RID_IENB_ADDR                                        0x000001f4
#define MPA_QMI_RID_IENB_DEFAULT                                     0x00000000
#define MPA_QMI_RID_IENC_ADDR                                        0x000001f8
#define MPA_QMI_RID_IENC_DEFAULT                                     0x00000000
#define MPA_QMI_CM_MSG0_ADDR                                         0x00000200
#define MPA_QMI_CM_MSG0_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG1_ADDR                                         0x00000204
#define MPA_QMI_CM_MSG1_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG2_ADDR                                         0x00000208
#define MPA_QMI_CM_MSG2_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG3_ADDR                                         0x0000020c
#define MPA_QMI_CM_MSG3_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG4_ADDR                                         0x00000210
#define MPA_QMI_CM_MSG4_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG5_ADDR                                         0x00000214
#define MPA_QMI_CM_MSG5_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG6_ADDR                                         0x00000218
#define MPA_QMI_CM_MSG6_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG7_ADDR                                         0x0000021c
#define MPA_QMI_CM_MSG7_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG8_ADDR                                         0x00000220
#define MPA_QMI_CM_MSG8_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG9_ADDR                                         0x00000224
#define MPA_QMI_CM_MSG9_DEFAULT                                      0x00000000
#define MPA_QMI_CM_MSG10_ADDR                                        0x00000228
#define MPA_QMI_CM_MSG10_DEFAULT                                     0x00000000
#define MPA_QMI_CM_MSG11_ADDR                                        0x0000022c
#define MPA_QMI_CM_MSG11_DEFAULT                                     0x00000000
#define MPA_QMI_CM_MSG12_ADDR                                        0x00000230
#define MPA_QMI_CM_MSG12_DEFAULT                                     0x00000000
#define MPA_QMI_CM_MSG13_ADDR                                        0x00000234
#define MPA_QMI_CM_MSG13_DEFAULT                                     0x00000000
#define MPA_QMI_CM_MSG14_ADDR                                        0x00000238
#define MPA_QMI_CM_MSG14_DEFAULT                                     0x00000000
#define MPA_QMI_CM_MSG15_ADDR                                        0x0000023c
#define MPA_QMI_CM_MSG15_DEFAULT                                     0x00000000
#define EFUSE_CTL_ADDR                                               0x00000400
#define EFUSE_CTL_DEFAULT                                            0x00000000
#define EFUSE_STAT_ADDR                                              0x00000404
#define EFUSE_STAT_DEFAULT                                           0x00000000
#define EFUSE_RDDATA_ADDR                                            0x0000040c
#define EFUSE_RDDATA_DEFAULT                                         0x00000000
#define TPM_CTL_ADDR                                                 0x00000410
#define TPM_CTL_DEFAULT                                              0x00000000
#define SCU_SCRST_ADDR                                               0x00000420
#define SCU_SCRST_DEFAULT                                            0x00000000
#define MPA_AHB_IRAM_ADDR_ADDR                                       0x00000430
#define MPA_AHB_IRAM_ADDR_DEFAULT                                    0x00000000
#define MPA_AHB_IRAM_DATA_ADDR                                       0x00000434
#define MPA_AHB_IRAM_DATA_DEFAULT                                    0x00000000
#define MPA_AHB_IRAM_RDATA_ADDR                                      0x00000438
#define MPA_AHB_IRAM_RDATA_DEFAULT                                   0x00000000

/*	Register MPA_DMA_STAT	*/ 
/*	 Fields DMA_PENDING	 */
#define DMA_PENDING_WIDTH                                                     1
#define DMA_PENDING_SHIFT                                                     1
#define DMA_PENDING_MASK                                             0x00000002
#define DMA_PENDING_RD(src)                           (((src) & 0x00000002)>>1)
#define DMA_PENDING_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields DMA_DONE	 */
#define DMA_DONE_WIDTH                                                        1
#define DMA_DONE_SHIFT                                                        0
#define DMA_DONE_MASK                                                0x00000001
#define DMA_DONE_RD(src)                                 (((src) & 0x00000001))
#define DMA_DONE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_PG_MAP0	*/ 
/*	 Fields RD_COHERENT	 */
#define RD_COHERENT0_WIDTH                                                    1
#define RD_COHERENT0_SHIFT                                                   31
#define RD_COHERENT0_MASK                                            0x80000000
#define RD_COHERENT0_RD(src)                         (((src) & 0x80000000)>>31)
#define RD_COHERENT0_WR(src)                    (((u32)(src)<<31) & 0x80000000)
#define RD_COHERENT0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields WR_COHERENT	 */
#define WR_COHERENT0_WIDTH                                                    1
#define WR_COHERENT0_SHIFT                                                   30
#define WR_COHERENT0_MASK                                            0x40000000
#define WR_COHERENT0_RD(src)                         (((src) & 0x40000000)>>30)
#define WR_COHERENT0_WR(src)                    (((u32)(src)<<30) & 0x40000000)
#define WR_COHERENT0_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields MAPPER	 */
#define MAPPER0_WIDTH                                                         8
#define MAPPER0_SHIFT                                                         0
#define MAPPER0_MASK                                                 0x000000ff
#define MAPPER0_RD(src)                                  (((src) & 0x000000ff))
#define MAPPER0_WR(src)                             (((u32)(src)) & 0x000000ff)
#define MAPPER0_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register MPA_PG_MAP1	*/ 
/*	 Fields RD_COHERENT	 */
#define RD_COHERENT1_WIDTH                                                    1
#define RD_COHERENT1_SHIFT                                                   31
#define RD_COHERENT1_MASK                                            0x80000000
#define RD_COHERENT1_RD(src)                         (((src) & 0x80000000)>>31)
#define RD_COHERENT1_WR(src)                    (((u32)(src)<<31) & 0x80000000)
#define RD_COHERENT1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields WR_COHERENT	 */
#define WR_COHERENT1_WIDTH                                                    1
#define WR_COHERENT1_SHIFT                                                   30
#define WR_COHERENT1_MASK                                            0x40000000
#define WR_COHERENT1_RD(src)                         (((src) & 0x40000000)>>30)
#define WR_COHERENT1_WR(src)                    (((u32)(src)<<30) & 0x40000000)
#define WR_COHERENT1_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields MAPPER	 */
#define MAPPER1_WIDTH                                                         8
#define MAPPER1_SHIFT                                                         0
#define MAPPER1_MASK                                                 0x000000ff
#define MAPPER1_RD(src)                                  (((src) & 0x000000ff))
#define MAPPER1_WR(src)                             (((u32)(src)) & 0x000000ff)
#define MAPPER1_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register MPA_PG_MAP2	*/ 
/*	 Fields RD_COHERENT	 */
#define RD_COHERENT2_WIDTH                                                    1
#define RD_COHERENT2_SHIFT                                                   31
#define RD_COHERENT2_MASK                                            0x80000000
#define RD_COHERENT2_RD(src)                         (((src) & 0x80000000)>>31)
#define RD_COHERENT2_WR(src)                    (((u32)(src)<<31) & 0x80000000)
#define RD_COHERENT2_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields WR_COHERENT	 */
#define WR_COHERENT2_WIDTH                                                    1
#define WR_COHERENT2_SHIFT                                                   30
#define WR_COHERENT2_MASK                                            0x40000000
#define WR_COHERENT2_RD(src)                         (((src) & 0x40000000)>>30)
#define WR_COHERENT2_WR(src)                    (((u32)(src)<<30) & 0x40000000)
#define WR_COHERENT2_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields MAPPER	 */
#define MAPPER2_WIDTH                                                         8
#define MAPPER2_SHIFT                                                         0
#define MAPPER2_MASK                                                 0x000000ff
#define MAPPER2_RD(src)                                  (((src) & 0x000000ff))
#define MAPPER2_WR(src)                             (((u32)(src)) & 0x000000ff)
#define MAPPER2_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register MPA_PG_MAP3	*/ 
/*	 Fields RD_COHERENT	 */
#define RD_COHERENT3_WIDTH                                                    1
#define RD_COHERENT3_SHIFT                                                   31
#define RD_COHERENT3_MASK                                            0x80000000
#define RD_COHERENT3_RD(src)                         (((src) & 0x80000000)>>31)
#define RD_COHERENT3_WR(src)                    (((u32)(src)<<31) & 0x80000000)
#define RD_COHERENT3_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields WR_COHERENT	 */
#define WR_COHERENT3_WIDTH                                                    1
#define WR_COHERENT3_SHIFT                                                   30
#define WR_COHERENT3_MASK                                            0x40000000
#define WR_COHERENT3_RD(src)                         (((src) & 0x40000000)>>30)
#define WR_COHERENT3_WR(src)                    (((u32)(src)<<30) & 0x40000000)
#define WR_COHERENT3_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields MAPPER	 */
#define MAPPER3_WIDTH                                                         8
#define MAPPER3_SHIFT                                                         0
#define MAPPER3_MASK                                                 0x000000ff
#define MAPPER3_RD(src)                                  (((src) & 0x000000ff))
#define MAPPER3_WR(src)                             (((u32)(src)) & 0x000000ff)
#define MAPPER3_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register MPA_QMI_INTSTAT_RO	*/ 
/*	 Fields QMI	 */
#define QMI_WIDTH                                                             1
#define QMI_SHIFT                                                            31
#define QMI_MASK                                                     0x80000000
#define QMI_RD(src)                                  (((src) & 0x80000000)>>31)
#define QMI_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields WQ_AVAIL	 */
#define WQ_AVAIL_WIDTH                                                        8
#define WQ_AVAIL_SHIFT                                                       16
#define WQ_AVAIL_MASK                                                0x00ff0000
#define WQ_AVAIL_RD(src)                             (((src) & 0x00ff0000)>>16)
#define WQ_AVAIL_SET(dst,src) \
                      (((dst) & ~0x00ff0000) | (((u32)(src)<<16) & 0x00ff0000))
/*	 Fields FP_AVAIL	 */
#define FP_AVAIL_WIDTH                                                       16
#define FP_AVAIL_SHIFT                                                        0
#define FP_AVAIL_MASK                                                0x0000ffff
#define FP_AVAIL_RD(src)                                 (((src) & 0x0000ffff))
#define FP_AVAIL_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_QMI_STAT	*/ 
/*	 Fields FPDE_FULL64	 */
#define FPDE_FULL64_WIDTH                                                     1
#define FPDE_FULL64_SHIFT                                                     1
#define FPDE_FULL64_MASK                                             0x00000002
#define FPDE_FULL64_RD(src)                           (((src) & 0x00000002)>>1)
#define FPDE_FULL64_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields FPDE_FULL16	 */
#define FPDE_FULL16_WIDTH                                                     1
#define FPDE_FULL16_SHIFT                                                     0
#define FPDE_FULL16_MASK                                             0x00000001
#define FPDE_FULL16_RD(src)                              (((src) & 0x00000001))
#define FPDE_FULL16_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_QMI_FP_CTL	*/ 
/*	 Fields FP_FETCH	 */
#define FP_FETCH_WIDTH                                                        1
#define FP_FETCH_SHIFT                                                       31
#define FP_FETCH_MASK                                                0x80000000
#define FP_FETCH_RD(src)                             (((src) & 0x80000000)>>31)
#define FP_FETCH_WR(src)                        (((u32)(src)<<31) & 0x80000000)
#define FP_FETCH_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields FP_BID	 */
#define FP_BID_WIDTH                                                          4
#define FP_BID_SHIFT                                                          0
#define FP_BID_MASK                                                  0x0000000f
#define FP_BID_RD(src)                                   (((src) & 0x0000000f))
#define FP_BID_WR(src)                              (((u32)(src)) & 0x0000000f)
#define FP_BID_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register MPA_QMI_WQ_CTL	*/ 
/*	 Fields WQ_FETCH	 */
#define WQ_FETCH_WIDTH                                                        1
#define WQ_FETCH_SHIFT                                                       31
#define WQ_FETCH_MASK                                                0x80000000
#define WQ_FETCH_RD(src)                             (((src) & 0x80000000)>>31)
#define WQ_FETCH_WR(src)                        (((u32)(src)<<31) & 0x80000000)
#define WQ_FETCH_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields WQ_MSG_SIZE	 */
#define WQ_MSG_SIZE_WIDTH                                                     2
#define WQ_MSG_SIZE_SHIFT                                                     4
#define WQ_MSG_SIZE_MASK                                             0x00000030
#define WQ_MSG_SIZE_RD(src)                           (((src) & 0x00000030)>>4)
#define WQ_MSG_SIZE_WR(src)                      (((u32)(src)<<4) & 0x00000030)
#define WQ_MSG_SIZE_SET(dst,src) \
                       (((dst) & ~0x00000030) | (((u32)(src)<<4) & 0x00000030))
/*	 Fields WQ_BID	 */
#define WQ_BID_WIDTH                                                          4
#define WQ_BID_SHIFT                                                          0
#define WQ_BID_MASK                                                  0x0000000f
#define WQ_BID_RD(src)                                   (((src) & 0x0000000f))
#define WQ_BID_WR(src)                              (((u32)(src)) & 0x0000000f)
#define WQ_BID_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register MPA_QMI_FPDE_CTL	*/ 
/*	 Fields FP_DEALLOC	 */
#define FP_DEALLOC_WIDTH                                                      1
#define FP_DEALLOC_SHIFT                                                     31
#define FP_DEALLOC_MASK                                              0x80000000
#define FP_DEALLOC_RD(src)                           (((src) & 0x80000000)>>31)
#define FP_DEALLOC_WR(src)                      (((u32)(src)<<31) & 0x80000000)
#define FP_DEALLOC_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields FPDE_QMLITE	 */
#define FPDE_QMLITE_WIDTH                                                     1
#define FPDE_QMLITE_SHIFT                                                     2
#define FPDE_QMLITE_MASK                                             0x00000004
#define FPDE_QMLITE_RD(src)                           (((src) & 0x00000004)>>2)
#define FPDE_QMLITE_WR(src)                      (((u32)(src)<<2) & 0x00000004)
#define FPDE_QMLITE_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields FPDE_SIZE	 */
#define FPDE_SIZE_WIDTH                                                       2
#define FPDE_SIZE_SHIFT                                                       0
#define FPDE_SIZE_MASK                                               0x00000003
#define FPDE_SIZE_RD(src)                                (((src) & 0x00000003))
#define FPDE_SIZE_WR(src)                           (((u32)(src)) & 0x00000003)
#define FPDE_SIZE_SET(dst,src) \
                          (((dst) & ~0x00000003) | (((u32)(src)) & 0x00000003))

/*	Register MPA_QMI_CM_CTL	*/ 
/*	 Fields CM_SEND	 */
#define CM_SEND_WIDTH                                                         1
#define CM_SEND_SHIFT                                                        31
#define CM_SEND_MASK                                                 0x80000000
#define CM_SEND_RD(src)                              (((src) & 0x80000000)>>31)
#define CM_SEND_WR(src)                         (((u32)(src)<<31) & 0x80000000)
#define CM_SEND_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields CM_LERR	 */
#define CM_LERR_WIDTH                                                         3
#define CM_LERR_SHIFT                                                        16
#define CM_LERR_MASK                                                 0x00070000
#define CM_LERR_RD(src)                              (((src) & 0x00070000)>>16)
#define CM_LERR_WR(src)                         (((u32)(src)<<16) & 0x00070000)
#define CM_LERR_SET(dst,src) \
                      (((dst) & ~0x00070000) | (((u32)(src)<<16) & 0x00070000))
/*	 Fields CM_LAST	 */
#define CM_LAST_WIDTH                                                         3
#define CM_LAST_SHIFT                                                        12
#define CM_LAST_MASK                                                 0x00007000
#define CM_LAST_RD(src)                              (((src) & 0x00007000)>>12)
#define CM_LAST_WR(src)                         (((u32)(src)<<12) & 0x00007000)
#define CM_LAST_SET(dst,src) \
                      (((dst) & ~0x00007000) | (((u32)(src)<<12) & 0x00007000))
/*	 Fields CM_COHERENT	 */
#define CM_COHERENT_WIDTH                                                     1
#define CM_COHERENT_SHIFT                                                    11
#define CM_COHERENT_MASK                                             0x00000800
#define CM_COHERENT_RD(src)                          (((src) & 0x00000800)>>11)
#define CM_COHERENT_WR(src)                     (((u32)(src)<<11) & 0x00000800)
#define CM_COHERENT_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields CM_QMLITE	 */
#define CM_QMLITE_WIDTH                                                       1
#define CM_QMLITE_SHIFT                                                      10
#define CM_QMLITE_MASK                                               0x00000400
#define CM_QMLITE_RD(src)                            (((src) & 0x00000400)>>10)
#define CM_QMLITE_WR(src)                       (((u32)(src)<<10) & 0x00000400)
#define CM_QMLITE_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields CM_SIZE	 */
#define CM_SIZE_WIDTH                                                         2
#define CM_SIZE_SHIFT                                                         8
#define CM_SIZE_MASK                                                 0x00000300
#define CM_SIZE_RD(src)                               (((src) & 0x00000300)>>8)
#define CM_SIZE_WR(src)                          (((u32)(src)<<8) & 0x00000300)
#define CM_SIZE_SET(dst,src) \
                       (((dst) & ~0x00000300) | (((u32)(src)<<8) & 0x00000300))
/*	 Fields CM_QID	 */
#define CM_QID_WIDTH                                                          8
#define CM_QID_SHIFT                                                          0
#define CM_QID_MASK                                                  0x000000ff
#define CM_QID_RD(src)                                   (((src) & 0x000000ff))
#define CM_QID_WR(src)                              (((u32)(src)) & 0x000000ff)
#define CM_QID_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register MPA_QMI_FP_MSG0	*/ 
/*	 Fields FP_MSG	 */
#define FP_MSG0_WIDTH                                                        32
#define FP_MSG0_SHIFT                                                         0
#define FP_MSG0_MASK                                                 0xffffffff
#define FP_MSG0_RD(src)                                  (((src) & 0xffffffff))
#define FP_MSG0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FP_MSG1	*/ 
/*	 Fields FP_MSG	 */
#define FP_MSG1_WIDTH                                                        32
#define FP_MSG1_SHIFT                                                         0
#define FP_MSG1_MASK                                                 0xffffffff
#define FP_MSG1_RD(src)                                  (((src) & 0xffffffff))
#define FP_MSG1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FP_MSG2	*/ 
/*	 Fields FP_MSG	 */
#define FP_MSG2_WIDTH                                                        32
#define FP_MSG2_SHIFT                                                         0
#define FP_MSG2_MASK                                                 0xffffffff
#define FP_MSG2_RD(src)                                  (((src) & 0xffffffff))
#define FP_MSG2_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FP_MSG3	*/ 
/*	 Fields FP_MSG	 */
#define FP_MSG3_WIDTH                                                        32
#define FP_MSG3_SHIFT                                                         0
#define FP_MSG3_MASK                                                 0xffffffff
#define FP_MSG3_RD(src)                                  (((src) & 0xffffffff))
#define FP_MSG3_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG0	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG0_WIDTH                                                        32
#define WQ_MSG0_SHIFT                                                         0
#define WQ_MSG0_MASK                                                 0xffffffff
#define WQ_MSG0_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG1	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG1_WIDTH                                                        32
#define WQ_MSG1_SHIFT                                                         0
#define WQ_MSG1_MASK                                                 0xffffffff
#define WQ_MSG1_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG2	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG2_WIDTH                                                        32
#define WQ_MSG2_SHIFT                                                         0
#define WQ_MSG2_MASK                                                 0xffffffff
#define WQ_MSG2_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG2_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG3	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG3_WIDTH                                                        32
#define WQ_MSG3_SHIFT                                                         0
#define WQ_MSG3_MASK                                                 0xffffffff
#define WQ_MSG3_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG3_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG4	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG4_WIDTH                                                        32
#define WQ_MSG4_SHIFT                                                         0
#define WQ_MSG4_MASK                                                 0xffffffff
#define WQ_MSG4_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG4_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG5	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG5_WIDTH                                                        32
#define WQ_MSG5_SHIFT                                                         0
#define WQ_MSG5_MASK                                                 0xffffffff
#define WQ_MSG5_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG5_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG6	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG6_WIDTH                                                        32
#define WQ_MSG6_SHIFT                                                         0
#define WQ_MSG6_MASK                                                 0xffffffff
#define WQ_MSG6_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG6_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG7	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG7_WIDTH                                                        32
#define WQ_MSG7_SHIFT                                                         0
#define WQ_MSG7_MASK                                                 0xffffffff
#define WQ_MSG7_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG7_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG8	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG8_WIDTH                                                        32
#define WQ_MSG8_SHIFT                                                         0
#define WQ_MSG8_MASK                                                 0xffffffff
#define WQ_MSG8_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG8_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG9	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG9_WIDTH                                                        32
#define WQ_MSG9_SHIFT                                                         0
#define WQ_MSG9_MASK                                                 0xffffffff
#define WQ_MSG9_RD(src)                                  (((src) & 0xffffffff))
#define WQ_MSG9_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG10	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG0_F1_WIDTH                                                     32
#define WQ_MSG0_F1_SHIFT                                                      0
#define WQ_MSG0_F1_MASK                                              0xffffffff
#define WQ_MSG0_F1_RD(src)                               (((src) & 0xffffffff))
#define WQ_MSG0_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG11	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG1_F1_WIDTH                                                     32
#define WQ_MSG1_F1_SHIFT                                                      0
#define WQ_MSG1_F1_MASK                                              0xffffffff
#define WQ_MSG1_F1_RD(src)                               (((src) & 0xffffffff))
#define WQ_MSG1_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG12	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG2_F1_WIDTH                                                     32
#define WQ_MSG2_F1_SHIFT                                                      0
#define WQ_MSG2_F1_MASK                                              0xffffffff
#define WQ_MSG2_F1_RD(src)                               (((src) & 0xffffffff))
#define WQ_MSG2_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG13	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG3_F1_WIDTH                                                     32
#define WQ_MSG3_F1_SHIFT                                                      0
#define WQ_MSG3_F1_MASK                                              0xffffffff
#define WQ_MSG3_F1_RD(src)                               (((src) & 0xffffffff))
#define WQ_MSG3_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG14	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG4_F1_WIDTH                                                     32
#define WQ_MSG4_F1_SHIFT                                                      0
#define WQ_MSG4_F1_MASK                                              0xffffffff
#define WQ_MSG4_F1_RD(src)                               (((src) & 0xffffffff))
#define WQ_MSG4_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_WQ_MSG15	*/ 
/*	 Fields WQ_MSG	 */
#define WQ_MSG5_F1_WIDTH                                                     32
#define WQ_MSG5_F1_SHIFT                                                      0
#define WQ_MSG5_F1_MASK                                              0xffffffff
#define WQ_MSG5_F1_RD(src)                               (((src) & 0xffffffff))
#define WQ_MSG5_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG0	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG0_WIDTH                                                      32
#define FPDE_MSG0_SHIFT                                                       0
#define FPDE_MSG0_MASK                                               0xffffffff
#define FPDE_MSG0_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG0_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG1	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG1_WIDTH                                                      32
#define FPDE_MSG1_SHIFT                                                       0
#define FPDE_MSG1_MASK                                               0xffffffff
#define FPDE_MSG1_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG1_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG2	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG2_WIDTH                                                      32
#define FPDE_MSG2_SHIFT                                                       0
#define FPDE_MSG2_MASK                                               0xffffffff
#define FPDE_MSG2_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG2_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG2_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG3	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG3_WIDTH                                                      32
#define FPDE_MSG3_SHIFT                                                       0
#define FPDE_MSG3_MASK                                               0xffffffff
#define FPDE_MSG3_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG3_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG3_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG4	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG4_WIDTH                                                      32
#define FPDE_MSG4_SHIFT                                                       0
#define FPDE_MSG4_MASK                                               0xffffffff
#define FPDE_MSG4_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG4_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG4_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG5	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG5_WIDTH                                                      32
#define FPDE_MSG5_SHIFT                                                       0
#define FPDE_MSG5_MASK                                               0xffffffff
#define FPDE_MSG5_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG5_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG5_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG6	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG6_WIDTH                                                      32
#define FPDE_MSG6_SHIFT                                                       0
#define FPDE_MSG6_MASK                                               0xffffffff
#define FPDE_MSG6_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG6_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG6_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG7	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG7_WIDTH                                                      32
#define FPDE_MSG7_SHIFT                                                       0
#define FPDE_MSG7_MASK                                               0xffffffff
#define FPDE_MSG7_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG7_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG7_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG8	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG8_WIDTH                                                      32
#define FPDE_MSG8_SHIFT                                                       0
#define FPDE_MSG8_MASK                                               0xffffffff
#define FPDE_MSG8_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG8_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG8_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG9	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG9_WIDTH                                                      32
#define FPDE_MSG9_SHIFT                                                       0
#define FPDE_MSG9_MASK                                               0xffffffff
#define FPDE_MSG9_RD(src)                                (((src) & 0xffffffff))
#define FPDE_MSG9_WR(src)                           (((u32)(src)) & 0xffffffff)
#define FPDE_MSG9_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG10	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG0_F1_WIDTH                                                   32
#define FPDE_MSG0_F1_SHIFT                                                    0
#define FPDE_MSG0_F1_MASK                                            0xffffffff
#define FPDE_MSG0_F1_RD(src)                             (((src) & 0xffffffff))
#define FPDE_MSG0_F1_WR(src)                        (((u32)(src)) & 0xffffffff)
#define FPDE_MSG0_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG11	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG1_F1_WIDTH                                                   32
#define FPDE_MSG1_F1_SHIFT                                                    0
#define FPDE_MSG1_F1_MASK                                            0xffffffff
#define FPDE_MSG1_F1_RD(src)                             (((src) & 0xffffffff))
#define FPDE_MSG1_F1_WR(src)                        (((u32)(src)) & 0xffffffff)
#define FPDE_MSG1_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG12	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG2_F1_WIDTH                                                   32
#define FPDE_MSG2_F1_SHIFT                                                    0
#define FPDE_MSG2_F1_MASK                                            0xffffffff
#define FPDE_MSG2_F1_RD(src)                             (((src) & 0xffffffff))
#define FPDE_MSG2_F1_WR(src)                        (((u32)(src)) & 0xffffffff)
#define FPDE_MSG2_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG13	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG3_F1_WIDTH                                                   32
#define FPDE_MSG3_F1_SHIFT                                                    0
#define FPDE_MSG3_F1_MASK                                            0xffffffff
#define FPDE_MSG3_F1_RD(src)                             (((src) & 0xffffffff))
#define FPDE_MSG3_F1_WR(src)                        (((u32)(src)) & 0xffffffff)
#define FPDE_MSG3_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG14	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG4_F1_WIDTH                                                   32
#define FPDE_MSG4_F1_SHIFT                                                    0
#define FPDE_MSG4_F1_MASK                                            0xffffffff
#define FPDE_MSG4_F1_RD(src)                             (((src) & 0xffffffff))
#define FPDE_MSG4_F1_WR(src)                        (((u32)(src)) & 0xffffffff)
#define FPDE_MSG4_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_FPDE_MSG15	*/ 
/*	 Fields FPDE_MSG	 */
#define FPDE_MSG5_F1_WIDTH                                                   32
#define FPDE_MSG5_F1_SHIFT                                                    0
#define FPDE_MSG5_F1_MASK                                            0xffffffff
#define FPDE_MSG5_F1_RD(src)                             (((src) & 0xffffffff))
#define FPDE_MSG5_F1_WR(src)                        (((u32)(src)) & 0xffffffff)
#define FPDE_MSG5_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_RIDA	*/ 
/*	 Fields QMI_RID7_VALID	 */
#define QMI_RID7_VALID_WIDTH                                                  1
#define QMI_RID7_VALID_SHIFT                                                 31
#define QMI_RID7_VALID_MASK                                          0x80000000
#define QMI_RID7_VALID_RD(src)                       (((src) & 0x80000000)>>31)
#define QMI_RID7_VALID_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields QMI_RID7_STAT	 */
#define QMI_RID7_STAT_WIDTH                                                   3
#define QMI_RID7_STAT_SHIFT                                                  28
#define QMI_RID7_STAT_MASK                                           0x70000000
#define QMI_RID7_STAT_RD(src)                        (((src) & 0x70000000)>>28)
#define QMI_RID7_STAT_SET(dst,src) \
                      (((dst) & ~0x70000000) | (((u32)(src)<<28) & 0x70000000))
/*	 Fields QMI_RID6_VALID	 */
#define QMI_RID6_VALID_WIDTH                                                  1
#define QMI_RID6_VALID_SHIFT                                                 27
#define QMI_RID6_VALID_MASK                                          0x08000000
#define QMI_RID6_VALID_RD(src)                       (((src) & 0x08000000)>>27)
#define QMI_RID6_VALID_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields QMI_RID6_STAT	 */
#define QMI_RID6_STAT_WIDTH                                                   3
#define QMI_RID6_STAT_SHIFT                                                  24
#define QMI_RID6_STAT_MASK                                           0x07000000
#define QMI_RID6_STAT_RD(src)                        (((src) & 0x07000000)>>24)
#define QMI_RID6_STAT_SET(dst,src) \
                      (((dst) & ~0x07000000) | (((u32)(src)<<24) & 0x07000000))
/*	 Fields QMI_RID5_VALID	 */
#define QMI_RID5_VALID_WIDTH                                                  1
#define QMI_RID5_VALID_SHIFT                                                 23
#define QMI_RID5_VALID_MASK                                          0x00800000
#define QMI_RID5_VALID_RD(src)                       (((src) & 0x00800000)>>23)
#define QMI_RID5_VALID_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields QMI_RID5_STAT	 */
#define QMI_RID5_STAT_WIDTH                                                   3
#define QMI_RID5_STAT_SHIFT                                                  20
#define QMI_RID5_STAT_MASK                                           0x00700000
#define QMI_RID5_STAT_RD(src)                        (((src) & 0x00700000)>>20)
#define QMI_RID5_STAT_SET(dst,src) \
                      (((dst) & ~0x00700000) | (((u32)(src)<<20) & 0x00700000))
/*	 Fields QMI_RID4_VALID	 */
#define QMI_RID4_VALID_WIDTH                                                  1
#define QMI_RID4_VALID_SHIFT                                                 19
#define QMI_RID4_VALID_MASK                                          0x00080000
#define QMI_RID4_VALID_RD(src)                       (((src) & 0x00080000)>>19)
#define QMI_RID4_VALID_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields QMI_RID4_STAT	 */
#define QMI_RID4_STAT_WIDTH                                                   3
#define QMI_RID4_STAT_SHIFT                                                  16
#define QMI_RID4_STAT_MASK                                           0x00070000
#define QMI_RID4_STAT_RD(src)                        (((src) & 0x00070000)>>16)
#define QMI_RID4_STAT_SET(dst,src) \
                      (((dst) & ~0x00070000) | (((u32)(src)<<16) & 0x00070000))
/*	 Fields QMI_RID3_VALID	 */
#define QMI_RID3_VALID_WIDTH                                                  1
#define QMI_RID3_VALID_SHIFT                                                 15
#define QMI_RID3_VALID_MASK                                          0x00008000
#define QMI_RID3_VALID_RD(src)                       (((src) & 0x00008000)>>15)
#define QMI_RID3_VALID_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields QMI_RID3_STAT	 */
#define QMI_RID3_STAT_WIDTH                                                   3
#define QMI_RID3_STAT_SHIFT                                                  12
#define QMI_RID3_STAT_MASK                                           0x00007000
#define QMI_RID3_STAT_RD(src)                        (((src) & 0x00007000)>>12)
#define QMI_RID3_STAT_SET(dst,src) \
                      (((dst) & ~0x00007000) | (((u32)(src)<<12) & 0x00007000))
/*	 Fields QMI_RID2_VALID	 */
#define QMI_RID2_VALID_WIDTH                                                  1
#define QMI_RID2_VALID_SHIFT                                                 11
#define QMI_RID2_VALID_MASK                                          0x00000800
#define QMI_RID2_VALID_RD(src)                       (((src) & 0x00000800)>>11)
#define QMI_RID2_VALID_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields QMI_RID2_STAT	 */
#define QMI_RID2_STAT_WIDTH                                                   3
#define QMI_RID2_STAT_SHIFT                                                   8
#define QMI_RID2_STAT_MASK                                           0x00000700
#define QMI_RID2_STAT_RD(src)                         (((src) & 0x00000700)>>8)
#define QMI_RID2_STAT_SET(dst,src) \
                       (((dst) & ~0x00000700) | (((u32)(src)<<8) & 0x00000700))
/*	 Fields QMI_RID1_VALID	 */
#define QMI_RID1_VALID_WIDTH                                                  1
#define QMI_RID1_VALID_SHIFT                                                  7
#define QMI_RID1_VALID_MASK                                          0x00000080
#define QMI_RID1_VALID_RD(src)                        (((src) & 0x00000080)>>7)
#define QMI_RID1_VALID_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields QMI_RID1_STAT	 */
#define QMI_RID1_STAT_WIDTH                                                   3
#define QMI_RID1_STAT_SHIFT                                                   4
#define QMI_RID1_STAT_MASK                                           0x00000070
#define QMI_RID1_STAT_RD(src)                         (((src) & 0x00000070)>>4)
#define QMI_RID1_STAT_SET(dst,src) \
                       (((dst) & ~0x00000070) | (((u32)(src)<<4) & 0x00000070))
/*	 Fields QMI_RID0_VALID	 */
#define QMI_RID0_VALID_WIDTH                                                  1
#define QMI_RID0_VALID_SHIFT                                                  3
#define QMI_RID0_VALID_MASK                                          0x00000008
#define QMI_RID0_VALID_RD(src)                        (((src) & 0x00000008)>>3)
#define QMI_RID0_VALID_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields QMI_RID0_STAT	 */
#define QMI_RID0_STAT_WIDTH                                                   3
#define QMI_RID0_STAT_SHIFT                                                   0
#define QMI_RID0_STAT_MASK                                           0x00000007
#define QMI_RID0_STAT_RD(src)                            (((src) & 0x00000007))
#define QMI_RID0_STAT_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register MPA_QMI_RIDB	*/ 
/*	 Fields QMI_RID15_VALID	 */
#define QMI_RID15_VALID_WIDTH                                                 1
#define QMI_RID15_VALID_SHIFT                                                31
#define QMI_RID15_VALID_MASK                                         0x80000000
#define QMI_RID15_VALID_RD(src)                      (((src) & 0x80000000)>>31)
#define QMI_RID15_VALID_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields QMI_RID15_STAT	 */
#define QMI_RID15_STAT_WIDTH                                                  3
#define QMI_RID15_STAT_SHIFT                                                 28
#define QMI_RID15_STAT_MASK                                          0x70000000
#define QMI_RID15_STAT_RD(src)                       (((src) & 0x70000000)>>28)
#define QMI_RID15_STAT_SET(dst,src) \
                      (((dst) & ~0x70000000) | (((u32)(src)<<28) & 0x70000000))
/*	 Fields QMI_RID14_VALID	 */
#define QMI_RID14_VALID_WIDTH                                                 1
#define QMI_RID14_VALID_SHIFT                                                27
#define QMI_RID14_VALID_MASK                                         0x08000000
#define QMI_RID14_VALID_RD(src)                      (((src) & 0x08000000)>>27)
#define QMI_RID14_VALID_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields QMI_RID14_STAT	 */
#define QMI_RID14_STAT_WIDTH                                                  3
#define QMI_RID14_STAT_SHIFT                                                 24
#define QMI_RID14_STAT_MASK                                          0x07000000
#define QMI_RID14_STAT_RD(src)                       (((src) & 0x07000000)>>24)
#define QMI_RID14_STAT_SET(dst,src) \
                      (((dst) & ~0x07000000) | (((u32)(src)<<24) & 0x07000000))
/*	 Fields QMI_RID13_VALID	 */
#define QMI_RID13_VALID_WIDTH                                                 1
#define QMI_RID13_VALID_SHIFT                                                23
#define QMI_RID13_VALID_MASK                                         0x00800000
#define QMI_RID13_VALID_RD(src)                      (((src) & 0x00800000)>>23)
#define QMI_RID13_VALID_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields QMI_RID13_STAT	 */
#define QMI_RID13_STAT_WIDTH                                                  3
#define QMI_RID13_STAT_SHIFT                                                 20
#define QMI_RID13_STAT_MASK                                          0x00700000
#define QMI_RID13_STAT_RD(src)                       (((src) & 0x00700000)>>20)
#define QMI_RID13_STAT_SET(dst,src) \
                      (((dst) & ~0x00700000) | (((u32)(src)<<20) & 0x00700000))
/*	 Fields QMI_RID12_VALID	 */
#define QMI_RID12_VALID_WIDTH                                                 1
#define QMI_RID12_VALID_SHIFT                                                19
#define QMI_RID12_VALID_MASK                                         0x00080000
#define QMI_RID12_VALID_RD(src)                      (((src) & 0x00080000)>>19)
#define QMI_RID12_VALID_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields QMI_RID12_STAT	 */
#define QMI_RID12_STAT_WIDTH                                                  3
#define QMI_RID12_STAT_SHIFT                                                 16
#define QMI_RID12_STAT_MASK                                          0x00070000
#define QMI_RID12_STAT_RD(src)                       (((src) & 0x00070000)>>16)
#define QMI_RID12_STAT_SET(dst,src) \
                      (((dst) & ~0x00070000) | (((u32)(src)<<16) & 0x00070000))
/*	 Fields QMI_RID11_VALID	 */
#define QMI_RID11_VALID_WIDTH                                                 1
#define QMI_RID11_VALID_SHIFT                                                15
#define QMI_RID11_VALID_MASK                                         0x00008000
#define QMI_RID11_VALID_RD(src)                      (((src) & 0x00008000)>>15)
#define QMI_RID11_VALID_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields QMI_RID11_STAT	 */
#define QMI_RID11_STAT_WIDTH                                                  3
#define QMI_RID11_STAT_SHIFT                                                 12
#define QMI_RID11_STAT_MASK                                          0x00007000
#define QMI_RID11_STAT_RD(src)                       (((src) & 0x00007000)>>12)
#define QMI_RID11_STAT_SET(dst,src) \
                      (((dst) & ~0x00007000) | (((u32)(src)<<12) & 0x00007000))
/*	 Fields QMI_RID10_VALID	 */
#define QMI_RID10_VALID_WIDTH                                                 1
#define QMI_RID10_VALID_SHIFT                                                11
#define QMI_RID10_VALID_MASK                                         0x00000800
#define QMI_RID10_VALID_RD(src)                      (((src) & 0x00000800)>>11)
#define QMI_RID10_VALID_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields QMI_RID10_STAT	 */
#define QMI_RID10_STAT_WIDTH                                                  3
#define QMI_RID10_STAT_SHIFT                                                  8
#define QMI_RID10_STAT_MASK                                          0x00000700
#define QMI_RID10_STAT_RD(src)                        (((src) & 0x00000700)>>8)
#define QMI_RID10_STAT_SET(dst,src) \
                       (((dst) & ~0x00000700) | (((u32)(src)<<8) & 0x00000700))
/*	 Fields QMI_RID9_VALID	 */
#define QMI_RID9_VALID_WIDTH                                                  1
#define QMI_RID9_VALID_SHIFT                                                  7
#define QMI_RID9_VALID_MASK                                          0x00000080
#define QMI_RID9_VALID_RD(src)                        (((src) & 0x00000080)>>7)
#define QMI_RID9_VALID_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields QMI_RID9_STAT	 */
#define QMI_RID9_STAT_WIDTH                                                   3
#define QMI_RID9_STAT_SHIFT                                                   4
#define QMI_RID9_STAT_MASK                                           0x00000070
#define QMI_RID9_STAT_RD(src)                         (((src) & 0x00000070)>>4)
#define QMI_RID9_STAT_SET(dst,src) \
                       (((dst) & ~0x00000070) | (((u32)(src)<<4) & 0x00000070))
/*	 Fields QMI_RID8_VALID	 */
#define QMI_RID8_VALID_WIDTH                                                  1
#define QMI_RID8_VALID_SHIFT                                                  3
#define QMI_RID8_VALID_MASK                                          0x00000008
#define QMI_RID8_VALID_RD(src)                        (((src) & 0x00000008)>>3)
#define QMI_RID8_VALID_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields QMI_RID8_STAT	 */
#define QMI_RID8_STAT_WIDTH                                                   3
#define QMI_RID8_STAT_SHIFT                                                   0
#define QMI_RID8_STAT_MASK                                           0x00000007
#define QMI_RID8_STAT_RD(src)                            (((src) & 0x00000007))
#define QMI_RID8_STAT_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register MPA_QMI_RIDC	*/ 
/*	 Fields QMI_ERRQ_VALID	 */
#define QMI_ERRQ_VALID_WIDTH                                                  1
#define QMI_ERRQ_VALID_SHIFT                                                  3
#define QMI_ERRQ_VALID_MASK                                          0x00000008
#define QMI_ERRQ_VALID_RD(src)                        (((src) & 0x00000008)>>3)
#define QMI_ERRQ_VALID_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields QMI_ERRQ_STAT	 */
#define QMI_ERRQ_STAT_WIDTH                                                   3
#define QMI_ERRQ_STAT_SHIFT                                                   0
#define QMI_ERRQ_STAT_MASK                                           0x00000007
#define QMI_ERRQ_STAT_RD(src)                            (((src) & 0x00000007))
#define QMI_ERRQ_STAT_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register MPA_QMI_RID_IENA	*/ 
/*	 Fields QMI_RID7_IEN	 */
#define QMI_RID7_IEN_WIDTH                                                    2
#define QMI_RID7_IEN_SHIFT                                                   28
#define QMI_RID7_IEN_MASK                                            0x30000000
#define QMI_RID7_IEN_RD(src)                         (((src) & 0x30000000)>>28)
#define QMI_RID7_IEN_WR(src)                    (((u32)(src)<<28) & 0x30000000)
#define QMI_RID7_IEN_SET(dst,src) \
                      (((dst) & ~0x30000000) | (((u32)(src)<<28) & 0x30000000))
/*	 Fields QMI_RID6_IEN	 */
#define QMI_RID6_IEN_WIDTH                                                    2
#define QMI_RID6_IEN_SHIFT                                                   24
#define QMI_RID6_IEN_MASK                                            0x03000000
#define QMI_RID6_IEN_RD(src)                         (((src) & 0x03000000)>>24)
#define QMI_RID6_IEN_WR(src)                    (((u32)(src)<<24) & 0x03000000)
#define QMI_RID6_IEN_SET(dst,src) \
                      (((dst) & ~0x03000000) | (((u32)(src)<<24) & 0x03000000))
/*	 Fields QMI_RID5_IEN	 */
#define QMI_RID5_IEN_WIDTH                                                    2
#define QMI_RID5_IEN_SHIFT                                                   20
#define QMI_RID5_IEN_MASK                                            0x00300000
#define QMI_RID5_IEN_RD(src)                         (((src) & 0x00300000)>>20)
#define QMI_RID5_IEN_WR(src)                    (((u32)(src)<<20) & 0x00300000)
#define QMI_RID5_IEN_SET(dst,src) \
                      (((dst) & ~0x00300000) | (((u32)(src)<<20) & 0x00300000))
/*	 Fields QMI_RID4_IEN	 */
#define QMI_RID4_IEN_WIDTH                                                    2
#define QMI_RID4_IEN_SHIFT                                                   16
#define QMI_RID4_IEN_MASK                                            0x00030000
#define QMI_RID4_IEN_RD(src)                         (((src) & 0x00030000)>>16)
#define QMI_RID4_IEN_WR(src)                    (((u32)(src)<<16) & 0x00030000)
#define QMI_RID4_IEN_SET(dst,src) \
                      (((dst) & ~0x00030000) | (((u32)(src)<<16) & 0x00030000))
/*	 Fields QMI_RID3_IEN	 */
#define QMI_RID3_IEN_WIDTH                                                    2
#define QMI_RID3_IEN_SHIFT                                                   12
#define QMI_RID3_IEN_MASK                                            0x00003000
#define QMI_RID3_IEN_RD(src)                         (((src) & 0x00003000)>>12)
#define QMI_RID3_IEN_WR(src)                    (((u32)(src)<<12) & 0x00003000)
#define QMI_RID3_IEN_SET(dst,src) \
                      (((dst) & ~0x00003000) | (((u32)(src)<<12) & 0x00003000))
/*	 Fields QMI_RID2_IEN	 */
#define QMI_RID2_IEN_WIDTH                                                    2
#define QMI_RID2_IEN_SHIFT                                                    8
#define QMI_RID2_IEN_MASK                                            0x00000300
#define QMI_RID2_IEN_RD(src)                          (((src) & 0x00000300)>>8)
#define QMI_RID2_IEN_WR(src)                     (((u32)(src)<<8) & 0x00000300)
#define QMI_RID2_IEN_SET(dst,src) \
                       (((dst) & ~0x00000300) | (((u32)(src)<<8) & 0x00000300))
/*	 Fields QMI_RID1_IEN	 */
#define QMI_RID1_IEN_WIDTH                                                    2
#define QMI_RID1_IEN_SHIFT                                                    4
#define QMI_RID1_IEN_MASK                                            0x00000030
#define QMI_RID1_IEN_RD(src)                          (((src) & 0x00000030)>>4)
#define QMI_RID1_IEN_WR(src)                     (((u32)(src)<<4) & 0x00000030)
#define QMI_RID1_IEN_SET(dst,src) \
                       (((dst) & ~0x00000030) | (((u32)(src)<<4) & 0x00000030))
/*	 Fields QMI_RID0_IEN	 */
#define QMI_RID0_IEN_WIDTH                                                    2
#define QMI_RID0_IEN_SHIFT                                                    0
#define QMI_RID0_IEN_MASK                                            0x00000003
#define QMI_RID0_IEN_RD(src)                             (((src) & 0x00000003))
#define QMI_RID0_IEN_WR(src)                        (((u32)(src)) & 0x00000003)
#define QMI_RID0_IEN_SET(dst,src) \
                          (((dst) & ~0x00000003) | (((u32)(src)) & 0x00000003))

/*	Register MPA_QMI_RID_IENB	*/ 
/*	 Fields QMI_RID15_IEN	 */
#define QMI_RID15_IEN_WIDTH                                                   2
#define QMI_RID15_IEN_SHIFT                                                  28
#define QMI_RID15_IEN_MASK                                           0x30000000
#define QMI_RID15_IEN_RD(src)                        (((src) & 0x30000000)>>28)
#define QMI_RID15_IEN_WR(src)                   (((u32)(src)<<28) & 0x30000000)
#define QMI_RID15_IEN_SET(dst,src) \
                      (((dst) & ~0x30000000) | (((u32)(src)<<28) & 0x30000000))
/*	 Fields QMI_RID14_IEN	 */
#define QMI_RID14_IEN_WIDTH                                                   2
#define QMI_RID14_IEN_SHIFT                                                  24
#define QMI_RID14_IEN_MASK                                           0x03000000
#define QMI_RID14_IEN_RD(src)                        (((src) & 0x03000000)>>24)
#define QMI_RID14_IEN_WR(src)                   (((u32)(src)<<24) & 0x03000000)
#define QMI_RID14_IEN_SET(dst,src) \
                      (((dst) & ~0x03000000) | (((u32)(src)<<24) & 0x03000000))
/*	 Fields QMI_RID13_IEN	 */
#define QMI_RID13_IEN_WIDTH                                                   2
#define QMI_RID13_IEN_SHIFT                                                  20
#define QMI_RID13_IEN_MASK                                           0x00300000
#define QMI_RID13_IEN_RD(src)                        (((src) & 0x00300000)>>20)
#define QMI_RID13_IEN_WR(src)                   (((u32)(src)<<20) & 0x00300000)
#define QMI_RID13_IEN_SET(dst,src) \
                      (((dst) & ~0x00300000) | (((u32)(src)<<20) & 0x00300000))
/*	 Fields QMI_RID12_IEN	 */
#define QMI_RID12_IEN_WIDTH                                                   2
#define QMI_RID12_IEN_SHIFT                                                  16
#define QMI_RID12_IEN_MASK                                           0x00030000
#define QMI_RID12_IEN_RD(src)                        (((src) & 0x00030000)>>16)
#define QMI_RID12_IEN_WR(src)                   (((u32)(src)<<16) & 0x00030000)
#define QMI_RID12_IEN_SET(dst,src) \
                      (((dst) & ~0x00030000) | (((u32)(src)<<16) & 0x00030000))
/*	 Fields QMI_RID11_IEN	 */
#define QMI_RID11_IEN_WIDTH                                                   2
#define QMI_RID11_IEN_SHIFT                                                  12
#define QMI_RID11_IEN_MASK                                           0x00003000
#define QMI_RID11_IEN_RD(src)                        (((src) & 0x00003000)>>12)
#define QMI_RID11_IEN_WR(src)                   (((u32)(src)<<12) & 0x00003000)
#define QMI_RID11_IEN_SET(dst,src) \
                      (((dst) & ~0x00003000) | (((u32)(src)<<12) & 0x00003000))
/*	 Fields QMI_RID10_IEN	 */
#define QMI_RID10_IEN_WIDTH                                                   2
#define QMI_RID10_IEN_SHIFT                                                   8
#define QMI_RID10_IEN_MASK                                           0x00000300
#define QMI_RID10_IEN_RD(src)                         (((src) & 0x00000300)>>8)
#define QMI_RID10_IEN_WR(src)                    (((u32)(src)<<8) & 0x00000300)
#define QMI_RID10_IEN_SET(dst,src) \
                       (((dst) & ~0x00000300) | (((u32)(src)<<8) & 0x00000300))
/*	 Fields QMI_RID9_IEN	 */
#define QMI_RID9_IEN_WIDTH                                                    2
#define QMI_RID9_IEN_SHIFT                                                    4
#define QMI_RID9_IEN_MASK                                            0x00000030
#define QMI_RID9_IEN_RD(src)                          (((src) & 0x00000030)>>4)
#define QMI_RID9_IEN_WR(src)                     (((u32)(src)<<4) & 0x00000030)
#define QMI_RID9_IEN_SET(dst,src) \
                       (((dst) & ~0x00000030) | (((u32)(src)<<4) & 0x00000030))
/*	 Fields QMI_RID8_IEN	 */
#define QMI_RID8_IEN_WIDTH                                                    2
#define QMI_RID8_IEN_SHIFT                                                    0
#define QMI_RID8_IEN_MASK                                            0x00000003
#define QMI_RID8_IEN_RD(src)                             (((src) & 0x00000003))
#define QMI_RID8_IEN_WR(src)                        (((u32)(src)) & 0x00000003)
#define QMI_RID8_IEN_SET(dst,src) \
                          (((dst) & ~0x00000003) | (((u32)(src)) & 0x00000003))

/*	Register MPA_QMI_RID_IENC	*/ 
/*	 Fields QMI_ERRQ_IEN	 */
#define QMI_ERRQ_IEN_WIDTH                                                    2
#define QMI_ERRQ_IEN_SHIFT                                                    0
#define QMI_ERRQ_IEN_MASK                                            0x00000003
#define QMI_ERRQ_IEN_RD(src)                             (((src) & 0x00000003))
#define QMI_ERRQ_IEN_WR(src)                        (((u32)(src)) & 0x00000003)
#define QMI_ERRQ_IEN_SET(dst,src) \
                          (((dst) & ~0x00000003) | (((u32)(src)) & 0x00000003))

/*	Register MPA_QMI_CM_MSG0	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG0_WIDTH                                                        32
#define CM_MSG0_SHIFT                                                         0
#define CM_MSG0_MASK                                                 0xffffffff
#define CM_MSG0_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG0_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG1	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG1_WIDTH                                                        32
#define CM_MSG1_SHIFT                                                         0
#define CM_MSG1_MASK                                                 0xffffffff
#define CM_MSG1_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG1_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG2	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG2_WIDTH                                                        32
#define CM_MSG2_SHIFT                                                         0
#define CM_MSG2_MASK                                                 0xffffffff
#define CM_MSG2_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG2_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG2_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG3	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG3_WIDTH                                                        32
#define CM_MSG3_SHIFT                                                         0
#define CM_MSG3_MASK                                                 0xffffffff
#define CM_MSG3_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG3_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG3_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG4	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG4_WIDTH                                                        32
#define CM_MSG4_SHIFT                                                         0
#define CM_MSG4_MASK                                                 0xffffffff
#define CM_MSG4_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG4_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG4_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG5	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG5_WIDTH                                                        32
#define CM_MSG5_SHIFT                                                         0
#define CM_MSG5_MASK                                                 0xffffffff
#define CM_MSG5_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG5_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG5_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG6	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG6_WIDTH                                                        32
#define CM_MSG6_SHIFT                                                         0
#define CM_MSG6_MASK                                                 0xffffffff
#define CM_MSG6_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG6_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG6_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG7	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG7_WIDTH                                                        32
#define CM_MSG7_SHIFT                                                         0
#define CM_MSG7_MASK                                                 0xffffffff
#define CM_MSG7_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG7_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG7_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG8	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG8_WIDTH                                                        32
#define CM_MSG8_SHIFT                                                         0
#define CM_MSG8_MASK                                                 0xffffffff
#define CM_MSG8_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG8_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG8_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG9	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG9_WIDTH                                                        32
#define CM_MSG9_SHIFT                                                         0
#define CM_MSG9_MASK                                                 0xffffffff
#define CM_MSG9_RD(src)                                  (((src) & 0xffffffff))
#define CM_MSG9_WR(src)                             (((u32)(src)) & 0xffffffff)
#define CM_MSG9_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG10	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG0_F1_WIDTH                                                     32
#define CM_MSG0_F1_SHIFT                                                      0
#define CM_MSG0_F1_MASK                                              0xffffffff
#define CM_MSG0_F1_RD(src)                               (((src) & 0xffffffff))
#define CM_MSG0_F1_WR(src)                          (((u32)(src)) & 0xffffffff)
#define CM_MSG0_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG11	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG1_F1_WIDTH                                                     32
#define CM_MSG1_F1_SHIFT                                                      0
#define CM_MSG1_F1_MASK                                              0xffffffff
#define CM_MSG1_F1_RD(src)                               (((src) & 0xffffffff))
#define CM_MSG1_F1_WR(src)                          (((u32)(src)) & 0xffffffff)
#define CM_MSG1_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG12	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG2_F1_WIDTH                                                     32
#define CM_MSG2_F1_SHIFT                                                      0
#define CM_MSG2_F1_MASK                                              0xffffffff
#define CM_MSG2_F1_RD(src)                               (((src) & 0xffffffff))
#define CM_MSG2_F1_WR(src)                          (((u32)(src)) & 0xffffffff)
#define CM_MSG2_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG13	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG3_F1_WIDTH                                                     32
#define CM_MSG3_F1_SHIFT                                                      0
#define CM_MSG3_F1_MASK                                              0xffffffff
#define CM_MSG3_F1_RD(src)                               (((src) & 0xffffffff))
#define CM_MSG3_F1_WR(src)                          (((u32)(src)) & 0xffffffff)
#define CM_MSG3_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG14	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG4_F1_WIDTH                                                     32
#define CM_MSG4_F1_SHIFT                                                      0
#define CM_MSG4_F1_MASK                                              0xffffffff
#define CM_MSG4_F1_RD(src)                               (((src) & 0xffffffff))
#define CM_MSG4_F1_WR(src)                          (((u32)(src)) & 0xffffffff)
#define CM_MSG4_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_QMI_CM_MSG15	*/ 
/*	 Fields CM_MSG	 */
#define CM_MSG5_F1_WIDTH                                                     32
#define CM_MSG5_F1_SHIFT                                                      0
#define CM_MSG5_F1_MASK                                              0xffffffff
#define CM_MSG5_F1_RD(src)                               (((src) & 0xffffffff))
#define CM_MSG5_F1_WR(src)                          (((u32)(src)) & 0xffffffff)
#define CM_MSG5_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register EFUSE_CTL	*/ 
/*	 Fields EFUSE_FETCH	 */
#define EFUSE_FETCH_WIDTH                                                     1
#define EFUSE_FETCH_SHIFT                                                    31
#define EFUSE_FETCH_MASK                                             0x80000000
#define EFUSE_FETCH_RD(src)                          (((src) & 0x80000000)>>31)
#define EFUSE_FETCH_WR(src)                     (((u32)(src)<<31) & 0x80000000)
#define EFUSE_FETCH_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields EFUSE_ADDR	 */
#define EFUSE_ADDR_WIDTH                                                      8
#define EFUSE_ADDR_SHIFT                                                      0
#define EFUSE_ADDR_MASK                                              0x000000ff
#define EFUSE_ADDR_RD(src)                               (((src) & 0x000000ff))
#define EFUSE_ADDR_WR(src)                          (((u32)(src)) & 0x000000ff)
#define EFUSE_ADDR_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register EFUSE_STAT	*/ 
/*	 Fields EFUSEFetchIP	 */
#define EFUSEFETCHIP_WIDTH                                                    1
#define EFUSEFETCHIP_SHIFT                                                    0
#define EFUSEFETCHIP_MASK                                            0x00000001
#define EFUSEFETCHIP_RD(src)                             (((src) & 0x00000001))
#define EFUSEFETCHIP_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register EFUSE_RDDATA	*/ 
/*	 Fields EFUSE_RDDATA	 */
#define EFUSE_RDDATA_WIDTH                                                   32
#define EFUSE_RDDATA_SHIFT                                                    0
#define EFUSE_RDDATA_MASK                                            0xffffffff
#define EFUSE_RDDATA_RD(src)                             (((src) & 0xffffffff))
#define EFUSE_RDDATA_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TPM_CTL	*/ 
/*	 Fields RTC_FACC	 */
#define RTC_FACC_WIDTH                                                        1
#define RTC_FACC_SHIFT                                                        4
#define RTC_FACC_MASK                                                0x00000010
#define RTC_FACC_RD(src)                              (((src) & 0x00000010)>>4)
#define RTC_FACC_WR(src)                         (((u32)(src)<<4) & 0x00000010)
#define RTC_FACC_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields PKP_FACC	 */
#define PKP_FACC_WIDTH                                                        1
#define PKP_FACC_SHIFT                                                        3
#define PKP_FACC_MASK                                                0x00000008
#define PKP_FACC_RD(src)                              (((src) & 0x00000008)>>3)
#define PKP_FACC_WR(src)                         (((u32)(src)<<3) & 0x00000008)
#define PKP_FACC_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields CPM_LOCK	 */
#define CPM_LOCK_WIDTH                                                        1
#define CPM_LOCK_SHIFT                                                        2
#define CPM_LOCK_MASK                                                0x00000004
#define CPM_LOCK_RD(src)                              (((src) & 0x00000004)>>2)
#define CPM_LOCK_WR(src)                         (((u32)(src)<<2) & 0x00000004)
#define CPM_LOCK_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields DRAM_FACC	 */
#define DRAM_FACC_WIDTH                                                       1
#define DRAM_FACC_SHIFT                                                       1
#define DRAM_FACC_MASK                                               0x00000002
#define DRAM_FACC_RD(src)                             (((src) & 0x00000002)>>1)
#define DRAM_FACC_WR(src)                        (((u32)(src)<<1) & 0x00000002)
#define DRAM_FACC_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields IRAM_FACC	 */
#define IRAM_FACC_WIDTH                                                       1
#define IRAM_FACC_SHIFT                                                       0
#define IRAM_FACC_MASK                                               0x00000001
#define IRAM_FACC_RD(src)                                (((src) & 0x00000001))
#define IRAM_FACC_WR(src)                           (((u32)(src)) & 0x00000001)
#define IRAM_FACC_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_SCRST	*/ 
/*	 Fields CHIP	 */
#define CHIP_WIDTH                                                            1
#define CHIP_SHIFT                                                            0
#define CHIP_MASK                                                    0x00000001
#define CHIP_RD(src)                                     (((src) & 0x00000001))
#define CHIP_WR(src)                                (((u32)(src)) & 0x00000001)
#define CHIP_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_AHB_IRAM_ADDR	*/ 
/*	 Fields AHB_IRAM_ADDR	 */
#define AHB_IRAM_ADDR_WIDTH                                                  16
#define AHB_IRAM_ADDR_SHIFT                                                   0
#define AHB_IRAM_ADDR_MASK                                           0x0000ffff
#define AHB_IRAM_ADDR_RD(src)                            (((src) & 0x0000ffff))
#define AHB_IRAM_ADDR_WR(src)                       (((u32)(src)) & 0x0000ffff)
#define AHB_IRAM_ADDR_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_AHB_IRAM_DATA	*/ 
/*	 Fields AHB_IRAM_DATA	 */
#define AHB_IRAM_DATA_WIDTH                                                  32
#define AHB_IRAM_DATA_SHIFT                                                   0
#define AHB_IRAM_DATA_MASK                                           0xffffffff
#define AHB_IRAM_DATA_RD(src)                            (((src) & 0xffffffff))
#define AHB_IRAM_DATA_WR(src)                       (((u32)(src)) & 0xffffffff)
#define AHB_IRAM_DATA_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_AHB_IRAM_RDATA	*/ 
/*	 Fields AHB_IRAM_RDATA	 */
#define AHB_IRAM_RDATA_WIDTH                                                 32
#define AHB_IRAM_RDATA_SHIFT                                                  0
#define AHB_IRAM_RDATA_MASK                                          0xffffffff
#define AHB_IRAM_RDATA_RD(src)                           (((src) & 0xffffffff))
#define AHB_IRAM_RDATA_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Global Base Address	*/
#define MPA_CRDMA_I_BASE_ADDR			0x050040000ULL

/*    Address MPA_CRDMA_I  Registers */
#define CRDMA_VERSION_ADDR                                           0x00000000
#define CRDMA_VERSION_DEFAULT                                        0x00000010
#define CRDMA_CTRL_ADDR                                              0x00000004
#define CRDMA_CTRL_DEFAULT                                           0x00000000
#define CRDMA_CURR_BD_ADDR_ADDR                                      0x00000008
#define CRDMA_CURR_BD_ADDR_DEFAULT                                   0x00000000
#define CRDMA_BDP_ADDR_ADDR                                          0x00000010
#define CRDMA_BDP_ADDR_DEFAULT                                       0x00000000
#define CRDMA_STATUS_ADDR                                            0x00000014
#define CRDMA_STATUS_DEFAULT                                         0x00000000
#define CRDMA_INT_SRC_ADDR                                           0x00000034
#define CRDMA_INT_SRC_DEFAULT                                        0x00000000
#define CRDMA_INT_EN_ADDR                                            0x00000038
#define CRDMA_INT_EN_DEFAULT                                         0x00000000
#define CRDMA_POLL_CTRL_ADDR                                         0x0000003c
#define CRDMA_POLL_CTRL_DEFAULT                                      0x00000000
#define CRDMA_HEADER_LEN_ADDR                                        0x00000054
#define CRDMA_HEADER_LEN_DEFAULT                                     0x00000000
#define CRDMA_TRAILER_LEN_ADDR                                       0x00000058
#define CRDMA_TRAILER_LEN_DEFAULT                                    0x00000000
#define CRDMA_DTX_STATUS_ADDR_ADDR                                   0x000000a8
#define CRDMA_DTX_STATUS_ADDR_DEFAULT                                0x00000000
#define CRDMA_DRX_STATUS_ADDR_ADDR                                   0x000000ac
#define CRDMA_DRX_STATUS_ADDR_DEFAULT                                0x00000000
#define CRDMA_CTRL_STATUS_ADDR_ADDR                                  0x000000b0
#define CRDMA_CTRL_STATUS_ADDR_DEFAULT                               0x00000000

/*	Register CRDMA_VERSION	*/ 
/*	 Fields crdma_revision	 */
#define CRDMA_REVISION_WIDTH                                                  8
#define CRDMA_REVISION_SHIFT                                                 24
#define CRDMA_REVISION_MASK                                          0xff000000
#define CRDMA_REVISION_RD(src)                       (((src) & 0xff000000)>>24)
#define CRDMA_REVISION_SET(dst,src) \
                      (((dst) & ~0xff000000) | (((u32)(src)<<24) & 0xff000000))
/*	 Fields crdma_version	 */
#define CRDMA_VERSION_WIDTH                                                   8
#define CRDMA_VERSION_SHIFT                                                  16
#define CRDMA_VERSION_MASK                                           0x00ff0000
#define CRDMA_VERSION_RD(src)                        (((src) & 0x00ff0000)>>16)
#define CRDMA_VERSION_SET(dst,src) \
                      (((dst) & ~0x00ff0000) | (((u32)(src)<<16) & 0x00ff0000))
/*	 Fields crdma_id	 */
#define CRDMA_ID_WIDTH                                                       16
#define CRDMA_ID_SHIFT                                                        0
#define CRDMA_ID_MASK                                                0x0000ffff
#define CRDMA_ID_RD(src)                                 (((src) & 0x0000ffff))
#define CRDMA_ID_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register CRDMA_CTRL	*/ 
/*	 Fields csr_swp_en	 */
#define CSR_SWP_EN_WIDTH                                                      1
#define CSR_SWP_EN_SHIFT                                                      5
#define CSR_SWP_EN_MASK                                              0x00000020
#define CSR_SWP_EN_RD(src)                            (((src) & 0x00000020)>>5)
#define CSR_SWP_EN_WR(src)                       (((u32)(src)<<5) & 0x00000020)
#define CSR_SWP_EN_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields csr_config_update	 */
#define CSR_CONFIG_UPDATE_WIDTH                                               1
#define CSR_CONFIG_UPDATE_SHIFT                                               4
#define CSR_CONFIG_UPDATE_MASK                                       0x00000010
#define CSR_CONFIG_UPDATE_RD(src)                     (((src) & 0x00000010)>>4)
#define CSR_CONFIG_UPDATE_WR(src)                (((u32)(src)<<4) & 0x00000010)
#define CSR_CONFIG_UPDATE_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields csr_bdp_ch_start_wstb	 */
#define CSR_BDP_CH_START_WSTB_WIDTH                                           1
#define CSR_BDP_CH_START_WSTB_SHIFT                                           2
#define CSR_BDP_CH_START_WSTB_MASK                                   0x00000004
#define CSR_BDP_CH_START_WSTB_RD(src)                 (((src) & 0x00000004)>>2)
#define CSR_BDP_CH_START_WSTB_WR(src)            (((u32)(src)<<2) & 0x00000004)
#define CSR_BDP_CH_START_WSTB_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields csr_bdp_poll_cntr_en	 */
#define CSR_BDP_POLL_CNTR_EN_WIDTH                                            1
#define CSR_BDP_POLL_CNTR_EN_SHIFT                                            1
#define CSR_BDP_POLL_CNTR_EN_MASK                                    0x00000002
#define CSR_BDP_POLL_CNTR_EN_RD(src)                  (((src) & 0x00000002)>>1)
#define CSR_BDP_POLL_CNTR_EN_WR(src)             (((u32)(src)<<1) & 0x00000002)
#define CSR_BDP_POLL_CNTR_EN_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields csr_dma_en	 */
#define CSR_DMA_EN_WIDTH                                                      1
#define CSR_DMA_EN_SHIFT                                                      0
#define CSR_DMA_EN_MASK                                              0x00000001
#define CSR_DMA_EN_RD(src)                               (((src) & 0x00000001))
#define CSR_DMA_EN_WR(src)                          (((u32)(src)) & 0x00000001)
#define CSR_DMA_EN_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CRDMA_CURR_BD_ADDR	*/ 
/*	 Fields tfdma_bdp_curr_bd_addr	 */
#define TFDMA_BDP_CURR_BD_ADDR_WIDTH                                         32
#define TFDMA_BDP_CURR_BD_ADDR_SHIFT                                          0
#define TFDMA_BDP_CURR_BD_ADDR_MASK                                  0xffffffff
#define TFDMA_BDP_CURR_BD_ADDR_RD(src)                   (((src) & 0xffffffff))
#define TFDMA_BDP_CURR_BD_ADDR_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CRDMA_BDP_ADDR	*/ 
/*	 Fields csr_bdp_bd_addr	 */
#define CSR_BDP_BD_ADDR_WIDTH                                                32
#define CSR_BDP_BD_ADDR_SHIFT                                                 0
#define CSR_BDP_BD_ADDR_MASK                                         0xffffffff
#define CSR_BDP_BD_ADDR_RD(src)                          (((src) & 0xffffffff))
#define CSR_BDP_BD_ADDR_WR(src)                     (((u32)(src)) & 0xffffffff)
#define CSR_BDP_BD_ADDR_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CRDMA_STATUS	*/ 
/*	 Fields bdp_csr_state	 */
#define BDP_CSR_STATE_WIDTH                                                   4
#define BDP_CSR_STATE_SHIFT                                                  18
#define BDP_CSR_STATE_MASK                                           0x003c0000
#define BDP_CSR_STATE_RD(src)                        (((src) & 0x003c0000)>>18)
#define BDP_CSR_STATE_SET(dst,src) \
                      (((dst) & ~0x003c0000) | (((u32)(src)<<18) & 0x003c0000))
/*	 Fields bdp_csr_dma_start	 */
#define BDP_CSR_DMA_START_WIDTH                                               1
#define BDP_CSR_DMA_START_SHIFT                                              17
#define BDP_CSR_DMA_START_MASK                                       0x00020000
#define BDP_CSR_DMA_START_RD(src)                    (((src) & 0x00020000)>>17)
#define BDP_CSR_DMA_START_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields bdp_csr_dma_actv	 */
#define BDP_CSR_DMA_ACTV_WIDTH                                                1
#define BDP_CSR_DMA_ACTV_SHIFT                                               16
#define BDP_CSR_DMA_ACTV_MASK                                        0x00010000
#define BDP_CSR_DMA_ACTV_RD(src)                     (((src) & 0x00010000)>>16)
#define BDP_CSR_DMA_ACTV_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields bdp_csr_bdctrl	 */
#define BDP_CSR_BDCTRL_WIDTH                                                 16
#define BDP_CSR_BDCTRL_SHIFT                                                  0
#define BDP_CSR_BDCTRL_MASK                                          0x0000ffff
#define BDP_CSR_BDCTRL_RD(src)                           (((src) & 0x0000ffff))
#define BDP_CSR_BDCTRL_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register CRDMA_INT_SRC	*/ 
/*	 Fields bdp_csr_pkt_int	 */
#define BDP_CSR_PKT_INT_WIDTH                                                 1
#define BDP_CSR_PKT_INT_SHIFT                                                 2
#define BDP_CSR_PKT_INT_MASK                                         0x00000004
#define BDP_CSR_PKT_INT_RD(src)                       (((src) & 0x00000004)>>2)
#define BDP_CSR_PKT_INT_WR(src)                  (((u32)(src)<<2) & 0x00000004)
#define BDP_CSR_PKT_INT_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields bdp_csr_cbd_int	 */
#define BDP_CSR_CBD_INT_WIDTH                                                 1
#define BDP_CSR_CBD_INT_SHIFT                                                 1
#define BDP_CSR_CBD_INT_MASK                                         0x00000002
#define BDP_CSR_CBD_INT_RD(src)                       (((src) & 0x00000002)>>1)
#define BDP_CSR_CBD_INT_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define BDP_CSR_CBD_INT_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields crdma_int	 */
#define CRDMA_INT_WIDTH                                                       1
#define CRDMA_INT_SHIFT                                                       0
#define CRDMA_INT_MASK                                               0x00000001
#define CRDMA_INT_RD(src)                                (((src) & 0x00000001))
#define CRDMA_INT_WR(src)                           (((u32)(src)) & 0x00000001)
#define CRDMA_INT_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CRDMA_INT_EN	*/ 
/*	 Fields bdp_csr_pkt_int_en	 */
#define BDP_CSR_PKT_INT_EN_WIDTH                                              1
#define BDP_CSR_PKT_INT_EN_SHIFT                                              2
#define BDP_CSR_PKT_INT_EN_MASK                                      0x00000004
#define BDP_CSR_PKT_INT_EN_RD(src)                    (((src) & 0x00000004)>>2)
#define BDP_CSR_PKT_INT_EN_WR(src)               (((u32)(src)<<2) & 0x00000004)
#define BDP_CSR_PKT_INT_EN_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields bdp_csr_cbd_int_en	 */
#define BDP_CSR_CBD_INT_EN_WIDTH                                              1
#define BDP_CSR_CBD_INT_EN_SHIFT                                              1
#define BDP_CSR_CBD_INT_EN_MASK                                      0x00000002
#define BDP_CSR_CBD_INT_EN_RD(src)                    (((src) & 0x00000002)>>1)
#define BDP_CSR_CBD_INT_EN_WR(src)               (((u32)(src)<<1) & 0x00000002)
#define BDP_CSR_CBD_INT_EN_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields crdma_int_en	 */
#define CRDMA_INT_EN_WIDTH                                                    1
#define CRDMA_INT_EN_SHIFT                                                    0
#define CRDMA_INT_EN_MASK                                            0x00000001
#define CRDMA_INT_EN_RD(src)                             (((src) & 0x00000001))
#define CRDMA_INT_EN_WR(src)                        (((u32)(src)) & 0x00000001)
#define CRDMA_INT_EN_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CRDMA_POLL_CTRL	*/ 
/*	 Fields csr_bdp_poll_cntr	 */
#define CSR_BDP_POLL_CNTR_WIDTH                                              16
#define CSR_BDP_POLL_CNTR_SHIFT                                               0
#define CSR_BDP_POLL_CNTR_MASK                                       0x0000ffff
#define CSR_BDP_POLL_CNTR_RD(src)                        (((src) & 0x0000ffff))
#define CSR_BDP_POLL_CNTR_WR(src)                   (((u32)(src)) & 0x0000ffff)
#define CSR_BDP_POLL_CNTR_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register CRDMA_HEADER_LEN	*/ 
/*	 Fields csr_hdr_len	 */
#define CSR_HDR_LEN_WIDTH                                                     8
#define CSR_HDR_LEN_SHIFT                                                     0
#define CSR_HDR_LEN_MASK                                             0x000000ff
#define CSR_HDR_LEN_RD(src)                              (((src) & 0x000000ff))
#define CSR_HDR_LEN_WR(src)                         (((u32)(src)) & 0x000000ff)
#define CSR_HDR_LEN_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register CRDMA_TRAILER_LEN	*/ 
/*	 Fields csr_trlr_len	 */
#define CSR_TRLR_LEN_WIDTH                                                    8
#define CSR_TRLR_LEN_SHIFT                                                    0
#define CSR_TRLR_LEN_MASK                                            0x000000ff
#define CSR_TRLR_LEN_RD(src)                             (((src) & 0x000000ff))
#define CSR_TRLR_LEN_WR(src)                        (((u32)(src)) & 0x000000ff)
#define CSR_TRLR_LEN_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register CRDMA_DTX_STATUS_ADDR	*/ 
/*	 Fields dtx_csr_curr_buf_len	 */
#define DTX_CSR_CURR_BUF_LEN_WIDTH                                           16
#define DTX_CSR_CURR_BUF_LEN_SHIFT                                            4
#define DTX_CSR_CURR_BUF_LEN_MASK                                    0x000ffff0
#define DTX_CSR_CURR_BUF_LEN_RD(src)                  (((src) & 0x000ffff0)>>4)
#define DTX_CSR_CURR_BUF_LEN_SET(dst,src) \
                       (((dst) & ~0x000ffff0) | (((u32)(src)<<4) & 0x000ffff0))
/*	 Fields dtx_csr_state	 */
#define DTX_CSR_STATE_WIDTH                                                   4
#define DTX_CSR_STATE_SHIFT                                                   0
#define DTX_CSR_STATE_MASK                                           0x0000000f
#define DTX_CSR_STATE_RD(src)                            (((src) & 0x0000000f))
#define DTX_CSR_STATE_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register CRDMA_DRX_STATUS_ADDR	*/ 
/*	 Fields drx_csr_curr_buf_len	 */
#define DRX_CSR_CURR_BUF_LEN_WIDTH                                           16
#define DRX_CSR_CURR_BUF_LEN_SHIFT                                            4
#define DRX_CSR_CURR_BUF_LEN_MASK                                    0x000ffff0
#define DRX_CSR_CURR_BUF_LEN_RD(src)                  (((src) & 0x000ffff0)>>4)
#define DRX_CSR_CURR_BUF_LEN_SET(dst,src) \
                       (((dst) & ~0x000ffff0) | (((u32)(src)<<4) & 0x000ffff0))
/*	 Fields drx_csr_state	 */
#define DRX_CSR_STATE_WIDTH                                                   4
#define DRX_CSR_STATE_SHIFT                                                   0
#define DRX_CSR_STATE_MASK                                           0x0000000f
#define DRX_CSR_STATE_RD(src)                            (((src) & 0x0000000f))
#define DRX_CSR_STATE_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register CRDMA_CTRL_STATUS_ADDR	*/ 
/*	 Fields drx_csr_state	 */
#define DRX_CSR_STATE_F1_WIDTH                                                4
#define DRX_CSR_STATE_F1_SHIFT                                                0
#define DRX_CSR_STATE_F1_MASK                                        0x0000000f
#define DRX_CSR_STATE_F1_RD(src)                         (((src) & 0x0000000f))
#define DRX_CSR_STATE_F1_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Global Base Address	*/
#define MPA_PKP_PKA_I_BASE_ADDR			0xd00420000ULL

/*    Address MPA_PKP_PKA_I  Registers */
#define PKA_APTR_ADDR                                                0x00000000
#define PKA_APTR_DEFAULT                                             0x00000000
#define PKA_BPTR_ADDR                                                0x00000004
#define PKA_BPTR_DEFAULT                                             0x00000000
#define PKA_CPTR_ADDR                                                0x00000008
#define PKA_CPTR_DEFAULT                                             0x00000000
#define PKA_DPTR_ADDR                                                0x0000000c
#define PKA_DPTR_DEFAULT                                             0x00000000
#define PKA_ALENGTH_ADDR                                             0x00000010
#define PKA_ALENGTH_DEFAULT                                          0x00000000
#define PKA_BLENGTH_ADDR                                             0x00000014
#define PKA_BLENGTH_DEFAULT                                          0x00000000
#define PKA_SHIFT_ADDR                                               0x00000018
#define PKA_SHIFT_DEFAULT                                            0x00000000
#define PKA_FUNCTION_ADDR                                            0x0000001c
#define PKA_FUNCTION_DEFAULT                                         0x00000000
#define PKA_COMPARE_ADDR                                             0x00000020
#define PKA_COMPARE_DEFAULT                                          0x00000001
#define PKA_MSW_ADDR                                                 0x00000024
#define PKA_MSW_DEFAULT                                              0x00008000
#define PKA_DIVMSW_ADDR                                              0x00000028
#define PKA_DIVMSW_DEFAULT                                           0x00008000
#define PKA_SEQ_CTRL_ADDR                                            0x000000c8
#define PKA_SEQ_CTRL_DEFAULT                                         0x00000000

/*	Register PKA_APTR	*/ 
/*	 Fields APTR	 */
#define APTR_WIDTH                                                           11
#define APTR_SHIFT                                                            0
#define APTR_MASK                                                    0x000007ff
#define APTR_RD(src)                                     (((src) & 0x000007ff))
#define APTR_WR(src)                                (((u32)(src)) & 0x000007ff)
#define APTR_SET(dst,src) \
                          (((dst) & ~0x000007ff) | (((u32)(src)) & 0x000007ff))

/*	Register PKA_BPTR	*/ 
/*	 Fields BPTR	 */
#define BPTR_WIDTH                                                           11
#define BPTR_SHIFT                                                            0
#define BPTR_MASK                                                    0x000007ff
#define BPTR_RD(src)                                     (((src) & 0x000007ff))
#define BPTR_WR(src)                                (((u32)(src)) & 0x000007ff)
#define BPTR_SET(dst,src) \
                          (((dst) & ~0x000007ff) | (((u32)(src)) & 0x000007ff))

/*	Register PKA_CPTR	*/ 
/*	 Fields CPTR	 */
#define CPTR_WIDTH                                                           11
#define CPTR_SHIFT                                                            0
#define CPTR_MASK                                                    0x000007ff
#define CPTR_RD(src)                                     (((src) & 0x000007ff))
#define CPTR_WR(src)                                (((u32)(src)) & 0x000007ff)
#define CPTR_SET(dst,src) \
                          (((dst) & ~0x000007ff) | (((u32)(src)) & 0x000007ff))

/*	Register PKA_DPTR	*/ 
/*	 Fields DPTR	 */
#define DPTR_WIDTH                                                           11
#define DPTR_SHIFT                                                            0
#define DPTR_MASK                                                    0x000007ff
#define DPTR_RD(src)                                     (((src) & 0x000007ff))
#define DPTR_WR(src)                                (((u32)(src)) & 0x000007ff)
#define DPTR_SET(dst,src) \
                          (((dst) & ~0x000007ff) | (((u32)(src)) & 0x000007ff))

/*	Register PKA_ALENGTH	*/ 
/*	 Fields ALENGTH	 */
#define ALENGTH_WIDTH                                                         9
#define ALENGTH_SHIFT                                                         0
#define ALENGTH_MASK                                                 0x000001ff
#define ALENGTH_RD(src)                                  (((src) & 0x000001ff))
#define ALENGTH_WR(src)                             (((u32)(src)) & 0x000001ff)
#define ALENGTH_SET(dst,src) \
                          (((dst) & ~0x000001ff) | (((u32)(src)) & 0x000001ff))

/*	Register PKA_BLENGTH	*/ 
/*	 Fields BLENGTH	 */
#define BLENGTH_WIDTH                                                         9
#define BLENGTH_SHIFT                                                         0
#define BLENGTH_MASK                                                 0x000001ff
#define BLENGTH_RD(src)                                  (((src) & 0x000001ff))
#define BLENGTH_WR(src)                             (((u32)(src)) & 0x000001ff)
#define BLENGTH_SET(dst,src) \
                          (((dst) & ~0x000001ff) | (((u32)(src)) & 0x000001ff))

/*	Register PKA_SHIFT	*/ 
/*	 Fields SHIFT	 */
#define SHIFT_WIDTH                                                           5
#define SHIFT_SHIFT                                                           0
#define SHIFT_MASK                                                   0x0000001f
#define SHIFT_RD(src)                                    (((src) & 0x0000001f))
#define SHIFT_WR(src)                               (((u32)(src)) & 0x0000001f)
#define SHIFT_SET(dst,src) \
                          (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register PKA_FUNCTION	*/ 
/*	 Fields STALL_RES	 */
#define STALL_RES_WIDTH                                                       1
#define STALL_RES_SHIFT                                                      24
#define STALL_RES_MASK                                               0x01000000
#define STALL_RES_RD(src)                            (((src) & 0x01000000)>>24)
#define STALL_RES_WR(src)                       (((u32)(src)<<24) & 0x01000000)
#define STALL_RES_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields RUN	 */
#define RUN_WIDTH                                                             1
#define RUN_SHIFT                                                            15
#define RUN_MASK                                                     0x00008000
#define RUN_RD(src)                                  (((src) & 0x00008000)>>15)
#define RUN_WR(src)                             (((u32)(src)<<15) & 0x00008000)
#define RUN_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields SEQ_OP	 */
#define SEQ_OP_WIDTH                                                          3
#define SEQ_OP_SHIFT                                                         12
#define SEQ_OP_MASK                                                  0x00007000
#define SEQ_OP_RD(src)                               (((src) & 0x00007000)>>12)
#define SEQ_OP_WR(src)                          (((u32)(src)<<12) & 0x00007000)
#define SEQ_OP_SET(dst,src) \
                      (((dst) & ~0x00007000) | (((u32)(src)<<12) & 0x00007000))
/*	 Fields COPY	 */
#define COPY_WIDTH                                                            1
#define COPY_SHIFT                                                           11
#define COPY_MASK                                                    0x00000800
#define COPY_RD(src)                                 (((src) & 0x00000800)>>11)
#define COPY_WR(src)                            (((u32)(src)<<11) & 0x00000800)
#define COPY_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields COMPARE	 */
#define COMPARE_WIDTH                                                         1
#define COMPARE_SHIFT                                                        10
#define COMPARE_MASK                                                 0x00000400
#define COMPARE_RD(src)                              (((src) & 0x00000400)>>10)
#define COMPARE_WR(src)                         (((u32)(src)<<10) & 0x00000400)
#define COMPARE_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields MODULO	 */
#define MODULO_WIDTH                                                          1
#define MODULO_SHIFT                                                          9
#define MODULO_MASK                                                  0x00000200
#define MODULO_RD(src)                                (((src) & 0x00000200)>>9)
#define MODULO_WR(src)                           (((u32)(src)<<9) & 0x00000200)
#define MODULO_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields DIVIDE	 */
#define DIVIDE_WIDTH                                                          1
#define DIVIDE_SHIFT                                                          8
#define DIVIDE_MASK                                                  0x00000100
#define DIVIDE_RD(src)                                (((src) & 0x00000100)>>8)
#define DIVIDE_WR(src)                           (((u32)(src)<<8) & 0x00000100)
#define DIVIDE_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields LSHIFT	 */
#define LSHIFT_WIDTH                                                          1
#define LSHIFT_SHIFT                                                          7
#define LSHIFT_MASK                                                  0x00000080
#define LSHIFT_RD(src)                                (((src) & 0x00000080)>>7)
#define LSHIFT_WR(src)                           (((u32)(src)<<7) & 0x00000080)
#define LSHIFT_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields RSHIFT	 */
#define RSHIFT_WIDTH                                                          1
#define RSHIFT_SHIFT                                                          6
#define RSHIFT_MASK                                                  0x00000040
#define RSHIFT_RD(src)                                (((src) & 0x00000040)>>6)
#define RSHIFT_WR(src)                           (((u32)(src)<<6) & 0x00000040)
#define RSHIFT_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields SUBTRACT	 */
#define SUBTRACT_WIDTH                                                        1
#define SUBTRACT_SHIFT                                                        5
#define SUBTRACT_MASK                                                0x00000020
#define SUBTRACT_RD(src)                              (((src) & 0x00000020)>>5)
#define SUBTRACT_WR(src)                         (((u32)(src)<<5) & 0x00000020)
#define SUBTRACT_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields ADD	 */
#define ADD_WIDTH                                                             1
#define ADD_SHIFT                                                             4
#define ADD_MASK                                                     0x00000010
#define ADD_RD(src)                                   (((src) & 0x00000010)>>4)
#define ADD_WR(src)                              (((u32)(src)<<4) & 0x00000010)
#define ADD_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields MS1	 */
#define MS1_WIDTH                                                             1
#define MS1_SHIFT                                                             3
#define MS1_MASK                                                     0x00000008
#define MS1_RD(src)                                   (((src) & 0x00000008)>>3)
#define MS1_WR(src)                              (((u32)(src)<<3) & 0x00000008)
#define MS1_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields ADDSUB	 */
#define ADDSUB_WIDTH                                                          1
#define ADDSUB_SHIFT                                                          1
#define ADDSUB_MASK                                                  0x00000002
#define ADDSUB_RD(src)                                (((src) & 0x00000002)>>1)
#define ADDSUB_WR(src)                           (((u32)(src)<<1) & 0x00000002)
#define ADDSUB_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields MULTIPLY	 */
#define MULTIPLY_WIDTH                                                        1
#define MULTIPLY_SHIFT                                                        0
#define MULTIPLY_MASK                                                0x00000001
#define MULTIPLY_RD(src)                                 (((src) & 0x00000001))
#define MULTIPLY_WR(src)                            (((u32)(src)) & 0x00000001)
#define MULTIPLY_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register PKA_COMPARE	*/ 
/*	 Fields A_GT_B	 */
#define A_GT_B_WIDTH                                                          1
#define A_GT_B_SHIFT                                                          2
#define A_GT_B_MASK                                                  0x00000004
#define A_GT_B_RD(src)                                (((src) & 0x00000004)>>2)
#define A_GT_B_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields A_LT_B	 */
#define A_LT_B_WIDTH                                                          1
#define A_LT_B_SHIFT                                                          1
#define A_LT_B_MASK                                                  0x00000002
#define A_LT_B_RD(src)                                (((src) & 0x00000002)>>1)
#define A_LT_B_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields A_EQ_B	 */
#define A_EQ_B_WIDTH                                                          1
#define A_EQ_B_SHIFT                                                          0
#define A_EQ_B_MASK                                                  0x00000001
#define A_EQ_B_RD(src)                                   (((src) & 0x00000001))
#define A_EQ_B_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register PKA_MSW	*/ 
/*	 Fields ZERO	 */
#define ZERO_WIDTH                                                            1
#define ZERO_SHIFT                                                           15
#define ZERO_MASK                                                    0x00008000
#define ZERO_RD(src)                                 (((src) & 0x00008000)>>15)
#define ZERO_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields ADDRESS	 */
#define ADDRESS_WIDTH                                                        11
#define ADDRESS_SHIFT                                                         0
#define ADDRESS_MASK                                                 0x000007ff
#define ADDRESS_RD(src)                                  (((src) & 0x000007ff))
#define ADDRESS_SET(dst,src) \
                          (((dst) & ~0x000007ff) | (((u32)(src)) & 0x000007ff))

/*	Register PKA_DIVMSW	*/ 
/*	 Fields ZERO	 */
#define ZERO_F1_WIDTH                                                         1
#define ZERO_F1_SHIFT                                                        15
#define ZERO_F1_MASK                                                 0x00008000
#define ZERO_F1_RD(src)                              (((src) & 0x00008000)>>15)
#define ZERO_F1_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields ADDRESS	 */
#define ADDRESS_F1_WIDTH                                                     11
#define ADDRESS_F1_SHIFT                                                      0
#define ADDRESS_F1_MASK                                              0x000007ff
#define ADDRESS_F1_RD(src)                               (((src) & 0x000007ff))
#define ADDRESS_F1_SET(dst,src) \
                          (((dst) & ~0x000007ff) | (((u32)(src)) & 0x000007ff))

/*	Register PKA_SEQ_CTRL	*/ 
/*	 Fields RESET	 */
#define RESET_WIDTH                                                           1
#define RESET_SHIFT                                                          31
#define RESET_MASK                                                   0x80000000
#define RESET_RD(src)                                (((src) & 0x80000000)>>31)
#define RESET_WR(src)                           (((u32)(src)<<31) & 0x80000000)
#define RESET_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields SEQ_STAT	 */
#define SEQ_STAT_WIDTH                                                        8
#define SEQ_STAT_SHIFT                                                        8
#define SEQ_STAT_MASK                                                0x0000ff00
#define SEQ_STAT_RD(src)                              (((src) & 0x0000ff00)>>8)
#define SEQ_STAT_WR(src)                         (((u32)(src)<<8) & 0x0000ff00)
#define SEQ_STAT_SET(dst,src) \
                       (((dst) & ~0x0000ff00) | (((u32)(src)<<8) & 0x0000ff00))
/*	 Fields CTRL_TRIG	 */
#define CTRL_TRIG_WIDTH                                                       8
#define CTRL_TRIG_SHIFT                                                       0
#define CTRL_TRIG_MASK                                               0x000000ff
#define CTRL_TRIG_RD(src)                                (((src) & 0x000000ff))
#define CTRL_TRIG_WR(src)                           (((u32)(src)) & 0x000000ff)
#define CTRL_TRIG_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Global Base Address	*/
#define MPA_REG_CSR_I_BASE_ADDR			0xddd8b0800ULL

/*    Address MPA_REG_CSR_I  Registers */
#define CPM_CMD_CTL_ADDR                                             0x00000200
#define CPM_CMD_CTL_DEFAULT                                          0x00000000
#define CPM_CMD_STAT_ADDR                                            0x00000204
#define CPM_CMD_STAT_DEFAULT                                         0x00000000
#define CPM_RDDATA_ADDR                                              0x0000020c
#define CPM_RDDATA_DEFAULT                                           0x00000000
#define CPM_STAT_ADDR                                                0x00000210
#define CPM_STAT_DEFAULT                                             0x00000000
#define CPM_STATMASK_ADDR                                            0x00000214
#define MPA_IRAM_ADDR_ADDR                                           0x00000220
#define MPA_IRAM_ADDR_DEFAULT                                        0x00000000
#define MPA_IRAM_DATA_ADDR                                           0x00000224
#define MPA_IRAM_DATA_DEFAULT                                        0x00000000
#define MPA_IRAM_RDATA_ADDR                                          0x00000228
#define MPA_IRAM_RDATA_DEFAULT                                       0x00000000
#define MPA_DRAM_ADDR_ADDR                                           0x00000230
#define MPA_DRAM_ADDR_DEFAULT                                        0x00000000
#define MPA_DRAM_DATA_ADDR                                           0x00000234
#define MPA_DRAM_DATA_DEFAULT                                        0x00000000
#define MPA_DRAM_RDATA_ADDR                                          0x00000238
#define MPA_DRAM_RDATA_DEFAULT                                       0x00000000
#define MPA_P0_PCODE_ADDR                                            0x00000240
#define MPA_P0_PCODE_DEFAULT                                         0x00000000
#define MPA_P1_PCODE_ADDR                                            0x00000244
#define MPA_P1_PCODE_DEFAULT                                         0x00000000
#define MPA_P0_ACODE_ADDR                                            0x00000248
#define MPA_P0_ACODE_DEFAULT                                         0x00000000
#define MPA_P1_ACODE_ADDR                                            0x0000024c
#define MPA_P1_ACODE_DEFAULT                                         0x00000000
#define MPA_P0_INTSTAT_ADDR                                          0x00000250
#define MPA_P0_INTSTAT_DEFAULT                                       0x00000000
#define MPA_P0_INTSTATMASK_ADDR                                      0x00000254
#define MPA_P1_INTSTAT_ADDR                                          0x00000258
#define MPA_P1_INTSTAT_DEFAULT                                       0x00000000
#define MPA_P1_INTSTATMASK_ADDR                                      0x0000025c
#define MPA_ARM_INTSTAT0_ADDR                                        0x00000260
#define MPA_ARM_INTSTAT0_DEFAULT                                     0x00000000
#define MPA_ARM_INTSTAT0MASK_ADDR                                    0x00000264
#define MPA_ARM_INTSTAT1_ADDR                                        0x00000268
#define MPA_ARM_INTSTAT1_DEFAULT                                     0x00000000
#define MPA_ARM_INTSTAT1MASK_ADDR                                    0x0000026c
#define MPA_ARM_INTSTAT2_ADDR                                        0x00000270
#define MPA_ARM_INTSTAT2_DEFAULT                                     0x00000000
#define MPA_ARM_INTSTAT2MASK_ADDR                                    0x00000274
#define MPA_WOL_STAT_ADDR                                            0x00000284
#define MPA_WOL_STAT_DEFAULT                                         0x00000000
#define MPA_GPIO_INT_LVL_ADDR                                        0x00000290
#define MPA_GPIO_INT_LVL_DEFAULT                                     0x00000000
#define MPA_GPIO_ADDR                                                0x00000294
#define MPA_GPIO_DEFAULT                                             0x00000000
#define MPA_GPIO_IN_ADDR                                             0x00000298
#define MPA_GPIO_IN_DEFAULT                                          0x00000000
#define MPA_ATMR0_ADDR                                               0x000002a0
#define MPA_ATMR0_DEFAULT                                            0x00000000
#define MPA_ATMR1_ADDR                                               0x000002a4
#define MPA_ATMR1_DEFAULT                                            0x00000000
#define MPA_ATMR2_ADDR                                               0x000002a8
#define MPA_ATMR2_DEFAULT                                            0x00000000
#define MPA_IIDMA_CTL_ADDR                                           0x000002e0
#define MPA_IIDMA_CTL_DEFAULT                                        0x00000000
#define MPA_IIDMA_CNT_ADDR                                           0x000002e4
#define MPA_IIDMA_CNT_DEFAULT                                        0x00001000
#define MPA_IIDMA_IRAMADDR_ADDR                                      0x000002e8
#define MPA_IIDMA_IRAMADDR_DEFAULT                                   0x00000000
#define MPA_IIDMA_IICADDR_ADDR                                       0x000002ec
#define MPA_IIDMA_IICADDR_DEFAULT                                    0x00000000
#define MPA_IIDMA_STAT_ADDR                                          0x000002f0
#define MPA_IIDMA_STAT_DEFAULT                                       0x00000000
#define MPA_DMA_CTL_ADDR                                             0x00000300
#define MPA_DMA_CTL_DEFAULT                                          0x00000004
#define MPA_DMA_CNT_ADDR                                             0x00000304
#define MPA_DMA_CNT_DEFAULT                                          0x00000000
#define MPA_DMA_LADDR_ADDR                                           0x00000308
#define MPA_DMA_LADDR_DEFAULT                                        0x00000000
#define MPA_DMA_HADDR_ADDR                                           0x0000030c
#define MPA_DMA_HADDR_DEFAULT                                        0x00000000
#define MPA_DMA_CNT_RB_ADDR                                          0x00000314
#define MPA_DMA_CNT_RB_DEFAULT                                       0x00000000
#define MPA_DMA_LADDR_RB_ADDR                                        0x00000318
#define MPA_DMA_LADDR_RB_DEFAULT                                     0x00000000
#define MPA_DMA_HADDR_RB_ADDR                                        0x0000031c
#define MPA_DMA_HADDR_RB_DEFAULT                                     0x00000000
#define MPA_DIAG_ADDR                                                0x00000320
#define MPA_DIAG_DEFAULT                                             0x00000000
#define MPA_LED_ADDR                                                 0x00000324
#define MPA_LED_DEFAULT                                              0x00000000
#define MPA_INTDBG0_ADDR                                             0x00000328
#define MPA_INTDBG0_DEFAULT                                          0x00000000
#define MPA_INTDBG1_ADDR                                             0x0000032c
#define MPA_INTDBG1_DEFAULT                                          0x00000000
#define MPA_ERR_ADDR0_ADDR                                           0x00000330
#define MPA_ERR_ADDR0_DEFAULT                                        0x00000000
#define MPA_ERR_ADDR1_ADDR                                           0x00000334
#define MPA_ERR_ADDR1_DEFAULT                                        0x00000000
#define MPA_ERR_ADDR                                                 0x00000340
#define MPA_ERR_DEFAULT                                              0x00000000
#define MPA_ERRMASK_ADDR                                             0x00000344
#define MPA_ERR_INT_MASK_ADDR                                        0x00000348
#define MPA_ERR_INT_MASK_DEFAULT                                     0x01ff07ff
#define MPA_QMI_INTSTAT_ADDR                                         0x00000350
#define MPA_QMI_INTSTAT_DEFAULT                                      0x00000000
#define MPA_QMI_INTSTATMASK_ADDR                                     0x00000354
#define MPA_SCRATCH_ADDR                                             0x00000360
#define MPA_SCRATCH_DEFAULT                                          0x00000000
#define MPA_SCRATCH1_ADDR                                            0x00000364
#define MPA_SCRATCH1_DEFAULT                                         0x00000000
#define MPA_SCRATCH2_ADDR                                            0x00000368
#define MPA_SCRATCH2_DEFAULT                                         0x00000000
#define MPA_SLP_TMR_ADDR                                             0x0000036c
#define MPA_SLP_TMR_DEFAULT                                          0x00000100
#define MPA_GPIO_DS_IOCTL0_ADDR                                      0x00000370
#define MPA_GPIO_DS_IOCTL0_DEFAULT                                   0x19191919
#define MPA_GPIO_DS_IOCTL1_ADDR                                      0x00000374
#define MPA_GPIO_DS_IOCTL1_DEFAULT                                   0x19191919
#define MPA_GPIO_DS_IOCTL2_ADDR                                      0x00000378
#define MPA_GPIO_DS_IOCTL2_DEFAULT                                   0x19191919
#define MPA_GPIO_DS_IOCTL3_ADDR                                      0x0000037c
#define MPA_GPIO_DS_IOCTL3_DEFAULT                                   0x19191919
#define MPA_GPIO_LCD_IOCTL0_ADDR                                     0x000003b0
#define MPA_GPIO_LCD_IOCTL0_DEFAULT                                  0x19191919
#define MPA_GPIO_LCD_IOCTL1_ADDR                                     0x000003b4
#define MPA_GPIO_LCD_IOCTL1_DEFAULT                                  0x19191919
#define MPA_GPIO_LCD_IOCTL2_ADDR                                     0x000003b8
#define MPA_GPIO_LCD_IOCTL2_DEFAULT                                  0x19191919
#define MPA_GPIO_LCD_IOCTL3_ADDR                                     0x000003bc
#define MPA_GPIO_LCD_IOCTL3_DEFAULT                                  0x19191919
#define MPA_GPIO_LCD_IOCTL4_ADDR                                     0x000003c0
#define MPA_GPIO_LCD_IOCTL4_DEFAULT                                  0x19191919
#define MPA_GPIO_LCD_IOCTL5_ADDR                                     0x000003c4
#define MPA_GPIO_LCD_IOCTL5_DEFAULT                                  0x19191919
#define MPA_GPIO_LCD_IOCTL6_ADDR                                     0x000003c8
#define MPA_GPIO_LCD_IOCTL6_DEFAULT                                  0x19191919
#define MPA_GPIO_LCD_IOCTL7_ADDR                                     0x000003cc
#define MPA_GPIO_LCD_IOCTL7_DEFAULT                                  0x19191919
#define MPA_GPIO_LED_IOCTL0_ADDR                                     0x000003d0
#define MPA_GPIO_LED_IOCTL0_DEFAULT                                  0x19191919
#define MPA_GPIO_LED_IOCTL1_ADDR                                     0x000003d4
#define MPA_GPIO_LED_IOCTL1_DEFAULT                                  0x19191919
#define MPA_ENET_IOCTL_ADDR                                          0x000003d8
#define MPA_ENET_IOCTL_DEFAULT                                       0x00001919
#define MPA_IIC_SPI_IOCTL_ADDR                                       0x000003dc
#define MPA_IIC_SPI_IOCTL_DEFAULT                                    0x19191919
#define MPA_SDIO_EBUS_USB_IOCTL_ADDR                                 0x000003e0
#define MPA_SDIO_EBUS_USB_IOCTL_DEFAULT                              0x19191919
#define MPA_SPARE_IOCTL_ADDR                                         0x000003e4
#define MPA_SPARE_IOCTL_DEFAULT                                      0x19191919
#define MPA_UART_SPARE_IOCTL_ADDR                                    0x000003e8
#define MPA_UART_SPARE_IOCTL_DEFAULT                                 0x00003919
#define MPA_USB0_TUNE_ADDR                                           0x000003f0
#define MPA_USB0_TUNE_DEFAULT                                        0x01d80462
#define MPA_USB0_RSTCTL_ADDR                                         0x000003f4
#define MPA_USB0_RSTCTL_DEFAULT                                      0x00000007
#define MPA_USB0_CLKCTL_ADDR                                         0x000003f8
#define MPA_USB0_CLKCTL_DEFAULT                                      0x00000004
#define MPA_USB0_PHYCTL_ADDR                                         0x000003fc
#define MPA_USB0_PHYCTL_DEFAULT                                      0x00000380
#define MPA_SPARE_DSF_ADDR                                           0x00000100
#define MPA_SPARE_DSF_DEFAULT                                        0x00000000
#define MPA_SPARE_SERDES_ADDR                                        0x00000104
#define MPA_SPARE_SERDES_DEFAULT                                     0x00000000
#define MPA_SPARE_GLBL_ADDR                                          0x00000108
#define MPA_SPARE_GLBL_DEFAULT                                       0x00000000
#define MPA_ARM_INPUT0_ADDR                                          0x00000110
#define MPA_ARM_INPUT0_DEFAULT                                       0xe003d090
#define MPA_ARM_INPUT1_ADDR                                          0x00000114
#define MPA_ARM_INPUT1_DEFAULT                                       0x00000000
#define MPA_ARM_INPUT2_ADDR                                          0x00000118
#define MPA_ARM_INPUT2_DEFAULT                                       0x08000000
#define MPA_ARM_OUTPUT0_ADDR                                         0x0000011c
#define MPA_ARM_OUTPUT0_DEFAULT                                      0x00000000
#define MPA_DWIP_INPUT0_ADDR                                         0x00000120
#define MPA_DWIP_INPUT0_DEFAULT                                      0x00000001
#define MPA_DWIP_OUTPUT0_ADDR                                        0x00000124
#define MPA_DWIP_OUTPUT0_DEFAULT                                     0x00000000

/*	Register CPM_CMD_CTL	*/ 
/*	 Fields CPMCmdSend	 */
#define CPMCMDSEND_WIDTH                                                      1
#define CPMCMDSEND_SHIFT                                                     31
#define CPMCMDSEND_MASK                                              0x80000000
#define CPMCMDSEND_RD(src)                           (((src) & 0x80000000)>>31)
#define CPMCMDSEND_WR(src)                      (((u32)(src)<<31) & 0x80000000)
#define CPMCMDSEND_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields CPMWrite	 */
#define CPMWRITE_WIDTH                                                        1
#define CPMWRITE_SHIFT                                                       30
#define CPMWRITE_MASK                                                0x40000000
#define CPMWRITE_RD(src)                             (((src) & 0x40000000)>>30)
#define CPMWRITE_WR(src)                        (((u32)(src)<<30) & 0x40000000)
#define CPMWRITE_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields CPM_ADDR	 */
#define CPM_ADDR_WIDTH                                                        8
#define CPM_ADDR_SHIFT                                                        8
#define CPM_ADDR_MASK                                                0x0000ff00
#define CPM_ADDR_RD(src)                              (((src) & 0x0000ff00)>>8)
#define CPM_ADDR_WR(src)                         (((u32)(src)<<8) & 0x0000ff00)
#define CPM_ADDR_SET(dst,src) \
                       (((dst) & ~0x0000ff00) | (((u32)(src)<<8) & 0x0000ff00))
/*	 Fields CPM_WRDATA	 */
#define CPM_WRDATA_WIDTH                                                      8
#define CPM_WRDATA_SHIFT                                                      0
#define CPM_WRDATA_MASK                                              0x000000ff
#define CPM_WRDATA_RD(src)                               (((src) & 0x000000ff))
#define CPM_WRDATA_WR(src)                          (((u32)(src)) & 0x000000ff)
#define CPM_WRDATA_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register CPM_CMD_STAT	*/ 
/*	 Fields CPMCmdIP	 */
#define CPMCMDIP_WIDTH                                                        1
#define CPMCMDIP_SHIFT                                                        0
#define CPMCMDIP_MASK                                                0x00000001
#define CPMCMDIP_RD(src)                                 (((src) & 0x00000001))
#define CPMCMDIP_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CPM_RDDATA	*/ 
/*	 Fields CPM_RDDATA	 */
#define CPM_RDDATA_WIDTH                                                      8
#define CPM_RDDATA_SHIFT                                                      0
#define CPM_RDDATA_MASK                                              0x000000ff
#define CPM_RDDATA_RD(src)                               (((src) & 0x000000ff))
#define CPM_RDDATA_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register CPM_STAT	*/ 
/*	 Fields CPU1ClkEnStat	 */
#define CPU1CLKENSTAT_WIDTH                                                   1
#define CPU1CLKENSTAT_SHIFT                                                   6
#define CPU1CLKENSTAT_MASK                                           0x00000040
#define CPU1CLKENSTAT_RD(src)                         (((src) & 0x00000040)>>6)
#define CPU1CLKENSTAT_WR(src)                    (((u32)(src)<<6) & 0x00000040)
#define CPU1CLKENSTAT_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields CPU1WakeReq	 */
#define CPU1WAKEREQ_WIDTH                                                     1
#define CPU1WAKEREQ_SHIFT                                                     5
#define CPU1WAKEREQ_MASK                                             0x00000020
#define CPU1WAKEREQ_RD(src)                           (((src) & 0x00000020)>>5)
#define CPU1WAKEREQ_WR(src)                      (((u32)(src)<<5) & 0x00000020)
#define CPU1WAKEREQ_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields CPU1SleepReq	 */
#define CPU1SLEEPREQ_WIDTH                                                    1
#define CPU1SLEEPREQ_SHIFT                                                    4
#define CPU1SLEEPREQ_MASK                                            0x00000010
#define CPU1SLEEPREQ_RD(src)                          (((src) & 0x00000010)>>4)
#define CPU1SLEEPREQ_WR(src)                     (((u32)(src)<<4) & 0x00000010)
#define CPU1SLEEPREQ_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields CPU0ClkEnStat	 */
#define CPU0CLKENSTAT_WIDTH                                                   1
#define CPU0CLKENSTAT_SHIFT                                                   2
#define CPU0CLKENSTAT_MASK                                           0x00000004
#define CPU0CLKENSTAT_RD(src)                         (((src) & 0x00000004)>>2)
#define CPU0CLKENSTAT_WR(src)                    (((u32)(src)<<2) & 0x00000004)
#define CPU0CLKENSTAT_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields CPU0WakeReq	 */
#define CPU0WAKEREQ_WIDTH                                                     1
#define CPU0WAKEREQ_SHIFT                                                     1
#define CPU0WAKEREQ_MASK                                             0x00000002
#define CPU0WAKEREQ_RD(src)                           (((src) & 0x00000002)>>1)
#define CPU0WAKEREQ_WR(src)                      (((u32)(src)<<1) & 0x00000002)
#define CPU0WAKEREQ_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields CPU0SleepReq	 */
#define CPU0SLEEPREQ_WIDTH                                                    1
#define CPU0SLEEPREQ_SHIFT                                                    0
#define CPU0SLEEPREQ_MASK                                            0x00000001
#define CPU0SLEEPREQ_RD(src)                             (((src) & 0x00000001))
#define CPU0SLEEPREQ_WR(src)                        (((u32)(src)) & 0x00000001)
#define CPU0SLEEPREQ_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CPM_STATMask	*/
/*    Mask Register Fields CPU1ClkEnStatMask    */
#define CPU1CLKENSTATMASK_WIDTH                                               1
#define CPU1CLKENSTATMASK_SHIFT                                               6
#define CPU1CLKENSTATMASK_MASK                                       0x00000040
#define CPU1CLKENSTATMASK_RD(src)                     (((src) & 0x00000040)>>6)
#define CPU1CLKENSTATMASK_WR(src)                (((u32)(src)<<6) & 0x00000040)
#define CPU1CLKENSTATMASK_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*    Mask Register Fields CPU1WakeReqMask    */
#define CPU1WAKEREQMASK_WIDTH                                                 1
#define CPU1WAKEREQMASK_SHIFT                                                 5
#define CPU1WAKEREQMASK_MASK                                         0x00000020
#define CPU1WAKEREQMASK_RD(src)                       (((src) & 0x00000020)>>5)
#define CPU1WAKEREQMASK_WR(src)                  (((u32)(src)<<5) & 0x00000020)
#define CPU1WAKEREQMASK_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*    Mask Register Fields CPU1SleepReqMask    */
#define CPU1SLEEPREQMASK_WIDTH                                                1
#define CPU1SLEEPREQMASK_SHIFT                                                4
#define CPU1SLEEPREQMASK_MASK                                        0x00000010
#define CPU1SLEEPREQMASK_RD(src)                      (((src) & 0x00000010)>>4)
#define CPU1SLEEPREQMASK_WR(src)                 (((u32)(src)<<4) & 0x00000010)
#define CPU1SLEEPREQMASK_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*    Mask Register Fields CPU0ClkEnStatMask    */
#define CPU0CLKENSTATMASK_WIDTH                                               1
#define CPU0CLKENSTATMASK_SHIFT                                               2
#define CPU0CLKENSTATMASK_MASK                                       0x00000004
#define CPU0CLKENSTATMASK_RD(src)                     (((src) & 0x00000004)>>2)
#define CPU0CLKENSTATMASK_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define CPU0CLKENSTATMASK_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*    Mask Register Fields CPU0WakeReqMask    */
#define CPU0WAKEREQMASK_WIDTH                                                 1
#define CPU0WAKEREQMASK_SHIFT                                                 1
#define CPU0WAKEREQMASK_MASK                                         0x00000002
#define CPU0WAKEREQMASK_RD(src)                       (((src) & 0x00000002)>>1)
#define CPU0WAKEREQMASK_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define CPU0WAKEREQMASK_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*    Mask Register Fields CPU0SleepReqMask    */
#define CPU0SLEEPREQMASK_WIDTH                                                1
#define CPU0SLEEPREQMASK_SHIFT                                                0
#define CPU0SLEEPREQMASK_MASK                                        0x00000001
#define CPU0SLEEPREQMASK_RD(src)                         (((src) & 0x00000001))
#define CPU0SLEEPREQMASK_WR(src)                    (((u32)(src)) & 0x00000001)
#define CPU0SLEEPREQMASK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_IRAM_ADDR	*/ 
/*	 Fields IRAM_ADDR	 */
#define IRAM_ADDR_WIDTH                                                      16
#define IRAM_ADDR_SHIFT                                                       0
#define IRAM_ADDR_MASK                                               0x0000ffff
#define IRAM_ADDR_RD(src)                                (((src) & 0x0000ffff))
#define IRAM_ADDR_WR(src)                           (((u32)(src)) & 0x0000ffff)
#define IRAM_ADDR_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_IRAM_DATA	*/ 
/*	 Fields IRAM_DATA	 */
#define IRAM_DATA_WIDTH                                                      32
#define IRAM_DATA_SHIFT                                                       0
#define IRAM_DATA_MASK                                               0xffffffff
#define IRAM_DATA_RD(src)                                (((src) & 0xffffffff))
#define IRAM_DATA_WR(src)                           (((u32)(src)) & 0xffffffff)
#define IRAM_DATA_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_IRAM_RDATA	*/ 
/*	 Fields IRAM_RDATA	 */
#define IRAM_RDATA_WIDTH                                                     32
#define IRAM_RDATA_SHIFT                                                      0
#define IRAM_RDATA_MASK                                              0xffffffff
#define IRAM_RDATA_RD(src)                               (((src) & 0xffffffff))
#define IRAM_RDATA_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_DRAM_ADDR	*/ 
/*	 Fields DRAM_ADDR	 */
#define DRAM_ADDR_WIDTH                                                      16
#define DRAM_ADDR_SHIFT                                                       0
#define DRAM_ADDR_MASK                                               0x0000ffff
#define DRAM_ADDR_RD(src)                                (((src) & 0x0000ffff))
#define DRAM_ADDR_WR(src)                           (((u32)(src)) & 0x0000ffff)
#define DRAM_ADDR_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_DRAM_DATA	*/ 
/*	 Fields DRAM_DATA	 */
#define DRAM_DATA_WIDTH                                                      32
#define DRAM_DATA_SHIFT                                                       0
#define DRAM_DATA_MASK                                               0xffffffff
#define DRAM_DATA_RD(src)                                (((src) & 0xffffffff))
#define DRAM_DATA_WR(src)                           (((u32)(src)) & 0xffffffff)
#define DRAM_DATA_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_DRAM_RDATA	*/ 
/*	 Fields DRAM_RDATA	 */
#define DRAM_RDATA_WIDTH                                                     32
#define DRAM_RDATA_SHIFT                                                      0
#define DRAM_RDATA_MASK                                              0xffffffff
#define DRAM_RDATA_RD(src)                               (((src) & 0xffffffff))
#define DRAM_RDATA_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_P0_PCODE	*/ 
/*	 Fields P0_PCODE	 */
#define P0_PCODE_WIDTH                                                       32
#define P0_PCODE_SHIFT                                                        0
#define P0_PCODE_MASK                                                0xffffffff
#define P0_PCODE_RD(src)                                 (((src) & 0xffffffff))
#define P0_PCODE_WR(src)                            (((u32)(src)) & 0xffffffff)
#define P0_PCODE_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_P1_PCODE	*/ 
/*	 Fields P1_PCODE	 */
#define P1_PCODE_WIDTH                                                       32
#define P1_PCODE_SHIFT                                                        0
#define P1_PCODE_MASK                                                0xffffffff
#define P1_PCODE_RD(src)                                 (((src) & 0xffffffff))
#define P1_PCODE_WR(src)                            (((u32)(src)) & 0xffffffff)
#define P1_PCODE_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_P0_ACODE	*/ 
/*	 Fields P0_ACODE	 */
#define P0_ACODE_WIDTH                                                       32
#define P0_ACODE_SHIFT                                                        0
#define P0_ACODE_MASK                                                0xffffffff
#define P0_ACODE_RD(src)                                 (((src) & 0xffffffff))
#define P0_ACODE_WR(src)                            (((u32)(src)) & 0xffffffff)
#define P0_ACODE_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_P1_ACODE	*/ 
/*	 Fields P1_ACODE	 */
#define P1_ACODE_WIDTH                                                       32
#define P1_ACODE_SHIFT                                                        0
#define P1_ACODE_MASK                                                0xffffffff
#define P1_ACODE_RD(src)                                 (((src) & 0xffffffff))
#define P1_ACODE_WR(src)                            (((u32)(src)) & 0xffffffff)
#define P1_ACODE_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_P0_INTSTAT	*/ 
/*	 Fields P0_ACODE_REQ	 */
#define P0_ACODE_REQ_WIDTH                                                    1
#define P0_ACODE_REQ_SHIFT                                                   16
#define P0_ACODE_REQ_MASK                                            0x00010000
#define P0_ACODE_REQ_RD(src)                         (((src) & 0x00010000)>>16)
#define P0_ACODE_REQ_WR(src)                    (((u32)(src)<<16) & 0x00010000)
#define P0_ACODE_REQ_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields P0_PCODE_ACK	 */
#define P0_PCODE_ACK_WIDTH                                                    1
#define P0_PCODE_ACK_SHIFT                                                    0
#define P0_PCODE_ACK_MASK                                            0x00000001
#define P0_PCODE_ACK_RD(src)                             (((src) & 0x00000001))
#define P0_PCODE_ACK_WR(src)                        (((u32)(src)) & 0x00000001)
#define P0_PCODE_ACK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_P0_INTSTATMask	*/
/*    Mask Register Fields P0_ACODE_REQMask    */
#define P0_ACODE_REQMASK_WIDTH                                                1
#define P0_ACODE_REQMASK_SHIFT                                               16
#define P0_ACODE_REQMASK_MASK                                        0x00010000
#define P0_ACODE_REQMASK_RD(src)                     (((src) & 0x00010000)>>16)
#define P0_ACODE_REQMASK_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define P0_ACODE_REQMASK_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*    Mask Register Fields P0_PCODE_ACKMask    */
#define P0_PCODE_ACKMASK_WIDTH                                                1
#define P0_PCODE_ACKMASK_SHIFT                                                0
#define P0_PCODE_ACKMASK_MASK                                        0x00000001
#define P0_PCODE_ACKMASK_RD(src)                         (((src) & 0x00000001))
#define P0_PCODE_ACKMASK_WR(src)                    (((u32)(src)) & 0x00000001)
#define P0_PCODE_ACKMASK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_P1_INTSTAT	*/ 
/*	 Fields P1_ACODE_REQ	 */
#define P1_ACODE_REQ_WIDTH                                                    1
#define P1_ACODE_REQ_SHIFT                                                   16
#define P1_ACODE_REQ_MASK                                            0x00010000
#define P1_ACODE_REQ_RD(src)                         (((src) & 0x00010000)>>16)
#define P1_ACODE_REQ_WR(src)                    (((u32)(src)<<16) & 0x00010000)
#define P1_ACODE_REQ_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields P1_PCODE_ACK	 */
#define P1_PCODE_ACK_WIDTH                                                    1
#define P1_PCODE_ACK_SHIFT                                                    0
#define P1_PCODE_ACK_MASK                                            0x00000001
#define P1_PCODE_ACK_RD(src)                             (((src) & 0x00000001))
#define P1_PCODE_ACK_WR(src)                        (((u32)(src)) & 0x00000001)
#define P1_PCODE_ACK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_P1_INTSTATMask	*/
/*    Mask Register Fields P1_ACODE_REQMask    */
#define P1_ACODE_REQMASK_WIDTH                                                1
#define P1_ACODE_REQMASK_SHIFT                                               16
#define P1_ACODE_REQMASK_MASK                                        0x00010000
#define P1_ACODE_REQMASK_RD(src)                     (((src) & 0x00010000)>>16)
#define P1_ACODE_REQMASK_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define P1_ACODE_REQMASK_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*    Mask Register Fields P1_PCODE_ACKMask    */
#define P1_PCODE_ACKMASK_WIDTH                                                1
#define P1_PCODE_ACKMASK_SHIFT                                                0
#define P1_PCODE_ACKMASK_MASK                                        0x00000001
#define P1_PCODE_ACKMASK_RD(src)                         (((src) & 0x00000001))
#define P1_PCODE_ACKMASK_WR(src)                    (((u32)(src)) & 0x00000001)
#define P1_PCODE_ACKMASK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_ARM_INTSTAT0	*/ 
/*	 Fields P1_PCODE_REQ	 */
#define P1_PCODE_REQ0_WIDTH                                                   1
#define P1_PCODE_REQ0_SHIFT                                                   5
#define P1_PCODE_REQ0_MASK                                           0x00000020
#define P1_PCODE_REQ0_RD(src)                         (((src) & 0x00000020)>>5)
#define P1_PCODE_REQ0_WR(src)                    (((u32)(src)<<5) & 0x00000020)
#define P1_PCODE_REQ0_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields P0_PCODE_REQ	 */
#define P0_PCODE_REQ0_WIDTH                                                   1
#define P0_PCODE_REQ0_SHIFT                                                   4
#define P0_PCODE_REQ0_MASK                                           0x00000010
#define P0_PCODE_REQ0_RD(src)                         (((src) & 0x00000010)>>4)
#define P0_PCODE_REQ0_WR(src)                    (((u32)(src)<<4) & 0x00000010)
#define P0_PCODE_REQ0_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields P1_ACODE_ACK	 */
#define P1_ACODE_ACK0_WIDTH                                                   1
#define P1_ACODE_ACK0_SHIFT                                                   1
#define P1_ACODE_ACK0_MASK                                           0x00000002
#define P1_ACODE_ACK0_RD(src)                         (((src) & 0x00000002)>>1)
#define P1_ACODE_ACK0_WR(src)                    (((u32)(src)<<1) & 0x00000002)
#define P1_ACODE_ACK0_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields P0_ACODE_ACK	 */
#define P0_ACODE_ACK0_WIDTH                                                   1
#define P0_ACODE_ACK0_SHIFT                                                   0
#define P0_ACODE_ACK0_MASK                                           0x00000001
#define P0_ACODE_ACK0_RD(src)                            (((src) & 0x00000001))
#define P0_ACODE_ACK0_WR(src)                       (((u32)(src)) & 0x00000001)
#define P0_ACODE_ACK0_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_ARM_INTSTAT0Mask	*/
/*    Mask Register Fields P1_PCODE_REQMask    */
#define P1_PCODE_REQMASK_WIDTH                                                1
#define P1_PCODE_REQMASK_SHIFT                                                5
#define P1_PCODE_REQMASK_MASK                                        0x00000020
#define P1_PCODE_REQMASK_RD(src)                      (((src) & 0x00000020)>>5)
#define P1_PCODE_REQMASK_WR(src)                 (((u32)(src)<<5) & 0x00000020)
#define P1_PCODE_REQMASK_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*    Mask Register Fields P0_PCODE_REQMask    */
#define P0_PCODE_REQMASK_WIDTH                                                1
#define P0_PCODE_REQMASK_SHIFT                                                4
#define P0_PCODE_REQMASK_MASK                                        0x00000010
#define P0_PCODE_REQMASK_RD(src)                      (((src) & 0x00000010)>>4)
#define P0_PCODE_REQMASK_WR(src)                 (((u32)(src)<<4) & 0x00000010)
#define P0_PCODE_REQMASK_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*    Mask Register Fields P1_ACODE_ACKMask    */
#define P1_ACODE_ACKMASK_WIDTH                                                1
#define P1_ACODE_ACKMASK_SHIFT                                                1
#define P1_ACODE_ACKMASK_MASK                                        0x00000002
#define P1_ACODE_ACKMASK_RD(src)                      (((src) & 0x00000002)>>1)
#define P1_ACODE_ACKMASK_WR(src)                 (((u32)(src)<<1) & 0x00000002)
#define P1_ACODE_ACKMASK_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*    Mask Register Fields P0_ACODE_ACKMask    */
#define P0_ACODE_ACKMASK_WIDTH                                                1
#define P0_ACODE_ACKMASK_SHIFT                                                0
#define P0_ACODE_ACKMASK_MASK                                        0x00000001
#define P0_ACODE_ACKMASK_RD(src)                         (((src) & 0x00000001))
#define P0_ACODE_ACKMASK_WR(src)                    (((u32)(src)) & 0x00000001)
#define P0_ACODE_ACKMASK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_ARM_INTSTAT1	*/ 
/*	 Fields DS_INT	 */
#define DS_INT1_WIDTH                                                         9
#define DS_INT1_SHIFT                                                        19
#define DS_INT1_MASK                                                 0x0ff80000
#define DS_INT1_RD(src)                              (((src) & 0x0ff80000)>>19)
#define DS_INT1_WR(src)                         (((u32)(src)<<19) & 0x0ff80000)
#define DS_INT1_SET(dst,src) \
                      (((dst) & ~0x0ff80000) | (((u32)(src)<<19) & 0x0ff80000))
/*	 Fields CHIPRESET_REQ	 */
#define CHIPRESET_REQ1_WIDTH                                                  1
#define CHIPRESET_REQ1_SHIFT                                                 18
#define CHIPRESET_REQ1_MASK                                          0x00040000
#define CHIPRESET_REQ1_RD(src)                       (((src) & 0x00040000)>>18)
#define CHIPRESET_REQ1_WR(src)                  (((u32)(src)<<18) & 0x00040000)
#define CHIPRESET_REQ1_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields SLEEPMODE	 */
#define SLEEPMODE1_WIDTH                                                      1
#define SLEEPMODE1_SHIFT                                                     17
#define SLEEPMODE1_MASK                                              0x00020000
#define SLEEPMODE1_RD(src)                           (((src) & 0x00020000)>>17)
#define SLEEPMODE1_WR(src)                      (((u32)(src)<<17) & 0x00020000)
#define SLEEPMODE1_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields USB0	 */
#define USB01_WIDTH                                                           1
#define USB01_SHIFT                                                          16
#define USB01_MASK                                                   0x00010000
#define USB01_RD(src)                                (((src) & 0x00010000)>>16)
#define USB01_WR(src)                           (((u32)(src)<<16) & 0x00010000)
#define USB01_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields WAKEON_GPIO	 */
#define WAKEON_GPIO1_WIDTH                                                   16
#define WAKEON_GPIO1_SHIFT                                                    0
#define WAKEON_GPIO1_MASK                                            0x0000ffff
#define WAKEON_GPIO1_RD(src)                             (((src) & 0x0000ffff))
#define WAKEON_GPIO1_WR(src)                        (((u32)(src)) & 0x0000ffff)
#define WAKEON_GPIO1_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_ARM_INTSTAT1Mask	*/
/*    Mask Register Fields DS_INTMask    */
#define DS_INTMASK_WIDTH                                                      9
#define DS_INTMASK_SHIFT                                                     19
#define DS_INTMASK_MASK                                              0x0ff80000
#define DS_INTMASK_RD(src)                           (((src) & 0x0ff80000)>>19)
#define DS_INTMASK_WR(src)                      (((u32)(src)<<19) & 0x0ff80000)
#define DS_INTMASK_SET(dst,src) \
                      (((dst) & ~0x0ff80000) | (((u32)(src)<<19) & 0x0ff80000))
/*    Mask Register Fields CHIPRESET_REQMask    */
#define CHIPRESET_REQMASK_WIDTH                                               1
#define CHIPRESET_REQMASK_SHIFT                                              18
#define CHIPRESET_REQMASK_MASK                                       0x00040000
#define CHIPRESET_REQMASK_RD(src)                    (((src) & 0x00040000)>>18)
#define CHIPRESET_REQMASK_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define CHIPRESET_REQMASK_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*    Mask Register Fields SLEEPMODEMask    */
#define SLEEPMODEMASK_WIDTH                                                   1
#define SLEEPMODEMASK_SHIFT                                                  17
#define SLEEPMODEMASK_MASK                                           0x00020000
#define SLEEPMODEMASK_RD(src)                        (((src) & 0x00020000)>>17)
#define SLEEPMODEMASK_WR(src)                   (((u32)(src)<<17) & 0x00020000)
#define SLEEPMODEMASK_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*    Mask Register Fields USB0Mask    */
#define USB0MASK_WIDTH                                                        1
#define USB0MASK_SHIFT                                                       16
#define USB0MASK_MASK                                                0x00010000
#define USB0MASK_RD(src)                             (((src) & 0x00010000)>>16)
#define USB0MASK_WR(src)                        (((u32)(src)<<16) & 0x00010000)
#define USB0MASK_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*    Mask Register Fields WAKEON_GPIOMask    */
#define WAKEON_GPIOMASK_WIDTH                                                16
#define WAKEON_GPIOMASK_SHIFT                                                 0
#define WAKEON_GPIOMASK_MASK                                         0x0000ffff
#define WAKEON_GPIOMASK_RD(src)                          (((src) & 0x0000ffff))
#define WAKEON_GPIOMASK_WR(src)                     (((u32)(src)) & 0x0000ffff)
#define WAKEON_GPIOMASK_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_ARM_INTSTAT2	*/ 
/*	 Fields ATMR2_EVENT	 */
#define ATMR2_EVENT2_WIDTH                                                    1
#define ATMR2_EVENT2_SHIFT                                                    2
#define ATMR2_EVENT2_MASK                                            0x00000004
#define ATMR2_EVENT2_RD(src)                          (((src) & 0x00000004)>>2)
#define ATMR2_EVENT2_WR(src)                     (((u32)(src)<<2) & 0x00000004)
#define ATMR2_EVENT2_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields ATMR1_EVENT	 */
#define ATMR1_EVENT2_WIDTH                                                    1
#define ATMR1_EVENT2_SHIFT                                                    1
#define ATMR1_EVENT2_MASK                                            0x00000002
#define ATMR1_EVENT2_RD(src)                          (((src) & 0x00000002)>>1)
#define ATMR1_EVENT2_WR(src)                     (((u32)(src)<<1) & 0x00000002)
#define ATMR1_EVENT2_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields ATMR0_EVENT	 */
#define ATMR0_EVENT2_WIDTH                                                    1
#define ATMR0_EVENT2_SHIFT                                                    0
#define ATMR0_EVENT2_MASK                                            0x00000001
#define ATMR0_EVENT2_RD(src)                             (((src) & 0x00000001))
#define ATMR0_EVENT2_WR(src)                        (((u32)(src)) & 0x00000001)
#define ATMR0_EVENT2_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_ARM_INTSTAT2Mask	*/
/*    Mask Register Fields ATMR2_EVENTMask    */
#define ATMR2_EVENTMASK_WIDTH                                                 1
#define ATMR2_EVENTMASK_SHIFT                                                 2
#define ATMR2_EVENTMASK_MASK                                         0x00000004
#define ATMR2_EVENTMASK_RD(src)                       (((src) & 0x00000004)>>2)
#define ATMR2_EVENTMASK_WR(src)                  (((u32)(src)<<2) & 0x00000004)
#define ATMR2_EVENTMASK_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*    Mask Register Fields ATMR1_EVENTMask    */
#define ATMR1_EVENTMASK_WIDTH                                                 1
#define ATMR1_EVENTMASK_SHIFT                                                 1
#define ATMR1_EVENTMASK_MASK                                         0x00000002
#define ATMR1_EVENTMASK_RD(src)                       (((src) & 0x00000002)>>1)
#define ATMR1_EVENTMASK_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define ATMR1_EVENTMASK_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*    Mask Register Fields ATMR0_EVENTMask    */
#define ATMR0_EVENTMASK_WIDTH                                                 1
#define ATMR0_EVENTMASK_SHIFT                                                 0
#define ATMR0_EVENTMASK_MASK                                         0x00000001
#define ATMR0_EVENTMASK_RD(src)                          (((src) & 0x00000001))
#define ATMR0_EVENTMASK_WR(src)                     (((u32)(src)) & 0x00000001)
#define ATMR0_EVENTMASK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_WOL_STAT	*/ 
/*	 Fields CLE_WOL_MODE	 */
#define CLE_WOL_MODE_WIDTH                                                    1
#define CLE_WOL_MODE_SHIFT                                                    0
#define CLE_WOL_MODE_MASK                                            0x00000001
#define CLE_WOL_MODE_RD(src)                             (((src) & 0x00000001))
#define CLE_WOL_MODE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_INT_LVL	*/ 
/*	 Fields GPIO_INT_LVL	 */
#define GPIO_INT_LVL_WIDTH                                                   16
#define GPIO_INT_LVL_SHIFT                                                    0
#define GPIO_INT_LVL_MASK                                            0x0000ffff
#define GPIO_INT_LVL_RD(src)                             (((src) & 0x0000ffff))
#define GPIO_INT_LVL_WR(src)                        (((u32)(src)) & 0x0000ffff)
#define GPIO_INT_LVL_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_GPIO	*/ 
/*	 Fields GPIO_TYPE	 */
#define GPIO_TYPE_WIDTH                                                      16
#define GPIO_TYPE_SHIFT                                                      16
#define GPIO_TYPE_MASK                                               0xffff0000
#define GPIO_TYPE_RD(src)                            (((src) & 0xffff0000)>>16)
#define GPIO_TYPE_WR(src)                       (((u32)(src)<<16) & 0xffff0000)
#define GPIO_TYPE_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields GPIO (Software Team - MPA_ Prefix Added Manually)	 */
#define MPA_GPIO_WIDTH                                                       16
#define MPA_GPIO_SHIFT                                                        0
#define MPA_GPIO_MASK                                                0x0000ffff
#define MPA_GPIO_RD(src)                                 (((src) & 0x0000ffff))
#define MPA_GPIO_WR(src)                            (((u32)(src)) & 0x0000ffff)
#define MPA_GPIO_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_GPIO_IN	*/ 
/*	 Fields GPIO_IN	 */
#define GPIO_IN_WIDTH                                                        16
#define GPIO_IN_SHIFT                                                         0
#define GPIO_IN_MASK                                                 0x0000ffff
#define GPIO_IN_RD(src)                                  (((src) & 0x0000ffff))
#define GPIO_IN_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_ATMR0	*/ 
/*	 Fields ATMR0_START	 */
#define ATMR0_START0_WIDTH                                                    1
#define ATMR0_START0_SHIFT                                                   31
#define ATMR0_START0_MASK                                            0x80000000
#define ATMR0_START0_RD(src)                         (((src) & 0x80000000)>>31)
#define ATMR0_START0_WR(src)                    (((u32)(src)<<31) & 0x80000000)
#define ATMR0_START0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields ATMR0_RES	 */
#define ATMR0_RES0_WIDTH                                                      4
#define ATMR0_RES0_SHIFT                                                     16
#define ATMR0_RES0_MASK                                              0x000f0000
#define ATMR0_RES0_RD(src)                           (((src) & 0x000f0000)>>16)
#define ATMR0_RES0_WR(src)                      (((u32)(src)<<16) & 0x000f0000)
#define ATMR0_RES0_SET(dst,src) \
                      (((dst) & ~0x000f0000) | (((u32)(src)<<16) & 0x000f0000))
/*	 Fields ATMR0_PER	 */
#define ATMR0_PER0_WIDTH                                                     16
#define ATMR0_PER0_SHIFT                                                      0
#define ATMR0_PER0_MASK                                              0x0000ffff
#define ATMR0_PER0_RD(src)                               (((src) & 0x0000ffff))
#define ATMR0_PER0_WR(src)                          (((u32)(src)) & 0x0000ffff)
#define ATMR0_PER0_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_ATMR1	*/ 
/*	 Fields ATMR1_START	 */
#define ATMR1_START1_WIDTH                                                    1
#define ATMR1_START1_SHIFT                                                   31
#define ATMR1_START1_MASK                                            0x80000000
#define ATMR1_START1_RD(src)                         (((src) & 0x80000000)>>31)
#define ATMR1_START1_WR(src)                    (((u32)(src)<<31) & 0x80000000)
#define ATMR1_START1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields ATMR1_RES	 */
#define ATMR1_RES1_WIDTH                                                      4
#define ATMR1_RES1_SHIFT                                                     16
#define ATMR1_RES1_MASK                                              0x000f0000
#define ATMR1_RES1_RD(src)                           (((src) & 0x000f0000)>>16)
#define ATMR1_RES1_WR(src)                      (((u32)(src)<<16) & 0x000f0000)
#define ATMR1_RES1_SET(dst,src) \
                      (((dst) & ~0x000f0000) | (((u32)(src)<<16) & 0x000f0000))
/*	 Fields ATMR1_PER	 */
#define ATMR1_PER1_WIDTH                                                     16
#define ATMR1_PER1_SHIFT                                                      0
#define ATMR1_PER1_MASK                                              0x0000ffff
#define ATMR1_PER1_RD(src)                               (((src) & 0x0000ffff))
#define ATMR1_PER1_WR(src)                          (((u32)(src)) & 0x0000ffff)
#define ATMR1_PER1_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_ATMR2	*/ 
/*	 Fields ATMR2_START	 */
#define ATMR2_START2_WIDTH                                                    1
#define ATMR2_START2_SHIFT                                                   31
#define ATMR2_START2_MASK                                            0x80000000
#define ATMR2_START2_RD(src)                         (((src) & 0x80000000)>>31)
#define ATMR2_START2_WR(src)                    (((u32)(src)<<31) & 0x80000000)
#define ATMR2_START2_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields ATMR2_RES	 */
#define ATMR2_RES2_WIDTH                                                      4
#define ATMR2_RES2_SHIFT                                                     16
#define ATMR2_RES2_MASK                                              0x000f0000
#define ATMR2_RES2_RD(src)                           (((src) & 0x000f0000)>>16)
#define ATMR2_RES2_WR(src)                      (((u32)(src)<<16) & 0x000f0000)
#define ATMR2_RES2_SET(dst,src) \
                      (((dst) & ~0x000f0000) | (((u32)(src)<<16) & 0x000f0000))
/*	 Fields ATMR2_PER	 */
#define ATMR2_PER2_WIDTH                                                     16
#define ATMR2_PER2_SHIFT                                                      0
#define ATMR2_PER2_MASK                                              0x0000ffff
#define ATMR2_PER2_RD(src)                               (((src) & 0x0000ffff))
#define ATMR2_PER2_WR(src)                          (((u32)(src)) & 0x0000ffff)
#define ATMR2_PER2_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_IIDMA_CTL	*/ 
/*	 Fields IIDMA_EN	 */
#define IIDMA_EN_WIDTH                                                        1
#define IIDMA_EN_SHIFT                                                        0
#define IIDMA_EN_MASK                                                0x00000001
#define IIDMA_EN_RD(src)                                 (((src) & 0x00000001))
#define IIDMA_EN_WR(src)                            (((u32)(src)) & 0x00000001)
#define IIDMA_EN_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_IIDMA_CNT	*/ 
/*	 Fields IIDMA_CNT	 */
#define IIDMA_CNT_WIDTH                                                      13
#define IIDMA_CNT_SHIFT                                                       0
#define IIDMA_CNT_MASK                                               0x00001fff
#define IIDMA_CNT_RD(src)                                (((src) & 0x00001fff))
#define IIDMA_CNT_WR(src)                           (((u32)(src)) & 0x00001fff)
#define IIDMA_CNT_SET(dst,src) \
                          (((dst) & ~0x00001fff) | (((u32)(src)) & 0x00001fff))

/*	Register MPA_IIDMA_IRAMADDR	*/ 
/*	 Fields IIDMA_IRAMADDR	 */
#define IIDMA_IRAMADDR_WIDTH                                                 15
#define IIDMA_IRAMADDR_SHIFT                                                  0
#define IIDMA_IRAMADDR_MASK                                          0x00007fff
#define IIDMA_IRAMADDR_RD(src)                           (((src) & 0x00007fff))
#define IIDMA_IRAMADDR_WR(src)                      (((u32)(src)) & 0x00007fff)
#define IIDMA_IRAMADDR_SET(dst,src) \
                          (((dst) & ~0x00007fff) | (((u32)(src)) & 0x00007fff))

/*	Register MPA_IIDMA_IICADDR	*/ 
/*	 Fields IIDMA_IICADDR	 */
#define IIDMA_IICADDR_WIDTH                                                  17
#define IIDMA_IICADDR_SHIFT                                                   0
#define IIDMA_IICADDR_MASK                                           0x0001ffff
#define IIDMA_IICADDR_RD(src)                            (((src) & 0x0001ffff))
#define IIDMA_IICADDR_WR(src)                       (((u32)(src)) & 0x0001ffff)
#define IIDMA_IICADDR_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register MPA_IIDMA_STAT	*/ 
/*	 Fields IIDMA_PENDING	 */
#define IIDMA_PENDING_WIDTH                                                   1
#define IIDMA_PENDING_SHIFT                                                   0
#define IIDMA_PENDING_MASK                                           0x00000001
#define IIDMA_PENDING_RD(src)                            (((src) & 0x00000001))
#define IIDMA_PENDING_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_DMA_CTL	*/ 
/*	 Fields DMA_COHERENT	 */
#define DMA_COHERENT_WIDTH                                                    1
#define DMA_COHERENT_SHIFT                                                    3
#define DMA_COHERENT_MASK                                            0x00000008
#define DMA_COHERENT_RD(src)                          (((src) & 0x00000008)>>3)
#define DMA_COHERENT_WR(src)                     (((u32)(src)<<3) & 0x00000008)
#define DMA_COHERENT_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields DMA_BYTESWAP	 */
#define DMA_BYTESWAP_WIDTH                                                    1
#define DMA_BYTESWAP_SHIFT                                                    2
#define DMA_BYTESWAP_MASK                                            0x00000004
#define DMA_BYTESWAP_RD(src)                          (((src) & 0x00000004)>>2)
#define DMA_BYTESWAP_WR(src)                     (((u32)(src)<<2) & 0x00000004)
#define DMA_BYTESWAP_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields DMA_DIR	 */
#define DMA_DIR_WIDTH                                                         1
#define DMA_DIR_SHIFT                                                         1
#define DMA_DIR_MASK                                                 0x00000002
#define DMA_DIR_RD(src)                               (((src) & 0x00000002)>>1)
#define DMA_DIR_WR(src)                          (((u32)(src)<<1) & 0x00000002)
#define DMA_DIR_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields DMA_EN	 */
#define DMA_EN_F2_WIDTH                                                       1
#define DMA_EN_F2_SHIFT                                                       0
#define DMA_EN_F2_MASK                                               0x00000001
#define DMA_EN_F2_RD(src)                                (((src) & 0x00000001))
#define DMA_EN_F2_WR(src)                           (((u32)(src)) & 0x00000001)
#define DMA_EN_F2_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_DMA_CNT	*/ 
/*	 Fields DMA_CNT	 */
#define DMA_CNT_WIDTH                                                         8
#define DMA_CNT_SHIFT                                                         0
#define DMA_CNT_MASK                                                 0x000000ff
#define DMA_CNT_RD(src)                                  (((src) & 0x000000ff))
#define DMA_CNT_WR(src)                             (((u32)(src)) & 0x000000ff)
#define DMA_CNT_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register MPA_DMA_LADDR	*/ 
/*	 Fields DMA_LADDR	 */
#define DMA_LADDR_WIDTH                                                      32
#define DMA_LADDR_SHIFT                                                       0
#define DMA_LADDR_MASK                                               0xffffffff
#define DMA_LADDR_RD(src)                                (((src) & 0xffffffff))
#define DMA_LADDR_WR(src)                           (((u32)(src)) & 0xffffffff)
#define DMA_LADDR_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_DMA_HADDR	*/ 
/*	 Fields DMA_HADDR	 */
#define DMA_HADDR_WIDTH                                                       5
#define DMA_HADDR_SHIFT                                                       0
#define DMA_HADDR_MASK                                               0x0000001f
#define DMA_HADDR_RD(src)                                (((src) & 0x0000001f))
#define DMA_HADDR_WR(src)                           (((u32)(src)) & 0x0000001f)
#define DMA_HADDR_SET(dst,src) \
                          (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register MPA_DMA_CNT_RB	*/ 
/*	 Fields DMA_CNT	 */
#define DMA_CNT_F1_WIDTH                                                      8
#define DMA_CNT_F1_SHIFT                                                      0
#define DMA_CNT_F1_MASK                                              0x000000ff
#define DMA_CNT_F1_RD(src)                               (((src) & 0x000000ff))
#define DMA_CNT_F1_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register MPA_DMA_LADDR_RB	*/ 
/*	 Fields DMA_LADDR	 */
#define DMA_LADDR_F1_WIDTH                                                   32
#define DMA_LADDR_F1_SHIFT                                                    0
#define DMA_LADDR_F1_MASK                                            0xffffffff
#define DMA_LADDR_F1_RD(src)                             (((src) & 0xffffffff))
#define DMA_LADDR_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_DMA_HADDR_RB	*/ 
/*	 Fields DMA_HADDR	 */
#define DMA_HADDR_F1_WIDTH                                                    5
#define DMA_HADDR_F1_SHIFT                                                    0
#define DMA_HADDR_F1_MASK                                            0x0000001f
#define DMA_HADDR_F1_RD(src)                             (((src) & 0x0000001f))
#define DMA_HADDR_F1_SET(dst,src) \
                          (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register MPA_DIAG	*/ 
/*	 Fields MPIC_EXT_IRQ_IN_SEL	 */
#define MPIC_EXT_IRQ_IN_SEL_WIDTH                                             8
#define MPIC_EXT_IRQ_IN_SEL_SHIFT                                            16 
#define MPIC_EXT_IRQ_IN_SEL_MASK                                     0xff000000
#define MPIC_EXT_IRQ_IN_SEL_RD(src)                  (((src) & 0xff000000)>>16)
#define MPIC_EXT_IRQ_IN_SEL_WR(src)             (((u32)(src)<<16) & 0xff000000)
#define MPIC_EXT_IRQ_IN_SEL_SET(dst,src) \
                      (((dst) & ~0xff000000) | (((u32)(src)<<16) & 0xff000000))
/*	 Fields MPIC_EXT_IRQ_OUT_SEL	 */
#define MPIC_EXT_IRQ_OUT_SEL_WIDTH                                            1
#define MPIC_EXT_IRQ_OUT_SEL_SHIFT                                           23
#define MPIC_EXT_IRQ_OUT_SEL_MASK                                    0x00800000
#define MPIC_EXT_IRQ_OUT_SEL_RD(src)                 (((src) & 0x00800000)>>23)
#define MPIC_EXT_IRQ_OUT_SEL_WR(src)            (((u32)(src)<<23) & 0x00800000)
#define MPIC_EXT_IRQ_OUT_SEL_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields MPIC_DIAG7_SEL	 */
#define MPIC_DIAG7_SEL_WIDTH                                                  1
#define MPIC_DIAG7_SEL_SHIFT                                                 22
#define MPIC_DIAG7_SEL_MASK                                          0x00400000
#define MPIC_DIAG7_SEL_RD(src)                       (((src) & 0x00400000)>>22)
#define MPIC_DIAG7_SEL_WR(src)                  (((u32)(src)<<22) & 0x00400000)
#define MPIC_DIAG7_SEL_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields MPA_USB0_CTL_SEL	 */
#define MPA_USB0_CTL_SEL_WIDTH                                                1
#define MPA_USB0_CTL_SEL_SHIFT                                               12
#define MPA_USB0_CTL_SEL_MASK                                        0x00001000
#define MPA_USB0_CTL_SEL_RD(src)                     (((src) & 0x00001000)>>12)
#define MPA_USB0_CTL_SEL_WR(src)                (((u32)(src)<<12) & 0x00001000)
#define MPA_USB0_CTL_SEL_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields LCD_TRACE_SEL	 */
#define LCD_TRACE_SEL_WIDTH                                                   2
#define LCD_TRACE_SEL_SHIFT                                                  10
#define LCD_TRACE_SEL_MASK                                           0x00000c00
#define LCD_TRACE_SEL_RD(src)                        (((src) & 0x00000c00)>>10)
#define LCD_TRACE_SEL_WR(src)                   (((u32)(src)<<10) & 0x00000c00)
#define LCD_TRACE_SEL_SET(dst,src) \
                      (((dst) & ~0x00000c00) | (((u32)(src)<<10) & 0x00000c00))
/*	 Fields GPIO_SEL	 */
#define GPIO_SEL_WIDTH                                                        2
#define GPIO_SEL_SHIFT                                                        8
#define GPIO_SEL_MASK                                                0x00000300
#define GPIO_SEL_RD(src)                              (((src) & 0x00000300)>>8)
#define GPIO_SEL_WR(src)                         (((u32)(src)<<8) & 0x00000300)
#define GPIO_SEL_SET(dst,src) \
                       (((dst) & ~0x00000300) | (((u32)(src)<<8) & 0x00000300))
/*	 Fields DIAG_SEL	 */
#define DIAG_SEL_WIDTH                                                        5
#define DIAG_SEL_SHIFT                                                        0
#define DIAG_SEL_MASK                                                0x0000001f
#define DIAG_SEL_RD(src)                                 (((src) & 0x0000001f))
#define DIAG_SEL_WR(src)                            (((u32)(src)) & 0x0000001f)
#define DIAG_SEL_SET(dst,src) \
                          (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register MPA_LED	*/ 
/*	 Fields LED	 */
#define LED_WIDTH                                                             5
#define LED_SHIFT                                                             0
#define LED_MASK                                                     0x0000001f
#define LED_RD(src)                                      (((src) & 0x0000001f))
#define LED_WR(src)                                 (((u32)(src)) & 0x0000001f)
#define LED_SET(dst,src) (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register MPA_INTDBG0	*/ 
/*	 Fields ARM_NMI	 */
#define ARM_NMI0_WIDTH                                                        1
#define ARM_NMI0_SHIFT                                                       31
#define ARM_NMI0_MASK                                                0x80000000
#define ARM_NMI0_RD(src)                             (((src) & 0x80000000)>>31)
#define ARM_NMI0_WR(src)                        (((u32)(src)<<31) & 0x80000000)
#define ARM_NMI0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields ARM_INT	 */
#define ARM_INT0_WIDTH                                                       12
#define ARM_INT0_SHIFT                                                        0
#define ARM_INT0_MASK                                                0x00000fff
#define ARM_INT0_RD(src)                                 (((src) & 0x00000fff))
#define ARM_INT0_WR(src)                            (((u32)(src)) & 0x00000fff)
#define ARM_INT0_SET(dst,src) \
                          (((dst) & ~0x00000fff) | (((u32)(src)) & 0x00000fff))

/*	Register MPA_INTDBG1	*/ 
/*	 Fields MPIC_INT	 */
#define MPIC_INT1_WIDTH                                                       6
#define MPIC_INT1_SHIFT                                                       0
#define MPIC_INT1_MASK                                               0x0000003f
#define MPIC_INT1_RD(src)                                (((src) & 0x0000003f))
#define MPIC_INT1_WR(src)                           (((u32)(src)) & 0x0000003f)
#define MPIC_INT1_SET(dst,src) \
                          (((dst) & ~0x0000003f) | (((u32)(src)) & 0x0000003f))

/*	Register MPA_ERR_ADDR0	*/ 
/*	 Fields ADDR0	 */
#define ADDR00_WIDTH                                                         32
#define ADDR00_SHIFT                                                          0
#define ADDR00_MASK                                                  0xffffffff
#define ADDR00_RD(src)                                   (((src) & 0xffffffff))
#define ADDR00_WR(src)                              (((u32)(src)) & 0xffffffff)
#define ADDR00_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_ERR_ADDR1	*/ 
/*	 Fields ERR_WRITE	 */
#define ERR_WRITE1_WIDTH                                                      1
#define ERR_WRITE1_SHIFT                                                     31
#define ERR_WRITE1_MASK                                              0x80000000
#define ERR_WRITE1_RD(src)                           (((src) & 0x80000000)>>31)
#define ERR_WRITE1_WR(src)                      (((u32)(src)<<31) & 0x80000000)
#define ERR_WRITE1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields ADDR1	 */
#define ADDR11_WIDTH                                                          5
#define ADDR11_SHIFT                                                          0
#define ADDR11_MASK                                                  0x0000001f
#define ADDR11_RD(src)                                   (((src) & 0x0000001f))
#define ADDR11_WR(src)                              (((u32)(src)) & 0x0000001f)
#define ADDR11_SET(dst,src) \
                          (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register MPA_ERR	*/ 
/*	 Fields PROH_FACC	 */
#define PROH_FACC_WIDTH                                                       1
#define PROH_FACC_SHIFT                                                      31
#define PROH_FACC_MASK                                               0x80000000
#define PROH_FACC_RD(src)                            (((src) & 0x80000000)>>31)
#define PROH_FACC_WR(src)                       (((u32)(src)<<31) & 0x80000000)
#define PROH_FACC_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields NDFC_DBERR	 */
#define NDFC_DBERR_WIDTH                                                      1
#define NDFC_DBERR_SHIFT                                                     10
#define NDFC_DBERR_MASK                                              0x00000400
#define NDFC_DBERR_RD(src)                           (((src) & 0x00000400)>>10)
#define NDFC_DBERR_WR(src)                      (((u32)(src)<<10) & 0x00000400)
#define NDFC_DBERR_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields AXI_SLVERR	 */
#define AXI_SLVERR_WIDTH                                                      1
#define AXI_SLVERR_SHIFT                                                      9
#define AXI_SLVERR_MASK                                              0x00000200
#define AXI_SLVERR_RD(src)                            (((src) & 0x00000200)>>9)
#define AXI_SLVERR_WR(src)                       (((u32)(src)<<9) & 0x00000200)
#define AXI_SLVERR_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields PKA_PROG_RAM_ERR	 */
#define PKA_PROG_RAM_ERR_WIDTH                                                1
#define PKA_PROG_RAM_ERR_SHIFT                                                8
#define PKA_PROG_RAM_ERR_MASK                                        0x00000100
#define PKA_PROG_RAM_ERR_RD(src)                      (((src) & 0x00000100)>>8)
#define PKA_PROG_RAM_ERR_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define PKA_PROG_RAM_ERR_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields ARM_RAM7_ERR	 */
#define ARM_RAM7_ERR_WIDTH                                                    1
#define ARM_RAM7_ERR_SHIFT                                                    7
#define ARM_RAM7_ERR_MASK                                            0x00000080
#define ARM_RAM7_ERR_RD(src)                          (((src) & 0x00000080)>>7)
#define ARM_RAM7_ERR_WR(src)                     (((u32)(src)<<7) & 0x00000080)
#define ARM_RAM7_ERR_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields ARM_RAM6_ERR	 */
#define ARM_RAM6_ERR_WIDTH                                                    1
#define ARM_RAM6_ERR_SHIFT                                                    6
#define ARM_RAM6_ERR_MASK                                            0x00000040
#define ARM_RAM6_ERR_RD(src)                          (((src) & 0x00000040)>>6)
#define ARM_RAM6_ERR_WR(src)                     (((u32)(src)<<6) & 0x00000040)
#define ARM_RAM6_ERR_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields ARM_RAM5_ERR	 */
#define ARM_RAM5_ERR_WIDTH                                                    1
#define ARM_RAM5_ERR_SHIFT                                                    5
#define ARM_RAM5_ERR_MASK                                            0x00000020
#define ARM_RAM5_ERR_RD(src)                          (((src) & 0x00000020)>>5)
#define ARM_RAM5_ERR_WR(src)                     (((u32)(src)<<5) & 0x00000020)
#define ARM_RAM5_ERR_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields ARM_RAM4_ERR	 */
#define ARM_RAM4_ERR_WIDTH                                                    1
#define ARM_RAM4_ERR_SHIFT                                                    4
#define ARM_RAM4_ERR_MASK                                            0x00000010
#define ARM_RAM4_ERR_RD(src)                          (((src) & 0x00000010)>>4)
#define ARM_RAM4_ERR_WR(src)                     (((u32)(src)<<4) & 0x00000010)
#define ARM_RAM4_ERR_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields ARM_RAM3_ERR	 */
#define ARM_RAM3_ERR_WIDTH                                                    1
#define ARM_RAM3_ERR_SHIFT                                                    3
#define ARM_RAM3_ERR_MASK                                            0x00000008
#define ARM_RAM3_ERR_RD(src)                          (((src) & 0x00000008)>>3)
#define ARM_RAM3_ERR_WR(src)                     (((u32)(src)<<3) & 0x00000008)
#define ARM_RAM3_ERR_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields ARM_RAM2_ERR	 */
#define ARM_RAM2_ERR_WIDTH                                                    1
#define ARM_RAM2_ERR_SHIFT                                                    2
#define ARM_RAM2_ERR_MASK                                            0x00000004
#define ARM_RAM2_ERR_RD(src)                          (((src) & 0x00000004)>>2)
#define ARM_RAM2_ERR_WR(src)                     (((u32)(src)<<2) & 0x00000004)
#define ARM_RAM2_ERR_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields ARM_RAM1_ERR	 */
#define ARM_RAM1_ERR_WIDTH                                                    1
#define ARM_RAM1_ERR_SHIFT                                                    1
#define ARM_RAM1_ERR_MASK                                            0x00000002
#define ARM_RAM1_ERR_RD(src)                          (((src) & 0x00000002)>>1)
#define ARM_RAM1_ERR_WR(src)                     (((u32)(src)<<1) & 0x00000002)
#define ARM_RAM1_ERR_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields ARM_RAM0_ERR	 */
#define ARM_RAM0_ERR_WIDTH                                                    1
#define ARM_RAM0_ERR_SHIFT                                                    0
#define ARM_RAM0_ERR_MASK                                            0x00000001
#define ARM_RAM0_ERR_RD(src)                             (((src) & 0x00000001))
#define ARM_RAM0_ERR_WR(src)                        (((u32)(src)) & 0x00000001)
#define ARM_RAM0_ERR_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_ERRMask	*/
/*    Mask Register Fields PROH_FACCMask    */
#define PROH_FACCMASK_WIDTH                                                   1
#define PROH_FACCMASK_SHIFT                                                  31
#define PROH_FACCMASK_MASK                                           0x80000000
#define PROH_FACCMASK_RD(src)                        (((src) & 0x80000000)>>31)
#define PROH_FACCMASK_WR(src)                   (((u32)(src)<<31) & 0x80000000)
#define PROH_FACCMASK_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*    Mask Register Fields NDFC_DBERRMask    */
#define NDFC_DBERRMASK_WIDTH                                                  1
#define NDFC_DBERRMASK_SHIFT                                                 10
#define NDFC_DBERRMASK_MASK                                          0x00000400
#define NDFC_DBERRMASK_RD(src)                       (((src) & 0x00000400)>>10)
#define NDFC_DBERRMASK_WR(src)                  (((u32)(src)<<10) & 0x00000400)
#define NDFC_DBERRMASK_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*    Mask Register Fields AXI_SLVERRMask    */
#define AXI_SLVERRMASK_WIDTH                                                  1
#define AXI_SLVERRMASK_SHIFT                                                  9
#define AXI_SLVERRMASK_MASK                                          0x00000200
#define AXI_SLVERRMASK_RD(src)                        (((src) & 0x00000200)>>9)
#define AXI_SLVERRMASK_WR(src)                   (((u32)(src)<<9) & 0x00000200)
#define AXI_SLVERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*    Mask Register Fields PKA_PROG_RAM_ERRMask    */
#define PKA_PROG_RAM_ERRMASK_WIDTH                                            1
#define PKA_PROG_RAM_ERRMASK_SHIFT                                            8
#define PKA_PROG_RAM_ERRMASK_MASK                                    0x00000100
#define PKA_PROG_RAM_ERRMASK_RD(src)                  (((src) & 0x00000100)>>8)
#define PKA_PROG_RAM_ERRMASK_WR(src)             (((u32)(src)<<8) & 0x00000100)
#define PKA_PROG_RAM_ERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*    Mask Register Fields ARM_RAM7_ERRMask    */
#define ARM_RAM7_ERRMASK_WIDTH                                                1
#define ARM_RAM7_ERRMASK_SHIFT                                                7
#define ARM_RAM7_ERRMASK_MASK                                        0x00000080
#define ARM_RAM7_ERRMASK_RD(src)                      (((src) & 0x00000080)>>7)
#define ARM_RAM7_ERRMASK_WR(src)                 (((u32)(src)<<7) & 0x00000080)
#define ARM_RAM7_ERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*    Mask Register Fields ARM_RAM6_ERRMask    */
#define ARM_RAM6_ERRMASK_WIDTH                                                1
#define ARM_RAM6_ERRMASK_SHIFT                                                6
#define ARM_RAM6_ERRMASK_MASK                                        0x00000040
#define ARM_RAM6_ERRMASK_RD(src)                      (((src) & 0x00000040)>>6)
#define ARM_RAM6_ERRMASK_WR(src)                 (((u32)(src)<<6) & 0x00000040)
#define ARM_RAM6_ERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*    Mask Register Fields ARM_RAM5_ERRMask    */
#define ARM_RAM5_ERRMASK_WIDTH                                                1
#define ARM_RAM5_ERRMASK_SHIFT                                                5
#define ARM_RAM5_ERRMASK_MASK                                        0x00000020
#define ARM_RAM5_ERRMASK_RD(src)                      (((src) & 0x00000020)>>5)
#define ARM_RAM5_ERRMASK_WR(src)                 (((u32)(src)<<5) & 0x00000020)
#define ARM_RAM5_ERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*    Mask Register Fields ARM_RAM4_ERRMask    */
#define ARM_RAM4_ERRMASK_WIDTH                                                1
#define ARM_RAM4_ERRMASK_SHIFT                                                4
#define ARM_RAM4_ERRMASK_MASK                                        0x00000010
#define ARM_RAM4_ERRMASK_RD(src)                      (((src) & 0x00000010)>>4)
#define ARM_RAM4_ERRMASK_WR(src)                 (((u32)(src)<<4) & 0x00000010)
#define ARM_RAM4_ERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*    Mask Register Fields ARM_RAM3_ERRMask    */
#define ARM_RAM3_ERRMASK_WIDTH                                                1
#define ARM_RAM3_ERRMASK_SHIFT                                                3
#define ARM_RAM3_ERRMASK_MASK                                        0x00000008
#define ARM_RAM3_ERRMASK_RD(src)                      (((src) & 0x00000008)>>3)
#define ARM_RAM3_ERRMASK_WR(src)                 (((u32)(src)<<3) & 0x00000008)
#define ARM_RAM3_ERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*    Mask Register Fields ARM_RAM2_ERRMask    */
#define ARM_RAM2_ERRMASK_WIDTH                                                1
#define ARM_RAM2_ERRMASK_SHIFT                                                2
#define ARM_RAM2_ERRMASK_MASK                                        0x00000004
#define ARM_RAM2_ERRMASK_RD(src)                      (((src) & 0x00000004)>>2)
#define ARM_RAM2_ERRMASK_WR(src)                 (((u32)(src)<<2) & 0x00000004)
#define ARM_RAM2_ERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*    Mask Register Fields ARM_RAM1_ERRMask    */
#define ARM_RAM1_ERRMASK_WIDTH                                                1
#define ARM_RAM1_ERRMASK_SHIFT                                                1
#define ARM_RAM1_ERRMASK_MASK                                        0x00000002
#define ARM_RAM1_ERRMASK_RD(src)                      (((src) & 0x00000002)>>1)
#define ARM_RAM1_ERRMASK_WR(src)                 (((u32)(src)<<1) & 0x00000002)
#define ARM_RAM1_ERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*    Mask Register Fields ARM_RAM0_ERRMask    */
#define ARM_RAM0_ERRMASK_WIDTH                                                1
#define ARM_RAM0_ERRMASK_SHIFT                                                0
#define ARM_RAM0_ERRMASK_MASK                                        0x00000001
#define ARM_RAM0_ERRMASK_RD(src)                         (((src) & 0x00000001))
#define ARM_RAM0_ERRMASK_WR(src)                    (((u32)(src)) & 0x00000001)
#define ARM_RAM0_ERRMASK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_ERR_INT_MASK	*/ 
/*	 Fields IIC1	 */
#define IIC1_WIDTH                                                            1
#define IIC1_SHIFT                                                           24
#define IIC1_MASK                                                    0x01000000
#define IIC1_RD(src)                                 (((src) & 0x01000000)>>24)
#define IIC1_WR(src)                            (((u32)(src)<<24) & 0x01000000)
#define IIC1_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields CRDMA	 */
#define CRDMA_WIDTH                                                           1
#define CRDMA_SHIFT                                                          23
#define CRDMA_MASK                                                   0x00800000
#define CRDMA_RD(src)                                (((src) & 0x00800000)>>23)
#define CRDMA_WR(src)                           (((u32)(src)<<23) & 0x00800000)
#define CRDMA_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields RTC	 */
#define RTC_WIDTH                                                             1
#define RTC_SHIFT                                                            22
#define RTC_MASK                                                     0x00400000
#define RTC_RD(src)                                  (((src) & 0x00400000)>>22)
#define RTC_WR(src)                             (((u32)(src)<<22) & 0x00400000)
#define RTC_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields PKP_SLVERR	 */
#define PKP_SLVERR_WIDTH                                                      1
#define PKP_SLVERR_SHIFT                                                     21
#define PKP_SLVERR_MASK                                              0x00200000
#define PKP_SLVERR_RD(src)                           (((src) & 0x00200000)>>21)
#define PKP_SLVERR_WR(src)                      (((u32)(src)<<21) & 0x00200000)
#define PKP_SLVERR_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields TRNG_ALARM	 */
#define TRNG_ALARM_WIDTH                                                      1
#define TRNG_ALARM_SHIFT                                                     20
#define TRNG_ALARM_MASK                                              0x00100000
#define TRNG_ALARM_RD(src)                           (((src) & 0x00100000)>>20)
#define TRNG_ALARM_WR(src)                      (((u32)(src)<<20) & 0x00100000)
#define TRNG_ALARM_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields TRNG	 */
#define TRNG_WIDTH                                                            1
#define TRNG_SHIFT                                                           19
#define TRNG_MASK                                                    0x00080000
#define TRNG_RD(src)                                 (((src) & 0x00080000)>>19)
#define TRNG_WR(src)                            (((u32)(src)<<19) & 0x00080000)
#define TRNG_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields PKA	 */
#define PKA_WIDTH                                                             3
#define PKA_SHIFT                                                            16
#define PKA_MASK                                                     0x00070000
#define PKA_RD(src)                                  (((src) & 0x00070000)>>16)
#define PKA_WR(src)                             (((u32)(src)<<16) & 0x00070000)
#define PKA_SET(dst,src) \
                      (((dst) & ~0x00070000) | (((u32)(src)<<16) & 0x00070000))
/*	 Fields NDFC_DBERR	 */
#define NDFC_DBERR_F1_WIDTH                                                   1
#define NDFC_DBERR_F1_SHIFT                                                  10
#define NDFC_DBERR_F1_MASK                                           0x00000400
#define NDFC_DBERR_F1_RD(src)                        (((src) & 0x00000400)>>10)
#define NDFC_DBERR_F1_WR(src)                   (((u32)(src)<<10) & 0x00000400)
#define NDFC_DBERR_F1_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields AXI_SLVERR	 */
#define AXI_SLVERR_F1_WIDTH                                                   1
#define AXI_SLVERR_F1_SHIFT                                                   9
#define AXI_SLVERR_F1_MASK                                           0x00000200
#define AXI_SLVERR_F1_RD(src)                         (((src) & 0x00000200)>>9)
#define AXI_SLVERR_F1_WR(src)                    (((u32)(src)<<9) & 0x00000200)
#define AXI_SLVERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields PKA_PROG_RAM_ERR	 */
#define PKA_PROG_RAM_ERR_F1_WIDTH                                             1
#define PKA_PROG_RAM_ERR_F1_SHIFT                                             8
#define PKA_PROG_RAM_ERR_F1_MASK                                     0x00000100
#define PKA_PROG_RAM_ERR_F1_RD(src)                   (((src) & 0x00000100)>>8)
#define PKA_PROG_RAM_ERR_F1_WR(src)              (((u32)(src)<<8) & 0x00000100)
#define PKA_PROG_RAM_ERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields ARM_RAM7_ERR	 */
#define ARM_RAM7_ERR_F1_WIDTH                                                 1
#define ARM_RAM7_ERR_F1_SHIFT                                                 7
#define ARM_RAM7_ERR_F1_MASK                                         0x00000080
#define ARM_RAM7_ERR_F1_RD(src)                       (((src) & 0x00000080)>>7)
#define ARM_RAM7_ERR_F1_WR(src)                  (((u32)(src)<<7) & 0x00000080)
#define ARM_RAM7_ERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields ARM_RAM6_ERR	 */
#define ARM_RAM6_ERR_F1_WIDTH                                                 1
#define ARM_RAM6_ERR_F1_SHIFT                                                 6
#define ARM_RAM6_ERR_F1_MASK                                         0x00000040
#define ARM_RAM6_ERR_F1_RD(src)                       (((src) & 0x00000040)>>6)
#define ARM_RAM6_ERR_F1_WR(src)                  (((u32)(src)<<6) & 0x00000040)
#define ARM_RAM6_ERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields ARM_RAM5_ERR	 */
#define ARM_RAM5_ERR_F1_WIDTH                                                 1
#define ARM_RAM5_ERR_F1_SHIFT                                                 5
#define ARM_RAM5_ERR_F1_MASK                                         0x00000020
#define ARM_RAM5_ERR_F1_RD(src)                       (((src) & 0x00000020)>>5)
#define ARM_RAM5_ERR_F1_WR(src)                  (((u32)(src)<<5) & 0x00000020)
#define ARM_RAM5_ERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields ARM_RAM4_ERR	 */
#define ARM_RAM4_ERR_F1_WIDTH                                                 1
#define ARM_RAM4_ERR_F1_SHIFT                                                 4
#define ARM_RAM4_ERR_F1_MASK                                         0x00000010
#define ARM_RAM4_ERR_F1_RD(src)                       (((src) & 0x00000010)>>4)
#define ARM_RAM4_ERR_F1_WR(src)                  (((u32)(src)<<4) & 0x00000010)
#define ARM_RAM4_ERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields ARM_RAM3_ERR	 */
#define ARM_RAM3_ERR_F1_WIDTH                                                 1
#define ARM_RAM3_ERR_F1_SHIFT                                                 3
#define ARM_RAM3_ERR_F1_MASK                                         0x00000008
#define ARM_RAM3_ERR_F1_RD(src)                       (((src) & 0x00000008)>>3)
#define ARM_RAM3_ERR_F1_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define ARM_RAM3_ERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields ARM_RAM2_ERR	 */
#define ARM_RAM2_ERR_F1_WIDTH                                                 1
#define ARM_RAM2_ERR_F1_SHIFT                                                 2
#define ARM_RAM2_ERR_F1_MASK                                         0x00000004
#define ARM_RAM2_ERR_F1_RD(src)                       (((src) & 0x00000004)>>2)
#define ARM_RAM2_ERR_F1_WR(src)                  (((u32)(src)<<2) & 0x00000004)
#define ARM_RAM2_ERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields ARM_RAM1_ERR	 */
#define ARM_RAM1_ERR_F1_WIDTH                                                 1
#define ARM_RAM1_ERR_F1_SHIFT                                                 1
#define ARM_RAM1_ERR_F1_MASK                                         0x00000002
#define ARM_RAM1_ERR_F1_RD(src)                       (((src) & 0x00000002)>>1)
#define ARM_RAM1_ERR_F1_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define ARM_RAM1_ERR_F1_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields ARM_RAM0_ERR	 */
#define ARM_RAM0_ERR_F1_WIDTH                                                 1
#define ARM_RAM0_ERR_F1_SHIFT                                                 0
#define ARM_RAM0_ERR_F1_MASK                                         0x00000001
#define ARM_RAM0_ERR_F1_RD(src)                          (((src) & 0x00000001))
#define ARM_RAM0_ERR_F1_WR(src)                     (((u32)(src)) & 0x00000001)
#define ARM_RAM0_ERR_F1_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_QMI_INTSTAT	*/ 
/*	 Fields QMI	 */
#define QMI_F2_WIDTH                                                          1
#define QMI_F2_SHIFT                                                         31
#define QMI_F2_MASK                                                  0x80000000
#define QMI_F2_RD(src)                               (((src) & 0x80000000)>>31)
#define QMI_F2_WR(src)                          (((u32)(src)<<31) & 0x80000000)
#define QMI_F2_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields WQ_AVAIL	 */
#define WQ_AVAIL_F2_WIDTH                                                     8
#define WQ_AVAIL_F2_SHIFT                                                    16
#define WQ_AVAIL_F2_MASK                                             0x00ff0000
#define WQ_AVAIL_F2_RD(src)                          (((src) & 0x00ff0000)>>16)
#define WQ_AVAIL_F2_WR(src)                     (((u32)(src)<<16) & 0x00ff0000)
#define WQ_AVAIL_F2_SET(dst,src) \
                      (((dst) & ~0x00ff0000) | (((u32)(src)<<16) & 0x00ff0000))
/*	 Fields FP_AVAIL	 */
#define FP_AVAIL_F2_WIDTH                                                    16
#define FP_AVAIL_F2_SHIFT                                                     0
#define FP_AVAIL_F2_MASK                                             0x0000ffff
#define FP_AVAIL_F2_RD(src)                              (((src) & 0x0000ffff))
#define FP_AVAIL_F2_WR(src)                         (((u32)(src)) & 0x0000ffff)
#define FP_AVAIL_F2_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_QMI_INTSTATMask	*/
/*    Mask Register Fields QMIMask    */
#define QMIMASK_WIDTH                                                         1
#define QMIMASK_SHIFT                                                        31
#define QMIMASK_MASK                                                 0x80000000
#define QMIMASK_RD(src)                              (((src) & 0x80000000)>>31)
#define QMIMASK_WR(src)                         (((u32)(src)<<31) & 0x80000000)
#define QMIMASK_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*    Mask Register Fields WQ_AVAILMask    */
#define WQ_AVAILMASK_WIDTH                                                    8
#define WQ_AVAILMASK_SHIFT                                                   16
#define WQ_AVAILMASK_MASK                                            0x00ff0000
#define WQ_AVAILMASK_RD(src)                         (((src) & 0x00ff0000)>>16)
#define WQ_AVAILMASK_WR(src)                    (((u32)(src)<<16) & 0x00ff0000)
#define WQ_AVAILMASK_SET(dst,src) \
                      (((dst) & ~0x00ff0000) | (((u32)(src)<<16) & 0x00ff0000))
/*    Mask Register Fields FP_AVAILMask    */
#define FP_AVAILMASK_WIDTH                                                   16
#define FP_AVAILMASK_SHIFT                                                    0
#define FP_AVAILMASK_MASK                                            0x0000ffff
#define FP_AVAILMASK_RD(src)                             (((src) & 0x0000ffff))
#define FP_AVAILMASK_WR(src)                        (((u32)(src)) & 0x0000ffff)
#define FP_AVAILMASK_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_SCRATCH	*/ 
/*	 Fields SCRATCH	 */
#define SCRATCH_WIDTH                                                        32
#define SCRATCH_SHIFT                                                         0
#define SCRATCH_MASK                                                 0xffffffff
#define SCRATCH_RD(src)                                  (((src) & 0xffffffff))
#define SCRATCH_WR(src)                             (((u32)(src)) & 0xffffffff)
#define SCRATCH_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_SCRATCH1	*/ 
/*	 Fields SCRATCH	 */
#define SCRATCH1_WIDTH                                                       32
#define SCRATCH1_SHIFT                                                        0
#define SCRATCH1_MASK                                                0xffffffff
#define SCRATCH1_RD(src)                                 (((src) & 0xffffffff))
#define SCRATCH1_WR(src)                            (((u32)(src)) & 0xffffffff)
#define SCRATCH1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_SCRATCH2	*/ 
/*	 Fields SCRATCH	 */
#define SCRATCH2_WIDTH                                                       32
#define SCRATCH2_SHIFT                                                        0
#define SCRATCH2_MASK                                                0xffffffff
#define SCRATCH2_RD(src)                                 (((src) & 0xffffffff))
#define SCRATCH2_WR(src)                            (((u32)(src)) & 0xffffffff)
#define SCRATCH2_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_SLP_TMR	*/ 
/*	 Fields DS_DEACT	 */
#define DS_DEACT_WIDTH                                                        1
#define DS_DEACT_SHIFT                                                       31
#define DS_DEACT_MASK                                                0x80000000
#define DS_DEACT_RD(src)                             (((src) & 0x80000000)>>31)
#define DS_DEACT_WR(src)                        (((u32)(src)<<31) & 0x80000000)
#define DS_DEACT_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields SLP_TMR	 */
#define SLP_TMR_WIDTH                                                        16
#define SLP_TMR_SHIFT                                                         0
#define SLP_TMR_MASK                                                 0x0000ffff
#define SLP_TMR_RD(src)                                  (((src) & 0x0000ffff))
#define SLP_TMR_WR(src)                             (((u32)(src)) & 0x0000ffff)
#define SLP_TMR_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register MPA_GPIO_DS_IOCTL0	*/ 
/*	 Fields GPIO_DSD_SRE	 */
#define GPIO_DSD_SRE0_WIDTH                                                   1
#define GPIO_DSD_SRE0_SHIFT                                                  28
#define GPIO_DSD_SRE0_MASK                                           0x10000000
#define GPIO_DSD_SRE0_RD(src)                        (((src) & 0x10000000)>>28)
#define GPIO_DSD_SRE0_WR(src)                   (((u32)(src)<<28) & 0x10000000)
#define GPIO_DSD_SRE0_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_DSD_HYTS	 */
#define GPIO_DSD_HYTS0_WIDTH                                                  1
#define GPIO_DSD_HYTS0_SHIFT                                                 27
#define GPIO_DSD_HYTS0_MASK                                          0x08000000
#define GPIO_DSD_HYTS0_RD(src)                       (((src) & 0x08000000)>>27)
#define GPIO_DSD_HYTS0_WR(src)                  (((u32)(src)<<27) & 0x08000000)
#define GPIO_DSD_HYTS0_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_DSD_PULLUP	 */
#define GPIO_DSD_PULLUP0_WIDTH                                                1
#define GPIO_DSD_PULLUP0_SHIFT                                               26
#define GPIO_DSD_PULLUP0_MASK                                        0x04000000
#define GPIO_DSD_PULLUP0_RD(src)                     (((src) & 0x04000000)>>26)
#define GPIO_DSD_PULLUP0_WR(src)                (((u32)(src)<<26) & 0x04000000)
#define GPIO_DSD_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_DSD_PDWN	 */
#define GPIO_DSD_PDWN0_WIDTH                                                  1
#define GPIO_DSD_PDWN0_SHIFT                                                 25
#define GPIO_DSD_PDWN0_MASK                                          0x02000000
#define GPIO_DSD_PDWN0_RD(src)                       (((src) & 0x02000000)>>25)
#define GPIO_DSD_PDWN0_WR(src)                  (((u32)(src)<<25) & 0x02000000)
#define GPIO_DSD_PDWN0_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_DSD_PWROK	 */
#define GPIO_DSD_PWROK0_WIDTH                                                 1
#define GPIO_DSD_PWROK0_SHIFT                                                24
#define GPIO_DSD_PWROK0_MASK                                         0x01000000
#define GPIO_DSD_PWROK0_RD(src)                      (((src) & 0x01000000)>>24)
#define GPIO_DSD_PWROK0_WR(src)                 (((u32)(src)<<24) & 0x01000000)
#define GPIO_DSD_PWROK0_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_DSC_SRE	 */
#define GPIO_DSC_SRE0_WIDTH                                                   1
#define GPIO_DSC_SRE0_SHIFT                                                  20
#define GPIO_DSC_SRE0_MASK                                           0x00100000
#define GPIO_DSC_SRE0_RD(src)                        (((src) & 0x00100000)>>20)
#define GPIO_DSC_SRE0_WR(src)                   (((u32)(src)<<20) & 0x00100000)
#define GPIO_DSC_SRE0_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_DSC_HYTS	 */
#define GPIO_DSC_HYTS0_WIDTH                                                  1
#define GPIO_DSC_HYTS0_SHIFT                                                 19
#define GPIO_DSC_HYTS0_MASK                                          0x00080000
#define GPIO_DSC_HYTS0_RD(src)                       (((src) & 0x00080000)>>19)
#define GPIO_DSC_HYTS0_WR(src)                  (((u32)(src)<<19) & 0x00080000)
#define GPIO_DSC_HYTS0_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_DSC_PULLUP	 */
#define GPIO_DSC_PULLUP0_WIDTH                                                1
#define GPIO_DSC_PULLUP0_SHIFT                                               18
#define GPIO_DSC_PULLUP0_MASK                                        0x00040000
#define GPIO_DSC_PULLUP0_RD(src)                     (((src) & 0x00040000)>>18)
#define GPIO_DSC_PULLUP0_WR(src)                (((u32)(src)<<18) & 0x00040000)
#define GPIO_DSC_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_DSC_PDWN	 */
#define GPIO_DSC_PDWN0_WIDTH                                                  1
#define GPIO_DSC_PDWN0_SHIFT                                                 17
#define GPIO_DSC_PDWN0_MASK                                          0x00020000
#define GPIO_DSC_PDWN0_RD(src)                       (((src) & 0x00020000)>>17)
#define GPIO_DSC_PDWN0_WR(src)                  (((u32)(src)<<17) & 0x00020000)
#define GPIO_DSC_PDWN0_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_DSC_PWROK	 */
#define GPIO_DSC_PWROK0_WIDTH                                                 1
#define GPIO_DSC_PWROK0_SHIFT                                                16
#define GPIO_DSC_PWROK0_MASK                                         0x00010000
#define GPIO_DSC_PWROK0_RD(src)                      (((src) & 0x00010000)>>16)
#define GPIO_DSC_PWROK0_WR(src)                 (((u32)(src)<<16) & 0x00010000)
#define GPIO_DSC_PWROK0_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_DSB_SRE	 */
#define GPIO_DSB_SRE0_WIDTH                                                   1
#define GPIO_DSB_SRE0_SHIFT                                                  12
#define GPIO_DSB_SRE0_MASK                                           0x00001000
#define GPIO_DSB_SRE0_RD(src)                        (((src) & 0x00001000)>>12)
#define GPIO_DSB_SRE0_WR(src)                   (((u32)(src)<<12) & 0x00001000)
#define GPIO_DSB_SRE0_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_DSB_HYTS	 */
#define GPIO_DSB_HYTS0_WIDTH                                                  1
#define GPIO_DSB_HYTS0_SHIFT                                                 11
#define GPIO_DSB_HYTS0_MASK                                          0x00000800
#define GPIO_DSB_HYTS0_RD(src)                       (((src) & 0x00000800)>>11)
#define GPIO_DSB_HYTS0_WR(src)                  (((u32)(src)<<11) & 0x00000800)
#define GPIO_DSB_HYTS0_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_DSB_PULLUP	 */
#define GPIO_DSB_PULLUP0_WIDTH                                                1
#define GPIO_DSB_PULLUP0_SHIFT                                               10
#define GPIO_DSB_PULLUP0_MASK                                        0x00000400
#define GPIO_DSB_PULLUP0_RD(src)                     (((src) & 0x00000400)>>10)
#define GPIO_DSB_PULLUP0_WR(src)                (((u32)(src)<<10) & 0x00000400)
#define GPIO_DSB_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_DSB_PDWN	 */
#define GPIO_DSB_PDWN0_WIDTH                                                  1
#define GPIO_DSB_PDWN0_SHIFT                                                  9
#define GPIO_DSB_PDWN0_MASK                                          0x00000200
#define GPIO_DSB_PDWN0_RD(src)                        (((src) & 0x00000200)>>9)
#define GPIO_DSB_PDWN0_WR(src)                   (((u32)(src)<<9) & 0x00000200)
#define GPIO_DSB_PDWN0_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_DSB_PWROK	 */
#define GPIO_DSB_PWROK0_WIDTH                                                 1
#define GPIO_DSB_PWROK0_SHIFT                                                 8
#define GPIO_DSB_PWROK0_MASK                                         0x00000100
#define GPIO_DSB_PWROK0_RD(src)                       (((src) & 0x00000100)>>8)
#define GPIO_DSB_PWROK0_WR(src)                  (((u32)(src)<<8) & 0x00000100)
#define GPIO_DSB_PWROK0_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_DSA_SRE	 */
#define GPIO_DSA_SRE0_WIDTH                                                   1
#define GPIO_DSA_SRE0_SHIFT                                                   4
#define GPIO_DSA_SRE0_MASK                                           0x00000010
#define GPIO_DSA_SRE0_RD(src)                         (((src) & 0x00000010)>>4)
#define GPIO_DSA_SRE0_WR(src)                    (((u32)(src)<<4) & 0x00000010)
#define GPIO_DSA_SRE0_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_DSA_HYTS	 */
#define GPIO_DSA_HYTS0_WIDTH                                                  1
#define GPIO_DSA_HYTS0_SHIFT                                                  3
#define GPIO_DSA_HYTS0_MASK                                          0x00000008
#define GPIO_DSA_HYTS0_RD(src)                        (((src) & 0x00000008)>>3)
#define GPIO_DSA_HYTS0_WR(src)                   (((u32)(src)<<3) & 0x00000008)
#define GPIO_DSA_HYTS0_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_DSA_PULLUP	 */
#define GPIO_DSA_PULLUP0_WIDTH                                                1
#define GPIO_DSA_PULLUP0_SHIFT                                                2
#define GPIO_DSA_PULLUP0_MASK                                        0x00000004
#define GPIO_DSA_PULLUP0_RD(src)                      (((src) & 0x00000004)>>2)
#define GPIO_DSA_PULLUP0_WR(src)                 (((u32)(src)<<2) & 0x00000004)
#define GPIO_DSA_PULLUP0_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_DSA_PDWN	 */
#define GPIO_DSA_PDWN0_WIDTH                                                  1
#define GPIO_DSA_PDWN0_SHIFT                                                  1
#define GPIO_DSA_PDWN0_MASK                                          0x00000002
#define GPIO_DSA_PDWN0_RD(src)                        (((src) & 0x00000002)>>1)
#define GPIO_DSA_PDWN0_WR(src)                   (((u32)(src)<<1) & 0x00000002)
#define GPIO_DSA_PDWN0_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_DSA_PWROK	 */
#define GPIO_DSA_PWROK0_WIDTH                                                 1
#define GPIO_DSA_PWROK0_SHIFT                                                 0
#define GPIO_DSA_PWROK0_MASK                                         0x00000001
#define GPIO_DSA_PWROK0_RD(src)                          (((src) & 0x00000001))
#define GPIO_DSA_PWROK0_WR(src)                     (((u32)(src)) & 0x00000001)
#define GPIO_DSA_PWROK0_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_DS_IOCTL1	*/ 
/*	 Fields GPIO_DSD_SRE	 */
#define GPIO_DSD_SRE1_WIDTH                                                   1
#define GPIO_DSD_SRE1_SHIFT                                                  28
#define GPIO_DSD_SRE1_MASK                                           0x10000000
#define GPIO_DSD_SRE1_RD(src)                        (((src) & 0x10000000)>>28)
#define GPIO_DSD_SRE1_WR(src)                   (((u32)(src)<<28) & 0x10000000)
#define GPIO_DSD_SRE1_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_DSD_HYTS	 */
#define GPIO_DSD_HYTS1_WIDTH                                                  1
#define GPIO_DSD_HYTS1_SHIFT                                                 27
#define GPIO_DSD_HYTS1_MASK                                          0x08000000
#define GPIO_DSD_HYTS1_RD(src)                       (((src) & 0x08000000)>>27)
#define GPIO_DSD_HYTS1_WR(src)                  (((u32)(src)<<27) & 0x08000000)
#define GPIO_DSD_HYTS1_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_DSD_PULLUP	 */
#define GPIO_DSD_PULLUP1_WIDTH                                                1
#define GPIO_DSD_PULLUP1_SHIFT                                               26
#define GPIO_DSD_PULLUP1_MASK                                        0x04000000
#define GPIO_DSD_PULLUP1_RD(src)                     (((src) & 0x04000000)>>26)
#define GPIO_DSD_PULLUP1_WR(src)                (((u32)(src)<<26) & 0x04000000)
#define GPIO_DSD_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_DSD_PDWN	 */
#define GPIO_DSD_PDWN1_WIDTH                                                  1
#define GPIO_DSD_PDWN1_SHIFT                                                 25
#define GPIO_DSD_PDWN1_MASK                                          0x02000000
#define GPIO_DSD_PDWN1_RD(src)                       (((src) & 0x02000000)>>25)
#define GPIO_DSD_PDWN1_WR(src)                  (((u32)(src)<<25) & 0x02000000)
#define GPIO_DSD_PDWN1_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_DSD_PWROK	 */
#define GPIO_DSD_PWROK1_WIDTH                                                 1
#define GPIO_DSD_PWROK1_SHIFT                                                24
#define GPIO_DSD_PWROK1_MASK                                         0x01000000
#define GPIO_DSD_PWROK1_RD(src)                      (((src) & 0x01000000)>>24)
#define GPIO_DSD_PWROK1_WR(src)                 (((u32)(src)<<24) & 0x01000000)
#define GPIO_DSD_PWROK1_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_DSC_SRE	 */
#define GPIO_DSC_SRE1_WIDTH                                                   1
#define GPIO_DSC_SRE1_SHIFT                                                  20
#define GPIO_DSC_SRE1_MASK                                           0x00100000
#define GPIO_DSC_SRE1_RD(src)                        (((src) & 0x00100000)>>20)
#define GPIO_DSC_SRE1_WR(src)                   (((u32)(src)<<20) & 0x00100000)
#define GPIO_DSC_SRE1_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_DSC_HYTS	 */
#define GPIO_DSC_HYTS1_WIDTH                                                  1
#define GPIO_DSC_HYTS1_SHIFT                                                 19
#define GPIO_DSC_HYTS1_MASK                                          0x00080000
#define GPIO_DSC_HYTS1_RD(src)                       (((src) & 0x00080000)>>19)
#define GPIO_DSC_HYTS1_WR(src)                  (((u32)(src)<<19) & 0x00080000)
#define GPIO_DSC_HYTS1_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_DSC_PULLUP	 */
#define GPIO_DSC_PULLUP1_WIDTH                                                1
#define GPIO_DSC_PULLUP1_SHIFT                                               18
#define GPIO_DSC_PULLUP1_MASK                                        0x00040000
#define GPIO_DSC_PULLUP1_RD(src)                     (((src) & 0x00040000)>>18)
#define GPIO_DSC_PULLUP1_WR(src)                (((u32)(src)<<18) & 0x00040000)
#define GPIO_DSC_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_DSC_PDWN	 */
#define GPIO_DSC_PDWN1_WIDTH                                                  1
#define GPIO_DSC_PDWN1_SHIFT                                                 17
#define GPIO_DSC_PDWN1_MASK                                          0x00020000
#define GPIO_DSC_PDWN1_RD(src)                       (((src) & 0x00020000)>>17)
#define GPIO_DSC_PDWN1_WR(src)                  (((u32)(src)<<17) & 0x00020000)
#define GPIO_DSC_PDWN1_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_DSC_PWROK	 */
#define GPIO_DSC_PWROK1_WIDTH                                                 1
#define GPIO_DSC_PWROK1_SHIFT                                                16
#define GPIO_DSC_PWROK1_MASK                                         0x00010000
#define GPIO_DSC_PWROK1_RD(src)                      (((src) & 0x00010000)>>16)
#define GPIO_DSC_PWROK1_WR(src)                 (((u32)(src)<<16) & 0x00010000)
#define GPIO_DSC_PWROK1_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_DSB_SRE	 */
#define GPIO_DSB_SRE1_WIDTH                                                   1
#define GPIO_DSB_SRE1_SHIFT                                                  12
#define GPIO_DSB_SRE1_MASK                                           0x00001000
#define GPIO_DSB_SRE1_RD(src)                        (((src) & 0x00001000)>>12)
#define GPIO_DSB_SRE1_WR(src)                   (((u32)(src)<<12) & 0x00001000)
#define GPIO_DSB_SRE1_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_DSB_HYTS	 */
#define GPIO_DSB_HYTS1_WIDTH                                                  1
#define GPIO_DSB_HYTS1_SHIFT                                                 11
#define GPIO_DSB_HYTS1_MASK                                          0x00000800
#define GPIO_DSB_HYTS1_RD(src)                       (((src) & 0x00000800)>>11)
#define GPIO_DSB_HYTS1_WR(src)                  (((u32)(src)<<11) & 0x00000800)
#define GPIO_DSB_HYTS1_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_DSB_PULLUP	 */
#define GPIO_DSB_PULLUP1_WIDTH                                                1
#define GPIO_DSB_PULLUP1_SHIFT                                               10
#define GPIO_DSB_PULLUP1_MASK                                        0x00000400
#define GPIO_DSB_PULLUP1_RD(src)                     (((src) & 0x00000400)>>10)
#define GPIO_DSB_PULLUP1_WR(src)                (((u32)(src)<<10) & 0x00000400)
#define GPIO_DSB_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_DSB_PDWN	 */
#define GPIO_DSB_PDWN1_WIDTH                                                  1
#define GPIO_DSB_PDWN1_SHIFT                                                  9
#define GPIO_DSB_PDWN1_MASK                                          0x00000200
#define GPIO_DSB_PDWN1_RD(src)                        (((src) & 0x00000200)>>9)
#define GPIO_DSB_PDWN1_WR(src)                   (((u32)(src)<<9) & 0x00000200)
#define GPIO_DSB_PDWN1_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_DSB_PWROK	 */
#define GPIO_DSB_PWROK1_WIDTH                                                 1
#define GPIO_DSB_PWROK1_SHIFT                                                 8
#define GPIO_DSB_PWROK1_MASK                                         0x00000100
#define GPIO_DSB_PWROK1_RD(src)                       (((src) & 0x00000100)>>8)
#define GPIO_DSB_PWROK1_WR(src)                  (((u32)(src)<<8) & 0x00000100)
#define GPIO_DSB_PWROK1_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_DSA_SRE	 */
#define GPIO_DSA_SRE1_WIDTH                                                   1
#define GPIO_DSA_SRE1_SHIFT                                                   4
#define GPIO_DSA_SRE1_MASK                                           0x00000010
#define GPIO_DSA_SRE1_RD(src)                         (((src) & 0x00000010)>>4)
#define GPIO_DSA_SRE1_WR(src)                    (((u32)(src)<<4) & 0x00000010)
#define GPIO_DSA_SRE1_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_DSA_HYTS	 */
#define GPIO_DSA_HYTS1_WIDTH                                                  1
#define GPIO_DSA_HYTS1_SHIFT                                                  3
#define GPIO_DSA_HYTS1_MASK                                          0x00000008
#define GPIO_DSA_HYTS1_RD(src)                        (((src) & 0x00000008)>>3)
#define GPIO_DSA_HYTS1_WR(src)                   (((u32)(src)<<3) & 0x00000008)
#define GPIO_DSA_HYTS1_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_DSA_PULLUP	 */
#define GPIO_DSA_PULLUP1_WIDTH                                                1
#define GPIO_DSA_PULLUP1_SHIFT                                                2
#define GPIO_DSA_PULLUP1_MASK                                        0x00000004
#define GPIO_DSA_PULLUP1_RD(src)                      (((src) & 0x00000004)>>2)
#define GPIO_DSA_PULLUP1_WR(src)                 (((u32)(src)<<2) & 0x00000004)
#define GPIO_DSA_PULLUP1_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_DSA_PDWN	 */
#define GPIO_DSA_PDWN1_WIDTH                                                  1
#define GPIO_DSA_PDWN1_SHIFT                                                  1
#define GPIO_DSA_PDWN1_MASK                                          0x00000002
#define GPIO_DSA_PDWN1_RD(src)                        (((src) & 0x00000002)>>1)
#define GPIO_DSA_PDWN1_WR(src)                   (((u32)(src)<<1) & 0x00000002)
#define GPIO_DSA_PDWN1_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_DSA_PWROK	 */
#define GPIO_DSA_PWROK1_WIDTH                                                 1
#define GPIO_DSA_PWROK1_SHIFT                                                 0
#define GPIO_DSA_PWROK1_MASK                                         0x00000001
#define GPIO_DSA_PWROK1_RD(src)                          (((src) & 0x00000001))
#define GPIO_DSA_PWROK1_WR(src)                     (((u32)(src)) & 0x00000001)
#define GPIO_DSA_PWROK1_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_DS_IOCTL2	*/ 
/*	 Fields GPIO_DSD_SRE	 */
#define GPIO_DSD_SRE2_WIDTH                                                   1
#define GPIO_DSD_SRE2_SHIFT                                                  28
#define GPIO_DSD_SRE2_MASK                                           0x10000000
#define GPIO_DSD_SRE2_RD(src)                        (((src) & 0x10000000)>>28)
#define GPIO_DSD_SRE2_WR(src)                   (((u32)(src)<<28) & 0x10000000)
#define GPIO_DSD_SRE2_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_DSD_HYTS	 */
#define GPIO_DSD_HYTS2_WIDTH                                                  1
#define GPIO_DSD_HYTS2_SHIFT                                                 27
#define GPIO_DSD_HYTS2_MASK                                          0x08000000
#define GPIO_DSD_HYTS2_RD(src)                       (((src) & 0x08000000)>>27)
#define GPIO_DSD_HYTS2_WR(src)                  (((u32)(src)<<27) & 0x08000000)
#define GPIO_DSD_HYTS2_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_DSD_PULLUP	 */
#define GPIO_DSD_PULLUP2_WIDTH                                                1
#define GPIO_DSD_PULLUP2_SHIFT                                               26
#define GPIO_DSD_PULLUP2_MASK                                        0x04000000
#define GPIO_DSD_PULLUP2_RD(src)                     (((src) & 0x04000000)>>26)
#define GPIO_DSD_PULLUP2_WR(src)                (((u32)(src)<<26) & 0x04000000)
#define GPIO_DSD_PULLUP2_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_DSD_PDWN	 */
#define GPIO_DSD_PDWN2_WIDTH                                                  1
#define GPIO_DSD_PDWN2_SHIFT                                                 25
#define GPIO_DSD_PDWN2_MASK                                          0x02000000
#define GPIO_DSD_PDWN2_RD(src)                       (((src) & 0x02000000)>>25)
#define GPIO_DSD_PDWN2_WR(src)                  (((u32)(src)<<25) & 0x02000000)
#define GPIO_DSD_PDWN2_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_DSD_PWROK	 */
#define GPIO_DSD_PWROK2_WIDTH                                                 1
#define GPIO_DSD_PWROK2_SHIFT                                                24
#define GPIO_DSD_PWROK2_MASK                                         0x01000000
#define GPIO_DSD_PWROK2_RD(src)                      (((src) & 0x01000000)>>24)
#define GPIO_DSD_PWROK2_WR(src)                 (((u32)(src)<<24) & 0x01000000)
#define GPIO_DSD_PWROK2_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_DSC_SRE	 */
#define GPIO_DSC_SRE2_WIDTH                                                   1
#define GPIO_DSC_SRE2_SHIFT                                                  20
#define GPIO_DSC_SRE2_MASK                                           0x00100000
#define GPIO_DSC_SRE2_RD(src)                        (((src) & 0x00100000)>>20)
#define GPIO_DSC_SRE2_WR(src)                   (((u32)(src)<<20) & 0x00100000)
#define GPIO_DSC_SRE2_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_DSC_HYTS	 */
#define GPIO_DSC_HYTS2_WIDTH                                                  1
#define GPIO_DSC_HYTS2_SHIFT                                                 19
#define GPIO_DSC_HYTS2_MASK                                          0x00080000
#define GPIO_DSC_HYTS2_RD(src)                       (((src) & 0x00080000)>>19)
#define GPIO_DSC_HYTS2_WR(src)                  (((u32)(src)<<19) & 0x00080000)
#define GPIO_DSC_HYTS2_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_DSC_PULLUP	 */
#define GPIO_DSC_PULLUP2_WIDTH                                                1
#define GPIO_DSC_PULLUP2_SHIFT                                               18
#define GPIO_DSC_PULLUP2_MASK                                        0x00040000
#define GPIO_DSC_PULLUP2_RD(src)                     (((src) & 0x00040000)>>18)
#define GPIO_DSC_PULLUP2_WR(src)                (((u32)(src)<<18) & 0x00040000)
#define GPIO_DSC_PULLUP2_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_DSC_PDWN	 */
#define GPIO_DSC_PDWN2_WIDTH                                                  1
#define GPIO_DSC_PDWN2_SHIFT                                                 17
#define GPIO_DSC_PDWN2_MASK                                          0x00020000
#define GPIO_DSC_PDWN2_RD(src)                       (((src) & 0x00020000)>>17)
#define GPIO_DSC_PDWN2_WR(src)                  (((u32)(src)<<17) & 0x00020000)
#define GPIO_DSC_PDWN2_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_DSC_PWROK	 */
#define GPIO_DSC_PWROK2_WIDTH                                                 1
#define GPIO_DSC_PWROK2_SHIFT                                                16
#define GPIO_DSC_PWROK2_MASK                                         0x00010000
#define GPIO_DSC_PWROK2_RD(src)                      (((src) & 0x00010000)>>16)
#define GPIO_DSC_PWROK2_WR(src)                 (((u32)(src)<<16) & 0x00010000)
#define GPIO_DSC_PWROK2_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_DSB_SRE	 */
#define GPIO_DSB_SRE2_WIDTH                                                   1
#define GPIO_DSB_SRE2_SHIFT                                                  12
#define GPIO_DSB_SRE2_MASK                                           0x00001000
#define GPIO_DSB_SRE2_RD(src)                        (((src) & 0x00001000)>>12)
#define GPIO_DSB_SRE2_WR(src)                   (((u32)(src)<<12) & 0x00001000)
#define GPIO_DSB_SRE2_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_DSB_HYTS	 */
#define GPIO_DSB_HYTS2_WIDTH                                                  1
#define GPIO_DSB_HYTS2_SHIFT                                                 11
#define GPIO_DSB_HYTS2_MASK                                          0x00000800
#define GPIO_DSB_HYTS2_RD(src)                       (((src) & 0x00000800)>>11)
#define GPIO_DSB_HYTS2_WR(src)                  (((u32)(src)<<11) & 0x00000800)
#define GPIO_DSB_HYTS2_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_DSB_PULLUP	 */
#define GPIO_DSB_PULLUP2_WIDTH                                                1
#define GPIO_DSB_PULLUP2_SHIFT                                               10
#define GPIO_DSB_PULLUP2_MASK                                        0x00000400
#define GPIO_DSB_PULLUP2_RD(src)                     (((src) & 0x00000400)>>10)
#define GPIO_DSB_PULLUP2_WR(src)                (((u32)(src)<<10) & 0x00000400)
#define GPIO_DSB_PULLUP2_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_DSB_PDWN	 */
#define GPIO_DSB_PDWN2_WIDTH                                                  1
#define GPIO_DSB_PDWN2_SHIFT                                                  9
#define GPIO_DSB_PDWN2_MASK                                          0x00000200
#define GPIO_DSB_PDWN2_RD(src)                        (((src) & 0x00000200)>>9)
#define GPIO_DSB_PDWN2_WR(src)                   (((u32)(src)<<9) & 0x00000200)
#define GPIO_DSB_PDWN2_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_DSB_PWROK	 */
#define GPIO_DSB_PWROK2_WIDTH                                                 1
#define GPIO_DSB_PWROK2_SHIFT                                                 8
#define GPIO_DSB_PWROK2_MASK                                         0x00000100
#define GPIO_DSB_PWROK2_RD(src)                       (((src) & 0x00000100)>>8)
#define GPIO_DSB_PWROK2_WR(src)                  (((u32)(src)<<8) & 0x00000100)
#define GPIO_DSB_PWROK2_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_DSA_SRE	 */
#define GPIO_DSA_SRE2_WIDTH                                                   1
#define GPIO_DSA_SRE2_SHIFT                                                   4
#define GPIO_DSA_SRE2_MASK                                           0x00000010
#define GPIO_DSA_SRE2_RD(src)                         (((src) & 0x00000010)>>4)
#define GPIO_DSA_SRE2_WR(src)                    (((u32)(src)<<4) & 0x00000010)
#define GPIO_DSA_SRE2_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_DSA_HYTS	 */
#define GPIO_DSA_HYTS2_WIDTH                                                  1
#define GPIO_DSA_HYTS2_SHIFT                                                  3
#define GPIO_DSA_HYTS2_MASK                                          0x00000008
#define GPIO_DSA_HYTS2_RD(src)                        (((src) & 0x00000008)>>3)
#define GPIO_DSA_HYTS2_WR(src)                   (((u32)(src)<<3) & 0x00000008)
#define GPIO_DSA_HYTS2_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_DSA_PULLUP	 */
#define GPIO_DSA_PULLUP2_WIDTH                                                1
#define GPIO_DSA_PULLUP2_SHIFT                                                2
#define GPIO_DSA_PULLUP2_MASK                                        0x00000004
#define GPIO_DSA_PULLUP2_RD(src)                      (((src) & 0x00000004)>>2)
#define GPIO_DSA_PULLUP2_WR(src)                 (((u32)(src)<<2) & 0x00000004)
#define GPIO_DSA_PULLUP2_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_DSA_PDWN	 */
#define GPIO_DSA_PDWN2_WIDTH                                                  1
#define GPIO_DSA_PDWN2_SHIFT                                                  1
#define GPIO_DSA_PDWN2_MASK                                          0x00000002
#define GPIO_DSA_PDWN2_RD(src)                        (((src) & 0x00000002)>>1)
#define GPIO_DSA_PDWN2_WR(src)                   (((u32)(src)<<1) & 0x00000002)
#define GPIO_DSA_PDWN2_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_DSA_PWROK	 */
#define GPIO_DSA_PWROK2_WIDTH                                                 1
#define GPIO_DSA_PWROK2_SHIFT                                                 0
#define GPIO_DSA_PWROK2_MASK                                         0x00000001
#define GPIO_DSA_PWROK2_RD(src)                          (((src) & 0x00000001))
#define GPIO_DSA_PWROK2_WR(src)                     (((u32)(src)) & 0x00000001)
#define GPIO_DSA_PWROK2_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_DS_IOCTL3	*/ 
/*	 Fields GPIO_DSD_SRE	 */
#define GPIO_DSD_SRE3_WIDTH                                                   1
#define GPIO_DSD_SRE3_SHIFT                                                  28
#define GPIO_DSD_SRE3_MASK                                           0x10000000
#define GPIO_DSD_SRE3_RD(src)                        (((src) & 0x10000000)>>28)
#define GPIO_DSD_SRE3_WR(src)                   (((u32)(src)<<28) & 0x10000000)
#define GPIO_DSD_SRE3_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_DSD_HYTS	 */
#define GPIO_DSD_HYTS3_WIDTH                                                  1
#define GPIO_DSD_HYTS3_SHIFT                                                 27
#define GPIO_DSD_HYTS3_MASK                                          0x08000000
#define GPIO_DSD_HYTS3_RD(src)                       (((src) & 0x08000000)>>27)
#define GPIO_DSD_HYTS3_WR(src)                  (((u32)(src)<<27) & 0x08000000)
#define GPIO_DSD_HYTS3_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_DSD_PULLUP	 */
#define GPIO_DSD_PULLUP3_WIDTH                                                1
#define GPIO_DSD_PULLUP3_SHIFT                                               26
#define GPIO_DSD_PULLUP3_MASK                                        0x04000000
#define GPIO_DSD_PULLUP3_RD(src)                     (((src) & 0x04000000)>>26)
#define GPIO_DSD_PULLUP3_WR(src)                (((u32)(src)<<26) & 0x04000000)
#define GPIO_DSD_PULLUP3_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_DSD_PDWN	 */
#define GPIO_DSD_PDWN3_WIDTH                                                  1
#define GPIO_DSD_PDWN3_SHIFT                                                 25
#define GPIO_DSD_PDWN3_MASK                                          0x02000000
#define GPIO_DSD_PDWN3_RD(src)                       (((src) & 0x02000000)>>25)
#define GPIO_DSD_PDWN3_WR(src)                  (((u32)(src)<<25) & 0x02000000)
#define GPIO_DSD_PDWN3_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_DSD_PWROK	 */
#define GPIO_DSD_PWROK3_WIDTH                                                 1
#define GPIO_DSD_PWROK3_SHIFT                                                24
#define GPIO_DSD_PWROK3_MASK                                         0x01000000
#define GPIO_DSD_PWROK3_RD(src)                      (((src) & 0x01000000)>>24)
#define GPIO_DSD_PWROK3_WR(src)                 (((u32)(src)<<24) & 0x01000000)
#define GPIO_DSD_PWROK3_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_DSC_SRE	 */
#define GPIO_DSC_SRE3_WIDTH                                                   1
#define GPIO_DSC_SRE3_SHIFT                                                  20
#define GPIO_DSC_SRE3_MASK                                           0x00100000
#define GPIO_DSC_SRE3_RD(src)                        (((src) & 0x00100000)>>20)
#define GPIO_DSC_SRE3_WR(src)                   (((u32)(src)<<20) & 0x00100000)
#define GPIO_DSC_SRE3_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_DSC_HYTS	 */
#define GPIO_DSC_HYTS3_WIDTH                                                  1
#define GPIO_DSC_HYTS3_SHIFT                                                 19
#define GPIO_DSC_HYTS3_MASK                                          0x00080000
#define GPIO_DSC_HYTS3_RD(src)                       (((src) & 0x00080000)>>19)
#define GPIO_DSC_HYTS3_WR(src)                  (((u32)(src)<<19) & 0x00080000)
#define GPIO_DSC_HYTS3_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_DSC_PULLUP	 */
#define GPIO_DSC_PULLUP3_WIDTH                                                1
#define GPIO_DSC_PULLUP3_SHIFT                                               18
#define GPIO_DSC_PULLUP3_MASK                                        0x00040000
#define GPIO_DSC_PULLUP3_RD(src)                     (((src) & 0x00040000)>>18)
#define GPIO_DSC_PULLUP3_WR(src)                (((u32)(src)<<18) & 0x00040000)
#define GPIO_DSC_PULLUP3_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_DSC_PDWN	 */
#define GPIO_DSC_PDWN3_WIDTH                                                  1
#define GPIO_DSC_PDWN3_SHIFT                                                 17
#define GPIO_DSC_PDWN3_MASK                                          0x00020000
#define GPIO_DSC_PDWN3_RD(src)                       (((src) & 0x00020000)>>17)
#define GPIO_DSC_PDWN3_WR(src)                  (((u32)(src)<<17) & 0x00020000)
#define GPIO_DSC_PDWN3_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_DSC_PWROK	 */
#define GPIO_DSC_PWROK3_WIDTH                                                 1
#define GPIO_DSC_PWROK3_SHIFT                                                16
#define GPIO_DSC_PWROK3_MASK                                         0x00010000
#define GPIO_DSC_PWROK3_RD(src)                      (((src) & 0x00010000)>>16)
#define GPIO_DSC_PWROK3_WR(src)                 (((u32)(src)<<16) & 0x00010000)
#define GPIO_DSC_PWROK3_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_DSB_SRE	 */
#define GPIO_DSB_SRE3_WIDTH                                                   1
#define GPIO_DSB_SRE3_SHIFT                                                  12
#define GPIO_DSB_SRE3_MASK                                           0x00001000
#define GPIO_DSB_SRE3_RD(src)                        (((src) & 0x00001000)>>12)
#define GPIO_DSB_SRE3_WR(src)                   (((u32)(src)<<12) & 0x00001000)
#define GPIO_DSB_SRE3_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_DSB_HYTS	 */
#define GPIO_DSB_HYTS3_WIDTH                                                  1
#define GPIO_DSB_HYTS3_SHIFT                                                 11
#define GPIO_DSB_HYTS3_MASK                                          0x00000800
#define GPIO_DSB_HYTS3_RD(src)                       (((src) & 0x00000800)>>11)
#define GPIO_DSB_HYTS3_WR(src)                  (((u32)(src)<<11) & 0x00000800)
#define GPIO_DSB_HYTS3_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_DSB_PULLUP	 */
#define GPIO_DSB_PULLUP3_WIDTH                                                1
#define GPIO_DSB_PULLUP3_SHIFT                                               10
#define GPIO_DSB_PULLUP3_MASK                                        0x00000400
#define GPIO_DSB_PULLUP3_RD(src)                     (((src) & 0x00000400)>>10)
#define GPIO_DSB_PULLUP3_WR(src)                (((u32)(src)<<10) & 0x00000400)
#define GPIO_DSB_PULLUP3_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_DSB_PDWN	 */
#define GPIO_DSB_PDWN3_WIDTH                                                  1
#define GPIO_DSB_PDWN3_SHIFT                                                  9
#define GPIO_DSB_PDWN3_MASK                                          0x00000200
#define GPIO_DSB_PDWN3_RD(src)                        (((src) & 0x00000200)>>9)
#define GPIO_DSB_PDWN3_WR(src)                   (((u32)(src)<<9) & 0x00000200)
#define GPIO_DSB_PDWN3_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_DSB_PWROK	 */
#define GPIO_DSB_PWROK3_WIDTH                                                 1
#define GPIO_DSB_PWROK3_SHIFT                                                 8
#define GPIO_DSB_PWROK3_MASK                                         0x00000100
#define GPIO_DSB_PWROK3_RD(src)                       (((src) & 0x00000100)>>8)
#define GPIO_DSB_PWROK3_WR(src)                  (((u32)(src)<<8) & 0x00000100)
#define GPIO_DSB_PWROK3_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_DSA_SRE	 */
#define GPIO_DSA_SRE3_WIDTH                                                   1
#define GPIO_DSA_SRE3_SHIFT                                                   4
#define GPIO_DSA_SRE3_MASK                                           0x00000010
#define GPIO_DSA_SRE3_RD(src)                         (((src) & 0x00000010)>>4)
#define GPIO_DSA_SRE3_WR(src)                    (((u32)(src)<<4) & 0x00000010)
#define GPIO_DSA_SRE3_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_DSA_HYTS	 */
#define GPIO_DSA_HYTS3_WIDTH                                                  1
#define GPIO_DSA_HYTS3_SHIFT                                                  3
#define GPIO_DSA_HYTS3_MASK                                          0x00000008
#define GPIO_DSA_HYTS3_RD(src)                        (((src) & 0x00000008)>>3)
#define GPIO_DSA_HYTS3_WR(src)                   (((u32)(src)<<3) & 0x00000008)
#define GPIO_DSA_HYTS3_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_DSA_PULLUP	 */
#define GPIO_DSA_PULLUP3_WIDTH                                                1
#define GPIO_DSA_PULLUP3_SHIFT                                                2
#define GPIO_DSA_PULLUP3_MASK                                        0x00000004
#define GPIO_DSA_PULLUP3_RD(src)                      (((src) & 0x00000004)>>2)
#define GPIO_DSA_PULLUP3_WR(src)                 (((u32)(src)<<2) & 0x00000004)
#define GPIO_DSA_PULLUP3_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_DSA_PDWN	 */
#define GPIO_DSA_PDWN3_WIDTH                                                  1
#define GPIO_DSA_PDWN3_SHIFT                                                  1
#define GPIO_DSA_PDWN3_MASK                                          0x00000002
#define GPIO_DSA_PDWN3_RD(src)                        (((src) & 0x00000002)>>1)
#define GPIO_DSA_PDWN3_WR(src)                   (((u32)(src)<<1) & 0x00000002)
#define GPIO_DSA_PDWN3_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_DSA_PWROK	 */
#define GPIO_DSA_PWROK3_WIDTH                                                 1
#define GPIO_DSA_PWROK3_SHIFT                                                 0
#define GPIO_DSA_PWROK3_MASK                                         0x00000001
#define GPIO_DSA_PWROK3_RD(src)                          (((src) & 0x00000001))
#define GPIO_DSA_PWROK3_WR(src)                     (((u32)(src)) & 0x00000001)
#define GPIO_DSA_PWROK3_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LCD_IOCTL0	*/ 
/*	 Fields GPIO_LCDD_SRE	 */
#define GPIO_LCDD_SRE0_WIDTH                                                  1
#define GPIO_LCDD_SRE0_SHIFT                                                 28
#define GPIO_LCDD_SRE0_MASK                                          0x10000000
#define GPIO_LCDD_SRE0_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LCDD_SRE0_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LCDD_SRE0_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LCDD_HYTS	 */
#define GPIO_LCDD_HYTS0_WIDTH                                                 1
#define GPIO_LCDD_HYTS0_SHIFT                                                27
#define GPIO_LCDD_HYTS0_MASK                                         0x08000000
#define GPIO_LCDD_HYTS0_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LCDD_HYTS0_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LCDD_HYTS0_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LCDD_PULLUP	 */
#define GPIO_LCDD_PULLUP0_WIDTH                                               1
#define GPIO_LCDD_PULLUP0_SHIFT                                              26
#define GPIO_LCDD_PULLUP0_MASK                                       0x04000000
#define GPIO_LCDD_PULLUP0_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LCDD_PULLUP0_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LCDD_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LCDD_PDWN	 */
#define GPIO_LCDD_PDWN0_WIDTH                                                 1
#define GPIO_LCDD_PDWN0_SHIFT                                                25
#define GPIO_LCDD_PDWN0_MASK                                         0x02000000
#define GPIO_LCDD_PDWN0_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LCDD_PDWN0_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LCDD_PDWN0_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LCDD_PWROK	 */
#define GPIO_LCDD_PWROK0_WIDTH                                                1
#define GPIO_LCDD_PWROK0_SHIFT                                               24
#define GPIO_LCDD_PWROK0_MASK                                        0x01000000
#define GPIO_LCDD_PWROK0_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LCDD_PWROK0_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LCDD_PWROK0_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LCDC_SRE	 */
#define GPIO_LCDC_SRE0_WIDTH                                                  1
#define GPIO_LCDC_SRE0_SHIFT                                                 20
#define GPIO_LCDC_SRE0_MASK                                          0x00100000
#define GPIO_LCDC_SRE0_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LCDC_SRE0_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LCDC_SRE0_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LCDC_HYTS	 */
#define GPIO_LCDC_HYTS0_WIDTH                                                 1
#define GPIO_LCDC_HYTS0_SHIFT                                                19
#define GPIO_LCDC_HYTS0_MASK                                         0x00080000
#define GPIO_LCDC_HYTS0_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LCDC_HYTS0_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LCDC_HYTS0_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LCDC_PULLUP	 */
#define GPIO_LCDC_PULLUP0_WIDTH                                               1
#define GPIO_LCDC_PULLUP0_SHIFT                                              18
#define GPIO_LCDC_PULLUP0_MASK                                       0x00040000
#define GPIO_LCDC_PULLUP0_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LCDC_PULLUP0_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LCDC_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LCDC_PDWN	 */
#define GPIO_LCDC_PDWN0_WIDTH                                                 1
#define GPIO_LCDC_PDWN0_SHIFT                                                17
#define GPIO_LCDC_PDWN0_MASK                                         0x00020000
#define GPIO_LCDC_PDWN0_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LCDC_PDWN0_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LCDC_PDWN0_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LCDC_PWROK	 */
#define GPIO_LCDC_PWROK0_WIDTH                                                1
#define GPIO_LCDC_PWROK0_SHIFT                                               16
#define GPIO_LCDC_PWROK0_MASK                                        0x00010000
#define GPIO_LCDC_PWROK0_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LCDC_PWROK0_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LCDC_PWROK0_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LCDB_SRE	 */
#define GPIO_LCDB_SRE0_WIDTH                                                  1
#define GPIO_LCDB_SRE0_SHIFT                                                 12
#define GPIO_LCDB_SRE0_MASK                                          0x00001000
#define GPIO_LCDB_SRE0_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LCDB_SRE0_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LCDB_SRE0_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LCDB_HYTS	 */
#define GPIO_LCDB_HYTS0_WIDTH                                                 1
#define GPIO_LCDB_HYTS0_SHIFT                                                11
#define GPIO_LCDB_HYTS0_MASK                                         0x00000800
#define GPIO_LCDB_HYTS0_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LCDB_HYTS0_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LCDB_HYTS0_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LCDB_PULLUP	 */
#define GPIO_LCDB_PULLUP0_WIDTH                                               1
#define GPIO_LCDB_PULLUP0_SHIFT                                              10
#define GPIO_LCDB_PULLUP0_MASK                                       0x00000400
#define GPIO_LCDB_PULLUP0_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LCDB_PULLUP0_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LCDB_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LCDB_PDWN	 */
#define GPIO_LCDB_PDWN0_WIDTH                                                 1
#define GPIO_LCDB_PDWN0_SHIFT                                                 9
#define GPIO_LCDB_PDWN0_MASK                                         0x00000200
#define GPIO_LCDB_PDWN0_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LCDB_PDWN0_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LCDB_PDWN0_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LCDB_PWROK	 */
#define GPIO_LCDB_PWROK0_WIDTH                                                1
#define GPIO_LCDB_PWROK0_SHIFT                                                8
#define GPIO_LCDB_PWROK0_MASK                                        0x00000100
#define GPIO_LCDB_PWROK0_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LCDB_PWROK0_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LCDB_PWROK0_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LCDA_SRE	 */
#define GPIO_LCDA_SRE0_WIDTH                                                  1
#define GPIO_LCDA_SRE0_SHIFT                                                  4
#define GPIO_LCDA_SRE0_MASK                                          0x00000010
#define GPIO_LCDA_SRE0_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LCDA_SRE0_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LCDA_SRE0_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LCDA_HYTS	 */
#define GPIO_LCDA_HYTS0_WIDTH                                                 1
#define GPIO_LCDA_HYTS0_SHIFT                                                 3
#define GPIO_LCDA_HYTS0_MASK                                         0x00000008
#define GPIO_LCDA_HYTS0_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LCDA_HYTS0_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LCDA_HYTS0_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LCDA_PULLUP	 */
#define GPIO_LCDA_PULLUP0_WIDTH                                               1
#define GPIO_LCDA_PULLUP0_SHIFT                                               2
#define GPIO_LCDA_PULLUP0_MASK                                       0x00000004
#define GPIO_LCDA_PULLUP0_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LCDA_PULLUP0_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LCDA_PULLUP0_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LCDA_PDWN	 */
#define GPIO_LCDA_PDWN0_WIDTH                                                 1
#define GPIO_LCDA_PDWN0_SHIFT                                                 1
#define GPIO_LCDA_PDWN0_MASK                                         0x00000002
#define GPIO_LCDA_PDWN0_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LCDA_PDWN0_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LCDA_PDWN0_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LCDA_PWROK	 */
#define GPIO_LCDA_PWROK0_WIDTH                                                1
#define GPIO_LCDA_PWROK0_SHIFT                                                0
#define GPIO_LCDA_PWROK0_MASK                                        0x00000001
#define GPIO_LCDA_PWROK0_RD(src)                         (((src) & 0x00000001))
#define GPIO_LCDA_PWROK0_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LCDA_PWROK0_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LCD_IOCTL1	*/ 
/*	 Fields GPIO_LCDD_SRE	 */
#define GPIO_LCDD_SRE1_WIDTH                                                  1
#define GPIO_LCDD_SRE1_SHIFT                                                 28
#define GPIO_LCDD_SRE1_MASK                                          0x10000000
#define GPIO_LCDD_SRE1_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LCDD_SRE1_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LCDD_SRE1_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LCDD_HYTS	 */
#define GPIO_LCDD_HYTS1_WIDTH                                                 1
#define GPIO_LCDD_HYTS1_SHIFT                                                27
#define GPIO_LCDD_HYTS1_MASK                                         0x08000000
#define GPIO_LCDD_HYTS1_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LCDD_HYTS1_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LCDD_HYTS1_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LCDD_PULLUP	 */
#define GPIO_LCDD_PULLUP1_WIDTH                                               1
#define GPIO_LCDD_PULLUP1_SHIFT                                              26
#define GPIO_LCDD_PULLUP1_MASK                                       0x04000000
#define GPIO_LCDD_PULLUP1_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LCDD_PULLUP1_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LCDD_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LCDD_PDWN	 */
#define GPIO_LCDD_PDWN1_WIDTH                                                 1
#define GPIO_LCDD_PDWN1_SHIFT                                                25
#define GPIO_LCDD_PDWN1_MASK                                         0x02000000
#define GPIO_LCDD_PDWN1_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LCDD_PDWN1_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LCDD_PDWN1_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LCDD_PWROK	 */
#define GPIO_LCDD_PWROK1_WIDTH                                                1
#define GPIO_LCDD_PWROK1_SHIFT                                               24
#define GPIO_LCDD_PWROK1_MASK                                        0x01000000
#define GPIO_LCDD_PWROK1_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LCDD_PWROK1_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LCDD_PWROK1_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LCDC_SRE	 */
#define GPIO_LCDC_SRE1_WIDTH                                                  1
#define GPIO_LCDC_SRE1_SHIFT                                                 20
#define GPIO_LCDC_SRE1_MASK                                          0x00100000
#define GPIO_LCDC_SRE1_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LCDC_SRE1_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LCDC_SRE1_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LCDC_HYTS	 */
#define GPIO_LCDC_HYTS1_WIDTH                                                 1
#define GPIO_LCDC_HYTS1_SHIFT                                                19
#define GPIO_LCDC_HYTS1_MASK                                         0x00080000
#define GPIO_LCDC_HYTS1_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LCDC_HYTS1_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LCDC_HYTS1_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LCDC_PULLUP	 */
#define GPIO_LCDC_PULLUP1_WIDTH                                               1
#define GPIO_LCDC_PULLUP1_SHIFT                                              18
#define GPIO_LCDC_PULLUP1_MASK                                       0x00040000
#define GPIO_LCDC_PULLUP1_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LCDC_PULLUP1_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LCDC_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LCDC_PDWN	 */
#define GPIO_LCDC_PDWN1_WIDTH                                                 1
#define GPIO_LCDC_PDWN1_SHIFT                                                17
#define GPIO_LCDC_PDWN1_MASK                                         0x00020000
#define GPIO_LCDC_PDWN1_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LCDC_PDWN1_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LCDC_PDWN1_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LCDC_PWROK	 */
#define GPIO_LCDC_PWROK1_WIDTH                                                1
#define GPIO_LCDC_PWROK1_SHIFT                                               16
#define GPIO_LCDC_PWROK1_MASK                                        0x00010000
#define GPIO_LCDC_PWROK1_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LCDC_PWROK1_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LCDC_PWROK1_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LCDB_SRE	 */
#define GPIO_LCDB_SRE1_WIDTH                                                  1
#define GPIO_LCDB_SRE1_SHIFT                                                 12
#define GPIO_LCDB_SRE1_MASK                                          0x00001000
#define GPIO_LCDB_SRE1_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LCDB_SRE1_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LCDB_SRE1_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LCDB_HYTS	 */
#define GPIO_LCDB_HYTS1_WIDTH                                                 1
#define GPIO_LCDB_HYTS1_SHIFT                                                11
#define GPIO_LCDB_HYTS1_MASK                                         0x00000800
#define GPIO_LCDB_HYTS1_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LCDB_HYTS1_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LCDB_HYTS1_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LCDB_PULLUP	 */
#define GPIO_LCDB_PULLUP1_WIDTH                                               1
#define GPIO_LCDB_PULLUP1_SHIFT                                              10
#define GPIO_LCDB_PULLUP1_MASK                                       0x00000400
#define GPIO_LCDB_PULLUP1_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LCDB_PULLUP1_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LCDB_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LCDB_PDWN	 */
#define GPIO_LCDB_PDWN1_WIDTH                                                 1
#define GPIO_LCDB_PDWN1_SHIFT                                                 9
#define GPIO_LCDB_PDWN1_MASK                                         0x00000200
#define GPIO_LCDB_PDWN1_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LCDB_PDWN1_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LCDB_PDWN1_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LCDB_PWROK	 */
#define GPIO_LCDB_PWROK1_WIDTH                                                1
#define GPIO_LCDB_PWROK1_SHIFT                                                8
#define GPIO_LCDB_PWROK1_MASK                                        0x00000100
#define GPIO_LCDB_PWROK1_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LCDB_PWROK1_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LCDB_PWROK1_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LCDA_SRE	 */
#define GPIO_LCDA_SRE1_WIDTH                                                  1
#define GPIO_LCDA_SRE1_SHIFT                                                  4
#define GPIO_LCDA_SRE1_MASK                                          0x00000010
#define GPIO_LCDA_SRE1_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LCDA_SRE1_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LCDA_SRE1_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LCDA_HYTS	 */
#define GPIO_LCDA_HYTS1_WIDTH                                                 1
#define GPIO_LCDA_HYTS1_SHIFT                                                 3
#define GPIO_LCDA_HYTS1_MASK                                         0x00000008
#define GPIO_LCDA_HYTS1_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LCDA_HYTS1_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LCDA_HYTS1_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LCDA_PULLUP	 */
#define GPIO_LCDA_PULLUP1_WIDTH                                               1
#define GPIO_LCDA_PULLUP1_SHIFT                                               2
#define GPIO_LCDA_PULLUP1_MASK                                       0x00000004
#define GPIO_LCDA_PULLUP1_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LCDA_PULLUP1_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LCDA_PULLUP1_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LCDA_PDWN	 */
#define GPIO_LCDA_PDWN1_WIDTH                                                 1
#define GPIO_LCDA_PDWN1_SHIFT                                                 1
#define GPIO_LCDA_PDWN1_MASK                                         0x00000002
#define GPIO_LCDA_PDWN1_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LCDA_PDWN1_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LCDA_PDWN1_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LCDA_PWROK	 */
#define GPIO_LCDA_PWROK1_WIDTH                                                1
#define GPIO_LCDA_PWROK1_SHIFT                                                0
#define GPIO_LCDA_PWROK1_MASK                                        0x00000001
#define GPIO_LCDA_PWROK1_RD(src)                         (((src) & 0x00000001))
#define GPIO_LCDA_PWROK1_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LCDA_PWROK1_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LCD_IOCTL2	*/ 
/*	 Fields GPIO_LCDD_SRE	 */
#define GPIO_LCDD_SRE2_WIDTH                                                  1
#define GPIO_LCDD_SRE2_SHIFT                                                 28
#define GPIO_LCDD_SRE2_MASK                                          0x10000000
#define GPIO_LCDD_SRE2_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LCDD_SRE2_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LCDD_SRE2_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LCDD_HYTS	 */
#define GPIO_LCDD_HYTS2_WIDTH                                                 1
#define GPIO_LCDD_HYTS2_SHIFT                                                27
#define GPIO_LCDD_HYTS2_MASK                                         0x08000000
#define GPIO_LCDD_HYTS2_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LCDD_HYTS2_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LCDD_HYTS2_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LCDD_PULLUP	 */
#define GPIO_LCDD_PULLUP2_WIDTH                                               1
#define GPIO_LCDD_PULLUP2_SHIFT                                              26
#define GPIO_LCDD_PULLUP2_MASK                                       0x04000000
#define GPIO_LCDD_PULLUP2_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LCDD_PULLUP2_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LCDD_PULLUP2_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LCDD_PDWN	 */
#define GPIO_LCDD_PDWN2_WIDTH                                                 1
#define GPIO_LCDD_PDWN2_SHIFT                                                25
#define GPIO_LCDD_PDWN2_MASK                                         0x02000000
#define GPIO_LCDD_PDWN2_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LCDD_PDWN2_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LCDD_PDWN2_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LCDD_PWROK	 */
#define GPIO_LCDD_PWROK2_WIDTH                                                1
#define GPIO_LCDD_PWROK2_SHIFT                                               24
#define GPIO_LCDD_PWROK2_MASK                                        0x01000000
#define GPIO_LCDD_PWROK2_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LCDD_PWROK2_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LCDD_PWROK2_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LCDC_SRE	 */
#define GPIO_LCDC_SRE2_WIDTH                                                  1
#define GPIO_LCDC_SRE2_SHIFT                                                 20
#define GPIO_LCDC_SRE2_MASK                                          0x00100000
#define GPIO_LCDC_SRE2_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LCDC_SRE2_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LCDC_SRE2_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LCDC_HYTS	 */
#define GPIO_LCDC_HYTS2_WIDTH                                                 1
#define GPIO_LCDC_HYTS2_SHIFT                                                19
#define GPIO_LCDC_HYTS2_MASK                                         0x00080000
#define GPIO_LCDC_HYTS2_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LCDC_HYTS2_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LCDC_HYTS2_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LCDC_PULLUP	 */
#define GPIO_LCDC_PULLUP2_WIDTH                                               1
#define GPIO_LCDC_PULLUP2_SHIFT                                              18
#define GPIO_LCDC_PULLUP2_MASK                                       0x00040000
#define GPIO_LCDC_PULLUP2_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LCDC_PULLUP2_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LCDC_PULLUP2_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LCDC_PDWN	 */
#define GPIO_LCDC_PDWN2_WIDTH                                                 1
#define GPIO_LCDC_PDWN2_SHIFT                                                17
#define GPIO_LCDC_PDWN2_MASK                                         0x00020000
#define GPIO_LCDC_PDWN2_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LCDC_PDWN2_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LCDC_PDWN2_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LCDC_PWROK	 */
#define GPIO_LCDC_PWROK2_WIDTH                                                1
#define GPIO_LCDC_PWROK2_SHIFT                                               16
#define GPIO_LCDC_PWROK2_MASK                                        0x00010000
#define GPIO_LCDC_PWROK2_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LCDC_PWROK2_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LCDC_PWROK2_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LCDB_SRE	 */
#define GPIO_LCDB_SRE2_WIDTH                                                  1
#define GPIO_LCDB_SRE2_SHIFT                                                 12
#define GPIO_LCDB_SRE2_MASK                                          0x00001000
#define GPIO_LCDB_SRE2_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LCDB_SRE2_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LCDB_SRE2_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LCDB_HYTS	 */
#define GPIO_LCDB_HYTS2_WIDTH                                                 1
#define GPIO_LCDB_HYTS2_SHIFT                                                11
#define GPIO_LCDB_HYTS2_MASK                                         0x00000800
#define GPIO_LCDB_HYTS2_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LCDB_HYTS2_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LCDB_HYTS2_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LCDB_PULLUP	 */
#define GPIO_LCDB_PULLUP2_WIDTH                                               1
#define GPIO_LCDB_PULLUP2_SHIFT                                              10
#define GPIO_LCDB_PULLUP2_MASK                                       0x00000400
#define GPIO_LCDB_PULLUP2_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LCDB_PULLUP2_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LCDB_PULLUP2_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LCDB_PDWN	 */
#define GPIO_LCDB_PDWN2_WIDTH                                                 1
#define GPIO_LCDB_PDWN2_SHIFT                                                 9
#define GPIO_LCDB_PDWN2_MASK                                         0x00000200
#define GPIO_LCDB_PDWN2_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LCDB_PDWN2_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LCDB_PDWN2_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LCDB_PWROK	 */
#define GPIO_LCDB_PWROK2_WIDTH                                                1
#define GPIO_LCDB_PWROK2_SHIFT                                                8
#define GPIO_LCDB_PWROK2_MASK                                        0x00000100
#define GPIO_LCDB_PWROK2_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LCDB_PWROK2_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LCDB_PWROK2_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LCDA_SRE	 */
#define GPIO_LCDA_SRE2_WIDTH                                                  1
#define GPIO_LCDA_SRE2_SHIFT                                                  4
#define GPIO_LCDA_SRE2_MASK                                          0x00000010
#define GPIO_LCDA_SRE2_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LCDA_SRE2_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LCDA_SRE2_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LCDA_HYTS	 */
#define GPIO_LCDA_HYTS2_WIDTH                                                 1
#define GPIO_LCDA_HYTS2_SHIFT                                                 3
#define GPIO_LCDA_HYTS2_MASK                                         0x00000008
#define GPIO_LCDA_HYTS2_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LCDA_HYTS2_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LCDA_HYTS2_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LCDA_PULLUP	 */
#define GPIO_LCDA_PULLUP2_WIDTH                                               1
#define GPIO_LCDA_PULLUP2_SHIFT                                               2
#define GPIO_LCDA_PULLUP2_MASK                                       0x00000004
#define GPIO_LCDA_PULLUP2_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LCDA_PULLUP2_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LCDA_PULLUP2_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LCDA_PDWN	 */
#define GPIO_LCDA_PDWN2_WIDTH                                                 1
#define GPIO_LCDA_PDWN2_SHIFT                                                 1
#define GPIO_LCDA_PDWN2_MASK                                         0x00000002
#define GPIO_LCDA_PDWN2_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LCDA_PDWN2_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LCDA_PDWN2_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LCDA_PWROK	 */
#define GPIO_LCDA_PWROK2_WIDTH                                                1
#define GPIO_LCDA_PWROK2_SHIFT                                                0
#define GPIO_LCDA_PWROK2_MASK                                        0x00000001
#define GPIO_LCDA_PWROK2_RD(src)                         (((src) & 0x00000001))
#define GPIO_LCDA_PWROK2_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LCDA_PWROK2_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LCD_IOCTL3	*/ 
/*	 Fields GPIO_LCDD_SRE	 */
#define GPIO_LCDD_SRE3_WIDTH                                                  1
#define GPIO_LCDD_SRE3_SHIFT                                                 28
#define GPIO_LCDD_SRE3_MASK                                          0x10000000
#define GPIO_LCDD_SRE3_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LCDD_SRE3_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LCDD_SRE3_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LCDD_HYTS	 */
#define GPIO_LCDD_HYTS3_WIDTH                                                 1
#define GPIO_LCDD_HYTS3_SHIFT                                                27
#define GPIO_LCDD_HYTS3_MASK                                         0x08000000
#define GPIO_LCDD_HYTS3_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LCDD_HYTS3_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LCDD_HYTS3_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LCDD_PULLUP	 */
#define GPIO_LCDD_PULLUP3_WIDTH                                               1
#define GPIO_LCDD_PULLUP3_SHIFT                                              26
#define GPIO_LCDD_PULLUP3_MASK                                       0x04000000
#define GPIO_LCDD_PULLUP3_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LCDD_PULLUP3_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LCDD_PULLUP3_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LCDD_PDWN	 */
#define GPIO_LCDD_PDWN3_WIDTH                                                 1
#define GPIO_LCDD_PDWN3_SHIFT                                                25
#define GPIO_LCDD_PDWN3_MASK                                         0x02000000
#define GPIO_LCDD_PDWN3_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LCDD_PDWN3_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LCDD_PDWN3_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LCDD_PWROK	 */
#define GPIO_LCDD_PWROK3_WIDTH                                                1
#define GPIO_LCDD_PWROK3_SHIFT                                               24
#define GPIO_LCDD_PWROK3_MASK                                        0x01000000
#define GPIO_LCDD_PWROK3_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LCDD_PWROK3_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LCDD_PWROK3_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LCDC_SRE	 */
#define GPIO_LCDC_SRE3_WIDTH                                                  1
#define GPIO_LCDC_SRE3_SHIFT                                                 20
#define GPIO_LCDC_SRE3_MASK                                          0x00100000
#define GPIO_LCDC_SRE3_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LCDC_SRE3_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LCDC_SRE3_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LCDC_HYTS	 */
#define GPIO_LCDC_HYTS3_WIDTH                                                 1
#define GPIO_LCDC_HYTS3_SHIFT                                                19
#define GPIO_LCDC_HYTS3_MASK                                         0x00080000
#define GPIO_LCDC_HYTS3_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LCDC_HYTS3_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LCDC_HYTS3_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LCDC_PULLUP	 */
#define GPIO_LCDC_PULLUP3_WIDTH                                               1
#define GPIO_LCDC_PULLUP3_SHIFT                                              18
#define GPIO_LCDC_PULLUP3_MASK                                       0x00040000
#define GPIO_LCDC_PULLUP3_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LCDC_PULLUP3_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LCDC_PULLUP3_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LCDC_PDWN	 */
#define GPIO_LCDC_PDWN3_WIDTH                                                 1
#define GPIO_LCDC_PDWN3_SHIFT                                                17
#define GPIO_LCDC_PDWN3_MASK                                         0x00020000
#define GPIO_LCDC_PDWN3_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LCDC_PDWN3_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LCDC_PDWN3_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LCDC_PWROK	 */
#define GPIO_LCDC_PWROK3_WIDTH                                                1
#define GPIO_LCDC_PWROK3_SHIFT                                               16
#define GPIO_LCDC_PWROK3_MASK                                        0x00010000
#define GPIO_LCDC_PWROK3_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LCDC_PWROK3_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LCDC_PWROK3_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LCDB_SRE	 */
#define GPIO_LCDB_SRE3_WIDTH                                                  1
#define GPIO_LCDB_SRE3_SHIFT                                                 12
#define GPIO_LCDB_SRE3_MASK                                          0x00001000
#define GPIO_LCDB_SRE3_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LCDB_SRE3_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LCDB_SRE3_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LCDB_HYTS	 */
#define GPIO_LCDB_HYTS3_WIDTH                                                 1
#define GPIO_LCDB_HYTS3_SHIFT                                                11
#define GPIO_LCDB_HYTS3_MASK                                         0x00000800
#define GPIO_LCDB_HYTS3_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LCDB_HYTS3_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LCDB_HYTS3_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LCDB_PULLUP	 */
#define GPIO_LCDB_PULLUP3_WIDTH                                               1
#define GPIO_LCDB_PULLUP3_SHIFT                                              10
#define GPIO_LCDB_PULLUP3_MASK                                       0x00000400
#define GPIO_LCDB_PULLUP3_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LCDB_PULLUP3_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LCDB_PULLUP3_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LCDB_PDWN	 */
#define GPIO_LCDB_PDWN3_WIDTH                                                 1
#define GPIO_LCDB_PDWN3_SHIFT                                                 9
#define GPIO_LCDB_PDWN3_MASK                                         0x00000200
#define GPIO_LCDB_PDWN3_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LCDB_PDWN3_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LCDB_PDWN3_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LCDB_PWROK	 */
#define GPIO_LCDB_PWROK3_WIDTH                                                1
#define GPIO_LCDB_PWROK3_SHIFT                                                8
#define GPIO_LCDB_PWROK3_MASK                                        0x00000100
#define GPIO_LCDB_PWROK3_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LCDB_PWROK3_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LCDB_PWROK3_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LCDA_SRE	 */
#define GPIO_LCDA_SRE3_WIDTH                                                  1
#define GPIO_LCDA_SRE3_SHIFT                                                  4
#define GPIO_LCDA_SRE3_MASK                                          0x00000010
#define GPIO_LCDA_SRE3_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LCDA_SRE3_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LCDA_SRE3_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LCDA_HYTS	 */
#define GPIO_LCDA_HYTS3_WIDTH                                                 1
#define GPIO_LCDA_HYTS3_SHIFT                                                 3
#define GPIO_LCDA_HYTS3_MASK                                         0x00000008
#define GPIO_LCDA_HYTS3_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LCDA_HYTS3_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LCDA_HYTS3_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LCDA_PULLUP	 */
#define GPIO_LCDA_PULLUP3_WIDTH                                               1
#define GPIO_LCDA_PULLUP3_SHIFT                                               2
#define GPIO_LCDA_PULLUP3_MASK                                       0x00000004
#define GPIO_LCDA_PULLUP3_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LCDA_PULLUP3_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LCDA_PULLUP3_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LCDA_PDWN	 */
#define GPIO_LCDA_PDWN3_WIDTH                                                 1
#define GPIO_LCDA_PDWN3_SHIFT                                                 1
#define GPIO_LCDA_PDWN3_MASK                                         0x00000002
#define GPIO_LCDA_PDWN3_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LCDA_PDWN3_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LCDA_PDWN3_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LCDA_PWROK	 */
#define GPIO_LCDA_PWROK3_WIDTH                                                1
#define GPIO_LCDA_PWROK3_SHIFT                                                0
#define GPIO_LCDA_PWROK3_MASK                                        0x00000001
#define GPIO_LCDA_PWROK3_RD(src)                         (((src) & 0x00000001))
#define GPIO_LCDA_PWROK3_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LCDA_PWROK3_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LCD_IOCTL4	*/ 
/*	 Fields GPIO_LCDD_SRE	 */
#define GPIO_LCDD_SRE4_WIDTH                                                  1
#define GPIO_LCDD_SRE4_SHIFT                                                 28
#define GPIO_LCDD_SRE4_MASK                                          0x10000000
#define GPIO_LCDD_SRE4_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LCDD_SRE4_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LCDD_SRE4_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LCDD_HYTS	 */
#define GPIO_LCDD_HYTS4_WIDTH                                                 1
#define GPIO_LCDD_HYTS4_SHIFT                                                27
#define GPIO_LCDD_HYTS4_MASK                                         0x08000000
#define GPIO_LCDD_HYTS4_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LCDD_HYTS4_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LCDD_HYTS4_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LCDD_PULLUP	 */
#define GPIO_LCDD_PULLUP4_WIDTH                                               1
#define GPIO_LCDD_PULLUP4_SHIFT                                              26
#define GPIO_LCDD_PULLUP4_MASK                                       0x04000000
#define GPIO_LCDD_PULLUP4_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LCDD_PULLUP4_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LCDD_PULLUP4_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LCDD_PDWN	 */
#define GPIO_LCDD_PDWN4_WIDTH                                                 1
#define GPIO_LCDD_PDWN4_SHIFT                                                25
#define GPIO_LCDD_PDWN4_MASK                                         0x02000000
#define GPIO_LCDD_PDWN4_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LCDD_PDWN4_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LCDD_PDWN4_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LCDD_PWROK	 */
#define GPIO_LCDD_PWROK4_WIDTH                                                1
#define GPIO_LCDD_PWROK4_SHIFT                                               24
#define GPIO_LCDD_PWROK4_MASK                                        0x01000000
#define GPIO_LCDD_PWROK4_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LCDD_PWROK4_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LCDD_PWROK4_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LCDC_SRE	 */
#define GPIO_LCDC_SRE4_WIDTH                                                  1
#define GPIO_LCDC_SRE4_SHIFT                                                 20
#define GPIO_LCDC_SRE4_MASK                                          0x00100000
#define GPIO_LCDC_SRE4_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LCDC_SRE4_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LCDC_SRE4_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LCDC_HYTS	 */
#define GPIO_LCDC_HYTS4_WIDTH                                                 1
#define GPIO_LCDC_HYTS4_SHIFT                                                19
#define GPIO_LCDC_HYTS4_MASK                                         0x00080000
#define GPIO_LCDC_HYTS4_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LCDC_HYTS4_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LCDC_HYTS4_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LCDC_PULLUP	 */
#define GPIO_LCDC_PULLUP4_WIDTH                                               1
#define GPIO_LCDC_PULLUP4_SHIFT                                              18
#define GPIO_LCDC_PULLUP4_MASK                                       0x00040000
#define GPIO_LCDC_PULLUP4_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LCDC_PULLUP4_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LCDC_PULLUP4_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LCDC_PDWN	 */
#define GPIO_LCDC_PDWN4_WIDTH                                                 1
#define GPIO_LCDC_PDWN4_SHIFT                                                17
#define GPIO_LCDC_PDWN4_MASK                                         0x00020000
#define GPIO_LCDC_PDWN4_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LCDC_PDWN4_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LCDC_PDWN4_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LCDC_PWROK	 */
#define GPIO_LCDC_PWROK4_WIDTH                                                1
#define GPIO_LCDC_PWROK4_SHIFT                                               16
#define GPIO_LCDC_PWROK4_MASK                                        0x00010000
#define GPIO_LCDC_PWROK4_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LCDC_PWROK4_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LCDC_PWROK4_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LCDB_SRE	 */
#define GPIO_LCDB_SRE4_WIDTH                                                  1
#define GPIO_LCDB_SRE4_SHIFT                                                 12
#define GPIO_LCDB_SRE4_MASK                                          0x00001000
#define GPIO_LCDB_SRE4_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LCDB_SRE4_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LCDB_SRE4_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LCDB_HYTS	 */
#define GPIO_LCDB_HYTS4_WIDTH                                                 1
#define GPIO_LCDB_HYTS4_SHIFT                                                11
#define GPIO_LCDB_HYTS4_MASK                                         0x00000800
#define GPIO_LCDB_HYTS4_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LCDB_HYTS4_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LCDB_HYTS4_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LCDB_PULLUP	 */
#define GPIO_LCDB_PULLUP4_WIDTH                                               1
#define GPIO_LCDB_PULLUP4_SHIFT                                              10
#define GPIO_LCDB_PULLUP4_MASK                                       0x00000400
#define GPIO_LCDB_PULLUP4_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LCDB_PULLUP4_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LCDB_PULLUP4_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LCDB_PDWN	 */
#define GPIO_LCDB_PDWN4_WIDTH                                                 1
#define GPIO_LCDB_PDWN4_SHIFT                                                 9
#define GPIO_LCDB_PDWN4_MASK                                         0x00000200
#define GPIO_LCDB_PDWN4_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LCDB_PDWN4_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LCDB_PDWN4_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LCDB_PWROK	 */
#define GPIO_LCDB_PWROK4_WIDTH                                                1
#define GPIO_LCDB_PWROK4_SHIFT                                                8
#define GPIO_LCDB_PWROK4_MASK                                        0x00000100
#define GPIO_LCDB_PWROK4_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LCDB_PWROK4_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LCDB_PWROK4_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LCDA_SRE	 */
#define GPIO_LCDA_SRE4_WIDTH                                                  1
#define GPIO_LCDA_SRE4_SHIFT                                                  4
#define GPIO_LCDA_SRE4_MASK                                          0x00000010
#define GPIO_LCDA_SRE4_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LCDA_SRE4_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LCDA_SRE4_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LCDA_HYTS	 */
#define GPIO_LCDA_HYTS4_WIDTH                                                 1
#define GPIO_LCDA_HYTS4_SHIFT                                                 3
#define GPIO_LCDA_HYTS4_MASK                                         0x00000008
#define GPIO_LCDA_HYTS4_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LCDA_HYTS4_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LCDA_HYTS4_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LCDA_PULLUP	 */
#define GPIO_LCDA_PULLUP4_WIDTH                                               1
#define GPIO_LCDA_PULLUP4_SHIFT                                               2
#define GPIO_LCDA_PULLUP4_MASK                                       0x00000004
#define GPIO_LCDA_PULLUP4_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LCDA_PULLUP4_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LCDA_PULLUP4_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LCDA_PDWN	 */
#define GPIO_LCDA_PDWN4_WIDTH                                                 1
#define GPIO_LCDA_PDWN4_SHIFT                                                 1
#define GPIO_LCDA_PDWN4_MASK                                         0x00000002
#define GPIO_LCDA_PDWN4_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LCDA_PDWN4_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LCDA_PDWN4_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LCDA_PWROK	 */
#define GPIO_LCDA_PWROK4_WIDTH                                                1
#define GPIO_LCDA_PWROK4_SHIFT                                                0
#define GPIO_LCDA_PWROK4_MASK                                        0x00000001
#define GPIO_LCDA_PWROK4_RD(src)                         (((src) & 0x00000001))
#define GPIO_LCDA_PWROK4_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LCDA_PWROK4_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LCD_IOCTL5	*/ 
/*	 Fields GPIO_LCDD_SRE	 */
#define GPIO_LCDD_SRE5_WIDTH                                                  1
#define GPIO_LCDD_SRE5_SHIFT                                                 28
#define GPIO_LCDD_SRE5_MASK                                          0x10000000
#define GPIO_LCDD_SRE5_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LCDD_SRE5_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LCDD_SRE5_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LCDD_HYTS	 */
#define GPIO_LCDD_HYTS5_WIDTH                                                 1
#define GPIO_LCDD_HYTS5_SHIFT                                                27
#define GPIO_LCDD_HYTS5_MASK                                         0x08000000
#define GPIO_LCDD_HYTS5_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LCDD_HYTS5_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LCDD_HYTS5_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LCDD_PULLUP	 */
#define GPIO_LCDD_PULLUP5_WIDTH                                               1
#define GPIO_LCDD_PULLUP5_SHIFT                                              26
#define GPIO_LCDD_PULLUP5_MASK                                       0x04000000
#define GPIO_LCDD_PULLUP5_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LCDD_PULLUP5_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LCDD_PULLUP5_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LCDD_PDWN	 */
#define GPIO_LCDD_PDWN5_WIDTH                                                 1
#define GPIO_LCDD_PDWN5_SHIFT                                                25
#define GPIO_LCDD_PDWN5_MASK                                         0x02000000
#define GPIO_LCDD_PDWN5_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LCDD_PDWN5_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LCDD_PDWN5_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LCDD_PWROK	 */
#define GPIO_LCDD_PWROK5_WIDTH                                                1
#define GPIO_LCDD_PWROK5_SHIFT                                               24
#define GPIO_LCDD_PWROK5_MASK                                        0x01000000
#define GPIO_LCDD_PWROK5_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LCDD_PWROK5_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LCDD_PWROK5_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LCDC_SRE	 */
#define GPIO_LCDC_SRE5_WIDTH                                                  1
#define GPIO_LCDC_SRE5_SHIFT                                                 20
#define GPIO_LCDC_SRE5_MASK                                          0x00100000
#define GPIO_LCDC_SRE5_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LCDC_SRE5_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LCDC_SRE5_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LCDC_HYTS	 */
#define GPIO_LCDC_HYTS5_WIDTH                                                 1
#define GPIO_LCDC_HYTS5_SHIFT                                                19
#define GPIO_LCDC_HYTS5_MASK                                         0x00080000
#define GPIO_LCDC_HYTS5_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LCDC_HYTS5_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LCDC_HYTS5_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LCDC_PULLUP	 */
#define GPIO_LCDC_PULLUP5_WIDTH                                               1
#define GPIO_LCDC_PULLUP5_SHIFT                                              18
#define GPIO_LCDC_PULLUP5_MASK                                       0x00040000
#define GPIO_LCDC_PULLUP5_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LCDC_PULLUP5_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LCDC_PULLUP5_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LCDC_PDWN	 */
#define GPIO_LCDC_PDWN5_WIDTH                                                 1
#define GPIO_LCDC_PDWN5_SHIFT                                                17
#define GPIO_LCDC_PDWN5_MASK                                         0x00020000
#define GPIO_LCDC_PDWN5_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LCDC_PDWN5_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LCDC_PDWN5_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LCDC_PWROK	 */
#define GPIO_LCDC_PWROK5_WIDTH                                                1
#define GPIO_LCDC_PWROK5_SHIFT                                               16
#define GPIO_LCDC_PWROK5_MASK                                        0x00010000
#define GPIO_LCDC_PWROK5_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LCDC_PWROK5_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LCDC_PWROK5_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LCDB_SRE	 */
#define GPIO_LCDB_SRE5_WIDTH                                                  1
#define GPIO_LCDB_SRE5_SHIFT                                                 12
#define GPIO_LCDB_SRE5_MASK                                          0x00001000
#define GPIO_LCDB_SRE5_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LCDB_SRE5_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LCDB_SRE5_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LCDB_HYTS	 */
#define GPIO_LCDB_HYTS5_WIDTH                                                 1
#define GPIO_LCDB_HYTS5_SHIFT                                                11
#define GPIO_LCDB_HYTS5_MASK                                         0x00000800
#define GPIO_LCDB_HYTS5_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LCDB_HYTS5_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LCDB_HYTS5_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LCDB_PULLUP	 */
#define GPIO_LCDB_PULLUP5_WIDTH                                               1
#define GPIO_LCDB_PULLUP5_SHIFT                                              10
#define GPIO_LCDB_PULLUP5_MASK                                       0x00000400
#define GPIO_LCDB_PULLUP5_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LCDB_PULLUP5_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LCDB_PULLUP5_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LCDB_PDWN	 */
#define GPIO_LCDB_PDWN5_WIDTH                                                 1
#define GPIO_LCDB_PDWN5_SHIFT                                                 9
#define GPIO_LCDB_PDWN5_MASK                                         0x00000200
#define GPIO_LCDB_PDWN5_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LCDB_PDWN5_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LCDB_PDWN5_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LCDB_PWROK	 */
#define GPIO_LCDB_PWROK5_WIDTH                                                1
#define GPIO_LCDB_PWROK5_SHIFT                                                8
#define GPIO_LCDB_PWROK5_MASK                                        0x00000100
#define GPIO_LCDB_PWROK5_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LCDB_PWROK5_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LCDB_PWROK5_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LCDA_SRE	 */
#define GPIO_LCDA_SRE5_WIDTH                                                  1
#define GPIO_LCDA_SRE5_SHIFT                                                  4
#define GPIO_LCDA_SRE5_MASK                                          0x00000010
#define GPIO_LCDA_SRE5_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LCDA_SRE5_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LCDA_SRE5_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LCDA_HYTS	 */
#define GPIO_LCDA_HYTS5_WIDTH                                                 1
#define GPIO_LCDA_HYTS5_SHIFT                                                 3
#define GPIO_LCDA_HYTS5_MASK                                         0x00000008
#define GPIO_LCDA_HYTS5_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LCDA_HYTS5_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LCDA_HYTS5_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LCDA_PULLUP	 */
#define GPIO_LCDA_PULLUP5_WIDTH                                               1
#define GPIO_LCDA_PULLUP5_SHIFT                                               2
#define GPIO_LCDA_PULLUP5_MASK                                       0x00000004
#define GPIO_LCDA_PULLUP5_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LCDA_PULLUP5_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LCDA_PULLUP5_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LCDA_PDWN	 */
#define GPIO_LCDA_PDWN5_WIDTH                                                 1
#define GPIO_LCDA_PDWN5_SHIFT                                                 1
#define GPIO_LCDA_PDWN5_MASK                                         0x00000002
#define GPIO_LCDA_PDWN5_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LCDA_PDWN5_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LCDA_PDWN5_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LCDA_PWROK	 */
#define GPIO_LCDA_PWROK5_WIDTH                                                1
#define GPIO_LCDA_PWROK5_SHIFT                                                0
#define GPIO_LCDA_PWROK5_MASK                                        0x00000001
#define GPIO_LCDA_PWROK5_RD(src)                         (((src) & 0x00000001))
#define GPIO_LCDA_PWROK5_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LCDA_PWROK5_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LCD_IOCTL6	*/ 
/*	 Fields GPIO_LCDD_SRE	 */
#define GPIO_LCDD_SRE6_WIDTH                                                  1
#define GPIO_LCDD_SRE6_SHIFT                                                 28
#define GPIO_LCDD_SRE6_MASK                                          0x10000000
#define GPIO_LCDD_SRE6_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LCDD_SRE6_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LCDD_SRE6_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LCDD_HYTS	 */
#define GPIO_LCDD_HYTS6_WIDTH                                                 1
#define GPIO_LCDD_HYTS6_SHIFT                                                27
#define GPIO_LCDD_HYTS6_MASK                                         0x08000000
#define GPIO_LCDD_HYTS6_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LCDD_HYTS6_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LCDD_HYTS6_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LCDD_PULLUP	 */
#define GPIO_LCDD_PULLUP6_WIDTH                                               1
#define GPIO_LCDD_PULLUP6_SHIFT                                              26
#define GPIO_LCDD_PULLUP6_MASK                                       0x04000000
#define GPIO_LCDD_PULLUP6_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LCDD_PULLUP6_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LCDD_PULLUP6_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LCDD_PDWN	 */
#define GPIO_LCDD_PDWN6_WIDTH                                                 1
#define GPIO_LCDD_PDWN6_SHIFT                                                25
#define GPIO_LCDD_PDWN6_MASK                                         0x02000000
#define GPIO_LCDD_PDWN6_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LCDD_PDWN6_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LCDD_PDWN6_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LCDD_PWROK	 */
#define GPIO_LCDD_PWROK6_WIDTH                                                1
#define GPIO_LCDD_PWROK6_SHIFT                                               24
#define GPIO_LCDD_PWROK6_MASK                                        0x01000000
#define GPIO_LCDD_PWROK6_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LCDD_PWROK6_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LCDD_PWROK6_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LCDC_SRE	 */
#define GPIO_LCDC_SRE6_WIDTH                                                  1
#define GPIO_LCDC_SRE6_SHIFT                                                 20
#define GPIO_LCDC_SRE6_MASK                                          0x00100000
#define GPIO_LCDC_SRE6_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LCDC_SRE6_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LCDC_SRE6_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LCDC_HYTS	 */
#define GPIO_LCDC_HYTS6_WIDTH                                                 1
#define GPIO_LCDC_HYTS6_SHIFT                                                19
#define GPIO_LCDC_HYTS6_MASK                                         0x00080000
#define GPIO_LCDC_HYTS6_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LCDC_HYTS6_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LCDC_HYTS6_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LCDC_PULLUP	 */
#define GPIO_LCDC_PULLUP6_WIDTH                                               1
#define GPIO_LCDC_PULLUP6_SHIFT                                              18
#define GPIO_LCDC_PULLUP6_MASK                                       0x00040000
#define GPIO_LCDC_PULLUP6_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LCDC_PULLUP6_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LCDC_PULLUP6_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LCDC_PDWN	 */
#define GPIO_LCDC_PDWN6_WIDTH                                                 1
#define GPIO_LCDC_PDWN6_SHIFT                                                17
#define GPIO_LCDC_PDWN6_MASK                                         0x00020000
#define GPIO_LCDC_PDWN6_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LCDC_PDWN6_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LCDC_PDWN6_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LCDC_PWROK	 */
#define GPIO_LCDC_PWROK6_WIDTH                                                1
#define GPIO_LCDC_PWROK6_SHIFT                                               16
#define GPIO_LCDC_PWROK6_MASK                                        0x00010000
#define GPIO_LCDC_PWROK6_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LCDC_PWROK6_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LCDC_PWROK6_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LCDB_SRE	 */
#define GPIO_LCDB_SRE6_WIDTH                                                  1
#define GPIO_LCDB_SRE6_SHIFT                                                 12
#define GPIO_LCDB_SRE6_MASK                                          0x00001000
#define GPIO_LCDB_SRE6_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LCDB_SRE6_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LCDB_SRE6_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LCDB_HYTS	 */
#define GPIO_LCDB_HYTS6_WIDTH                                                 1
#define GPIO_LCDB_HYTS6_SHIFT                                                11
#define GPIO_LCDB_HYTS6_MASK                                         0x00000800
#define GPIO_LCDB_HYTS6_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LCDB_HYTS6_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LCDB_HYTS6_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LCDB_PULLUP	 */
#define GPIO_LCDB_PULLUP6_WIDTH                                               1
#define GPIO_LCDB_PULLUP6_SHIFT                                              10
#define GPIO_LCDB_PULLUP6_MASK                                       0x00000400
#define GPIO_LCDB_PULLUP6_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LCDB_PULLUP6_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LCDB_PULLUP6_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LCDB_PDWN	 */
#define GPIO_LCDB_PDWN6_WIDTH                                                 1
#define GPIO_LCDB_PDWN6_SHIFT                                                 9
#define GPIO_LCDB_PDWN6_MASK                                         0x00000200
#define GPIO_LCDB_PDWN6_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LCDB_PDWN6_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LCDB_PDWN6_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LCDB_PWROK	 */
#define GPIO_LCDB_PWROK6_WIDTH                                                1
#define GPIO_LCDB_PWROK6_SHIFT                                                8
#define GPIO_LCDB_PWROK6_MASK                                        0x00000100
#define GPIO_LCDB_PWROK6_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LCDB_PWROK6_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LCDB_PWROK6_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LCDA_SRE	 */
#define GPIO_LCDA_SRE6_WIDTH                                                  1
#define GPIO_LCDA_SRE6_SHIFT                                                  4
#define GPIO_LCDA_SRE6_MASK                                          0x00000010
#define GPIO_LCDA_SRE6_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LCDA_SRE6_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LCDA_SRE6_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LCDA_HYTS	 */
#define GPIO_LCDA_HYTS6_WIDTH                                                 1
#define GPIO_LCDA_HYTS6_SHIFT                                                 3
#define GPIO_LCDA_HYTS6_MASK                                         0x00000008
#define GPIO_LCDA_HYTS6_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LCDA_HYTS6_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LCDA_HYTS6_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LCDA_PULLUP	 */
#define GPIO_LCDA_PULLUP6_WIDTH                                               1
#define GPIO_LCDA_PULLUP6_SHIFT                                               2
#define GPIO_LCDA_PULLUP6_MASK                                       0x00000004
#define GPIO_LCDA_PULLUP6_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LCDA_PULLUP6_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LCDA_PULLUP6_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LCDA_PDWN	 */
#define GPIO_LCDA_PDWN6_WIDTH                                                 1
#define GPIO_LCDA_PDWN6_SHIFT                                                 1
#define GPIO_LCDA_PDWN6_MASK                                         0x00000002
#define GPIO_LCDA_PDWN6_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LCDA_PDWN6_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LCDA_PDWN6_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LCDA_PWROK	 */
#define GPIO_LCDA_PWROK6_WIDTH                                                1
#define GPIO_LCDA_PWROK6_SHIFT                                                0
#define GPIO_LCDA_PWROK6_MASK                                        0x00000001
#define GPIO_LCDA_PWROK6_RD(src)                         (((src) & 0x00000001))
#define GPIO_LCDA_PWROK6_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LCDA_PWROK6_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LCD_IOCTL7	*/ 
/*	 Fields GPIO_LCDD_SRE	 */
#define GPIO_LCDD_SRE7_WIDTH                                                  1
#define GPIO_LCDD_SRE7_SHIFT                                                 28
#define GPIO_LCDD_SRE7_MASK                                          0x10000000
#define GPIO_LCDD_SRE7_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LCDD_SRE7_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LCDD_SRE7_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LCDD_HYTS	 */
#define GPIO_LCDD_HYTS7_WIDTH                                                 1
#define GPIO_LCDD_HYTS7_SHIFT                                                27
#define GPIO_LCDD_HYTS7_MASK                                         0x08000000
#define GPIO_LCDD_HYTS7_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LCDD_HYTS7_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LCDD_HYTS7_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LCDD_PULLUP	 */
#define GPIO_LCDD_PULLUP7_WIDTH                                               1
#define GPIO_LCDD_PULLUP7_SHIFT                                              26
#define GPIO_LCDD_PULLUP7_MASK                                       0x04000000
#define GPIO_LCDD_PULLUP7_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LCDD_PULLUP7_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LCDD_PULLUP7_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LCDD_PDWN	 */
#define GPIO_LCDD_PDWN7_WIDTH                                                 1
#define GPIO_LCDD_PDWN7_SHIFT                                                25
#define GPIO_LCDD_PDWN7_MASK                                         0x02000000
#define GPIO_LCDD_PDWN7_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LCDD_PDWN7_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LCDD_PDWN7_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LCDD_PWROK	 */
#define GPIO_LCDD_PWROK7_WIDTH                                                1
#define GPIO_LCDD_PWROK7_SHIFT                                               24
#define GPIO_LCDD_PWROK7_MASK                                        0x01000000
#define GPIO_LCDD_PWROK7_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LCDD_PWROK7_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LCDD_PWROK7_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LCDC_SRE	 */
#define GPIO_LCDC_SRE7_WIDTH                                                  1
#define GPIO_LCDC_SRE7_SHIFT                                                 20
#define GPIO_LCDC_SRE7_MASK                                          0x00100000
#define GPIO_LCDC_SRE7_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LCDC_SRE7_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LCDC_SRE7_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LCDC_HYTS	 */
#define GPIO_LCDC_HYTS7_WIDTH                                                 1
#define GPIO_LCDC_HYTS7_SHIFT                                                19
#define GPIO_LCDC_HYTS7_MASK                                         0x00080000
#define GPIO_LCDC_HYTS7_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LCDC_HYTS7_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LCDC_HYTS7_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LCDC_PULLUP	 */
#define GPIO_LCDC_PULLUP7_WIDTH                                               1
#define GPIO_LCDC_PULLUP7_SHIFT                                              18
#define GPIO_LCDC_PULLUP7_MASK                                       0x00040000
#define GPIO_LCDC_PULLUP7_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LCDC_PULLUP7_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LCDC_PULLUP7_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LCDC_PDWN	 */
#define GPIO_LCDC_PDWN7_WIDTH                                                 1
#define GPIO_LCDC_PDWN7_SHIFT                                                17
#define GPIO_LCDC_PDWN7_MASK                                         0x00020000
#define GPIO_LCDC_PDWN7_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LCDC_PDWN7_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LCDC_PDWN7_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LCDC_PWROK	 */
#define GPIO_LCDC_PWROK7_WIDTH                                                1
#define GPIO_LCDC_PWROK7_SHIFT                                               16
#define GPIO_LCDC_PWROK7_MASK                                        0x00010000
#define GPIO_LCDC_PWROK7_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LCDC_PWROK7_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LCDC_PWROK7_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LCDB_SRE	 */
#define GPIO_LCDB_SRE7_WIDTH                                                  1
#define GPIO_LCDB_SRE7_SHIFT                                                 12
#define GPIO_LCDB_SRE7_MASK                                          0x00001000
#define GPIO_LCDB_SRE7_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LCDB_SRE7_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LCDB_SRE7_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LCDB_HYTS	 */
#define GPIO_LCDB_HYTS7_WIDTH                                                 1
#define GPIO_LCDB_HYTS7_SHIFT                                                11
#define GPIO_LCDB_HYTS7_MASK                                         0x00000800
#define GPIO_LCDB_HYTS7_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LCDB_HYTS7_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LCDB_HYTS7_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LCDB_PULLUP	 */
#define GPIO_LCDB_PULLUP7_WIDTH                                               1
#define GPIO_LCDB_PULLUP7_SHIFT                                              10
#define GPIO_LCDB_PULLUP7_MASK                                       0x00000400
#define GPIO_LCDB_PULLUP7_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LCDB_PULLUP7_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LCDB_PULLUP7_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LCDB_PDWN	 */
#define GPIO_LCDB_PDWN7_WIDTH                                                 1
#define GPIO_LCDB_PDWN7_SHIFT                                                 9
#define GPIO_LCDB_PDWN7_MASK                                         0x00000200
#define GPIO_LCDB_PDWN7_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LCDB_PDWN7_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LCDB_PDWN7_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LCDB_PWROK	 */
#define GPIO_LCDB_PWROK7_WIDTH                                                1
#define GPIO_LCDB_PWROK7_SHIFT                                                8
#define GPIO_LCDB_PWROK7_MASK                                        0x00000100
#define GPIO_LCDB_PWROK7_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LCDB_PWROK7_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LCDB_PWROK7_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LCDA_SRE	 */
#define GPIO_LCDA_SRE7_WIDTH                                                  1
#define GPIO_LCDA_SRE7_SHIFT                                                  4
#define GPIO_LCDA_SRE7_MASK                                          0x00000010
#define GPIO_LCDA_SRE7_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LCDA_SRE7_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LCDA_SRE7_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LCDA_HYTS	 */
#define GPIO_LCDA_HYTS7_WIDTH                                                 1
#define GPIO_LCDA_HYTS7_SHIFT                                                 3
#define GPIO_LCDA_HYTS7_MASK                                         0x00000008
#define GPIO_LCDA_HYTS7_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LCDA_HYTS7_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LCDA_HYTS7_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LCDA_PULLUP	 */
#define GPIO_LCDA_PULLUP7_WIDTH                                               1
#define GPIO_LCDA_PULLUP7_SHIFT                                               2
#define GPIO_LCDA_PULLUP7_MASK                                       0x00000004
#define GPIO_LCDA_PULLUP7_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LCDA_PULLUP7_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LCDA_PULLUP7_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LCDA_PDWN	 */
#define GPIO_LCDA_PDWN7_WIDTH                                                 1
#define GPIO_LCDA_PDWN7_SHIFT                                                 1
#define GPIO_LCDA_PDWN7_MASK                                         0x00000002
#define GPIO_LCDA_PDWN7_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LCDA_PDWN7_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LCDA_PDWN7_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LCDA_PWROK	 */
#define GPIO_LCDA_PWROK7_WIDTH                                                1
#define GPIO_LCDA_PWROK7_SHIFT                                                0
#define GPIO_LCDA_PWROK7_MASK                                        0x00000001
#define GPIO_LCDA_PWROK7_RD(src)                         (((src) & 0x00000001))
#define GPIO_LCDA_PWROK7_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LCDA_PWROK7_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LED_IOCTL0	*/ 
/*	 Fields GPIO_LEDD_SRE	 */
#define GPIO_LEDD_SRE0_WIDTH                                                  1
#define GPIO_LEDD_SRE0_SHIFT                                                 28
#define GPIO_LEDD_SRE0_MASK                                          0x10000000
#define GPIO_LEDD_SRE0_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LEDD_SRE0_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LEDD_SRE0_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LEDD_HYTS	 */
#define GPIO_LEDD_HYTS0_WIDTH                                                 1
#define GPIO_LEDD_HYTS0_SHIFT                                                27
#define GPIO_LEDD_HYTS0_MASK                                         0x08000000
#define GPIO_LEDD_HYTS0_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LEDD_HYTS0_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LEDD_HYTS0_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LEDD_PULLUP	 */
#define GPIO_LEDD_PULLUP0_WIDTH                                               1
#define GPIO_LEDD_PULLUP0_SHIFT                                              26
#define GPIO_LEDD_PULLUP0_MASK                                       0x04000000
#define GPIO_LEDD_PULLUP0_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LEDD_PULLUP0_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LEDD_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LEDD_PDWN	 */
#define GPIO_LEDD_PDWN0_WIDTH                                                 1
#define GPIO_LEDD_PDWN0_SHIFT                                                25
#define GPIO_LEDD_PDWN0_MASK                                         0x02000000
#define GPIO_LEDD_PDWN0_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LEDD_PDWN0_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LEDD_PDWN0_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LEDD_PWROK	 */
#define GPIO_LEDD_PWROK0_WIDTH                                                1
#define GPIO_LEDD_PWROK0_SHIFT                                               24
#define GPIO_LEDD_PWROK0_MASK                                        0x01000000
#define GPIO_LEDD_PWROK0_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LEDD_PWROK0_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LEDD_PWROK0_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LEDC_SRE	 */
#define GPIO_LEDC_SRE0_WIDTH                                                  1
#define GPIO_LEDC_SRE0_SHIFT                                                 20
#define GPIO_LEDC_SRE0_MASK                                          0x00100000
#define GPIO_LEDC_SRE0_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LEDC_SRE0_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LEDC_SRE0_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LEDC_HYTS	 */
#define GPIO_LEDC_HYTS0_WIDTH                                                 1
#define GPIO_LEDC_HYTS0_SHIFT                                                19
#define GPIO_LEDC_HYTS0_MASK                                         0x00080000
#define GPIO_LEDC_HYTS0_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LEDC_HYTS0_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LEDC_HYTS0_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LEDC_PULLUP	 */
#define GPIO_LEDC_PULLUP0_WIDTH                                               1
#define GPIO_LEDC_PULLUP0_SHIFT                                              18
#define GPIO_LEDC_PULLUP0_MASK                                       0x00040000
#define GPIO_LEDC_PULLUP0_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LEDC_PULLUP0_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LEDC_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LEDC_PDWN	 */
#define GPIO_LEDC_PDWN0_WIDTH                                                 1
#define GPIO_LEDC_PDWN0_SHIFT                                                17
#define GPIO_LEDC_PDWN0_MASK                                         0x00020000
#define GPIO_LEDC_PDWN0_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LEDC_PDWN0_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LEDC_PDWN0_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LEDC_PWROK	 */
#define GPIO_LEDC_PWROK0_WIDTH                                                1
#define GPIO_LEDC_PWROK0_SHIFT                                               16
#define GPIO_LEDC_PWROK0_MASK                                        0x00010000
#define GPIO_LEDC_PWROK0_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LEDC_PWROK0_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LEDC_PWROK0_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LEDB_SRE	 */
#define GPIO_LEDB_SRE0_WIDTH                                                  1
#define GPIO_LEDB_SRE0_SHIFT                                                 12
#define GPIO_LEDB_SRE0_MASK                                          0x00001000
#define GPIO_LEDB_SRE0_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LEDB_SRE0_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LEDB_SRE0_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LEDB_HYTS	 */
#define GPIO_LEDB_HYTS0_WIDTH                                                 1
#define GPIO_LEDB_HYTS0_SHIFT                                                11
#define GPIO_LEDB_HYTS0_MASK                                         0x00000800
#define GPIO_LEDB_HYTS0_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LEDB_HYTS0_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LEDB_HYTS0_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LEDB_PULLUP	 */
#define GPIO_LEDB_PULLUP0_WIDTH                                               1
#define GPIO_LEDB_PULLUP0_SHIFT                                              10
#define GPIO_LEDB_PULLUP0_MASK                                       0x00000400
#define GPIO_LEDB_PULLUP0_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LEDB_PULLUP0_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LEDB_PULLUP0_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LEDB_PDWN	 */
#define GPIO_LEDB_PDWN0_WIDTH                                                 1
#define GPIO_LEDB_PDWN0_SHIFT                                                 9
#define GPIO_LEDB_PDWN0_MASK                                         0x00000200
#define GPIO_LEDB_PDWN0_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LEDB_PDWN0_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LEDB_PDWN0_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LEDB_PWROK	 */
#define GPIO_LEDB_PWROK0_WIDTH                                                1
#define GPIO_LEDB_PWROK0_SHIFT                                                8
#define GPIO_LEDB_PWROK0_MASK                                        0x00000100
#define GPIO_LEDB_PWROK0_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LEDB_PWROK0_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LEDB_PWROK0_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LEDA_SRE	 */
#define GPIO_LEDA_SRE0_WIDTH                                                  1
#define GPIO_LEDA_SRE0_SHIFT                                                  4
#define GPIO_LEDA_SRE0_MASK                                          0x00000010
#define GPIO_LEDA_SRE0_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LEDA_SRE0_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LEDA_SRE0_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LEDA_HYTS	 */
#define GPIO_LEDA_HYTS0_WIDTH                                                 1
#define GPIO_LEDA_HYTS0_SHIFT                                                 3
#define GPIO_LEDA_HYTS0_MASK                                         0x00000008
#define GPIO_LEDA_HYTS0_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LEDA_HYTS0_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LEDA_HYTS0_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LEDA_PULLUP	 */
#define GPIO_LEDA_PULLUP0_WIDTH                                               1
#define GPIO_LEDA_PULLUP0_SHIFT                                               2
#define GPIO_LEDA_PULLUP0_MASK                                       0x00000004
#define GPIO_LEDA_PULLUP0_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LEDA_PULLUP0_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LEDA_PULLUP0_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LEDA_PDWN	 */
#define GPIO_LEDA_PDWN0_WIDTH                                                 1
#define GPIO_LEDA_PDWN0_SHIFT                                                 1
#define GPIO_LEDA_PDWN0_MASK                                         0x00000002
#define GPIO_LEDA_PDWN0_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LEDA_PDWN0_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LEDA_PDWN0_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LEDA_PWROK	 */
#define GPIO_LEDA_PWROK0_WIDTH                                                1
#define GPIO_LEDA_PWROK0_SHIFT                                                0
#define GPIO_LEDA_PWROK0_MASK                                        0x00000001
#define GPIO_LEDA_PWROK0_RD(src)                         (((src) & 0x00000001))
#define GPIO_LEDA_PWROK0_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LEDA_PWROK0_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_GPIO_LED_IOCTL1	*/ 
/*	 Fields GPIO_LEDD_SRE	 */
#define GPIO_LEDD_SRE1_WIDTH                                                  1
#define GPIO_LEDD_SRE1_SHIFT                                                 28
#define GPIO_LEDD_SRE1_MASK                                          0x10000000
#define GPIO_LEDD_SRE1_RD(src)                       (((src) & 0x10000000)>>28)
#define GPIO_LEDD_SRE1_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define GPIO_LEDD_SRE1_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields GPIO_LEDD_HYTS	 */
#define GPIO_LEDD_HYTS1_WIDTH                                                 1
#define GPIO_LEDD_HYTS1_SHIFT                                                27
#define GPIO_LEDD_HYTS1_MASK                                         0x08000000
#define GPIO_LEDD_HYTS1_RD(src)                      (((src) & 0x08000000)>>27)
#define GPIO_LEDD_HYTS1_WR(src)                 (((u32)(src)<<27) & 0x08000000)
#define GPIO_LEDD_HYTS1_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields GPIO_LEDD_PULLUP	 */
#define GPIO_LEDD_PULLUP1_WIDTH                                               1
#define GPIO_LEDD_PULLUP1_SHIFT                                              26
#define GPIO_LEDD_PULLUP1_MASK                                       0x04000000
#define GPIO_LEDD_PULLUP1_RD(src)                    (((src) & 0x04000000)>>26)
#define GPIO_LEDD_PULLUP1_WR(src)               (((u32)(src)<<26) & 0x04000000)
#define GPIO_LEDD_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields GPIO_LEDD_PDWN	 */
#define GPIO_LEDD_PDWN1_WIDTH                                                 1
#define GPIO_LEDD_PDWN1_SHIFT                                                25
#define GPIO_LEDD_PDWN1_MASK                                         0x02000000
#define GPIO_LEDD_PDWN1_RD(src)                      (((src) & 0x02000000)>>25)
#define GPIO_LEDD_PDWN1_WR(src)                 (((u32)(src)<<25) & 0x02000000)
#define GPIO_LEDD_PDWN1_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields GPIO_LEDD_PWROK	 */
#define GPIO_LEDD_PWROK1_WIDTH                                                1
#define GPIO_LEDD_PWROK1_SHIFT                                               24
#define GPIO_LEDD_PWROK1_MASK                                        0x01000000
#define GPIO_LEDD_PWROK1_RD(src)                     (((src) & 0x01000000)>>24)
#define GPIO_LEDD_PWROK1_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define GPIO_LEDD_PWROK1_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields GPIO_LEDC_SRE	 */
#define GPIO_LEDC_SRE1_WIDTH                                                  1
#define GPIO_LEDC_SRE1_SHIFT                                                 20
#define GPIO_LEDC_SRE1_MASK                                          0x00100000
#define GPIO_LEDC_SRE1_RD(src)                       (((src) & 0x00100000)>>20)
#define GPIO_LEDC_SRE1_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define GPIO_LEDC_SRE1_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields GPIO_LEDC_HYTS	 */
#define GPIO_LEDC_HYTS1_WIDTH                                                 1
#define GPIO_LEDC_HYTS1_SHIFT                                                19
#define GPIO_LEDC_HYTS1_MASK                                         0x00080000
#define GPIO_LEDC_HYTS1_RD(src)                      (((src) & 0x00080000)>>19)
#define GPIO_LEDC_HYTS1_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define GPIO_LEDC_HYTS1_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields GPIO_LEDC_PULLUP	 */
#define GPIO_LEDC_PULLUP1_WIDTH                                               1
#define GPIO_LEDC_PULLUP1_SHIFT                                              18
#define GPIO_LEDC_PULLUP1_MASK                                       0x00040000
#define GPIO_LEDC_PULLUP1_RD(src)                    (((src) & 0x00040000)>>18)
#define GPIO_LEDC_PULLUP1_WR(src)               (((u32)(src)<<18) & 0x00040000)
#define GPIO_LEDC_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields GPIO_LEDC_PDWN	 */
#define GPIO_LEDC_PDWN1_WIDTH                                                 1
#define GPIO_LEDC_PDWN1_SHIFT                                                17
#define GPIO_LEDC_PDWN1_MASK                                         0x00020000
#define GPIO_LEDC_PDWN1_RD(src)                      (((src) & 0x00020000)>>17)
#define GPIO_LEDC_PDWN1_WR(src)                 (((u32)(src)<<17) & 0x00020000)
#define GPIO_LEDC_PDWN1_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields GPIO_LEDC_PWROK	 */
#define GPIO_LEDC_PWROK1_WIDTH                                                1
#define GPIO_LEDC_PWROK1_SHIFT                                               16
#define GPIO_LEDC_PWROK1_MASK                                        0x00010000
#define GPIO_LEDC_PWROK1_RD(src)                     (((src) & 0x00010000)>>16)
#define GPIO_LEDC_PWROK1_WR(src)                (((u32)(src)<<16) & 0x00010000)
#define GPIO_LEDC_PWROK1_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields GPIO_LEDB_SRE	 */
#define GPIO_LEDB_SRE1_WIDTH                                                  1
#define GPIO_LEDB_SRE1_SHIFT                                                 12
#define GPIO_LEDB_SRE1_MASK                                          0x00001000
#define GPIO_LEDB_SRE1_RD(src)                       (((src) & 0x00001000)>>12)
#define GPIO_LEDB_SRE1_WR(src)                  (((u32)(src)<<12) & 0x00001000)
#define GPIO_LEDB_SRE1_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields GPIO_LEDB_HYTS	 */
#define GPIO_LEDB_HYTS1_WIDTH                                                 1
#define GPIO_LEDB_HYTS1_SHIFT                                                11
#define GPIO_LEDB_HYTS1_MASK                                         0x00000800
#define GPIO_LEDB_HYTS1_RD(src)                      (((src) & 0x00000800)>>11)
#define GPIO_LEDB_HYTS1_WR(src)                 (((u32)(src)<<11) & 0x00000800)
#define GPIO_LEDB_HYTS1_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields GPIO_LEDB_PULLUP	 */
#define GPIO_LEDB_PULLUP1_WIDTH                                               1
#define GPIO_LEDB_PULLUP1_SHIFT                                              10
#define GPIO_LEDB_PULLUP1_MASK                                       0x00000400
#define GPIO_LEDB_PULLUP1_RD(src)                    (((src) & 0x00000400)>>10)
#define GPIO_LEDB_PULLUP1_WR(src)               (((u32)(src)<<10) & 0x00000400)
#define GPIO_LEDB_PULLUP1_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields GPIO_LEDB_PDWN	 */
#define GPIO_LEDB_PDWN1_WIDTH                                                 1
#define GPIO_LEDB_PDWN1_SHIFT                                                 9
#define GPIO_LEDB_PDWN1_MASK                                         0x00000200
#define GPIO_LEDB_PDWN1_RD(src)                       (((src) & 0x00000200)>>9)
#define GPIO_LEDB_PDWN1_WR(src)                  (((u32)(src)<<9) & 0x00000200)
#define GPIO_LEDB_PDWN1_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields GPIO_LEDB_PWROK	 */
#define GPIO_LEDB_PWROK1_WIDTH                                                1
#define GPIO_LEDB_PWROK1_SHIFT                                                8
#define GPIO_LEDB_PWROK1_MASK                                        0x00000100
#define GPIO_LEDB_PWROK1_RD(src)                      (((src) & 0x00000100)>>8)
#define GPIO_LEDB_PWROK1_WR(src)                 (((u32)(src)<<8) & 0x00000100)
#define GPIO_LEDB_PWROK1_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields GPIO_LEDA_SRE	 */
#define GPIO_LEDA_SRE1_WIDTH                                                  1
#define GPIO_LEDA_SRE1_SHIFT                                                  4
#define GPIO_LEDA_SRE1_MASK                                          0x00000010
#define GPIO_LEDA_SRE1_RD(src)                        (((src) & 0x00000010)>>4)
#define GPIO_LEDA_SRE1_WR(src)                   (((u32)(src)<<4) & 0x00000010)
#define GPIO_LEDA_SRE1_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields GPIO_LEDA_HYTS	 */
#define GPIO_LEDA_HYTS1_WIDTH                                                 1
#define GPIO_LEDA_HYTS1_SHIFT                                                 3
#define GPIO_LEDA_HYTS1_MASK                                         0x00000008
#define GPIO_LEDA_HYTS1_RD(src)                       (((src) & 0x00000008)>>3)
#define GPIO_LEDA_HYTS1_WR(src)                  (((u32)(src)<<3) & 0x00000008)
#define GPIO_LEDA_HYTS1_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields GPIO_LEDA_PULLUP	 */
#define GPIO_LEDA_PULLUP1_WIDTH                                               1
#define GPIO_LEDA_PULLUP1_SHIFT                                               2
#define GPIO_LEDA_PULLUP1_MASK                                       0x00000004
#define GPIO_LEDA_PULLUP1_RD(src)                     (((src) & 0x00000004)>>2)
#define GPIO_LEDA_PULLUP1_WR(src)                (((u32)(src)<<2) & 0x00000004)
#define GPIO_LEDA_PULLUP1_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields GPIO_LEDA_PDWN	 */
#define GPIO_LEDA_PDWN1_WIDTH                                                 1
#define GPIO_LEDA_PDWN1_SHIFT                                                 1
#define GPIO_LEDA_PDWN1_MASK                                         0x00000002
#define GPIO_LEDA_PDWN1_RD(src)                       (((src) & 0x00000002)>>1)
#define GPIO_LEDA_PDWN1_WR(src)                  (((u32)(src)<<1) & 0x00000002)
#define GPIO_LEDA_PDWN1_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields GPIO_LEDA_PWROK	 */
#define GPIO_LEDA_PWROK1_WIDTH                                                1
#define GPIO_LEDA_PWROK1_SHIFT                                                0
#define GPIO_LEDA_PWROK1_MASK                                        0x00000001
#define GPIO_LEDA_PWROK1_RD(src)                         (((src) & 0x00000001))
#define GPIO_LEDA_PWROK1_WR(src)                    (((u32)(src)) & 0x00000001)
#define GPIO_LEDA_PWROK1_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_ENET_IOCTL	*/ 
/*	 Fields ENET1_SRE	 */
#define ENET1_SRE_WIDTH                                                       1
#define ENET1_SRE_SHIFT                                                      12
#define ENET1_SRE_MASK                                               0x00001000
#define ENET1_SRE_RD(src)                            (((src) & 0x00001000)>>12)
#define ENET1_SRE_WR(src)                       (((u32)(src)<<12) & 0x00001000)
#define ENET1_SRE_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields ENET1_HYTS	 */
#define ENET1_HYTS_WIDTH                                                      1
#define ENET1_HYTS_SHIFT                                                     11
#define ENET1_HYTS_MASK                                              0x00000800
#define ENET1_HYTS_RD(src)                           (((src) & 0x00000800)>>11)
#define ENET1_HYTS_WR(src)                      (((u32)(src)<<11) & 0x00000800)
#define ENET1_HYTS_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields ENET1_PULLUP	 */
#define ENET1_PULLUP_WIDTH                                                    1
#define ENET1_PULLUP_SHIFT                                                   10
#define ENET1_PULLUP_MASK                                            0x00000400
#define ENET1_PULLUP_RD(src)                         (((src) & 0x00000400)>>10)
#define ENET1_PULLUP_WR(src)                    (((u32)(src)<<10) & 0x00000400)
#define ENET1_PULLUP_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields ENET1_PDWN	 */
#define ENET1_PDWN_WIDTH                                                      1
#define ENET1_PDWN_SHIFT                                                      9
#define ENET1_PDWN_MASK                                              0x00000200
#define ENET1_PDWN_RD(src)                            (((src) & 0x00000200)>>9)
#define ENET1_PDWN_WR(src)                       (((u32)(src)<<9) & 0x00000200)
#define ENET1_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields ENET1_PWROK	 */
#define ENET1_PWROK_WIDTH                                                     1
#define ENET1_PWROK_SHIFT                                                     8
#define ENET1_PWROK_MASK                                             0x00000100
#define ENET1_PWROK_RD(src)                           (((src) & 0x00000100)>>8)
#define ENET1_PWROK_WR(src)                      (((u32)(src)<<8) & 0x00000100)
#define ENET1_PWROK_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields ENET0_SRE	 */
#define ENET0_SRE_WIDTH                                                       1
#define ENET0_SRE_SHIFT                                                       4
#define ENET0_SRE_MASK                                               0x00000010
#define ENET0_SRE_RD(src)                             (((src) & 0x00000010)>>4)
#define ENET0_SRE_WR(src)                        (((u32)(src)<<4) & 0x00000010)
#define ENET0_SRE_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields ENET0_HYTS	 */
#define ENET0_HYTS_WIDTH                                                      1
#define ENET0_HYTS_SHIFT                                                      3
#define ENET0_HYTS_MASK                                              0x00000008
#define ENET0_HYTS_RD(src)                            (((src) & 0x00000008)>>3)
#define ENET0_HYTS_WR(src)                       (((u32)(src)<<3) & 0x00000008)
#define ENET0_HYTS_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields ENET0_PULLUP	 */
#define ENET0_PULLUP_WIDTH                                                    1
#define ENET0_PULLUP_SHIFT                                                    2
#define ENET0_PULLUP_MASK                                            0x00000004
#define ENET0_PULLUP_RD(src)                          (((src) & 0x00000004)>>2)
#define ENET0_PULLUP_WR(src)                     (((u32)(src)<<2) & 0x00000004)
#define ENET0_PULLUP_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields ENET0_PDWN	 */
#define ENET0_PDWN_WIDTH                                                      1
#define ENET0_PDWN_SHIFT                                                      1
#define ENET0_PDWN_MASK                                              0x00000002
#define ENET0_PDWN_RD(src)                            (((src) & 0x00000002)>>1)
#define ENET0_PDWN_WR(src)                       (((u32)(src)<<1) & 0x00000002)
#define ENET0_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields ENET0_PWROK	 */
#define ENET0_PWROK_WIDTH                                                     1
#define ENET0_PWROK_SHIFT                                                     0
#define ENET0_PWROK_MASK                                             0x00000001
#define ENET0_PWROK_RD(src)                              (((src) & 0x00000001))
#define ENET0_PWROK_WR(src)                         (((u32)(src)) & 0x00000001)
#define ENET0_PWROK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_IIC_SPI_IOCTL	*/ 
/*	 Fields SPI1_SRE	 */
#define SPI1_SRE_WIDTH                                                        1
#define SPI1_SRE_SHIFT                                                       28
#define SPI1_SRE_MASK                                                0x10000000
#define SPI1_SRE_RD(src)                             (((src) & 0x10000000)>>28)
#define SPI1_SRE_WR(src)                        (((u32)(src)<<28) & 0x10000000)
#define SPI1_SRE_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields SPI1_HYTS	 */
#define SPI1_HYTS_WIDTH                                                       1
#define SPI1_HYTS_SHIFT                                                      27
#define SPI1_HYTS_MASK                                               0x08000000
#define SPI1_HYTS_RD(src)                            (((src) & 0x08000000)>>27)
#define SPI1_HYTS_WR(src)                       (((u32)(src)<<27) & 0x08000000)
#define SPI1_HYTS_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields SPI1_PULLUP	 */
#define SPI1_PULLUP_WIDTH                                                     1
#define SPI1_PULLUP_SHIFT                                                    26
#define SPI1_PULLUP_MASK                                             0x04000000
#define SPI1_PULLUP_RD(src)                          (((src) & 0x04000000)>>26)
#define SPI1_PULLUP_WR(src)                     (((u32)(src)<<26) & 0x04000000)
#define SPI1_PULLUP_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields SPI1_PDWN	 */
#define SPI1_PDWN_WIDTH                                                       1
#define SPI1_PDWN_SHIFT                                                      25
#define SPI1_PDWN_MASK                                               0x02000000
#define SPI1_PDWN_RD(src)                            (((src) & 0x02000000)>>25)
#define SPI1_PDWN_WR(src)                       (((u32)(src)<<25) & 0x02000000)
#define SPI1_PDWN_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields SPI1_PWROK	 */
#define SPI1_PWROK_WIDTH                                                      1
#define SPI1_PWROK_SHIFT                                                     24
#define SPI1_PWROK_MASK                                              0x01000000
#define SPI1_PWROK_RD(src)                           (((src) & 0x01000000)>>24)
#define SPI1_PWROK_WR(src)                      (((u32)(src)<<24) & 0x01000000)
#define SPI1_PWROK_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields SPI0_SRE	 */
#define SPI0_SRE_WIDTH                                                        1
#define SPI0_SRE_SHIFT                                                       20
#define SPI0_SRE_MASK                                                0x00100000
#define SPI0_SRE_RD(src)                             (((src) & 0x00100000)>>20)
#define SPI0_SRE_WR(src)                        (((u32)(src)<<20) & 0x00100000)
#define SPI0_SRE_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields SPI0_HYTS	 */
#define SPI0_HYTS_WIDTH                                                       1
#define SPI0_HYTS_SHIFT                                                      19
#define SPI0_HYTS_MASK                                               0x00080000
#define SPI0_HYTS_RD(src)                            (((src) & 0x00080000)>>19)
#define SPI0_HYTS_WR(src)                       (((u32)(src)<<19) & 0x00080000)
#define SPI0_HYTS_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields SPI0_PULLUP	 */
#define SPI0_PULLUP_WIDTH                                                     1
#define SPI0_PULLUP_SHIFT                                                    18
#define SPI0_PULLUP_MASK                                             0x00040000
#define SPI0_PULLUP_RD(src)                          (((src) & 0x00040000)>>18)
#define SPI0_PULLUP_WR(src)                     (((u32)(src)<<18) & 0x00040000)
#define SPI0_PULLUP_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields SPI0_PDWN	 */
#define SPI0_PDWN_WIDTH                                                       1
#define SPI0_PDWN_SHIFT                                                      17
#define SPI0_PDWN_MASK                                               0x00020000
#define SPI0_PDWN_RD(src)                            (((src) & 0x00020000)>>17)
#define SPI0_PDWN_WR(src)                       (((u32)(src)<<17) & 0x00020000)
#define SPI0_PDWN_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields SPI0_PWROK	 */
#define SPI0_PWROK_WIDTH                                                      1
#define SPI0_PWROK_SHIFT                                                     16
#define SPI0_PWROK_MASK                                              0x00010000
#define SPI0_PWROK_RD(src)                           (((src) & 0x00010000)>>16)
#define SPI0_PWROK_WR(src)                      (((u32)(src)<<16) & 0x00010000)
#define SPI0_PWROK_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields IIC1_SRE	 */
#define IIC1_SRE_WIDTH                                                        1
#define IIC1_SRE_SHIFT                                                       12
#define IIC1_SRE_MASK                                                0x00001000
#define IIC1_SRE_RD(src)                             (((src) & 0x00001000)>>12)
#define IIC1_SRE_WR(src)                        (((u32)(src)<<12) & 0x00001000)
#define IIC1_SRE_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields IIC1_HYTS	 */
#define IIC1_HYTS_WIDTH                                                       1
#define IIC1_HYTS_SHIFT                                                      11
#define IIC1_HYTS_MASK                                               0x00000800
#define IIC1_HYTS_RD(src)                            (((src) & 0x00000800)>>11)
#define IIC1_HYTS_WR(src)                       (((u32)(src)<<11) & 0x00000800)
#define IIC1_HYTS_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields IIC1_PULLDN	 */
#define IIC1_PULLDN_WIDTH                                                     1
#define IIC1_PULLDN_SHIFT                                                    10
#define IIC1_PULLDN_MASK                                             0x00000400
#define IIC1_PULLDN_RD(src)                          (((src) & 0x00000400)>>10)
#define IIC1_PULLDN_WR(src)                     (((u32)(src)<<10) & 0x00000400)
#define IIC1_PULLDN_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields IIC1_PDWN	 */
#define IIC1_PDWN_WIDTH                                                       1
#define IIC1_PDWN_SHIFT                                                       9
#define IIC1_PDWN_MASK                                               0x00000200
#define IIC1_PDWN_RD(src)                             (((src) & 0x00000200)>>9)
#define IIC1_PDWN_WR(src)                        (((u32)(src)<<9) & 0x00000200)
#define IIC1_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields IIC1_PWROK	 */
#define IIC1_PWROK_WIDTH                                                      1
#define IIC1_PWROK_SHIFT                                                      8
#define IIC1_PWROK_MASK                                              0x00000100
#define IIC1_PWROK_RD(src)                            (((src) & 0x00000100)>>8)
#define IIC1_PWROK_WR(src)                       (((u32)(src)<<8) & 0x00000100)
#define IIC1_PWROK_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields IIC0_SRE	 */
#define IIC0_SRE_WIDTH                                                        1
#define IIC0_SRE_SHIFT                                                        4
#define IIC0_SRE_MASK                                                0x00000010
#define IIC0_SRE_RD(src)                              (((src) & 0x00000010)>>4)
#define IIC0_SRE_WR(src)                         (((u32)(src)<<4) & 0x00000010)
#define IIC0_SRE_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields IIC0_HYTS	 */
#define IIC0_HYTS_WIDTH                                                       1
#define IIC0_HYTS_SHIFT                                                       3
#define IIC0_HYTS_MASK                                               0x00000008
#define IIC0_HYTS_RD(src)                             (((src) & 0x00000008)>>3)
#define IIC0_HYTS_WR(src)                        (((u32)(src)<<3) & 0x00000008)
#define IIC0_HYTS_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields IIC0_PULLDN	 */
#define IIC0_PULLDN_WIDTH                                                     1
#define IIC0_PULLDN_SHIFT                                                     2
#define IIC0_PULLDN_MASK                                             0x00000004
#define IIC0_PULLDN_RD(src)                           (((src) & 0x00000004)>>2)
#define IIC0_PULLDN_WR(src)                      (((u32)(src)<<2) & 0x00000004)
#define IIC0_PULLDN_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields IIC0_PDWN	 */
#define IIC0_PDWN_WIDTH                                                       1
#define IIC0_PDWN_SHIFT                                                       1
#define IIC0_PDWN_MASK                                               0x00000002
#define IIC0_PDWN_RD(src)                             (((src) & 0x00000002)>>1)
#define IIC0_PDWN_WR(src)                        (((u32)(src)<<1) & 0x00000002)
#define IIC0_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields IIC0_PWROK	 */
#define IIC0_PWROK_WIDTH                                                      1
#define IIC0_PWROK_SHIFT                                                      0
#define IIC0_PWROK_MASK                                              0x00000001
#define IIC0_PWROK_RD(src)                               (((src) & 0x00000001))
#define IIC0_PWROK_WR(src)                          (((u32)(src)) & 0x00000001)
#define IIC0_PWROK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_SDIO_EBUS_USB_IOCTL	*/ 
/*	 Fields SDIO_SRE	 */
#define SDIO_SRE_WIDTH                                                        1
#define SDIO_SRE_SHIFT                                                       28
#define SDIO_SRE_MASK                                                0x10000000
#define SDIO_SRE_RD(src)                             (((src) & 0x10000000)>>28)
#define SDIO_SRE_WR(src)                        (((u32)(src)<<28) & 0x10000000)
#define SDIO_SRE_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields SDIO_HYTS	 */
#define SDIO_HYTS_WIDTH                                                       1
#define SDIO_HYTS_SHIFT                                                      27
#define SDIO_HYTS_MASK                                               0x08000000
#define SDIO_HYTS_RD(src)                            (((src) & 0x08000000)>>27)
#define SDIO_HYTS_WR(src)                       (((u32)(src)<<27) & 0x08000000)
#define SDIO_HYTS_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields SDIO_PULLUP	 */
#define SDIO_PULLUP_WIDTH                                                     1
#define SDIO_PULLUP_SHIFT                                                    26
#define SDIO_PULLUP_MASK                                             0x04000000
#define SDIO_PULLUP_RD(src)                          (((src) & 0x04000000)>>26)
#define SDIO_PULLUP_WR(src)                     (((u32)(src)<<26) & 0x04000000)
#define SDIO_PULLUP_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields SDIO_PDWN	 */
#define SDIO_PDWN_WIDTH                                                       1
#define SDIO_PDWN_SHIFT                                                      25
#define SDIO_PDWN_MASK                                               0x02000000
#define SDIO_PDWN_RD(src)                            (((src) & 0x02000000)>>25)
#define SDIO_PDWN_WR(src)                       (((u32)(src)<<25) & 0x02000000)
#define SDIO_PDWN_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields SDIO_PWROK	 */
#define SDIO_PWROK_WIDTH                                                      1
#define SDIO_PWROK_SHIFT                                                     24
#define SDIO_PWROK_MASK                                              0x01000000
#define SDIO_PWROK_RD(src)                           (((src) & 0x01000000)>>24)
#define SDIO_PWROK_WR(src)                      (((u32)(src)<<24) & 0x01000000)
#define SDIO_PWROK_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields EBUS_PULLDN	 */
#define EBUS_PULLDN_WIDTH                                                     1
#define EBUS_PULLDN_SHIFT                                                    21
#define EBUS_PULLDN_MASK                                             0x00200000
#define EBUS_PULLDN_RD(src)                          (((src) & 0x00200000)>>21)
#define EBUS_PULLDN_WR(src)                     (((u32)(src)<<21) & 0x00200000)
#define EBUS_PULLDN_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields EBUS_SRE	 */
#define EBUS_SRE_WIDTH                                                        1
#define EBUS_SRE_SHIFT                                                       20
#define EBUS_SRE_MASK                                                0x00100000
#define EBUS_SRE_RD(src)                             (((src) & 0x00100000)>>20)
#define EBUS_SRE_WR(src)                        (((u32)(src)<<20) & 0x00100000)
#define EBUS_SRE_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields EBUS_HYTS	 */
#define EBUS_HYTS_WIDTH                                                       1
#define EBUS_HYTS_SHIFT                                                      19
#define EBUS_HYTS_MASK                                               0x00080000
#define EBUS_HYTS_RD(src)                            (((src) & 0x00080000)>>19)
#define EBUS_HYTS_WR(src)                       (((u32)(src)<<19) & 0x00080000)
#define EBUS_HYTS_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields EBUS_PULLUP	 */
#define EBUS_PULLUP_WIDTH                                                     1
#define EBUS_PULLUP_SHIFT                                                    18
#define EBUS_PULLUP_MASK                                             0x00040000
#define EBUS_PULLUP_RD(src)                          (((src) & 0x00040000)>>18)
#define EBUS_PULLUP_WR(src)                     (((u32)(src)<<18) & 0x00040000)
#define EBUS_PULLUP_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields EBUS_PDWN	 */
#define EBUS_PDWN_WIDTH                                                       1
#define EBUS_PDWN_SHIFT                                                      17
#define EBUS_PDWN_MASK                                               0x00020000
#define EBUS_PDWN_RD(src)                            (((src) & 0x00020000)>>17)
#define EBUS_PDWN_WR(src)                       (((u32)(src)<<17) & 0x00020000)
#define EBUS_PDWN_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields EBUS_PWROK	 */
#define EBUS_PWROK_WIDTH                                                      1
#define EBUS_PWROK_SHIFT                                                     16
#define EBUS_PWROK_MASK                                              0x00010000
#define EBUS_PWROK_RD(src)                           (((src) & 0x00010000)>>16)
#define EBUS_PWROK_WR(src)                      (((u32)(src)<<16) & 0x00010000)
#define EBUS_PWROK_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields USB1_SRE	 */
#define USB1_SRE_WIDTH                                                        1
#define USB1_SRE_SHIFT                                                       12
#define USB1_SRE_MASK                                                0x00001000
#define USB1_SRE_RD(src)                             (((src) & 0x00001000)>>12)
#define USB1_SRE_WR(src)                        (((u32)(src)<<12) & 0x00001000)
#define USB1_SRE_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields USB1_HYTS	 */
#define USB1_HYTS_WIDTH                                                       1
#define USB1_HYTS_SHIFT                                                      11
#define USB1_HYTS_MASK                                               0x00000800
#define USB1_HYTS_RD(src)                            (((src) & 0x00000800)>>11)
#define USB1_HYTS_WR(src)                       (((u32)(src)<<11) & 0x00000800)
#define USB1_HYTS_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields USB1_PULLUP	 */
#define USB1_PULLUP_WIDTH                                                     1
#define USB1_PULLUP_SHIFT                                                    10
#define USB1_PULLUP_MASK                                             0x00000400
#define USB1_PULLUP_RD(src)                          (((src) & 0x00000400)>>10)
#define USB1_PULLUP_WR(src)                     (((u32)(src)<<10) & 0x00000400)
#define USB1_PULLUP_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields USB1_PDWN	 */
#define USB1_PDWN_WIDTH                                                       1
#define USB1_PDWN_SHIFT                                                       9
#define USB1_PDWN_MASK                                               0x00000200
#define USB1_PDWN_RD(src)                             (((src) & 0x00000200)>>9)
#define USB1_PDWN_WR(src)                        (((u32)(src)<<9) & 0x00000200)
#define USB1_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields USB1_PWROK	 */
#define USB1_PWROK_WIDTH                                                      1
#define USB1_PWROK_SHIFT                                                      8
#define USB1_PWROK_MASK                                              0x00000100
#define USB1_PWROK_RD(src)                            (((src) & 0x00000100)>>8)
#define USB1_PWROK_WR(src)                       (((u32)(src)<<8) & 0x00000100)
#define USB1_PWROK_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields USB0_SRE	 */
#define USB0_SRE_WIDTH                                                        1
#define USB0_SRE_SHIFT                                                        4
#define USB0_SRE_MASK                                                0x00000010
#define USB0_SRE_RD(src)                              (((src) & 0x00000010)>>4)
#define USB0_SRE_WR(src)                         (((u32)(src)<<4) & 0x00000010)
#define USB0_SRE_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields USB0_HYTS	 */
#define USB0_HYTS_WIDTH                                                       1
#define USB0_HYTS_SHIFT                                                       3
#define USB0_HYTS_MASK                                               0x00000008
#define USB0_HYTS_RD(src)                             (((src) & 0x00000008)>>3)
#define USB0_HYTS_WR(src)                        (((u32)(src)<<3) & 0x00000008)
#define USB0_HYTS_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields USB0_PULLUP	 */
#define USB0_PULLUP_WIDTH                                                     1
#define USB0_PULLUP_SHIFT                                                     2
#define USB0_PULLUP_MASK                                             0x00000004
#define USB0_PULLUP_RD(src)                           (((src) & 0x00000004)>>2)
#define USB0_PULLUP_WR(src)                      (((u32)(src)<<2) & 0x00000004)
#define USB0_PULLUP_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields USB0_PDWN	 */
#define USB0_PDWN_WIDTH                                                       1
#define USB0_PDWN_SHIFT                                                       1
#define USB0_PDWN_MASK                                               0x00000002
#define USB0_PDWN_RD(src)                             (((src) & 0x00000002)>>1)
#define USB0_PDWN_WR(src)                        (((u32)(src)<<1) & 0x00000002)
#define USB0_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields USB0_PWROK	 */
#define USB0_PWROK_WIDTH                                                      1
#define USB0_PWROK_SHIFT                                                      0
#define USB0_PWROK_MASK                                              0x00000001
#define USB0_PWROK_RD(src)                               (((src) & 0x00000001))
#define USB0_PWROK_WR(src)                          (((u32)(src)) & 0x00000001)
#define USB0_PWROK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_SPARE_IOCTL	*/ 
/*	 Fields SPARE4_SRE	 */
#define SPARE4_SRE_WIDTH                                                      1
#define SPARE4_SRE_SHIFT                                                     28
#define SPARE4_SRE_MASK                                              0x10000000
#define SPARE4_SRE_RD(src)                           (((src) & 0x10000000)>>28)
#define SPARE4_SRE_WR(src)                      (((u32)(src)<<28) & 0x10000000)
#define SPARE4_SRE_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields SPARE4_HYTS	 */
#define SPARE4_HYTS_WIDTH                                                     1
#define SPARE4_HYTS_SHIFT                                                    27
#define SPARE4_HYTS_MASK                                             0x08000000
#define SPARE4_HYTS_RD(src)                          (((src) & 0x08000000)>>27)
#define SPARE4_HYTS_WR(src)                     (((u32)(src)<<27) & 0x08000000)
#define SPARE4_HYTS_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields SPARE4_PULLUP	 */
#define SPARE4_PULLUP_WIDTH                                                   1
#define SPARE4_PULLUP_SHIFT                                                  26
#define SPARE4_PULLUP_MASK                                           0x04000000
#define SPARE4_PULLUP_RD(src)                        (((src) & 0x04000000)>>26)
#define SPARE4_PULLUP_WR(src)                   (((u32)(src)<<26) & 0x04000000)
#define SPARE4_PULLUP_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields SPARE4_PDWN	 */
#define SPARE4_PDWN_WIDTH                                                     1
#define SPARE4_PDWN_SHIFT                                                    25
#define SPARE4_PDWN_MASK                                             0x02000000
#define SPARE4_PDWN_RD(src)                          (((src) & 0x02000000)>>25)
#define SPARE4_PDWN_WR(src)                     (((u32)(src)<<25) & 0x02000000)
#define SPARE4_PDWN_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields SPARE4_PWROK	 */
#define SPARE4_PWROK_WIDTH                                                    1
#define SPARE4_PWROK_SHIFT                                                   24
#define SPARE4_PWROK_MASK                                            0x01000000
#define SPARE4_PWROK_RD(src)                         (((src) & 0x01000000)>>24)
#define SPARE4_PWROK_WR(src)                    (((u32)(src)<<24) & 0x01000000)
#define SPARE4_PWROK_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields SPARE3_SRE	 */
#define SPARE3_SRE_WIDTH                                                      1
#define SPARE3_SRE_SHIFT                                                     20
#define SPARE3_SRE_MASK                                              0x00100000
#define SPARE3_SRE_RD(src)                           (((src) & 0x00100000)>>20)
#define SPARE3_SRE_WR(src)                      (((u32)(src)<<20) & 0x00100000)
#define SPARE3_SRE_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields SPARE3_HYTS	 */
#define SPARE3_HYTS_WIDTH                                                     1
#define SPARE3_HYTS_SHIFT                                                    19
#define SPARE3_HYTS_MASK                                             0x00080000
#define SPARE3_HYTS_RD(src)                          (((src) & 0x00080000)>>19)
#define SPARE3_HYTS_WR(src)                     (((u32)(src)<<19) & 0x00080000)
#define SPARE3_HYTS_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields SPARE3_PULLUP	 */
#define SPARE3_PULLUP_WIDTH                                                   1
#define SPARE3_PULLUP_SHIFT                                                  18
#define SPARE3_PULLUP_MASK                                           0x00040000
#define SPARE3_PULLUP_RD(src)                        (((src) & 0x00040000)>>18)
#define SPARE3_PULLUP_WR(src)                   (((u32)(src)<<18) & 0x00040000)
#define SPARE3_PULLUP_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields SPARE3_PDWN	 */
#define SPARE3_PDWN_WIDTH                                                     1
#define SPARE3_PDWN_SHIFT                                                    17
#define SPARE3_PDWN_MASK                                             0x00020000
#define SPARE3_PDWN_RD(src)                          (((src) & 0x00020000)>>17)
#define SPARE3_PDWN_WR(src)                     (((u32)(src)<<17) & 0x00020000)
#define SPARE3_PDWN_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields SPARE3_PWROK	 */
#define SPARE3_PWROK_WIDTH                                                    1
#define SPARE3_PWROK_SHIFT                                                   16
#define SPARE3_PWROK_MASK                                            0x00010000
#define SPARE3_PWROK_RD(src)                         (((src) & 0x00010000)>>16)
#define SPARE3_PWROK_WR(src)                    (((u32)(src)<<16) & 0x00010000)
#define SPARE3_PWROK_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields SPARE2_SRE	 */
#define SPARE2_SRE_WIDTH                                                      1
#define SPARE2_SRE_SHIFT                                                     12
#define SPARE2_SRE_MASK                                              0x00001000
#define SPARE2_SRE_RD(src)                           (((src) & 0x00001000)>>12)
#define SPARE2_SRE_WR(src)                      (((u32)(src)<<12) & 0x00001000)
#define SPARE2_SRE_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields SPARE2_HYTS	 */
#define SPARE2_HYTS_WIDTH                                                     1
#define SPARE2_HYTS_SHIFT                                                    11
#define SPARE2_HYTS_MASK                                             0x00000800
#define SPARE2_HYTS_RD(src)                          (((src) & 0x00000800)>>11)
#define SPARE2_HYTS_WR(src)                     (((u32)(src)<<11) & 0x00000800)
#define SPARE2_HYTS_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields SPARE2_PULLUP	 */
#define SPARE2_PULLUP_WIDTH                                                   1
#define SPARE2_PULLUP_SHIFT                                                  10
#define SPARE2_PULLUP_MASK                                           0x00000400
#define SPARE2_PULLUP_RD(src)                        (((src) & 0x00000400)>>10)
#define SPARE2_PULLUP_WR(src)                   (((u32)(src)<<10) & 0x00000400)
#define SPARE2_PULLUP_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields SPARE2_PDWN	 */
#define SPARE2_PDWN_WIDTH                                                     1
#define SPARE2_PDWN_SHIFT                                                     9
#define SPARE2_PDWN_MASK                                             0x00000200
#define SPARE2_PDWN_RD(src)                           (((src) & 0x00000200)>>9)
#define SPARE2_PDWN_WR(src)                      (((u32)(src)<<9) & 0x00000200)
#define SPARE2_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields SPARE2_PWROK	 */
#define SPARE2_PWROK_WIDTH                                                    1
#define SPARE2_PWROK_SHIFT                                                    8
#define SPARE2_PWROK_MASK                                            0x00000100
#define SPARE2_PWROK_RD(src)                          (((src) & 0x00000100)>>8)
#define SPARE2_PWROK_WR(src)                     (((u32)(src)<<8) & 0x00000100)
#define SPARE2_PWROK_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields SPARE1_SRE	 */
#define SPARE1_SRE_WIDTH                                                      1
#define SPARE1_SRE_SHIFT                                                      4
#define SPARE1_SRE_MASK                                              0x00000010
#define SPARE1_SRE_RD(src)                            (((src) & 0x00000010)>>4)
#define SPARE1_SRE_WR(src)                       (((u32)(src)<<4) & 0x00000010)
#define SPARE1_SRE_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields SPARE1_HYTS	 */
#define SPARE1_HYTS_WIDTH                                                     1
#define SPARE1_HYTS_SHIFT                                                     3
#define SPARE1_HYTS_MASK                                             0x00000008
#define SPARE1_HYTS_RD(src)                           (((src) & 0x00000008)>>3)
#define SPARE1_HYTS_WR(src)                      (((u32)(src)<<3) & 0x00000008)
#define SPARE1_HYTS_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields SPARE1_PULLUP	 */
#define SPARE1_PULLUP_WIDTH                                                   1
#define SPARE1_PULLUP_SHIFT                                                   2
#define SPARE1_PULLUP_MASK                                           0x00000004
#define SPARE1_PULLUP_RD(src)                         (((src) & 0x00000004)>>2)
#define SPARE1_PULLUP_WR(src)                    (((u32)(src)<<2) & 0x00000004)
#define SPARE1_PULLUP_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields SPARE1_PDWN	 */
#define SPARE1_PDWN_WIDTH                                                     1
#define SPARE1_PDWN_SHIFT                                                     1
#define SPARE1_PDWN_MASK                                             0x00000002
#define SPARE1_PDWN_RD(src)                           (((src) & 0x00000002)>>1)
#define SPARE1_PDWN_WR(src)                      (((u32)(src)<<1) & 0x00000002)
#define SPARE1_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields SPARE1_PWROK	 */
#define SPARE1_PWROK_WIDTH                                                    1
#define SPARE1_PWROK_SHIFT                                                    0
#define SPARE1_PWROK_MASK                                            0x00000001
#define SPARE1_PWROK_RD(src)                             (((src) & 0x00000001))
#define SPARE1_PWROK_WR(src)                        (((u32)(src)) & 0x00000001)
#define SPARE1_PWROK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_UART_SPARE_IOCTL	*/ 
/*	 Fields UART_PULLDN	 */
#define UART_PULLDN_WIDTH                                                     1
#define UART_PULLDN_SHIFT                                                    13
#define UART_PULLDN_MASK                                             0x00002000
#define UART_PULLDN_RD(src)                          (((src) & 0x00002000)>>13)
#define UART_PULLDN_WR(src)                     (((u32)(src)<<13) & 0x00002000)
#define UART_PULLDN_SET(dst,src) \
                      (((dst) & ~0x00002000) | (((u32)(src)<<13) & 0x00002000))
/*	 Fields UART_SRE	 */
#define UART_SRE_WIDTH                                                        1
#define UART_SRE_SHIFT                                                       12
#define UART_SRE_MASK                                                0x00001000
#define UART_SRE_RD(src)                             (((src) & 0x00001000)>>12)
#define UART_SRE_WR(src)                        (((u32)(src)<<12) & 0x00001000)
#define UART_SRE_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields UART_HYTS	 */
#define UART_HYTS_WIDTH                                                       1
#define UART_HYTS_SHIFT                                                      11
#define UART_HYTS_MASK                                               0x00000800
#define UART_HYTS_RD(src)                            (((src) & 0x00000800)>>11)
#define UART_HYTS_WR(src)                       (((u32)(src)<<11) & 0x00000800)
#define UART_HYTS_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields UART_PULLUP	 */
#define UART_PULLUP_WIDTH                                                     1
#define UART_PULLUP_SHIFT                                                    10
#define UART_PULLUP_MASK                                             0x00000400
#define UART_PULLUP_RD(src)                          (((src) & 0x00000400)>>10)
#define UART_PULLUP_WR(src)                     (((u32)(src)<<10) & 0x00000400)
#define UART_PULLUP_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields UART_PDWN	 */
#define UART_PDWN_WIDTH                                                       1
#define UART_PDWN_SHIFT                                                       9
#define UART_PDWN_MASK                                               0x00000200
#define UART_PDWN_RD(src)                             (((src) & 0x00000200)>>9)
#define UART_PDWN_WR(src)                        (((u32)(src)<<9) & 0x00000200)
#define UART_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields UART_PWROK	 */
#define UART_PWROK_WIDTH                                                      1
#define UART_PWROK_SHIFT                                                      8
#define UART_PWROK_MASK                                              0x00000100
#define UART_PWROK_RD(src)                            (((src) & 0x00000100)>>8)
#define UART_PWROK_WR(src)                       (((u32)(src)<<8) & 0x00000100)
#define UART_PWROK_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields SPARE5_SRE	 */
#define SPARE5_SRE_WIDTH                                                      1
#define SPARE5_SRE_SHIFT                                                      4
#define SPARE5_SRE_MASK                                              0x00000010
#define SPARE5_SRE_RD(src)                            (((src) & 0x00000010)>>4)
#define SPARE5_SRE_WR(src)                       (((u32)(src)<<4) & 0x00000010)
#define SPARE5_SRE_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields SPARE5_HYTS	 */
#define SPARE5_HYTS_WIDTH                                                     1
#define SPARE5_HYTS_SHIFT                                                     3
#define SPARE5_HYTS_MASK                                             0x00000008
#define SPARE5_HYTS_RD(src)                           (((src) & 0x00000008)>>3)
#define SPARE5_HYTS_WR(src)                      (((u32)(src)<<3) & 0x00000008)
#define SPARE5_HYTS_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields SPARE5_PULLUP	 */
#define SPARE5_PULLUP_WIDTH                                                   1
#define SPARE5_PULLUP_SHIFT                                                   2
#define SPARE5_PULLUP_MASK                                           0x00000004
#define SPARE5_PULLUP_RD(src)                         (((src) & 0x00000004)>>2)
#define SPARE5_PULLUP_WR(src)                    (((u32)(src)<<2) & 0x00000004)
#define SPARE5_PULLUP_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields SPARE5_PDWN	 */
#define SPARE5_PDWN_WIDTH                                                     1
#define SPARE5_PDWN_SHIFT                                                     1
#define SPARE5_PDWN_MASK                                             0x00000002
#define SPARE5_PDWN_RD(src)                           (((src) & 0x00000002)>>1)
#define SPARE5_PDWN_WR(src)                      (((u32)(src)<<1) & 0x00000002)
#define SPARE5_PDWN_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields SPARE5_PWROK	 */
#define SPARE5_PWROK_WIDTH                                                    1
#define SPARE5_PWROK_SHIFT                                                    0
#define SPARE5_PWROK_MASK                                            0x00000001
#define SPARE5_PWROK_RD(src)                             (((src) & 0x00000001))
#define SPARE5_PWROK_WR(src)                        (((u32)(src)) & 0x00000001)
#define SPARE5_PWROK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_USB0_TUNE	*/ 
/*	 Fields USB0_TXVREFTUNE	 */
#define USB0_TXVREFTUNE_F6_WIDTH                                              4
#define USB0_TXVREFTUNE_F6_SHIFT                                             21
#define USB0_TXVREFTUNE_F6_MASK                                      0x01e00000
#define USB0_TXVREFTUNE_F6_RD(src)                   (((src) & 0x01e00000)>>21)
#define USB0_TXVREFTUNE_F6_WR(src)              (((u32)(src)<<21) & 0x01e00000)
#define USB0_TXVREFTUNE_F6_SET(dst,src) \
                      (((dst) & ~0x01e00000) | (((u32)(src)<<21) & 0x01e00000))
/*	 Fields USB0_TXFSLSTUNE	 */
#define USB0_TXFSLSTUNE_F6_WIDTH                                              4
#define USB0_TXFSLSTUNE_F6_SHIFT                                             17
#define USB0_TXFSLSTUNE_F6_MASK                                      0x001e0000
#define USB0_TXFSLSTUNE_F6_RD(src)                   (((src) & 0x001e0000)>>17)
#define USB0_TXFSLSTUNE_F6_WR(src)              (((u32)(src)<<17) & 0x001e0000)
#define USB0_TXFSLSTUNE_F6_SET(dst,src) \
                      (((dst) & ~0x001e0000) | (((u32)(src)<<17) & 0x001e0000))
/*	 Fields USB0_TXPREEMPHASISTUNE	 */
#define USB0_TXPREEMPHASISTUNE_F6_WIDTH                                       2
#define USB0_TXPREEMPHASISTUNE_F6_SHIFT                                      15
#define USB0_TXPREEMPHASISTUNE_F6_MASK                               0x00018000
#define USB0_TXPREEMPHASISTUNE_F6_RD(src)            (((src) & 0x00018000)>>15)
#define USB0_TXPREEMPHASISTUNE_F6_WR(src)       (((u32)(src)<<15) & 0x00018000)
#define USB0_TXPREEMPHASISTUNE_F6_SET(dst,src) \
                      (((dst) & ~0x00018000) | (((u32)(src)<<15) & 0x00018000))
/*	 Fields USB0_TXRISETUNE	 */
#define USB0_TXRISETUNE_F6_WIDTH                                              1
#define USB0_TXRISETUNE_F6_SHIFT                                             14
#define USB0_TXRISETUNE_F6_MASK                                      0x00004000
#define USB0_TXRISETUNE_F6_RD(src)                   (((src) & 0x00004000)>>14)
#define USB0_TXRISETUNE_F6_WR(src)              (((u32)(src)<<14) & 0x00004000)
#define USB0_TXRISETUNE_F6_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))
/*	 Fields USB0_TXHSXVTUNE	 */
#define USB0_TXHSXVTUNE_F6_WIDTH                                              2
#define USB0_TXHSXVTUNE_F6_SHIFT                                             12
#define USB0_TXHSXVTUNE_F6_MASK                                      0x00003000
#define USB0_TXHSXVTUNE_F6_RD(src)                   (((src) & 0x00003000)>>12)
#define USB0_TXHSXVTUNE_F6_WR(src)              (((u32)(src)<<12) & 0x00003000)
#define USB0_TXHSXVTUNE_F6_SET(dst,src) \
                      (((dst) & ~0x00003000) | (((u32)(src)<<12) & 0x00003000))
/*	 Fields USB0_COMPDISTUNE	 */
#define USB0_COMPDISTUNE_F6_WIDTH                                             3
#define USB0_COMPDISTUNE_F6_SHIFT                                             8
#define USB0_COMPDISTUNE_F6_MASK                                     0x00000700
#define USB0_COMPDISTUNE_F6_RD(src)                   (((src) & 0x00000700)>>8)
#define USB0_COMPDISTUNE_F6_WR(src)              (((u32)(src)<<8) & 0x00000700)
#define USB0_COMPDISTUNE_F6_SET(dst,src) \
                       (((dst) & ~0x00000700) | (((u32)(src)<<8) & 0x00000700))
/*	 Fields USB0_SQRXTUNE	 */
#define USB0_SQRXTUNE_F6_WIDTH                                                3
#define USB0_SQRXTUNE_F6_SHIFT                                                4
#define USB0_SQRXTUNE_F6_MASK                                        0x00000070
#define USB0_SQRXTUNE_F6_RD(src)                      (((src) & 0x00000070)>>4)
#define USB0_SQRXTUNE_F6_WR(src)                 (((u32)(src)<<4) & 0x00000070)
#define USB0_SQRXTUNE_F6_SET(dst,src) \
                       (((dst) & ~0x00000070) | (((u32)(src)<<4) & 0x00000070))
/*	 Fields USB0_OTGTUNE	 */
#define USB0_OTGTUNE_F6_WIDTH                                                 3
#define USB0_OTGTUNE_F6_SHIFT                                                 0
#define USB0_OTGTUNE_F6_MASK                                         0x00000007
#define USB0_OTGTUNE_F6_RD(src)                          (((src) & 0x00000007))
#define USB0_OTGTUNE_F6_WR(src)                     (((u32)(src)) & 0x00000007)
#define USB0_OTGTUNE_F6_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register MPA_USB0_RSTCTL	*/ 
/*	 Fields USB0_OTGDISABLE	 */
#define USB0_OTGDISABLE_F6_WIDTH                                              1
#define USB0_OTGDISABLE_F6_SHIFT                                              2
#define USB0_OTGDISABLE_F6_MASK                                      0x00000004
#define USB0_OTGDISABLE_F6_RD(src)                    (((src) & 0x00000004)>>2)
#define USB0_OTGDISABLE_F6_WR(src)               (((u32)(src)<<2) & 0x00000004)
#define USB0_OTGDISABLE_F6_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields USB0_PORTRESET	 */
#define USB0_PORTRESET_F6_WIDTH                                               1
#define USB0_PORTRESET_F6_SHIFT                                               1
#define USB0_PORTRESET_F6_MASK                                       0x00000002
#define USB0_PORTRESET_F6_RD(src)                     (((src) & 0x00000002)>>1)
#define USB0_PORTRESET_F6_WR(src)                (((u32)(src)<<1) & 0x00000002)
#define USB0_PORTRESET_F6_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields USB0_POR	 */
#define USB0_POR_F6_WIDTH                                                     1
#define USB0_POR_F6_SHIFT                                                     0
#define USB0_POR_F6_MASK                                             0x00000001
#define USB0_POR_F6_RD(src)                              (((src) & 0x00000001))
#define USB0_POR_F6_WR(src)                         (((u32)(src)) & 0x00000001)
#define USB0_POR_F6_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_USB0_CLKCTL	*/ 
/*	 Fields USB0_SIM_SCALEDOWN	 */
#define USB0_SIM_SCALEDOWN_F6_WIDTH                                           2
#define USB0_SIM_SCALEDOWN_F6_SHIFT                                          30
#define USB0_SIM_SCALEDOWN_F6_MASK                                   0xc0000000
#define USB0_SIM_SCALEDOWN_F6_RD(src)                (((src) & 0xc0000000)>>30)
#define USB0_SIM_SCALEDOWN_F6_WR(src)           (((u32)(src)<<30) & 0xc0000000)
#define USB0_SIM_SCALEDOWN_F6_SET(dst,src) \
                      (((dst) & ~0xc0000000) | (((u32)(src)<<30) & 0xc0000000))
/*	 Fields USB0_DRVVBUS_POLARITY	 */
#define USB0_DRVVBUS_POLARITY_F6_WIDTH                                        1
#define USB0_DRVVBUS_POLARITY_F6_SHIFT                                        7
#define USB0_DRVVBUS_POLARITY_F6_MASK                                0x00000080
#define USB0_DRVVBUS_POLARITY_F6_RD(src)              (((src) & 0x00000080)>>7)
#define USB0_DRVVBUS_POLARITY_F6_WR(src)         (((u32)(src)<<7) & 0x00000080)
#define USB0_DRVVBUS_POLARITY_F6_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields USB0_REFCLKSEL	 */
#define USB0_REFCLKSEL_F6_WIDTH                                               2
#define USB0_REFCLKSEL_F6_SHIFT                                               2
#define USB0_REFCLKSEL_F6_MASK                                       0x0000000c
#define USB0_REFCLKSEL_F6_RD(src)                     (((src) & 0x0000000c)>>2)
#define USB0_REFCLKSEL_F6_WR(src)                (((u32)(src)<<2) & 0x0000000c)
#define USB0_REFCLKSEL_F6_SET(dst,src) \
                       (((dst) & ~0x0000000c) | (((u32)(src)<<2) & 0x0000000c))
/*	 Fields USB0_REFCLKDIV	 */
#define USB0_REFCLKDIV_F6_WIDTH                                               2
#define USB0_REFCLKDIV_F6_SHIFT                                               0
#define USB0_REFCLKDIV_F6_MASK                                       0x00000003
#define USB0_REFCLKDIV_F6_RD(src)                        (((src) & 0x00000003))
#define USB0_REFCLKDIV_F6_WR(src)                   (((u32)(src)) & 0x00000003)
#define USB0_REFCLKDIV_F6_SET(dst,src) \
                          (((dst) & ~0x00000003) | (((u32)(src)) & 0x00000003))

/*	Register MPA_USB0_PHYCTL	*/ 
/*	 Fields TXBITSTUFFEN	 */
#define TXBITSTUFFEN_WIDTH                                                    1
#define TXBITSTUFFEN_SHIFT                                                   14
#define TXBITSTUFFEN_MASK                                            0x00004000
#define TXBITSTUFFEN_RD(src)                         (((src) & 0x00004000)>>14)
#define TXBITSTUFFEN_WR(src)                    (((u32)(src)<<14) & 0x00004000)
#define TXBITSTUFFEN_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))
/*	 Fields TXBITSTUFFENH	 */
#define TXBITSTUFFENH_WIDTH                                                   1
#define TXBITSTUFFENH_SHIFT                                                  13
#define TXBITSTUFFENH_MASK                                           0x00002000
#define TXBITSTUFFENH_RD(src)                        (((src) & 0x00002000)>>13)
#define TXBITSTUFFENH_WR(src)                   (((u32)(src)<<13) & 0x00002000)
#define TXBITSTUFFENH_SET(dst,src) \
                      (((dst) & ~0x00002000) | (((u32)(src)<<13) & 0x00002000))
/*	 Fields COMMONONN	 */
#define COMMONONN_WIDTH                                                       1
#define COMMONONN_SHIFT                                                      12
#define COMMONONN_MASK                                               0x00001000
#define COMMONONN_RD(src)                            (((src) & 0x00001000)>>12)
#define COMMONONN_WR(src)                       (((u32)(src)<<12) & 0x00001000)
#define COMMONONN_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields VBUSVLDEXT	 */
#define VBUSVLDEXT_WIDTH                                                      1
#define VBUSVLDEXT_SHIFT                                                     11
#define VBUSVLDEXT_MASK                                              0x00000800
#define VBUSVLDEXT_RD(src)                           (((src) & 0x00000800)>>11)
#define VBUSVLDEXT_WR(src)                      (((u32)(src)<<11) & 0x00000800)
#define VBUSVLDEXT_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields VBUSVLDEXTSEL	 */
#define VBUSVLDEXTSEL_WIDTH                                                   1
#define VBUSVLDEXTSEL_SHIFT                                                  10
#define VBUSVLDEXTSEL_MASK                                           0x00000400
#define VBUSVLDEXTSEL_RD(src)                        (((src) & 0x00000400)>>10)
#define VBUSVLDEXTSEL_WR(src)                   (((u32)(src)<<10) & 0x00000400)
#define VBUSVLDEXTSEL_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields SLEEPM	 */
#define SLEEPM_WIDTH                                                          1
#define SLEEPM_SHIFT                                                          9
#define SLEEPM_MASK                                                  0x00000200
#define SLEEPM_RD(src)                                (((src) & 0x00000200)>>9)
#define SLEEPM_WR(src)                           (((u32)(src)<<9) & 0x00000200)
#define SLEEPM_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields BIASTUNE	 */
#define BIASTUNE_WIDTH                                                        1
#define BIASTUNE_SHIFT                                                        8
#define BIASTUNE_MASK                                                0x00000100
#define BIASTUNE_RD(src)                              (((src) & 0x00000100)>>8)
#define BIASTUNE_WR(src)                         (((u32)(src)<<8) & 0x00000100)
#define BIASTUNE_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields PLLTUNE	 */
#define PLLTUNE_WIDTH                                                         1
#define PLLTUNE_SHIFT                                                         7
#define PLLTUNE_MASK                                                 0x00000080
#define PLLTUNE_RD(src)                               (((src) & 0x00000080)>>7)
#define PLLTUNE_WR(src)                          (((u32)(src)<<7) & 0x00000080)
#define PLLTUNE_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields CLKCORE	 */
#define CLKCORE_WIDTH                                                         1
#define CLKCORE_SHIFT                                                         6
#define CLKCORE_MASK                                                 0x00000040
#define CLKCORE_RD(src)                               (((src) & 0x00000040)>>6)
#define CLKCORE_WR(src)                          (((u32)(src)<<6) & 0x00000040)
#define CLKCORE_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields LOOPBACKENB	 */
#define LOOPBACKENB_WIDTH                                                     1
#define LOOPBACKENB_SHIFT                                                     5
#define LOOPBACKENB_MASK                                             0x00000020
#define LOOPBACKENB_RD(src)                           (((src) & 0x00000020)>>5)
#define LOOPBACKENB_WR(src)                      (((u32)(src)<<5) & 0x00000020)
#define LOOPBACKENB_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields FSDATAEXT	 */
#define FSDATAEXT_WIDTH                                                       1
#define FSDATAEXT_SHIFT                                                       4
#define FSDATAEXT_MASK                                               0x00000010
#define FSDATAEXT_RD(src)                             (((src) & 0x00000010)>>4)
#define FSDATAEXT_WR(src)                        (((u32)(src)<<4) & 0x00000010)
#define FSDATAEXT_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields FSSEOEXT	 */
#define FSSEOEXT_WIDTH                                                        1
#define FSSEOEXT_SHIFT                                                        3
#define FSSEOEXT_MASK                                                0x00000008
#define FSSEOEXT_RD(src)                              (((src) & 0x00000008)>>3)
#define FSSEOEXT_WR(src)                         (((u32)(src)<<3) & 0x00000008)
#define FSSEOEXT_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields TXENABLEN	 */
#define TXENABLEN_WIDTH                                                       1
#define TXENABLEN_SHIFT                                                       2
#define TXENABLEN_MASK                                               0x00000004
#define TXENABLEN_RD(src)                             (((src) & 0x00000004)>>2)
#define TXENABLEN_WR(src)                        (((u32)(src)<<2) & 0x00000004)
#define TXENABLEN_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields FSXCVROWNER	 */
#define FSXCVROWNER_WIDTH                                                     1
#define FSXCVROWNER_SHIFT                                                     1
#define FSXCVROWNER_MASK                                             0x00000002
#define FSXCVROWNER_RD(src)                           (((src) & 0x00000002)>>1)
#define FSXCVROWNER_WR(src)                      (((u32)(src)<<1) & 0x00000002)
#define FSXCVROWNER_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields VREGTUNE	 */
#define VREGTUNE_WIDTH                                                        1
#define VREGTUNE_SHIFT                                                        0
#define VREGTUNE_MASK                                                0x00000001
#define VREGTUNE_RD(src)                                 (((src) & 0x00000001))
#define VREGTUNE_WR(src)                            (((u32)(src)) & 0x00000001)
#define VREGTUNE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_SPARE_DSF	*/ 
/*	 Fields DSF	 */
#define DSF_WIDTH                                                            32
#define DSF_SHIFT                                                             0
#define DSF_MASK                                                     0xffffffff
#define DSF_RD(src)                                      (((src) & 0xffffffff))
#define DSF_WR(src)                                 (((u32)(src)) & 0xffffffff)
#define DSF_SET(dst,src) (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_SPARE_SERDES	*/ 
/*	 Fields SERDES	 */
#define SERDES_WIDTH                                                         32
#define SERDES_SHIFT                                                          0
#define SERDES_MASK                                                  0xffffffff
#define SERDES_RD(src)                                   (((src) & 0xffffffff))
#define SERDES_WR(src)                              (((u32)(src)) & 0xffffffff)
#define SERDES_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_SPARE_GLBL	*/ 
/*	 Fields GLBL	 */
#define GLBL_WIDTH                                                           32
#define GLBL_SHIFT                                                            0
#define GLBL_MASK                                                    0xffffffff
#define GLBL_RD(src)                                     (((src) & 0xffffffff))
#define GLBL_WR(src)                                (((u32)(src)) & 0xffffffff)
#define GLBL_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_ARM_INPUT0	*/ 
/*	 Fields PWRUP	 */
#define PWRUP0_WIDTH                                                          1
#define PWRUP0_SHIFT                                                         31
#define PWRUP0_MASK                                                  0x80000000
#define PWRUP0_RD(src)                               (((src) & 0x80000000)>>31)
#define PWRUP0_WR(src)                          (((u32)(src)<<31) & 0x80000000)
#define PWRUP0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields ISOLATEn	 */
#define ISOLATEN0_WIDTH                                                       1
#define ISOLATEN0_SHIFT                                                      30
#define ISOLATEN0_MASK                                               0x40000000
#define ISOLATEN0_RD(src)                            (((src) & 0x40000000)>>30)
#define ISOLATEN0_WR(src)                       (((u32)(src)<<30) & 0x40000000)
#define ISOLATEN0_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields RETAINn	 */
#define RETAINN0_WIDTH                                                        1
#define RETAINN0_SHIFT                                                       29
#define RETAINN0_MASK                                                0x20000000
#define RETAINN0_RD(src)                             (((src) & 0x20000000)>>29)
#define RETAINN0_WR(src)                        (((u32)(src)<<29) & 0x20000000)
#define RETAINN0_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields STCALIB	 */
#define STCALIB0_WIDTH                                                       26
#define STCALIB0_SHIFT                                                        0
#define STCALIB0_MASK                                                0x03ffffff
#define STCALIB0_RD(src)                                 (((src) & 0x03ffffff))
#define STCALIB0_WR(src)                            (((u32)(src)) & 0x03ffffff)
#define STCALIB0_SET(dst,src) \
                          (((dst) & ~0x03ffffff) | (((u32)(src)) & 0x03ffffff))

/*	Register MPA_ARM_INPUT1	*/ 
/*	 Fields AUXFAULT	 */
#define AUXFAULT1_WIDTH                                                      32
#define AUXFAULT1_SHIFT                                                       0
#define AUXFAULT1_MASK                                               0xffffffff
#define AUXFAULT1_RD(src)                                (((src) & 0xffffffff))
#define AUXFAULT1_WR(src)                           (((u32)(src)) & 0xffffffff)
#define AUXFAULT1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register MPA_ARM_INPUT2	*/ 
/*	 Fields BIGEND	 */
#define BIGEND2_WIDTH                                                         1
#define BIGEND2_SHIFT                                                        31
#define BIGEND2_MASK                                                 0x80000000
#define BIGEND2_RD(src)                              (((src) & 0x80000000)>>31)
#define BIGEND2_WR(src)                         (((u32)(src)<<31) & 0x80000000)
#define BIGEND2_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields EDBGRQ	 */
#define EDBGRQ2_WIDTH                                                         1
#define EDBGRQ2_SHIFT                                                        30
#define EDBGRQ2_MASK                                                 0x40000000
#define EDBGRQ2_RD(src)                              (((src) & 0x40000000)>>30)
#define EDBGRQ2_WR(src)                         (((u32)(src)<<30) & 0x40000000)
#define EDBGRQ2_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields DBGRESTART	 */
#define DBGRESTART2_WIDTH                                                     1
#define DBGRESTART2_SHIFT                                                    29
#define DBGRESTART2_MASK                                             0x20000000
#define DBGRESTART2_RD(src)                          (((src) & 0x20000000)>>29)
#define DBGRESTART2_WR(src)                     (((u32)(src)<<29) & 0x20000000)
#define DBGRESTART2_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields RXEV	 */
#define RXEV2_WIDTH                                                           1
#define RXEV2_SHIFT                                                          28
#define RXEV2_MASK                                                   0x10000000
#define RXEV2_RD(src)                                (((src) & 0x10000000)>>28)
#define RXEV2_WR(src)                           (((u32)(src)<<28) & 0x10000000)
#define RXEV2_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields SLEEPHOLDREQn	 */
#define SLEEPHOLDREQN2_WIDTH                                                  1
#define SLEEPHOLDREQN2_SHIFT                                                 27
#define SLEEPHOLDREQN2_MASK                                          0x08000000
#define SLEEPHOLDREQN2_RD(src)                       (((src) & 0x08000000)>>27)
#define SLEEPHOLDREQN2_WR(src)                  (((u32)(src)<<27) & 0x08000000)
#define SLEEPHOLDREQN2_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields WICENREQ	 */
#define WICENREQ2_WIDTH                                                       1
#define WICENREQ2_SHIFT                                                      26
#define WICENREQ2_MASK                                               0x04000000
#define WICENREQ2_RD(src)                            (((src) & 0x04000000)>>26)
#define WICENREQ2_WR(src)                       (((u32)(src)<<26) & 0x04000000)
#define WICENREQ2_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields FIXMASTERTYPE	 */
#define FIXMASTERTYPE2_WIDTH                                                  1
#define FIXMASTERTYPE2_SHIFT                                                 25
#define FIXMASTERTYPE2_MASK                                          0x02000000
#define FIXMASTERTYPE2_RD(src)                       (((src) & 0x02000000)>>25)
#define FIXMASTERTYPE2_WR(src)                  (((u32)(src)<<25) & 0x02000000)
#define FIXMASTERTYPE2_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))

/*	Register MPA_ARM_OUTPUT0	*/ 
/*	 Fields SWDOEN	 */
#define SWDOEN0_WIDTH                                                         1
#define SWDOEN0_SHIFT                                                        31
#define SWDOEN0_MASK                                                 0x80000000
#define SWDOEN0_RD(src)                              (((src) & 0x80000000)>>31)
#define SWDOEN0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields SWDO	 */
#define SWDO0_WIDTH                                                           1
#define SWDO0_SHIFT                                                          30
#define SWDO0_MASK                                                   0x40000000
#define SWDO0_RD(src)                                (((src) & 0x40000000)>>30)
#define SWDO0_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields SWV	 */
#define SWV0_WIDTH                                                            1
#define SWV0_SHIFT                                                           29
#define SWV0_MASK                                                    0x20000000
#define SWV0_RD(src)                                 (((src) & 0x20000000)>>29)
#define SWV0_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields JTAGNSW	 */
#define JTAGNSW0_WIDTH                                                        1
#define JTAGNSW0_SHIFT                                                       28
#define JTAGNSW0_MASK                                                0x10000000
#define JTAGNSW0_RD(src)                             (((src) & 0x10000000)>>28)
#define JTAGNSW0_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields WICENACK	 */
#define WICENACK0_WIDTH                                                       1
#define WICENACK0_SHIFT                                                      27
#define WICENACK0_MASK                                               0x08000000
#define WICENACK0_RD(src)                            (((src) & 0x08000000)>>27)
#define WICENACK0_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields WAKEUP	 */
#define WAKEUP0_WIDTH                                                         1
#define WAKEUP0_SHIFT                                                        26
#define WAKEUP0_MASK                                                 0x04000000
#define WAKEUP0_RD(src)                              (((src) & 0x04000000)>>26)
#define WAKEUP0_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields PWRUPREADY	 */
#define PWRUPREADY0_WIDTH                                                     1
#define PWRUPREADY0_SHIFT                                                    25
#define PWRUPREADY0_MASK                                             0x02000000
#define PWRUPREADY0_RD(src)                          (((src) & 0x02000000)>>25)
#define PWRUPREADY0_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))

/*	Register MPA_DWIP_INPUT0	*/ 
/*	 Fields eh2h_shsel_reg	 */
#define EH2H_SHSEL_REG0_WIDTH                                                 1
#define EH2H_SHSEL_REG0_SHIFT                                                31
#define EH2H_SHSEL_REG0_MASK                                         0x80000000
#define EH2H_SHSEL_REG0_RD(src)                      (((src) & 0x80000000)>>31)
#define EH2H_SHSEL_REG0_WR(src)                 (((u32)(src)<<31) & 0x80000000)
#define EH2H_SHSEL_REG0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields eh2h_shsel_p	 */
#define EH2H_SHSEL_P0_WIDTH                                                   1
#define EH2H_SHSEL_P0_SHIFT                                                  30
#define EH2H_SHSEL_P0_MASK                                           0x40000000
#define EH2H_SHSEL_P0_RD(src)                        (((src) & 0x40000000)>>30)
#define EH2H_SHSEL_P0_WR(src)                   (((u32)(src)<<30) & 0x40000000)
#define EH2H_SHSEL_P0_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields x2h_awlock	 */
#define X2H_AWLOCK0_WIDTH                                                     2
#define X2H_AWLOCK0_SHIFT                                                    26
#define X2H_AWLOCK0_MASK                                             0x0c000000
#define X2H_AWLOCK0_RD(src)                          (((src) & 0x0c000000)>>26)
#define X2H_AWLOCK0_WR(src)                     (((u32)(src)<<26) & 0x0c000000)
#define X2H_AWLOCK0_SET(dst,src) \
                      (((dst) & ~0x0c000000) | (((u32)(src)<<26) & 0x0c000000))
/*	 Fields x2h_arlock	 */
#define X2H_ARLOCK0_WIDTH                                                     2
#define X2H_ARLOCK0_SHIFT                                                    24
#define X2H_ARLOCK0_MASK                                             0x03000000
#define X2H_ARLOCK0_RD(src)                          (((src) & 0x03000000)>>24)
#define X2H_ARLOCK0_WR(src)                     (((u32)(src)<<24) & 0x03000000)
#define X2H_ARLOCK0_SET(dst,src) \
                      (((dst) & ~0x03000000) | (((u32)(src)<<24) & 0x03000000))
/*	 Fields x2h_awprot	 */
#define X2H_AWPROT0_WIDTH                                                     3
#define X2H_AWPROT0_SHIFT                                                    20
#define X2H_AWPROT0_MASK                                             0x00700000
#define X2H_AWPROT0_RD(src)                          (((src) & 0x00700000)>>20)
#define X2H_AWPROT0_WR(src)                     (((u32)(src)<<20) & 0x00700000)
#define X2H_AWPROT0_SET(dst,src) \
                      (((dst) & ~0x00700000) | (((u32)(src)<<20) & 0x00700000))
/*	 Fields x2h_arprot	 */
#define X2H_ARPROT0_WIDTH                                                     3
#define X2H_ARPROT0_SHIFT                                                    16
#define X2H_ARPROT0_MASK                                             0x00070000
#define X2H_ARPROT0_RD(src)                          (((src) & 0x00070000)>>16)
#define X2H_ARPROT0_WR(src)                     (((u32)(src)<<16) & 0x00070000)
#define X2H_ARPROT0_SET(dst,src) \
                      (((dst) & ~0x00070000) | (((u32)(src)<<16) & 0x00070000))
/*	 Fields x2h_awcache	 */
#define X2H_AWCACHE0_WIDTH                                                    4
#define X2H_AWCACHE0_SHIFT                                                   12
#define X2H_AWCACHE0_MASK                                            0x0000f000
#define X2H_AWCACHE0_RD(src)                         (((src) & 0x0000f000)>>12)
#define X2H_AWCACHE0_WR(src)                    (((u32)(src)<<12) & 0x0000f000)
#define X2H_AWCACHE0_SET(dst,src) \
                      (((dst) & ~0x0000f000) | (((u32)(src)<<12) & 0x0000f000))
/*	 Fields x2h_arcache	 */
#define X2H_ARCACHE0_WIDTH                                                    4
#define X2H_ARCACHE0_SHIFT                                                    8
#define X2H_ARCACHE0_MASK                                            0x00000f00
#define X2H_ARCACHE0_RD(src)                          (((src) & 0x00000f00)>>8)
#define X2H_ARCACHE0_WR(src)                     (((u32)(src)<<8) & 0x00000f00)
#define X2H_ARCACHE0_SET(dst,src) \
                       (((dst) & ~0x00000f00) | (((u32)(src)<<8) & 0x00000f00))
/*	 Fields apb_pclk_en	 */
#define APB_PCLK_EN0_WIDTH                                                    1
#define APB_PCLK_EN0_SHIFT                                                    0
#define APB_PCLK_EN0_MASK                                            0x00000001
#define APB_PCLK_EN0_RD(src)                             (((src) & 0x00000001))
#define APB_PCLK_EN0_WR(src)                        (((u32)(src)) & 0x00000001)
#define APB_PCLK_EN0_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register MPA_DWIP_OUTPUT0	*/ 
/*	 Fields debug_s_gen	 */
#define DEBUG_S_GEN0_WIDTH                                                    1
#define DEBUG_S_GEN0_SHIFT                                                   31
#define DEBUG_S_GEN0_MASK                                            0x80000000
#define DEBUG_S_GEN0_RD(src)                         (((src) & 0x80000000)>>31)
#define DEBUG_S_GEN0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields debug_p_gen	 */
#define DEBUG_P_GEN0_WIDTH                                                    1
#define DEBUG_P_GEN0_SHIFT                                                   30
#define DEBUG_P_GEN0_MASK                                            0x40000000
#define DEBUG_P_GEN0_RD(src)                         (((src) & 0x40000000)>>30)
#define DEBUG_P_GEN0_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields debug_data	 */
#define DEBUG_DATA0_WIDTH                                                     1
#define DEBUG_DATA0_SHIFT                                                    29
#define DEBUG_DATA0_MASK                                             0x20000000
#define DEBUG_DATA0_RD(src)                          (((src) & 0x20000000)>>29)
#define DEBUG_DATA0_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields debug_addr	 */
#define DEBUG_ADDR0_WIDTH                                                     1
#define DEBUG_ADDR0_SHIFT                                                    28
#define DEBUG_ADDR0_MASK                                             0x10000000
#define DEBUG_ADDR0_RD(src)                          (((src) & 0x10000000)>>28)
#define DEBUG_ADDR0_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields debug_rd	 */
#define DEBUG_RD0_WIDTH                                                       1
#define DEBUG_RD0_SHIFT                                                      27
#define DEBUG_RD0_MASK                                               0x08000000
#define DEBUG_RD0_RD(src)                            (((src) & 0x08000000)>>27)
#define DEBUG_RD0_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields debug_wr	 */
#define DEBUG_WR0_WIDTH                                                       1
#define DEBUG_WR0_SHIFT                                                      26
#define DEBUG_WR0_MASK                                               0x04000000
#define DEBUG_WR0_RD(src)                            (((src) & 0x04000000)>>26)
#define DEBUG_WR0_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields debug_hs	 */
#define DEBUG_HS0_WIDTH                                                       1
#define DEBUG_HS0_SHIFT                                                      25
#define DEBUG_HS0_MASK                                               0x02000000
#define DEBUG_HS0_RD(src)                            (((src) & 0x02000000)>>25)
#define DEBUG_HS0_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields debug_master_act	 */
#define DEBUG_MASTER_ACT0_WIDTH                                               1
#define DEBUG_MASTER_ACT0_SHIFT                                              24
#define DEBUG_MASTER_ACT0_MASK                                       0x01000000
#define DEBUG_MASTER_ACT0_RD(src)                    (((src) & 0x01000000)>>24)
#define DEBUG_MASTER_ACT0_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields debug_slave_act	 */
#define DEBUG_SLAVE_ACT0_WIDTH                                                1
#define DEBUG_SLAVE_ACT0_SHIFT                                               23
#define DEBUG_SLAVE_ACT0_MASK                                        0x00800000
#define DEBUG_SLAVE_ACT0_RD(src)                     (((src) & 0x00800000)>>23)
#define DEBUG_SLAVE_ACT0_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields debug_addr_10bit	 */
#define DEBUG_ADDR_10BIT0_WIDTH                                               1
#define DEBUG_ADDR_10BIT0_SHIFT                                              22
#define DEBUG_ADDR_10BIT0_MASK                                       0x00400000
#define DEBUG_ADDR_10BIT0_RD(src)                    (((src) & 0x00400000)>>22)
#define DEBUG_ADDR_10BIT0_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields ic_en	 */
#define IC_EN0_WIDTH                                                          1
#define IC_EN0_SHIFT                                                         21
#define IC_EN0_MASK                                                  0x00200000
#define IC_EN0_RD(src)                               (((src) & 0x00200000)>>21)
#define IC_EN0_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields debug_mst_cstate	 */
#define DEBUG_MST_CSTATE0_WIDTH                                               5
#define DEBUG_MST_CSTATE0_SHIFT                                               8
#define DEBUG_MST_CSTATE0_MASK                                       0x00001f00
#define DEBUG_MST_CSTATE0_RD(src)                     (((src) & 0x00001f00)>>8)
#define DEBUG_MST_CSTATE0_SET(dst,src) \
                       (((dst) & ~0x00001f00) | (((u32)(src)<<8) & 0x00001f00))
/*	 Fields debug_slv_cstate	 */
#define DEBUG_SLV_CSTATE0_WIDTH                                               4
#define DEBUG_SLV_CSTATE0_SHIFT                                               0
#define DEBUG_SLV_CSTATE0_MASK                                       0x0000000f
#define DEBUG_SLV_CSTATE0_RD(src)                        (((src) & 0x0000000f))
#define DEBUG_SLV_CSTATE0_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Global Base Address	*/
#define RTC_I_BASE_ADDR			0xd00410000ULL

/*    Address RTC_I  Registers */
#define RTC_CCVR_ADDR                                                0x00000000
#define RTC_CCVR_DEFAULT                                             0x00000000
#define RTC_CMR_ADDR                                                 0x00000004
#define RTC_CMR_DEFAULT                                              0x00000000
#define RTC_CLR_ADDR                                                 0x00000008
#define RTC_CLR_DEFAULT                                              0x00000000
#define RTC_CCR_ADDR                                                 0x0000000c
#define RTC_CCR_DEFAULT                                              0x00000000
#define RTC_STAT_ADDR                                                0x00000010
#define RTC_STAT_DEFAULT                                             0x00000000
#define RTC_RSTAT_ADDR                                               0x00000014
#define RTC_RSTAT_DEFAULT                                            0x00000000
#define RTC_EOI_ADDR                                                 0x00000018
#define RTC_EOI_DEFAULT                                              0x00000000
#define RTC_COMP_VER_ADDR                                            0x0000001c
#define RTC_COMP_VER_DEFAULT                                         0x3230322a

/*	Register RTC_CCVR	*/ 
/*	 Fields CCVR	 */
#define CCVR_WIDTH                                                           32
#define CCVR_SHIFT                                                            0
#define CCVR_MASK                                                    0xffffffff
#define CCVR_RD(src)                                     (((src) & 0xffffffff))
#define CCVR_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register RTC_CMR	*/ 
/*	 Fields CMR	 */
#define CMR_WIDTH                                                            32
#define CMR_SHIFT                                                             0
#define CMR_MASK                                                     0xffffffff
#define CMR_RD(src)                                      (((src) & 0xffffffff))
#define CMR_WR(src)                                 (((u32)(src)) & 0xffffffff)
#define CMR_SET(dst,src) (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register RTC_CLR	*/ 
/*	 Fields CLR	 */
#define CLR_WIDTH                                                            32
#define CLR_SHIFT                                                             0
#define CLR_MASK                                                     0xffffffff
#define CLR_RD(src)                                      (((src) & 0xffffffff))
#define CLR_WR(src)                                 (((u32)(src)) & 0xffffffff)
#define CLR_SET(dst,src) (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register RTC_CCR	*/ 
/*	 Fields RTC_WEN	 */
#define RTC_WEN_WIDTH                                                         1
#define RTC_WEN_SHIFT                                                         3
#define RTC_WEN_MASK                                                 0x00000008
#define RTC_WEN_RD(src)                               (((src) & 0x00000008)>>3)
#define RTC_WEN_WR(src)                          (((u32)(src)<<3) & 0x00000008)
#define RTC_WEN_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields RTC_EN	 */
#define RTC_EN_WIDTH                                                          1
#define RTC_EN_SHIFT                                                          2
#define RTC_EN_MASK                                                  0x00000004
#define RTC_EN_RD(src)                                (((src) & 0x00000004)>>2)
#define RTC_EN_WR(src)                           (((u32)(src)<<2) & 0x00000004)
#define RTC_EN_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields RTC_MASK	 */
#define RTC_MASK_WIDTH                                                        1
#define RTC_MASK_SHIFT                                                        1
#define RTC_MASK_MASK                                                0x00000002
#define RTC_MASK_RD(src)                              (((src) & 0x00000002)>>1)
#define RTC_MASK_WR(src)                         (((u32)(src)<<1) & 0x00000002)
#define RTC_MASK_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields RTC_IEN	 */
#define RTC_IEN_WIDTH                                                         1
#define RTC_IEN_SHIFT                                                         0
#define RTC_IEN_MASK                                                 0x00000001
#define RTC_IEN_RD(src)                                  (((src) & 0x00000001))
#define RTC_IEN_WR(src)                             (((u32)(src)) & 0x00000001)
#define RTC_IEN_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register RTC_STAT	*/ 
/*	 Fields STAT	 */
#define STAT_WIDTH                                                            1
#define STAT_SHIFT                                                            0
#define STAT_MASK                                                    0x00000001
#define STAT_RD(src)                                     (((src) & 0x00000001))
#define STAT_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register RTC_RSTAT	*/ 
/*	 Fields RSTAT	 */
#define RSTAT_WIDTH                                                           1
#define RSTAT_SHIFT                                                           0
#define RSTAT_MASK                                                   0x00000001
#define RSTAT_RD(src)                                    (((src) & 0x00000001))
#define RSTAT_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register RTC_EOI	*/ 
/*	 Fields EOI	 */
#define EOI_WIDTH                                                             1
#define EOI_SHIFT                                                             0
#define EOI_MASK                                                     0x00000001
#define EOI_RD(src)                                      (((src) & 0x00000001))
#define EOI_SET(dst,src) (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register RTC_COMP_VER	*/ 

/*	Global Base Address	*/
#define MPA_SCU_CSR_I_BASE_ADDR			0xddd8b0000ULL

/*    Address MPA_SCU_CSR_I  Registers */
#define SCU_BID_ADDR                                                 0x00000000
#define SCU_BID_DEFAULT                                              0x00000067
#define SCU_JTAG0_ADDR                                               0x00000004
#define SCU_JTAG0_DEFAULT                                            0x00000000
#define SCU_JTAG1_ADDR                                               0x00000008
#define SCU_JTAG1_DEFAULT                                            0x00000000
#define SCU_SRST_ADDR                                                0x0000000c
#define SCU_SRST_DEFAULT                                             0x1ffdff42
#define SCU_CLKEN_ADDR                                               0x00000010
#define SCU_CLKEN_DEFAULT                                            0xe0000030
#define SCU_IPL_DONE_ADDR                                            0x00000014
#define SCU_IPL_DONE_DEFAULT                                         0x00000000
#define SCU_STAT_ADDR                                                0x00000018
#define SCU_STAT_DEFAULT                                             0x00000000
#define SCU_SOC_EFUSE_ADDR                                           0x0000001c
#define SCU_SOC_EFUSE_DEFAULT                                        0x00000000
#define SCU_PINSTRAP_ADDR                                            0x00000020
#define SCU_PINSTRAP_DEFAULT                                         0x81300000
#define SCU_NFBOOT0_ADDR                                             0x00000024
#define SCU_NFBOOT0_DEFAULT                                          0x40e40000
#define SCU_NFBOOT1_ADDR                                             0x00000028
#define SCU_NFBOOT1_DEFAULT                                          0xffffffff
#define SCU_EBCBOOT_ADDR                                             0x0000002c
#define SCU_EBCBOOT_DEFAULT                                          0x0b00ffe0
#define SCU_PPCBOOT_ADDR                                             0x00000030
#define SCU_PPCBOOT_DEFAULT                                          0x000000ee
#define SCU_PPCBOOTDEV_ADDR                                          0x00000034
#define SCU_PPCBOOTDEV_DEFAULT                                       0x00000000
#define SCU_SRST1_ADDR                                               0x00000038
#define SCU_SRST1_DEFAULT                                            0x00e80004
#define SCU_CLKEN1_ADDR                                              0x0000003c
#define SCU_CLKEN1_DEFAULT                                           0xe0000002
#define SCU_SOCPLL0_ADDR                                             0x00000040
#define SCU_SOCPLL0_DEFAULT                                          0x0008007f
#define SCU_SOCPLL1_ADDR                                             0x00000044
#define SCU_SOCPLL1_DEFAULT                                          0x00080027
#define SCU_SOCPLL2_ADDR                                             0x00000048
#define SCU_SOCPLL2_DEFAULT                                          0x8009003f
#define SCU_SOCPLL3_ADDR                                             0x0000004c
#define SCU_SOCPLL3_DEFAULT                                          0x80090007
#define SCU_SOCPLLADJ0_ADDR                                          0x00000050
#define SCU_SOCPLLADJ0_DEFAULT                                       0x0000003f
#define SCU_SOCPLLADJ1_ADDR                                          0x00000054
#define SCU_SOCPLLADJ1_DEFAULT                                       0x00000013
#define SCU_SOCPLLADJ2_ADDR                                          0x00000058
#define SCU_SOCPLLADJ2_DEFAULT                                       0x0000001f
#define SCU_SOCPLLADJ3_ADDR                                          0x0000005c
#define SCU_SOCPLLADJ3_DEFAULT                                       0x00000003
#define SCU_SOCPLLSTAT_ADDR                                          0x00000060
#define SCU_SOCPLLSTAT_DEFAULT                                       0x00000000
#define SCU_PLLDLY_ADDR                                              0x00000064
#define SCU_PLLDLY_DEFAULT                                           0x01000100
#define SCU_PPC0_RESUME_DS_ADDR                                      0x00000068
#define SCU_PPC0_RESUME_DS_DEFAULT                                   0x00000000
#define SCU_PPC1_RESUME_DS_ADDR                                      0x0000006c
#define SCU_PPC1_RESUME_DS_DEFAULT                                   0x00000000
#define SCU_SOC_PWR_CTL_ADDR                                         0x00000070
#define SCU_SOC_PWR_CTL_DEFAULT                                      0x000000ff
#define SCU_SOC_PWR_STAT_ADDR                                        0x00000074
#define SCU_SOC_PWR_STAT_DEFAULT                                     0x00000000
#define SCU_PWRGOOD_ADDR                                             0x00000078
#define SCU_PWRGOOD_DEFAULT                                          0x00000000
#define SCU_PS_CTL_ADDR                                              0x0000007c
#define SCU_PS_CTL_DEFAULT                                           0x00000000
#define SCU_ECID0_ADDR                                               0x00000080
#define SCU_ECID0_DEFAULT                                            0x00000000
#define SCU_ECID1_ADDR                                               0x00000084
#define SCU_ECID1_DEFAULT                                            0x00000000
#define SCU_ECID2_ADDR                                               0x00000088
#define SCU_ECID2_DEFAULT                                            0x00000000
#define SCU_ECID3_ADDR                                               0x0000008c
#define SCU_ECID3_DEFAULT                                            0x00000000
#define SCU_RAMRWM0_ADDR                                             0x00000090
#define SCU_RAMRWM0_DEFAULT                                          0x11111111
#define SCU_RAMRWM1_ADDR                                             0x00000094
#define SCU_RAMRWM1_DEFAULT                                          0x11111111
#define SCU_RAMRWM2_ADDR                                             0x00000098
#define SCU_RAMRWM2_DEFAULT                                          0x00111111
#define SCU_RAMRWM3_ADDR                                             0x0000009c
#define SCU_RAMRWM3_DEFAULT                                          0x00000011
#define SCU_ROMRM_ADDR                                               0x000000a0
#define SCU_ROMRM_DEFAULT                                            0x00000011
#define SCU_RAMTEST0_ADDR                                            0x000000a4
#define SCU_RAMTEST0_DEFAULT                                         0x00000000
#define SCU_RAMTEST1_ADDR                                            0x000000a8
#define SCU_RAMTEST1_DEFAULT                                         0x00000000
#define SCU_MRDY_ADDR                                                0x000000b0
#define SCU_MRDY_DEFAULT                                             0x00000000
#define SCU_SOC_TS_CTL_ADDR                                          0x000000b4
#define SCU_SOC_TS_CTL_DEFAULT                                       0x00000000
#define SCU_SOC_TDR_CTL_ADDR                                         0x000000b8
#define SCU_SOC_TDR_CTL_DEFAULT                                      0x00000000
#define SCU_SOCDIV_ADDR                                              0x000000c0
#define SCU_SOCDIV_DEFAULT                                           0x04050a02
#define SCU_SOCDIV1_ADDR                                             0x000000c4
#define SCU_SOCDIV1_DEFAULT                                          0x010a0207
#define SCU_SOCDIV2_ADDR                                             0x000000c8
#define SCU_SOCDIV2_DEFAULT                                          0x03050c04
#define SCU_SOCDIV3_ADDR                                             0x000000cc
#define SCU_SOCDIV3_DEFAULT                                          0x00000000
#define SCU_SOCDIV4_ADDR                                             0x000000d0
#define SCU_SOCDIV4_DEFAULT                                          0x00080008
#define SCU_SOCDIV5_ADDR                                             0x000000d4
#define SCU_SOCDIV5_DEFAULT                                          0x0a14001a
#define SCU_SOC_SMS_CTL_ADDR                                         0x000000dc
#define SCU_SOC_SMS_CTL_DEFAULT                                      0x00000000
#define SCU_CSR_SRST_ADDR                                            0x000000e0
#define SCU_CSR_SRST_DEFAULT                                         0x7c7c4f50
#define SCU_CSR_SRST1_ADDR                                           0x000000e4
#define SCU_CSR_SRST1_DEFAULT                                        0x00880000
#define SCU_SOCPLL4_ADDR                                             0x000000f0
#define SCU_SOCPLL4_DEFAULT                                          0x80090027
#define SCU_SOCPLLADJ4_ADDR                                          0x000000f4
#define SCU_SOCPLLADJ4_DEFAULT                                       0x00000013
#define I2C_BOOT_GENERAL_CFG_ADDR                                    0x00000100
#define I2C_BOOT_GENERAL_CFG_DEFAULT                                 0x00640029
#define I2C_BOOT_GENERAL_RST_ADDR                                    0x00000104
#define I2C_BOOT_GENERAL_RST_DEFAULT                                 0x00000000
#define I2C_BOOT_HS_CNT_ADDR                                         0x00000108
#define I2C_BOOT_HS_CNT_DEFAULT                                      0x00640076
#define I2C_BOOT_FS_CNT_ADDR                                         0x0000010c
#define I2C_BOOT_FS_CNT_DEFAULT                                      0x00640076

/*	Register SCU_BID	*/ 
/*	 Fields REVNO (Software Team - MPA_ Prefix Added Manually)	 */
#define MPA_REVNO_F12_WIDTH                                                   2
#define MPA_REVNO_F12_SHIFT                                                   9
#define MPA_REVNO_F12_MASK                                           0x00000600
#define MPA_REVNO_F12_RD(src)                         (((src) & 0x00000600)>>9)
#define MPA_REVNO_F12_SET(dst,src) \
                       (((dst) & ~0x00000600) | (((u32)(src)<<9) & 0x00000600))
/*	 Fields BUSID (Software Team - MPA_ Prefix Added Manually)	 */
#define MPA_BUSID_F10_WIDTH                                                   3
#define MPA_BUSID_F10_SHIFT                                                   6
#define MPA_BUSID_F10_MASK                                           0x000001c0
#define MPA_BUSID_F10_RD(src)                         (((src) & 0x000001c0)>>6)
#define MPA_BUSID_F10_SET(dst,src) \
                       (((dst) & ~0x000001c0) | (((u32)(src)<<6) & 0x000001c0))
/*	 Fields DEVICEID (Software Team - MPA_ Prefix Added Manually)	 */
#define MPA_DEVICEID_F14_WIDTH                                                6
#define MPA_DEVICEID_F14_SHIFT                                                0
#define MPA_DEVICEID_F14_MASK                                        0x0000003f
#define MPA_DEVICEID_F14_RD(src)                         (((src) & 0x0000003f))
#define MPA_DEVICEID_F14_SET(dst,src) \
                          (((dst) & ~0x0000003f) | (((u32)(src)) & 0x0000003f))

/*	Register SCU_JTAG0	*/ 
/*	 Fields Version	 */
#define VERSION0_WIDTH                                                        4
#define VERSION0_SHIFT                                                       28
#define VERSION0_MASK                                                0xf0000000
#define VERSION0_RD(src)                             (((src) & 0xf0000000)>>28)
#define VERSION0_SET(dst,src) \
                      (((dst) & ~0xf0000000) | (((u32)(src)<<28) & 0xf0000000))
/*	 Fields Part	 */
#define PART0_WIDTH                                                          16
#define PART0_SHIFT                                                          12
#define PART0_MASK                                                   0x0ffff000
#define PART0_RD(src)                                (((src) & 0x0ffff000)>>12)
#define PART0_SET(dst,src) \
                      (((dst) & ~0x0ffff000) | (((u32)(src)<<12) & 0x0ffff000))
/*	 Fields MID	 */
#define MID0_WIDTH                                                           11
#define MID0_SHIFT                                                            1
#define MID0_MASK                                                    0x00000ffe
#define MID0_RD(src)                                  (((src) & 0x00000ffe)>>1)
#define MID0_SET(dst,src) \
                       (((dst) & ~0x00000ffe) | (((u32)(src)<<1) & 0x00000ffe))
/*	 Fields LSB	 */
#define LSB0_WIDTH                                                            1
#define LSB0_SHIFT                                                            0
#define LSB0_MASK                                                    0x00000001
#define LSB0_RD(src)                                     (((src) & 0x00000001))
#define LSB0_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_JTAG1	*/ 
/*	 Fields UserCode	 */
#define USERCODE1_WIDTH                                                      32
#define USERCODE1_SHIFT                                                       0
#define USERCODE1_MASK                                               0xffffffff
#define USERCODE1_RD(src)                                (((src) & 0xffffffff))
#define USERCODE1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register SCU_SRST	*/ 
/*	 Fields NDFC	 */
#define NDFC_WIDTH                                                            1
#define NDFC_SHIFT                                                           31
#define NDFC_MASK                                                    0x80000000
#define NDFC_RD(src)                                 (((src) & 0x80000000)>>31)
#define NDFC_WR(src)                            (((u32)(src)<<31) & 0x80000000)
#define NDFC_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields APB_PERI	 */
#define APB_PERI_WIDTH                                                        1
#define APB_PERI_SHIFT                                                       30
#define APB_PERI_MASK                                                0x40000000
#define APB_PERI_RD(src)                             (((src) & 0x40000000)>>30)
#define APB_PERI_WR(src)                        (((u32)(src)<<30) & 0x40000000)
#define APB_PERI_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields TDM	 */
#define TDM_WIDTH                                                             1
#define TDM_SHIFT                                                            29
#define TDM_MASK                                                     0x20000000
#define TDM_RD(src)                                  (((src) & 0x20000000)>>29)
#define TDM_WR(src)                             (((u32)(src)<<29) & 0x20000000)
#define TDM_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields MPIC	 */
#define MPIC_WIDTH                                                            1
#define MPIC_SHIFT                                                           28
#define MPIC_MASK                                                    0x10000000
#define MPIC_RD(src)                                 (((src) & 0x10000000)>>28)
#define MPIC_WR(src)                            (((u32)(src)<<28) & 0x10000000)
#define MPIC_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields SATA0	 */
#define SATA0_WIDTH                                                           1
#define SATA0_SHIFT                                                          27
#define SATA0_MASK                                                   0x08000000
#define SATA0_RD(src)                                (((src) & 0x08000000)>>27)
#define SATA0_WR(src)                           (((u32)(src)<<27) & 0x08000000)
#define SATA0_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields SATA1	 */
#define SATA1_WIDTH                                                           1
#define SATA1_SHIFT                                                          26
#define SATA1_MASK                                                   0x04000000
#define SATA1_RD(src)                                (((src) & 0x04000000)>>26)
#define SATA1_WR(src)                           (((u32)(src)<<26) & 0x04000000)
#define SATA1_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields USB0	 */
#define USB0_WIDTH                                                            1
#define USB0_SHIFT                                                           25
#define USB0_MASK                                                    0x02000000
#define USB0_RD(src)                                 (((src) & 0x02000000)>>25)
#define USB0_WR(src)                            (((u32)(src)<<25) & 0x02000000)
#define USB0_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields USB1	 */
#define USB1_WIDTH                                                            1
#define USB1_SHIFT                                                           24
#define USB1_MASK                                                    0x01000000
#define USB1_RD(src)                                 (((src) & 0x01000000)>>24)
#define USB1_WR(src)                            (((u32)(src)<<24) & 0x01000000)
#define USB1_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields USB2	 */
#define USB2_WIDTH                                                            1
#define USB2_SHIFT                                                           23
#define USB2_MASK                                                    0x00800000
#define USB2_RD(src)                                 (((src) & 0x00800000)>>23)
#define USB2_WR(src)                            (((u32)(src)<<23) & 0x00800000)
#define USB2_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields PCIE1	 */
#define PCIE1_WIDTH                                                           1
#define PCIE1_SHIFT                                                          22
#define PCIE1_MASK                                                   0x00400000
#define PCIE1_RD(src)                                (((src) & 0x00400000)>>22)
#define PCIE1_WR(src)                           (((u32)(src)<<22) & 0x00400000)
#define PCIE1_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields PCIE2	 */
#define PCIE2_WIDTH                                                           1
#define PCIE2_SHIFT                                                          21
#define PCIE2_MASK                                                   0x00200000
#define PCIE2_RD(src)                                (((src) & 0x00200000)>>21)
#define PCIE2_WR(src)                           (((u32)(src)<<21) & 0x00200000)
#define PCIE2_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields PCIE3	 */
#define PCIE3_WIDTH                                                           1
#define PCIE3_SHIFT                                                          20
#define PCIE3_MASK                                                   0x00100000
#define PCIE3_RD(src)                                (((src) & 0x00100000)>>20)
#define PCIE3_WR(src)                           (((u32)(src)<<20) & 0x00100000)
#define PCIE3_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields ENET0	 */
#define ENET0_WIDTH                                                           1
#define ENET0_SHIFT                                                          19
#define ENET0_MASK                                                   0x00080000
#define ENET0_RD(src)                                (((src) & 0x00080000)>>19)
#define ENET0_WR(src)                           (((u32)(src)<<19) & 0x00080000)
#define ENET0_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields ENET1	 */
#define ENET1_WIDTH                                                           1
#define ENET1_SHIFT                                                          18
#define ENET1_MASK                                                   0x00040000
#define ENET1_RD(src)                                (((src) & 0x00040000)>>18)
#define ENET1_WR(src)                           (((u32)(src)<<18) & 0x00040000)
#define ENET1_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields SPI	 */
#define SPI_WIDTH                                                             1
#define SPI_SHIFT                                                            16
#define SPI_MASK                                                     0x00010000
#define SPI_RD(src)                                  (((src) & 0x00010000)>>16)
#define SPI_WR(src)                             (((u32)(src)<<16) & 0x00010000)
#define SPI_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields SDIO	 */
#define SDIO_WIDTH                                                            1
#define SDIO_SHIFT                                                           15
#define SDIO_MASK                                                    0x00008000
#define SDIO_RD(src)                                 (((src) & 0x00008000)>>15)
#define SDIO_WR(src)                            (((u32)(src)<<15) & 0x00008000)
#define SDIO_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields MEMC	 */
#define MEMC_WIDTH                                                            1
#define MEMC_SHIFT                                                           14
#define MEMC_MASK                                                    0x00004000
#define MEMC_RD(src)                                 (((src) & 0x00004000)>>14)
#define MEMC_WR(src)                            (((u32)(src)<<14) & 0x00004000)
#define MEMC_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))
/*	 Fields EXTRST	 */
#define EXTRST_WIDTH                                                          1
#define EXTRST_SHIFT                                                         13
#define EXTRST_MASK                                                  0x00002000
#define EXTRST_RD(src)                               (((src) & 0x00002000)>>13)
#define EXTRST_WR(src)                          (((u32)(src)<<13) & 0x00002000)
#define EXTRST_SET(dst,src) \
                      (((dst) & ~0x00002000) | (((u32)(src)<<13) & 0x00002000))
/*	 Fields DDR_PHY	 */
#define DDR_PHY_WIDTH                                                         1
#define DDR_PHY_SHIFT                                                        12
#define DDR_PHY_MASK                                                 0x00001000
#define DDR_PHY_RD(src)                              (((src) & 0x00001000)>>12)
#define DDR_PHY_WR(src)                         (((u32)(src)<<12) & 0x00001000)
#define DDR_PHY_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields OCM	 */
#define OCM_WIDTH                                                             1
#define OCM_SHIFT                                                            11
#define OCM_MASK                                                     0x00000800
#define OCM_RD(src)                                  (((src) & 0x00000800)>>11)
#define OCM_WR(src)                             (((u32)(src)<<11) & 0x00000800)
#define OCM_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields PKTDMA	 */
#define PKTDMA_WIDTH                                                          1
#define PKTDMA_SHIFT                                                         10
#define PKTDMA_MASK                                                  0x00000400
#define PKTDMA_RD(src)                               (((src) & 0x00000400)>>10)
#define PKTDMA_WR(src)                          (((u32)(src)<<10) & 0x00000400)
#define PKTDMA_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields QMTM	 */
#define QMTM_WIDTH                                                            1
#define QMTM_SHIFT                                                            9
#define QMTM_MASK                                                    0x00000200
#define QMTM_RD(src)                                  (((src) & 0x00000200)>>9)
#define QMTM_WR(src)                             (((u32)(src)<<9) & 0x00000200)
#define QMTM_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields QMLite	 */
#define QMLITE_WIDTH                                                          1
#define QMLITE_SHIFT                                                          8
#define QMLITE_MASK                                                  0x00000100
#define QMLITE_RD(src)                                (((src) & 0x00000100)>>8)
#define QMLITE_WR(src)                           (((u32)(src)<<8) & 0x00000100)
#define QMLITE_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields LCD	 */
#define LCD_WIDTH                                                             1
#define LCD_SHIFT                                                             6
#define LCD_MASK                                                     0x00000040
#define LCD_RD(src)                                   (((src) & 0x00000040)>>6)
#define LCD_WR(src)                              (((u32)(src)<<6) & 0x00000040)
#define LCD_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields PLB	 */
#define PLB_WIDTH                                                             1
#define PLB_SHIFT                                                             5
#define PLB_MASK                                                     0x00000020
#define PLB_RD(src)                                   (((src) & 0x00000020)>>5)
#define PLB_WR(src)                              (((u32)(src)<<5) & 0x00000020)
#define PLB_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields TRACE	 */
#define TRACE_WIDTH                                                           1
#define TRACE_SHIFT                                                           4
#define TRACE_MASK                                                   0x00000010
#define TRACE_RD(src)                                 (((src) & 0x00000010)>>4)
#define TRACE_WR(src)                            (((u32)(src)<<4) & 0x00000010)
#define TRACE_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields PPC0_CORERST	 */
#define PPC0_CORERST_WIDTH                                                    1
#define PPC0_CORERST_SHIFT                                                    1
#define PPC0_CORERST_MASK                                            0x00000002
#define PPC0_CORERST_RD(src)                          (((src) & 0x00000002)>>1)
#define PPC0_CORERST_WR(src)                     (((u32)(src)<<1) & 0x00000002)
#define PPC0_CORERST_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))

/*	Register SCU_CLKEN	*/ 
/*	 Fields NDFC	 */
#define NDFC_F1_WIDTH                                                         1
#define NDFC_F1_SHIFT                                                        31
#define NDFC_F1_MASK                                                 0x80000000
#define NDFC_F1_RD(src)                              (((src) & 0x80000000)>>31)
#define NDFC_F1_WR(src)                         (((u32)(src)<<31) & 0x80000000)
#define NDFC_F1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields APB_PERI	 */
#define APB_PERI_F1_WIDTH                                                     1
#define APB_PERI_F1_SHIFT                                                    30
#define APB_PERI_F1_MASK                                             0x40000000
#define APB_PERI_F1_RD(src)                          (((src) & 0x40000000)>>30)
#define APB_PERI_F1_WR(src)                     (((u32)(src)<<30) & 0x40000000)
#define APB_PERI_F1_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields TDM	 */
#define TDM_F1_WIDTH                                                          1
#define TDM_F1_SHIFT                                                         29
#define TDM_F1_MASK                                                  0x20000000
#define TDM_F1_RD(src)                               (((src) & 0x20000000)>>29)
#define TDM_F1_WR(src)                          (((u32)(src)<<29) & 0x20000000)
#define TDM_F1_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields SATA0	 */
#define SATA0_F1_WIDTH                                                        1
#define SATA0_F1_SHIFT                                                       27
#define SATA0_F1_MASK                                                0x08000000
#define SATA0_F1_RD(src)                             (((src) & 0x08000000)>>27)
#define SATA0_F1_WR(src)                        (((u32)(src)<<27) & 0x08000000)
#define SATA0_F1_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields SATA1	 */
#define SATA1_F1_WIDTH                                                        1
#define SATA1_F1_SHIFT                                                       26
#define SATA1_F1_MASK                                                0x04000000
#define SATA1_F1_RD(src)                             (((src) & 0x04000000)>>26)
#define SATA1_F1_WR(src)                        (((u32)(src)<<26) & 0x04000000)
#define SATA1_F1_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields USB0	 */
#define USB0_F1_WIDTH                                                         1
#define USB0_F1_SHIFT                                                        25
#define USB0_F1_MASK                                                 0x02000000
#define USB0_F1_RD(src)                              (((src) & 0x02000000)>>25)
#define USB0_F1_WR(src)                         (((u32)(src)<<25) & 0x02000000)
#define USB0_F1_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields USB1	 */
#define USB1_F1_WIDTH                                                         1
#define USB1_F1_SHIFT                                                        24
#define USB1_F1_MASK                                                 0x01000000
#define USB1_F1_RD(src)                              (((src) & 0x01000000)>>24)
#define USB1_F1_WR(src)                         (((u32)(src)<<24) & 0x01000000)
#define USB1_F1_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields USB2	 */
#define USB2_F1_WIDTH                                                         1
#define USB2_F1_SHIFT                                                        23
#define USB2_F1_MASK                                                 0x00800000
#define USB2_F1_RD(src)                              (((src) & 0x00800000)>>23)
#define USB2_F1_WR(src)                         (((u32)(src)<<23) & 0x00800000)
#define USB2_F1_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields PCIE1	 */
#define PCIE1_F1_WIDTH                                                        1
#define PCIE1_F1_SHIFT                                                       22
#define PCIE1_F1_MASK                                                0x00400000
#define PCIE1_F1_RD(src)                             (((src) & 0x00400000)>>22)
#define PCIE1_F1_WR(src)                        (((u32)(src)<<22) & 0x00400000)
#define PCIE1_F1_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields PCIE2	 */
#define PCIE2_F1_WIDTH                                                        1
#define PCIE2_F1_SHIFT                                                       21
#define PCIE2_F1_MASK                                                0x00200000
#define PCIE2_F1_RD(src)                             (((src) & 0x00200000)>>21)
#define PCIE2_F1_WR(src)                        (((u32)(src)<<21) & 0x00200000)
#define PCIE2_F1_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields PCIE3	 */
#define PCIE3_F1_WIDTH                                                        1
#define PCIE3_F1_SHIFT                                                       20
#define PCIE3_F1_MASK                                                0x00100000
#define PCIE3_F1_RD(src)                             (((src) & 0x00100000)>>20)
#define PCIE3_F1_WR(src)                        (((u32)(src)<<20) & 0x00100000)
#define PCIE3_F1_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields ENET0	 */
#define ENET0_F1_WIDTH                                                        1
#define ENET0_F1_SHIFT                                                       19
#define ENET0_F1_MASK                                                0x00080000
#define ENET0_F1_RD(src)                             (((src) & 0x00080000)>>19)
#define ENET0_F1_WR(src)                        (((u32)(src)<<19) & 0x00080000)
#define ENET0_F1_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields ENET1	 */
#define ENET1_F1_WIDTH                                                        1
#define ENET1_F1_SHIFT                                                       18
#define ENET1_F1_MASK                                                0x00040000
#define ENET1_F1_RD(src)                             (((src) & 0x00040000)>>18)
#define ENET1_F1_WR(src)                        (((u32)(src)<<18) & 0x00040000)
#define ENET1_F1_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields SPI	 */
#define SPI_F1_WIDTH                                                          1
#define SPI_F1_SHIFT                                                         16
#define SPI_F1_MASK                                                  0x00010000
#define SPI_F1_RD(src)                               (((src) & 0x00010000)>>16)
#define SPI_F1_WR(src)                          (((u32)(src)<<16) & 0x00010000)
#define SPI_F1_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields SDIO	 */
#define SDIO_F1_WIDTH                                                         1
#define SDIO_F1_SHIFT                                                        15
#define SDIO_F1_MASK                                                 0x00008000
#define SDIO_F1_RD(src)                              (((src) & 0x00008000)>>15)
#define SDIO_F1_WR(src)                         (((u32)(src)<<15) & 0x00008000)
#define SDIO_F1_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields MEMC_AXI	 */
#define MEMC_AXI_WIDTH                                                        1
#define MEMC_AXI_SHIFT                                                       14
#define MEMC_AXI_MASK                                                0x00004000
#define MEMC_AXI_RD(src)                             (((src) & 0x00004000)>>14)
#define MEMC_AXI_WR(src)                        (((u32)(src)<<14) & 0x00004000)
#define MEMC_AXI_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))
/*	 Fields MEMC_PLB	 */
#define MEMC_PLB_WIDTH                                                        1
#define MEMC_PLB_SHIFT                                                       13
#define MEMC_PLB_MASK                                                0x00002000
#define MEMC_PLB_RD(src)                             (((src) & 0x00002000)>>13)
#define MEMC_PLB_WR(src)                        (((u32)(src)<<13) & 0x00002000)
#define MEMC_PLB_SET(dst,src) \
                      (((dst) & ~0x00002000) | (((u32)(src)<<13) & 0x00002000))
/*	 Fields MEMC_DDR	 */
#define MEMC_DDR_WIDTH                                                        1
#define MEMC_DDR_SHIFT                                                       12
#define MEMC_DDR_MASK                                                0x00001000
#define MEMC_DDR_RD(src)                             (((src) & 0x00001000)>>12)
#define MEMC_DDR_WR(src)                        (((u32)(src)<<12) & 0x00001000)
#define MEMC_DDR_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields OCM	 */
#define OCM_F1_WIDTH                                                          1
#define OCM_F1_SHIFT                                                         11
#define OCM_F1_MASK                                                  0x00000800
#define OCM_F1_RD(src)                               (((src) & 0x00000800)>>11)
#define OCM_F1_WR(src)                          (((u32)(src)<<11) & 0x00000800)
#define OCM_F1_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields PKTDMA	 */
#define PKTDMA_F1_WIDTH                                                       1
#define PKTDMA_F1_SHIFT                                                      10
#define PKTDMA_F1_MASK                                               0x00000400
#define PKTDMA_F1_RD(src)                            (((src) & 0x00000400)>>10)
#define PKTDMA_F1_WR(src)                       (((u32)(src)<<10) & 0x00000400)
#define PKTDMA_F1_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields QMTM	 */
#define QMTM_F1_WIDTH                                                         1
#define QMTM_F1_SHIFT                                                         9
#define QMTM_F1_MASK                                                 0x00000200
#define QMTM_F1_RD(src)                               (((src) & 0x00000200)>>9)
#define QMTM_F1_WR(src)                          (((u32)(src)<<9) & 0x00000200)
#define QMTM_F1_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields QMLite	 */
#define QMLITE_F1_WIDTH                                                       1
#define QMLITE_F1_SHIFT                                                       8
#define QMLITE_F1_MASK                                               0x00000100
#define QMLITE_F1_RD(src)                             (((src) & 0x00000100)>>8)
#define QMLITE_F1_WR(src)                        (((u32)(src)<<8) & 0x00000100)
#define QMLITE_F1_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields LCD	 */
#define LCD_F1_WIDTH                                                          1
#define LCD_F1_SHIFT                                                          6
#define LCD_F1_MASK                                                  0x00000040
#define LCD_F1_RD(src)                                (((src) & 0x00000040)>>6)
#define LCD_F1_WR(src)                           (((u32)(src)<<6) & 0x00000040)
#define LCD_F1_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields PLB	 */
#define PLB_F1_WIDTH                                                          1
#define PLB_F1_SHIFT                                                          5
#define PLB_F1_MASK                                                  0x00000020
#define PLB_F1_RD(src)                                (((src) & 0x00000020)>>5)
#define PLB_F1_WR(src)                           (((u32)(src)<<5) & 0x00000020)
#define PLB_F1_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields TRACE	 */
#define TRACE_F1_WIDTH                                                        1
#define TRACE_F1_SHIFT                                                        4
#define TRACE_F1_MASK                                                0x00000010
#define TRACE_F1_RD(src)                              (((src) & 0x00000010)>>4)
#define TRACE_F1_WR(src)                         (((u32)(src)<<4) & 0x00000010)
#define TRACE_F1_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))

/*	Register SCU_IPL_DONE	*/ 
/*	 Fields SCU_IPLDone	 */
#define SCU_IPLDONE_WIDTH                                                     1
#define SCU_IPLDONE_SHIFT                                                     0
#define SCU_IPLDONE_MASK                                             0x00000001
#define SCU_IPLDONE_RD(src)                              (((src) & 0x00000001))
#define SCU_IPLDONE_WR(src)                         (((u32)(src)) & 0x00000001)
#define SCU_IPLDONE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_STAT	*/ 
/*	 Fields TS_READY	 */
#define TS_READY_WIDTH                                                        1
#define TS_READY_SHIFT                                                       15
#define TS_READY_MASK                                                0x00008000
#define TS_READY_RD(src)                             (((src) & 0x00008000)>>15)
#define TS_READY_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields TS_TEMP	 */
#define TS_TEMP_WIDTH                                                         6
#define TS_TEMP_SHIFT                                                         8
#define TS_TEMP_MASK                                                 0x00003f00
#define TS_TEMP_RD(src)                               (((src) & 0x00003f00)>>8)
#define TS_TEMP_SET(dst,src) \
                       (((dst) & ~0x00003f00) | (((u32)(src)<<8) & 0x00003f00))
/*	 Fields IIC1_NO_DEV	 */
#define IIC1_NO_DEV_WIDTH                                                     1
#define IIC1_NO_DEV_SHIFT                                                     3
#define IIC1_NO_DEV_MASK                                             0x00000008
#define IIC1_NO_DEV_RD(src)                           (((src) & 0x00000008)>>3)
#define IIC1_NO_DEV_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields SMS_FAIL	 */
#define SMS_FAIL_WIDTH                                                        1
#define SMS_FAIL_SHIFT                                                        2
#define SMS_FAIL_MASK                                                0x00000004
#define SMS_FAIL_RD(src)                              (((src) & 0x00000004)>>2)
#define SMS_FAIL_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields SMS_DONE	 */
#define SMS_DONE_WIDTH                                                        1
#define SMS_DONE_SHIFT                                                        1
#define SMS_DONE_MASK                                                0x00000002
#define SMS_DONE_RD(src)                              (((src) & 0x00000002)>>1)
#define SMS_DONE_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields EFUSE_RD_SHIFT_DONE	 */
#define EFUSE_RD_SHIFT_DONE_WIDTH                                             1
#define EFUSE_RD_SHIFT_DONE_SHIFT                                             0
#define EFUSE_RD_SHIFT_DONE_MASK                                     0x00000001
#define EFUSE_RD_SHIFT_DONE_RD(src)                      (((src) & 0x00000001))
#define EFUSE_RD_SHIFT_DONE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_SOC_EFUSE	*/ 
/*	 Fields EFUSE0	 */
#define EFUSE0_WIDTH                                                         13
#define EFUSE0_SHIFT                                                         19
#define EFUSE0_MASK                                                  0xfff80000
#define EFUSE0_RD(src)                               (((src) & 0xfff80000)>>19)
#define EFUSE0_SET(dst,src) \
                      (((dst) & ~0xfff80000) | (((u32)(src)<<19) & 0xfff80000))
/*	 Fields SEC_DISABLE	 */
#define SEC_DISABLE_WIDTH                                                     1
#define SEC_DISABLE_SHIFT                                                    18
#define SEC_DISABLE_MASK                                             0x00040000
#define SEC_DISABLE_RD(src)                          (((src) & 0x00040000)>>18)
#define SEC_DISABLE_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields TPM_CFG	 */
#define TPM_CFG_WIDTH                                                         2
#define TPM_CFG_SHIFT                                                        16
#define TPM_CFG_MASK                                                 0x00030000
#define TPM_CFG_RD(src)                              (((src) & 0x00030000)>>16)
#define TPM_CFG_SET(dst,src) \
                      (((dst) & ~0x00030000) | (((u32)(src)<<16) & 0x00030000))
/*	 Fields EFUSE1	 */
#define EFUSE1_WIDTH                                                         12
#define EFUSE1_SHIFT                                                          4
#define EFUSE1_MASK                                                  0x0000fff0
#define EFUSE1_RD(src)                                (((src) & 0x0000fff0)>>4)
#define EFUSE1_SET(dst,src) \
                       (((dst) & ~0x0000fff0) | (((u32)(src)<<4) & 0x0000fff0))
/*	 Fields FPU1_DISABLE	 */
#define FPU1_DISABLE_WIDTH                                                    1
#define FPU1_DISABLE_SHIFT                                                    3
#define FPU1_DISABLE_MASK                                            0x00000008
#define FPU1_DISABLE_RD(src)                          (((src) & 0x00000008)>>3)
#define FPU1_DISABLE_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields FPU0_DISABLE	 */
#define FPU0_DISABLE_WIDTH                                                    1
#define FPU0_DISABLE_SHIFT                                                    2
#define FPU0_DISABLE_MASK                                            0x00000004
#define FPU0_DISABLE_RD(src)                          (((src) & 0x00000004)>>2)
#define FPU0_DISABLE_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields CPU1_DISABLE	 */
#define CPU1_DISABLE_WIDTH                                                    1
#define CPU1_DISABLE_SHIFT                                                    1
#define CPU1_DISABLE_MASK                                            0x00000002
#define CPU1_DISABLE_RD(src)                          (((src) & 0x00000002)>>1)
#define CPU1_DISABLE_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields CPU0_DISABLE	 */
#define CPU0_DISABLE_WIDTH                                                    1
#define CPU0_DISABLE_SHIFT                                                    0
#define CPU0_DISABLE_MASK                                            0x00000001
#define CPU0_DISABLE_RD(src)                             (((src) & 0x00000001))
#define CPU0_DISABLE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_PINSTRAP	*/ 
/*	 Fields BSC_DIS	 */
#define BSC_DIS_WIDTH                                                         1
#define BSC_DIS_SHIFT                                                        31
#define BSC_DIS_MASK                                                 0x80000000
#define BSC_DIS_RD(src)                              (((src) & 0x80000000)>>31)
#define BSC_DIS_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields ROM_TYP	 */
#define ROM_TYP_WIDTH                                                         3
#define ROM_TYP_SHIFT                                                        28
#define ROM_TYP_MASK                                                 0x70000000
#define ROM_TYP_RD(src)                              (((src) & 0x70000000)>>28)
#define ROM_TYP_SET(dst,src) \
                      (((dst) & ~0x70000000) | (((u32)(src)<<28) & 0x70000000))
/*	 Fields ROM_WIDTH	 */
#define ROM_WIDTH_WIDTH                                                       1
#define ROM_WIDTH_SHIFT                                                      27
#define ROM_WIDTH_MASK                                               0x08000000
#define ROM_WIDTH_RD(src)                            (((src) & 0x08000000)>>27)
#define ROM_WIDTH_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields IO_CLKCFG	 */
#define IO_CLKCFG_WIDTH                                                       2
#define IO_CLKCFG_SHIFT                                                      24
#define IO_CLKCFG_MASK                                               0x03000000
#define IO_CLKCFG_RD(src)                            (((src) & 0x03000000)>>24)
#define IO_CLKCFG_SET(dst,src) \
                      (((dst) & ~0x03000000) | (((u32)(src)<<24) & 0x03000000))
/*	 Fields CPU_CLKCFG	 */
#define CPU_CLKCFG_WIDTH                                                      3
#define CPU_CLKCFG_SHIFT                                                     20
#define CPU_CLKCFG_MASK                                              0x00700000
#define CPU_CLKCFG_RD(src)                           (((src) & 0x00700000)>>20)
#define CPU_CLKCFG_SET(dst,src) \
                      (((dst) & ~0x00700000) | (((u32)(src)<<20) & 0x00700000))
/*	 Fields MPA_IRAM_SIZE	 */
#define MPA_IRAM_SIZE_WIDTH                                                   2
#define MPA_IRAM_SIZE_SHIFT                                                  16
#define MPA_IRAM_SIZE_MASK                                           0x00030000
#define MPA_IRAM_SIZE_RD(src)                        (((src) & 0x00030000)>>16)
#define MPA_IRAM_SIZE_SET(dst,src) \
                      (((dst) & ~0x00030000) | (((u32)(src)<<16) & 0x00030000))
/*	 Fields MPA_IROM_1WS	 */
#define MPA_IROM_1WS_WIDTH                                                    1
#define MPA_IROM_1WS_SHIFT                                                   15
#define MPA_IROM_1WS_MASK                                            0x00008000
#define MPA_IROM_1WS_RD(src)                         (((src) & 0x00008000)>>15)
#define MPA_IROM_1WS_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields TEST_TPM_ENABLE	 */
#define TEST_TPM_ENABLE_WIDTH                                                 1
#define TEST_TPM_ENABLE_SHIFT                                                14
#define TEST_TPM_ENABLE_MASK                                         0x00004000
#define TEST_TPM_ENABLE_RD(src)                      (((src) & 0x00004000)>>14)
#define TEST_TPM_ENABLE_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))

/*	Register SCU_NFBOOT0	*/ 
/*	 Fields PGM_BOOTNOR_EN	 */
#define PGM_BOOTNOR_EN0_WIDTH                                                 1
#define PGM_BOOTNOR_EN0_SHIFT                                                31
#define PGM_BOOTNOR_EN0_MASK                                         0x80000000
#define PGM_BOOTNOR_EN0_RD(src)                      (((src) & 0x80000000)>>31)
#define PGM_BOOTNOR_EN0_WR(src)                 (((u32)(src)<<31) & 0x80000000)
#define PGM_BOOTNOR_EN0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields PGM_BOOTNAND_EN	 */
#define PGM_BOOTNAND_EN0_WIDTH                                                1
#define PGM_BOOTNAND_EN0_SHIFT                                               30
#define PGM_BOOTNAND_EN0_MASK                                        0x40000000
#define PGM_BOOTNAND_EN0_RD(src)                     (((src) & 0x40000000)>>30)
#define PGM_BOOTNAND_EN0_WR(src)                (((u32)(src)<<30) & 0x40000000)
#define PGM_BOOTNAND_EN0_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields PGM_BOOTNAND_WIDTH	 */
#define PGM_BOOTNAND_WIDTH0_WIDTH                                             1
#define PGM_BOOTNAND_WIDTH0_SHIFT                                            29
#define PGM_BOOTNAND_WIDTH0_MASK                                     0x20000000
#define PGM_BOOTNAND_WIDTH0_RD(src)                  (((src) & 0x20000000)>>29)
#define PGM_BOOTNAND_WIDTH0_WR(src)             (((u32)(src)<<29) & 0x20000000)
#define PGM_BOOTNAND_WIDTH0_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields PGM_BOOTNAND_ECC_ON	 */
#define PGM_BOOTNAND_ECC_ON0_WIDTH                                            1
#define PGM_BOOTNAND_ECC_ON0_SHIFT                                           28
#define PGM_BOOTNAND_ECC_ON0_MASK                                    0x10000000
#define PGM_BOOTNAND_ECC_ON0_RD(src)                 (((src) & 0x10000000)>>28)
#define PGM_BOOTNAND_ECC_ON0_WR(src)            (((u32)(src)<<28) & 0x10000000)
#define PGM_BOOTNAND_ECC_ON0_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields PGM_BOOTNAND_PAGE	 */
#define PGM_BOOTNAND_PAGE0_WIDTH                                              4
#define PGM_BOOTNAND_PAGE0_SHIFT                                             24
#define PGM_BOOTNAND_PAGE0_MASK                                      0x0f000000
#define PGM_BOOTNAND_PAGE0_RD(src)                   (((src) & 0x0f000000)>>24)
#define PGM_BOOTNAND_PAGE0_WR(src)              (((u32)(src)<<24) & 0x0f000000)
#define PGM_BOOTNAND_PAGE0_SET(dst,src) \
                      (((dst) & ~0x0f000000) | (((u32)(src)<<24) & 0x0f000000))
/*	 Fields PGM_BOOTNAND_ADDR_CYCLES	 */
#define PGM_BOOTNAND_ADDR_CYCLES0_WIDTH                                       2
#define PGM_BOOTNAND_ADDR_CYCLES0_SHIFT                                      22
#define PGM_BOOTNAND_ADDR_CYCLES0_MASK                               0x00c00000
#define PGM_BOOTNAND_ADDR_CYCLES0_RD(src)            (((src) & 0x00c00000)>>22)
#define PGM_BOOTNAND_ADDR_CYCLES0_WR(src)       (((u32)(src)<<22) & 0x00c00000)
#define PGM_BOOTNAND_ADDR_CYCLES0_SET(dst,src) \
                      (((dst) & ~0x00c00000) | (((u32)(src)<<22) & 0x00c00000))
/*	 Fields PGM_AUTOREAD_EN	 */
#define PGM_AUTOREAD_EN0_WIDTH                                                1
#define PGM_AUTOREAD_EN0_SHIFT                                               21
#define PGM_AUTOREAD_EN0_MASK                                        0x00200000
#define PGM_AUTOREAD_EN0_RD(src)                     (((src) & 0x00200000)>>21)
#define PGM_AUTOREAD_EN0_WR(src)                (((u32)(src)<<21) & 0x00200000)
#define PGM_AUTOREAD_EN0_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields PGM_RDYBSY_EN	 */
#define PGM_RDYBSY_EN0_WIDTH                                                  1
#define PGM_RDYBSY_EN0_SHIFT                                                 20
#define PGM_RDYBSY_EN0_MASK                                          0x00100000
#define PGM_RDYBSY_EN0_RD(src)                       (((src) & 0x00100000)>>20)
#define PGM_RDYBSY_EN0_WR(src)                  (((u32)(src)<<20) & 0x00100000)
#define PGM_RDYBSY_EN0_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields PGM_4K_PAGE_EN	 */
#define PGM_4K_PAGE_EN0_WIDTH                                                 1
#define PGM_4K_PAGE_EN0_SHIFT                                                19
#define PGM_4K_PAGE_EN0_MASK                                         0x00080000
#define PGM_4K_PAGE_EN0_RD(src)                      (((src) & 0x00080000)>>19)
#define PGM_4K_PAGE_EN0_WR(src)                 (((u32)(src)<<19) & 0x00080000)
#define PGM_4K_PAGE_EN0_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields PGM_ECC_DET_COR	 */
#define PGM_ECC_DET_COR0_WIDTH                                                1
#define PGM_ECC_DET_COR0_SHIFT                                               18
#define PGM_ECC_DET_COR0_MASK                                        0x00040000
#define PGM_ECC_DET_COR0_RD(src)                     (((src) & 0x00040000)>>18)
#define PGM_ECC_DET_COR0_WR(src)                (((u32)(src)<<18) & 0x00040000)
#define PGM_ECC_DET_COR0_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields PGM_NFLASH_SPARE_OFFSET	 */
#define PGM_NFLASH_SPARE_OFFSET0_WIDTH                                        8
#define PGM_NFLASH_SPARE_OFFSET0_SHIFT                                        8
#define PGM_NFLASH_SPARE_OFFSET0_MASK                                0x0000ff00
#define PGM_NFLASH_SPARE_OFFSET0_RD(src)              (((src) & 0x0000ff00)>>8)
#define PGM_NFLASH_SPARE_OFFSET0_WR(src)         (((u32)(src)<<8) & 0x0000ff00)
#define PGM_NFLASH_SPARE_OFFSET0_SET(dst,src) \
                       (((dst) & ~0x0000ff00) | (((u32)(src)<<8) & 0x0000ff00))

/*	Register SCU_NFBOOT1	*/ 
/*	 Fields PGM_DEV_RESET_CNT	 */
#define PGM_DEV_RESET_CNT1_WIDTH                                             16
#define PGM_DEV_RESET_CNT1_SHIFT                                             16
#define PGM_DEV_RESET_CNT1_MASK                                      0xffff0000
#define PGM_DEV_RESET_CNT1_RD(src)                   (((src) & 0xffff0000)>>16)
#define PGM_DEV_RESET_CNT1_WR(src)              (((u32)(src)<<16) & 0xffff0000)
#define PGM_DEV_RESET_CNT1_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields PGM_DEV_READ_CNT	 */
#define PGM_DEV_READ_CNT1_WIDTH                                              16
#define PGM_DEV_READ_CNT1_SHIFT                                               0
#define PGM_DEV_READ_CNT1_MASK                                       0x0000ffff
#define PGM_DEV_READ_CNT1_RD(src)                        (((src) & 0x0000ffff))
#define PGM_DEV_READ_CNT1_WR(src)                   (((u32)(src)) & 0x0000ffff)
#define PGM_DEV_READ_CNT1_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register SCU_EBCBOOT	*/ 
/*	 Fields EBCO_DCR_BTRM_WIDTH	 */
#define EBCO_DCR_BTRM_WIDTH_WIDTH                                             2
#define EBCO_DCR_BTRM_WIDTH_SHIFT                                            30
#define EBCO_DCR_BTRM_WIDTH_MASK                                     0xc0000000
#define EBCO_DCR_BTRM_WIDTH_RD(src)                  (((src) & 0xc0000000)>>30)
#define EBCO_DCR_BTRM_WIDTH_WR(src)             (((u32)(src)<<30) & 0xc0000000)
#define EBCO_DCR_BTRM_WIDTH_SET(dst,src) \
                      (((dst) & ~0xc0000000) | (((u32)(src)<<30) & 0xc0000000))
/*	 Fields EBCO_DCR_BTRM_BSIZE	 */
#define EBCO_DCR_BTRM_BSIZE_WIDTH                                             3
#define EBCO_DCR_BTRM_BSIZE_SHIFT                                            27
#define EBCO_DCR_BTRM_BSIZE_MASK                                     0x38000000
#define EBCO_DCR_BTRM_BSIZE_RD(src)                  (((src) & 0x38000000)>>27)
#define EBCO_DCR_BTRM_BSIZE_WR(src)             (((u32)(src)<<27) & 0x38000000)
#define EBCO_DCR_BTRM_BSIZE_SET(dst,src) \
                      (((dst) & ~0x38000000) | (((u32)(src)<<27) & 0x38000000))
/*	 Fields EBCO_DCR_BTRM_BU	 */
#define EBCO_DCR_BTRM_BU_WIDTH                                                2
#define EBCO_DCR_BTRM_BU_SHIFT                                               25
#define EBCO_DCR_BTRM_BU_MASK                                        0x06000000
#define EBCO_DCR_BTRM_BU_RD(src)                     (((src) & 0x06000000)>>25)
#define EBCO_DCR_BTRM_BU_WR(src)                (((u32)(src)<<25) & 0x06000000)
#define EBCO_DCR_BTRM_BU_SET(dst,src) \
                      (((dst) & ~0x06000000) | (((u32)(src)<<25) & 0x06000000))
/*	 Fields EBCO_DCR_BTRM_B0	 */
#define EBCO_DCR_BTRM_B0_WIDTH                                                1
#define EBCO_DCR_BTRM_B0_SHIFT                                               24
#define EBCO_DCR_BTRM_B0_MASK                                        0x01000000
#define EBCO_DCR_BTRM_B0_RD(src)                     (((src) & 0x01000000)>>24)
#define EBCO_DCR_BTRM_B0_WR(src)                (((u32)(src)<<24) & 0x01000000)
#define EBCO_DCR_BTRM_B0_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields EBCO_DCR_BTRM_BAS	 */
#define EBCO_DCR_BTRM_BAS_WIDTH                                              12
#define EBCO_DCR_BTRM_BAS_SHIFT                                               4
#define EBCO_DCR_BTRM_BAS_MASK                                       0x0000fff0
#define EBCO_DCR_BTRM_BAS_RD(src)                     (((src) & 0x0000fff0)>>4)
#define EBCO_DCR_BTRM_BAS_WR(src)                (((u32)(src)<<4) & 0x0000fff0)
#define EBCO_DCR_BTRM_BAS_SET(dst,src) \
                       (((dst) & ~0x0000fff0) | (((u32)(src)<<4) & 0x0000fff0))

/*	Register SCU_PPCBOOT	*/ 
/*	 Fields PPC1_BOOT_ADDR	 */
#define PPC1_BOOT_ADDR_WIDTH                                                  4
#define PPC1_BOOT_ADDR_SHIFT                                                  4
#define PPC1_BOOT_ADDR_MASK                                          0x000000f0
#define PPC1_BOOT_ADDR_RD(src)                        (((src) & 0x000000f0)>>4)
#define PPC1_BOOT_ADDR_WR(src)                   (((u32)(src)<<4) & 0x000000f0)
#define PPC1_BOOT_ADDR_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields PPC0_BOOT_ADDR	 */
#define PPC0_BOOT_ADDR_WIDTH                                                  4
#define PPC0_BOOT_ADDR_SHIFT                                                  0
#define PPC0_BOOT_ADDR_MASK                                          0x0000000f
#define PPC0_BOOT_ADDR_RD(src)                           (((src) & 0x0000000f))
#define PPC0_BOOT_ADDR_WR(src)                      (((u32)(src)) & 0x0000000f)
#define PPC0_BOOT_ADDR_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_PPCBOOTDEV	*/ 
/*	 Fields PPC_BOOT_DEV	 */
#define PPC_BOOT_DEV_WIDTH                                                    3
#define PPC_BOOT_DEV_SHIFT                                                    0
#define PPC_BOOT_DEV_MASK                                            0x00000007
#define PPC_BOOT_DEV_RD(src)                             (((src) & 0x00000007))
#define PPC_BOOT_DEV_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register SCU_SRST1	*/ 
/*	 Fields MPA	 */
#define MPA1_WIDTH                                                            1
#define MPA1_SHIFT                                                           31
#define MPA1_MASK                                                    0x80000000
#define MPA1_RD(src)                                 (((src) & 0x80000000)>>31)
#define MPA1_WR(src)                            (((u32)(src)<<31) & 0x80000000)
#define MPA1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields MPA_PKP	 */
#define MPA_PKP1_WIDTH                                                        1
#define MPA_PKP1_SHIFT                                                       30
#define MPA_PKP1_MASK                                                0x40000000
#define MPA_PKP1_RD(src)                             (((src) & 0x40000000)>>30)
#define MPA_PKP1_WR(src)                        (((u32)(src)<<30) & 0x40000000)
#define MPA_PKP1_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields MPA_CRDMA	 */
#define MPA_CRDMA1_WIDTH                                                      1
#define MPA_CRDMA1_SHIFT                                                     29
#define MPA_CRDMA1_MASK                                              0x20000000
#define MPA_CRDMA1_RD(src)                           (((src) & 0x20000000)>>29)
#define MPA_CRDMA1_WR(src)                      (((u32)(src)<<29) & 0x20000000)
#define MPA_CRDMA1_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields MPA_IIC1	 */
#define MPA_IIC11_WIDTH                                                       1
#define MPA_IIC11_SHIFT                                                      28
#define MPA_IIC11_MASK                                               0x10000000
#define MPA_IIC11_RD(src)                            (((src) & 0x10000000)>>28)
#define MPA_IIC11_WR(src)                       (((u32)(src)<<28) & 0x10000000)
#define MPA_IIC11_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields RTC	 */
#define RTC1_F2_WIDTH                                                         1
#define RTC1_F2_SHIFT                                                        27
#define RTC1_F2_MASK                                                 0x08000000
#define RTC1_F2_RD(src)                              (((src) & 0x08000000)>>27)
#define RTC1_F2_WR(src)                         (((u32)(src)<<27) & 0x08000000)
#define RTC1_F2_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields MPA_APB	 */
#define MPA_APB1_WIDTH                                                        1
#define MPA_APB1_SHIFT                                                       26
#define MPA_APB1_MASK                                                0x04000000
#define MPA_APB1_RD(src)                             (((src) & 0x04000000)>>26)
#define MPA_APB1_WR(src)                        (((u32)(src)<<26) & 0x04000000)
#define MPA_APB1_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields CLE0	 */
#define CLE01_WIDTH                                                           1
#define CLE01_SHIFT                                                          23
#define CLE01_MASK                                                   0x00800000
#define CLE01_RD(src)                                (((src) & 0x00800000)>>23)
#define CLE01_WR(src)                           (((u32)(src)<<23) & 0x00800000)
#define CLE01_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields CLE1	 */
#define CLE11_WIDTH                                                           1
#define CLE11_SHIFT                                                          22
#define CLE11_MASK                                                   0x00400000
#define CLE11_RD(src)                                (((src) & 0x00400000)>>22)
#define CLE11_WR(src)                           (((u32)(src)<<22) & 0x00400000)
#define CLE11_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields CLE_LA	 */
#define CLE_LA1_WIDTH                                                         1
#define CLE_LA1_SHIFT                                                        21
#define CLE_LA1_MASK                                                 0x00200000
#define CLE_LA1_RD(src)                              (((src) & 0x00200000)>>21)
#define CLE_LA1_WR(src)                         (((u32)(src)<<21) & 0x00200000)
#define CLE_LA1_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields SEC	 */
#define SEC1_WIDTH                                                            1
#define SEC1_SHIFT                                                           19
#define SEC1_MASK                                                    0x00080000
#define SEC1_RD(src)                                 (((src) & 0x00080000)>>19)
#define SEC1_WR(src)                            (((u32)(src)<<19) & 0x00080000)
#define SEC1_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields AXI_PP	 */
#define AXI_PP1_WIDTH                                                         1
#define AXI_PP1_SHIFT                                                         2
#define AXI_PP1_MASK                                                 0x00000004
#define AXI_PP1_RD(src)                               (((src) & 0x00000004)>>2)
#define AXI_PP1_WR(src)                          (((u32)(src)<<2) & 0x00000004)
#define AXI_PP1_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields AXI_DS	 */
#define AXI_DS1_WIDTH                                                         1
#define AXI_DS1_SHIFT                                                         1
#define AXI_DS1_MASK                                                 0x00000002
#define AXI_DS1_RD(src)                               (((src) & 0x00000002)>>1)
#define AXI_DS1_WR(src)                          (((u32)(src)<<1) & 0x00000002)
#define AXI_DS1_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields EXT_DS	 */
#define EXT_DS1_WIDTH                                                         1
#define EXT_DS1_SHIFT                                                         0
#define EXT_DS1_MASK                                                 0x00000001
#define EXT_DS1_RD(src)                                  (((src) & 0x00000001))
#define EXT_DS1_WR(src)                             (((u32)(src)) & 0x00000001)
#define EXT_DS1_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_CLKEN1	*/ 
/*	 Fields MPA	 */
#define MPA1_F1_WIDTH                                                         1
#define MPA1_F1_SHIFT                                                        31
#define MPA1_F1_MASK                                                 0x80000000
#define MPA1_F1_RD(src)                              (((src) & 0x80000000)>>31)
#define MPA1_F1_WR(src)                         (((u32)(src)<<31) & 0x80000000)
#define MPA1_F1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields MPA_PKP	 */
#define MPA_PKP1_F1_WIDTH                                                     1
#define MPA_PKP1_F1_SHIFT                                                    30
#define MPA_PKP1_F1_MASK                                             0x40000000
#define MPA_PKP1_F1_RD(src)                          (((src) & 0x40000000)>>30)
#define MPA_PKP1_F1_WR(src)                     (((u32)(src)<<30) & 0x40000000)
#define MPA_PKP1_F1_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields MPA_CRDMA	 */
#define MPA_CRDMA1_F1_WIDTH                                                   1
#define MPA_CRDMA1_F1_SHIFT                                                  29
#define MPA_CRDMA1_F1_MASK                                           0x20000000
#define MPA_CRDMA1_F1_RD(src)                        (((src) & 0x20000000)>>29)
#define MPA_CRDMA1_F1_WR(src)                   (((u32)(src)<<29) & 0x20000000)
#define MPA_CRDMA1_F1_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields CLE0_IL	 */
#define CLE0_IL1_WIDTH                                                        1
#define CLE0_IL1_SHIFT                                                       23
#define CLE0_IL1_MASK                                                0x00800000
#define CLE0_IL1_RD(src)                             (((src) & 0x00800000)>>23)
#define CLE0_IL1_WR(src)                        (((u32)(src)<<23) & 0x00800000)
#define CLE0_IL1_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields CLE1_IL	 */
#define CLE1_IL1_WIDTH                                                        1
#define CLE1_IL1_SHIFT                                                       22
#define CLE1_IL1_MASK                                                0x00400000
#define CLE1_IL1_RD(src)                             (((src) & 0x00400000)>>22)
#define CLE1_IL1_WR(src)                        (((u32)(src)<<22) & 0x00400000)
#define CLE1_IL1_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields CLE_LA	 */
#define CLE_LA1_F1_WIDTH                                                      1
#define CLE_LA1_F1_SHIFT                                                     21
#define CLE_LA1_F1_MASK                                              0x00200000
#define CLE_LA1_F1_RD(src)                           (((src) & 0x00200000)>>21)
#define CLE_LA1_F1_WR(src)                      (((u32)(src)<<21) & 0x00200000)
#define CLE_LA1_F1_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields CLE_SHIM	 */
#define CLE_SHIM1_WIDTH                                                       1
#define CLE_SHIM1_SHIFT                                                      20
#define CLE_SHIM1_MASK                                               0x00100000
#define CLE_SHIM1_RD(src)                            (((src) & 0x00100000)>>20)
#define CLE_SHIM1_WR(src)                       (((u32)(src)<<20) & 0x00100000)
#define CLE_SHIM1_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields SEC	 */
#define SEC1_F1_WIDTH                                                         1
#define SEC1_F1_SHIFT                                                        19
#define SEC1_F1_MASK                                                 0x00080000
#define SEC1_F1_RD(src)                              (((src) & 0x00080000)>>19)
#define SEC1_F1_WR(src)                         (((u32)(src)<<19) & 0x00080000)
#define SEC1_F1_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields SEC_EIP96	 */
#define SEC_EIP961_WIDTH                                                      1
#define SEC_EIP961_SHIFT                                                     18
#define SEC_EIP961_MASK                                              0x00040000
#define SEC_EIP961_RD(src)                           (((src) & 0x00040000)>>18)
#define SEC_EIP961_WR(src)                      (((u32)(src)<<18) & 0x00040000)
#define SEC_EIP961_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields SEC_SHIM	 */
#define SEC_SHIM1_WIDTH                                                       1
#define SEC_SHIM1_SHIFT                                                      17
#define SEC_SHIM1_MASK                                               0x00020000
#define SEC_SHIM1_RD(src)                            (((src) & 0x00020000)>>17)
#define SEC_SHIM1_WR(src)                       (((u32)(src)<<17) & 0x00020000)
#define SEC_SHIM1_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields SEC_XTS	 */
#define SEC_XTS1_WIDTH                                                        1
#define SEC_XTS1_SHIFT                                                       16
#define SEC_XTS1_MASK                                                0x00010000
#define SEC_XTS1_RD(src)                             (((src) & 0x00010000)>>16)
#define SEC_XTS1_WR(src)                        (((u32)(src)<<16) & 0x00010000)
#define SEC_XTS1_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields AXI_PP	 */
#define AXI_PP1_F1_WIDTH                                                      1
#define AXI_PP1_F1_SHIFT                                                      2
#define AXI_PP1_F1_MASK                                              0x00000004
#define AXI_PP1_F1_RD(src)                            (((src) & 0x00000004)>>2)
#define AXI_PP1_F1_WR(src)                       (((u32)(src)<<2) & 0x00000004)
#define AXI_PP1_F1_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields AXI_DS	 */
#define AXI_DS1_F1_WIDTH                                                      1
#define AXI_DS1_F1_SHIFT                                                      1
#define AXI_DS1_F1_MASK                                              0x00000002
#define AXI_DS1_F1_RD(src)                            (((src) & 0x00000002)>>1)
#define AXI_DS1_F1_WR(src)                       (((u32)(src)<<1) & 0x00000002)
#define AXI_DS1_F1_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))

/*	Register SCU_SOCPLL0	*/ 
/*	 Fields PWRDN	 */
#define PWRDN0_WIDTH                                                          1
#define PWRDN0_SHIFT                                                         31
#define PWRDN0_MASK                                                  0x80000000
#define PWRDN0_RD(src)                               (((src) & 0x80000000)>>31)
#define PWRDN0_WR(src)                          (((u32)(src)<<31) & 0x80000000)
#define PWRDN0_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields BYPASS	 */
#define BYPASS0_WIDTH                                                         1
#define BYPASS0_SHIFT                                                        30
#define BYPASS0_MASK                                                 0x40000000
#define BYPASS0_RD(src)                              (((src) & 0x40000000)>>30)
#define BYPASS0_WR(src)                         (((u32)(src)<<30) & 0x40000000)
#define BYPASS0_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields CLKR	 */
#define CLKR0_WIDTH                                                           6
#define CLKR0_SHIFT                                                          24
#define CLKR0_MASK                                                   0x3f000000
#define CLKR0_RD(src)                                (((src) & 0x3f000000)>>24)
#define CLKR0_WR(src)                           (((u32)(src)<<24) & 0x3f000000)
#define CLKR0_SET(dst,src) \
                      (((dst) & ~0x3f000000) | (((u32)(src)<<24) & 0x3f000000))
/*	 Fields CLKOD	 */
#define CLKOD0_WIDTH                                                          4
#define CLKOD0_SHIFT                                                         20
#define CLKOD0_MASK                                                  0x00f00000
#define CLKOD0_RD(src)                               (((src) & 0x00f00000)>>20)
#define CLKOD0_WR(src)                          (((u32)(src)<<20) & 0x00f00000)
#define CLKOD0_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields ENSAT	 */
#define ENSAT0_WIDTH                                                          1
#define ENSAT0_SHIFT                                                         19
#define ENSAT0_MASK                                                  0x00080000
#define ENSAT0_RD(src)                               (((src) & 0x00080000)>>19)
#define ENSAT0_WR(src)                          (((u32)(src)<<19) & 0x00080000)
#define ENSAT0_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields FASTEN	 */
#define FASTEN0_WIDTH                                                         1
#define FASTEN0_SHIFT                                                        18
#define FASTEN0_MASK                                                 0x00040000
#define FASTEN0_RD(src)                              (((src) & 0x00040000)>>18)
#define FASTEN0_WR(src)                         (((u32)(src)<<18) & 0x00040000)
#define FASTEN0_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields TEST	 */
#define TEST0_WIDTH                                                           1
#define TEST0_SHIFT                                                          17
#define TEST0_MASK                                                   0x00020000
#define TEST0_RD(src)                                (((src) & 0x00020000)>>17)
#define TEST0_WR(src)                           (((u32)(src)<<17) & 0x00020000)
#define TEST0_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields RESET	 */
#define RESET0_WIDTH                                                          1
#define RESET0_SHIFT                                                         16
#define RESET0_MASK                                                  0x00010000
#define RESET0_RD(src)                               (((src) & 0x00010000)>>16)
#define RESET0_WR(src)                          (((u32)(src)<<16) & 0x00010000)
#define RESET0_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields CLKF	 */
#define CLKF0_WIDTH                                                          13
#define CLKF0_SHIFT                                                           0
#define CLKF0_MASK                                                   0x00001fff
#define CLKF0_RD(src)                                    (((src) & 0x00001fff))
#define CLKF0_WR(src)                               (((u32)(src)) & 0x00001fff)
#define CLKF0_SET(dst,src) \
                          (((dst) & ~0x00001fff) | (((u32)(src)) & 0x00001fff))

/*	Register SCU_SOCPLL1	*/ 
/*	 Fields PWRDN	 */
#define PWRDN1_WIDTH                                                          1
#define PWRDN1_SHIFT                                                         31
#define PWRDN1_MASK                                                  0x80000000
#define PWRDN1_RD(src)                               (((src) & 0x80000000)>>31)
#define PWRDN1_WR(src)                          (((u32)(src)<<31) & 0x80000000)
#define PWRDN1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields BYPASS	 */
#define BYPASS1_WIDTH                                                         1
#define BYPASS1_SHIFT                                                        30
#define BYPASS1_MASK                                                 0x40000000
#define BYPASS1_RD(src)                              (((src) & 0x40000000)>>30)
#define BYPASS1_WR(src)                         (((u32)(src)<<30) & 0x40000000)
#define BYPASS1_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields CLKR	 */
#define CLKR1_WIDTH                                                           6
#define CLKR1_SHIFT                                                          24
#define CLKR1_MASK                                                   0x3f000000
#define CLKR1_RD(src)                                (((src) & 0x3f000000)>>24)
#define CLKR1_WR(src)                           (((u32)(src)<<24) & 0x3f000000)
#define CLKR1_SET(dst,src) \
                      (((dst) & ~0x3f000000) | (((u32)(src)<<24) & 0x3f000000))
/*	 Fields CLKOD	 */
#define CLKOD1_WIDTH                                                          4
#define CLKOD1_SHIFT                                                         20
#define CLKOD1_MASK                                                  0x00f00000
#define CLKOD1_RD(src)                               (((src) & 0x00f00000)>>20)
#define CLKOD1_WR(src)                          (((u32)(src)<<20) & 0x00f00000)
#define CLKOD1_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields ENSAT	 */
#define ENSAT1_WIDTH                                                          1
#define ENSAT1_SHIFT                                                         19
#define ENSAT1_MASK                                                  0x00080000
#define ENSAT1_RD(src)                               (((src) & 0x00080000)>>19)
#define ENSAT1_WR(src)                          (((u32)(src)<<19) & 0x00080000)
#define ENSAT1_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields FASTEN	 */
#define FASTEN1_WIDTH                                                         1
#define FASTEN1_SHIFT                                                        18
#define FASTEN1_MASK                                                 0x00040000
#define FASTEN1_RD(src)                              (((src) & 0x00040000)>>18)
#define FASTEN1_WR(src)                         (((u32)(src)<<18) & 0x00040000)
#define FASTEN1_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields TEST	 */
#define TEST1_WIDTH                                                           1
#define TEST1_SHIFT                                                          17
#define TEST1_MASK                                                   0x00020000
#define TEST1_RD(src)                                (((src) & 0x00020000)>>17)
#define TEST1_WR(src)                           (((u32)(src)<<17) & 0x00020000)
#define TEST1_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields RESET	 */
#define RESET1_WIDTH                                                          1
#define RESET1_SHIFT                                                         16
#define RESET1_MASK                                                  0x00010000
#define RESET1_RD(src)                               (((src) & 0x00010000)>>16)
#define RESET1_WR(src)                          (((u32)(src)<<16) & 0x00010000)
#define RESET1_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields CLKF	 */
#define CLKF1_WIDTH                                                          13
#define CLKF1_SHIFT                                                           0
#define CLKF1_MASK                                                   0x00001fff
#define CLKF1_RD(src)                                    (((src) & 0x00001fff))
#define CLKF1_WR(src)                               (((u32)(src)) & 0x00001fff)
#define CLKF1_SET(dst,src) \
                          (((dst) & ~0x00001fff) | (((u32)(src)) & 0x00001fff))

/*	Register SCU_SOCPLL2	*/ 
/*	 Fields PWRDN	 */
#define PWRDN2_WIDTH                                                          1
#define PWRDN2_SHIFT                                                         31
#define PWRDN2_MASK                                                  0x80000000
#define PWRDN2_RD(src)                               (((src) & 0x80000000)>>31)
#define PWRDN2_WR(src)                          (((u32)(src)<<31) & 0x80000000)
#define PWRDN2_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields BYPASS	 */
#define BYPASS2_WIDTH                                                         1
#define BYPASS2_SHIFT                                                        30
#define BYPASS2_MASK                                                 0x40000000
#define BYPASS2_RD(src)                              (((src) & 0x40000000)>>30)
#define BYPASS2_WR(src)                         (((u32)(src)<<30) & 0x40000000)
#define BYPASS2_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields CLKR	 */
#define CLKR2_WIDTH                                                           6
#define CLKR2_SHIFT                                                          24
#define CLKR2_MASK                                                   0x3f000000
#define CLKR2_RD(src)                                (((src) & 0x3f000000)>>24)
#define CLKR2_WR(src)                           (((u32)(src)<<24) & 0x3f000000)
#define CLKR2_SET(dst,src) \
                      (((dst) & ~0x3f000000) | (((u32)(src)<<24) & 0x3f000000))
/*	 Fields CLKOD	 */
#define CLKOD2_WIDTH                                                          4
#define CLKOD2_SHIFT                                                         20
#define CLKOD2_MASK                                                  0x00f00000
#define CLKOD2_RD(src)                               (((src) & 0x00f00000)>>20)
#define CLKOD2_WR(src)                          (((u32)(src)<<20) & 0x00f00000)
#define CLKOD2_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields ENSAT	 */
#define ENSAT2_WIDTH                                                          1
#define ENSAT2_SHIFT                                                         19
#define ENSAT2_MASK                                                  0x00080000
#define ENSAT2_RD(src)                               (((src) & 0x00080000)>>19)
#define ENSAT2_WR(src)                          (((u32)(src)<<19) & 0x00080000)
#define ENSAT2_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields FASTEN	 */
#define FASTEN2_WIDTH                                                         1
#define FASTEN2_SHIFT                                                        18
#define FASTEN2_MASK                                                 0x00040000
#define FASTEN2_RD(src)                              (((src) & 0x00040000)>>18)
#define FASTEN2_WR(src)                         (((u32)(src)<<18) & 0x00040000)
#define FASTEN2_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields TEST	 */
#define TEST2_WIDTH                                                           1
#define TEST2_SHIFT                                                          17
#define TEST2_MASK                                                   0x00020000
#define TEST2_RD(src)                                (((src) & 0x00020000)>>17)
#define TEST2_WR(src)                           (((u32)(src)<<17) & 0x00020000)
#define TEST2_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields RESET	 */
#define RESET2_WIDTH                                                          1
#define RESET2_SHIFT                                                         16
#define RESET2_MASK                                                  0x00010000
#define RESET2_RD(src)                               (((src) & 0x00010000)>>16)
#define RESET2_WR(src)                          (((u32)(src)<<16) & 0x00010000)
#define RESET2_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields CLKF	 */
#define CLKF2_WIDTH                                                          13
#define CLKF2_SHIFT                                                           0
#define CLKF2_MASK                                                   0x00001fff
#define CLKF2_RD(src)                                    (((src) & 0x00001fff))
#define CLKF2_WR(src)                               (((u32)(src)) & 0x00001fff)
#define CLKF2_SET(dst,src) \
                          (((dst) & ~0x00001fff) | (((u32)(src)) & 0x00001fff))

/*	Register SCU_SOCPLL3	*/ 
/*	 Fields PWRDN	 */
#define PWRDN3_WIDTH                                                          1
#define PWRDN3_SHIFT                                                         31
#define PWRDN3_MASK                                                  0x80000000
#define PWRDN3_RD(src)                               (((src) & 0x80000000)>>31)
#define PWRDN3_WR(src)                          (((u32)(src)<<31) & 0x80000000)
#define PWRDN3_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields BYPASS	 */
#define BYPASS3_WIDTH                                                         1
#define BYPASS3_SHIFT                                                        30
#define BYPASS3_MASK                                                 0x40000000
#define BYPASS3_RD(src)                              (((src) & 0x40000000)>>30)
#define BYPASS3_WR(src)                         (((u32)(src)<<30) & 0x40000000)
#define BYPASS3_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields CLKR	 */
#define CLKR3_WIDTH                                                           6
#define CLKR3_SHIFT                                                          24
#define CLKR3_MASK                                                   0x3f000000
#define CLKR3_RD(src)                                (((src) & 0x3f000000)>>24)
#define CLKR3_WR(src)                           (((u32)(src)<<24) & 0x3f000000)
#define CLKR3_SET(dst,src) \
                      (((dst) & ~0x3f000000) | (((u32)(src)<<24) & 0x3f000000))
/*	 Fields CLKOD	 */
#define CLKOD3_WIDTH                                                          4
#define CLKOD3_SHIFT                                                         20
#define CLKOD3_MASK                                                  0x00f00000
#define CLKOD3_RD(src)                               (((src) & 0x00f00000)>>20)
#define CLKOD3_WR(src)                          (((u32)(src)<<20) & 0x00f00000)
#define CLKOD3_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields ENSAT	 */
#define ENSAT3_WIDTH                                                          1
#define ENSAT3_SHIFT                                                         19
#define ENSAT3_MASK                                                  0x00080000
#define ENSAT3_RD(src)                               (((src) & 0x00080000)>>19)
#define ENSAT3_WR(src)                          (((u32)(src)<<19) & 0x00080000)
#define ENSAT3_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields FASTEN	 */
#define FASTEN3_WIDTH                                                         1
#define FASTEN3_SHIFT                                                        18
#define FASTEN3_MASK                                                 0x00040000
#define FASTEN3_RD(src)                              (((src) & 0x00040000)>>18)
#define FASTEN3_WR(src)                         (((u32)(src)<<18) & 0x00040000)
#define FASTEN3_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields TEST	 */
#define TEST3_WIDTH                                                           1
#define TEST3_SHIFT                                                          17
#define TEST3_MASK                                                   0x00020000
#define TEST3_RD(src)                                (((src) & 0x00020000)>>17)
#define TEST3_WR(src)                           (((u32)(src)<<17) & 0x00020000)
#define TEST3_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields RESET	 */
#define RESET3_WIDTH                                                          1
#define RESET3_SHIFT                                                         16
#define RESET3_MASK                                                  0x00010000
#define RESET3_RD(src)                               (((src) & 0x00010000)>>16)
#define RESET3_WR(src)                          (((u32)(src)<<16) & 0x00010000)
#define RESET3_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields CLKF	 */
#define CLKF3_WIDTH                                                          13
#define CLKF3_SHIFT                                                           0
#define CLKF3_MASK                                                   0x00001fff
#define CLKF3_RD(src)                                    (((src) & 0x00001fff))
#define CLKF3_WR(src)                               (((u32)(src)) & 0x00001fff)
#define CLKF3_SET(dst,src) \
                          (((dst) & ~0x00001fff) | (((u32)(src)) & 0x00001fff))

/*	Register SCU_SOCPLLADJ0	*/ 
/*	 Fields BWADJ	 */
#define BWADJ0_WIDTH                                                         12
#define BWADJ0_SHIFT                                                          0
#define BWADJ0_MASK                                                  0x00000fff
#define BWADJ0_RD(src)                                   (((src) & 0x00000fff))
#define BWADJ0_WR(src)                              (((u32)(src)) & 0x00000fff)
#define BWADJ0_SET(dst,src) \
                          (((dst) & ~0x00000fff) | (((u32)(src)) & 0x00000fff))

/*	Register SCU_SOCPLLADJ1	*/ 
/*	 Fields BWADJ	 */
#define BWADJ1_WIDTH                                                         12
#define BWADJ1_SHIFT                                                          0
#define BWADJ1_MASK                                                  0x00000fff
#define BWADJ1_RD(src)                                   (((src) & 0x00000fff))
#define BWADJ1_WR(src)                              (((u32)(src)) & 0x00000fff)
#define BWADJ1_SET(dst,src) \
                          (((dst) & ~0x00000fff) | (((u32)(src)) & 0x00000fff))

/*	Register SCU_SOCPLLADJ2	*/ 
/*	 Fields BWADJ	 */
#define BWADJ2_WIDTH                                                         12
#define BWADJ2_SHIFT                                                          0
#define BWADJ2_MASK                                                  0x00000fff
#define BWADJ2_RD(src)                                   (((src) & 0x00000fff))
#define BWADJ2_WR(src)                              (((u32)(src)) & 0x00000fff)
#define BWADJ2_SET(dst,src) \
                          (((dst) & ~0x00000fff) | (((u32)(src)) & 0x00000fff))

/*	Register SCU_SOCPLLADJ3	*/ 
/*	 Fields BWADJ	 */
#define BWADJ3_WIDTH                                                         12
#define BWADJ3_SHIFT                                                          0
#define BWADJ3_MASK                                                  0x00000fff
#define BWADJ3_RD(src)                                   (((src) & 0x00000fff))
#define BWADJ3_WR(src)                              (((u32)(src)) & 0x00000fff)
#define BWADJ3_SET(dst,src) \
                          (((dst) & ~0x00000fff) | (((u32)(src)) & 0x00000fff))

/*	Register SCU_SOCPLLSTAT	*/ 
/*	 Fields FBEN4	 */
#define FBEN4_WIDTH                                                           1
#define FBEN4_SHIFT                                                          27
#define FBEN4_MASK                                                   0x08000000
#define FBEN4_RD(src)                                (((src) & 0x08000000)>>27)
#define FBEN4_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields RFEN4	 */
#define RFEN4_WIDTH                                                           1
#define RFEN4_SHIFT                                                          26
#define RFEN4_MASK                                                   0x04000000
#define RFEN4_RD(src)                                (((src) & 0x04000000)>>26)
#define RFEN4_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields FBSLIP4	 */
#define FBSLIP4_WIDTH                                                         1
#define FBSLIP4_SHIFT                                                        25
#define FBSLIP4_MASK                                                 0x02000000
#define FBSLIP4_RD(src)                              (((src) & 0x02000000)>>25)
#define FBSLIP4_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields RFSLIP4	 */
#define RFSLIP4_WIDTH                                                         1
#define RFSLIP4_SHIFT                                                        24
#define RFSLIP4_MASK                                                 0x01000000
#define RFSLIP4_RD(src)                              (((src) & 0x01000000)>>24)
#define RFSLIP4_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields FBEN3	 */
#define FBEN3_WIDTH                                                           1
#define FBEN3_SHIFT                                                          23
#define FBEN3_MASK                                                   0x00800000
#define FBEN3_RD(src)                                (((src) & 0x00800000)>>23)
#define FBEN3_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields RFEN3	 */
#define RFEN3_WIDTH                                                           1
#define RFEN3_SHIFT                                                          22
#define RFEN3_MASK                                                   0x00400000
#define RFEN3_RD(src)                                (((src) & 0x00400000)>>22)
#define RFEN3_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields FBSLIP3	 */
#define FBSLIP3_WIDTH                                                         1
#define FBSLIP3_SHIFT                                                        21
#define FBSLIP3_MASK                                                 0x00200000
#define FBSLIP3_RD(src)                              (((src) & 0x00200000)>>21)
#define FBSLIP3_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields RFSLIP3	 */
#define RFSLIP3_WIDTH                                                         1
#define RFSLIP3_SHIFT                                                        20
#define RFSLIP3_MASK                                                 0x00100000
#define RFSLIP3_RD(src)                              (((src) & 0x00100000)>>20)
#define RFSLIP3_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields FBEN2	 */
#define FBEN2_WIDTH                                                           1
#define FBEN2_SHIFT                                                          19
#define FBEN2_MASK                                                   0x00080000
#define FBEN2_RD(src)                                (((src) & 0x00080000)>>19)
#define FBEN2_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields RFEN2	 */
#define RFEN2_WIDTH                                                           1
#define RFEN2_SHIFT                                                          18
#define RFEN2_MASK                                                   0x00040000
#define RFEN2_RD(src)                                (((src) & 0x00040000)>>18)
#define RFEN2_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields FBSLIP2	 */
#define FBSLIP2_WIDTH                                                         1
#define FBSLIP2_SHIFT                                                        17
#define FBSLIP2_MASK                                                 0x00020000
#define FBSLIP2_RD(src)                              (((src) & 0x00020000)>>17)
#define FBSLIP2_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields RFSLIP2	 */
#define RFSLIP2_WIDTH                                                         1
#define RFSLIP2_SHIFT                                                        16
#define RFSLIP2_MASK                                                 0x00010000
#define RFSLIP2_RD(src)                              (((src) & 0x00010000)>>16)
#define RFSLIP2_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields FBEN1	 */
#define FBEN1_WIDTH                                                           1
#define FBEN1_SHIFT                                                          15
#define FBEN1_MASK                                                   0x00008000
#define FBEN1_RD(src)                                (((src) & 0x00008000)>>15)
#define FBEN1_SET(dst,src) \
                      (((dst) & ~0x00008000) | (((u32)(src)<<15) & 0x00008000))
/*	 Fields RFEN1	 */
#define RFEN1_WIDTH                                                           1
#define RFEN1_SHIFT                                                          14
#define RFEN1_MASK                                                   0x00004000
#define RFEN1_RD(src)                                (((src) & 0x00004000)>>14)
#define RFEN1_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))
/*	 Fields FBSLIP1	 */
#define FBSLIP1_WIDTH                                                         1
#define FBSLIP1_SHIFT                                                        13
#define FBSLIP1_MASK                                                 0x00002000
#define FBSLIP1_RD(src)                              (((src) & 0x00002000)>>13)
#define FBSLIP1_SET(dst,src) \
                      (((dst) & ~0x00002000) | (((u32)(src)<<13) & 0x00002000))
/*	 Fields RFSLIP1	 */
#define RFSLIP1_WIDTH                                                         1
#define RFSLIP1_SHIFT                                                        12
#define RFSLIP1_MASK                                                 0x00001000
#define RFSLIP1_RD(src)                              (((src) & 0x00001000)>>12)
#define RFSLIP1_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields FBEN0	 */
#define FBEN0_WIDTH                                                           1
#define FBEN0_SHIFT                                                          11
#define FBEN0_MASK                                                   0x00000800
#define FBEN0_RD(src)                                (((src) & 0x00000800)>>11)
#define FBEN0_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields RFEN0	 */
#define RFEN0_WIDTH                                                           1
#define RFEN0_SHIFT                                                          10
#define RFEN0_MASK                                                   0x00000400
#define RFEN0_RD(src)                                (((src) & 0x00000400)>>10)
#define RFEN0_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields FBSLIP0	 */
#define FBSLIP0_WIDTH                                                         1
#define FBSLIP0_SHIFT                                                         9
#define FBSLIP0_MASK                                                 0x00000200
#define FBSLIP0_RD(src)                               (((src) & 0x00000200)>>9)
#define FBSLIP0_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields RFSLIP0	 */
#define RFSLIP0_WIDTH                                                         1
#define RFSLIP0_SHIFT                                                         8
#define RFSLIP0_MASK                                                 0x00000100
#define RFSLIP0_RD(src)                               (((src) & 0x00000100)>>8)
#define RFSLIP0_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields LOCK4	 */
#define LOCK4_WIDTH                                                           1
#define LOCK4_SHIFT                                                           4
#define LOCK4_MASK                                                   0x00000010
#define LOCK4_RD(src)                                 (((src) & 0x00000010)>>4)
#define LOCK4_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields LOCK3	 */
#define LOCK3_WIDTH                                                           1
#define LOCK3_SHIFT                                                           3
#define LOCK3_MASK                                                   0x00000008
#define LOCK3_RD(src)                                 (((src) & 0x00000008)>>3)
#define LOCK3_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields LOCK2	 */
#define LOCK2_WIDTH                                                           1
#define LOCK2_SHIFT                                                           2
#define LOCK2_MASK                                                   0x00000004
#define LOCK2_RD(src)                                 (((src) & 0x00000004)>>2)
#define LOCK2_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields LOCK1	 */
#define LOCK1_WIDTH                                                           1
#define LOCK1_SHIFT                                                           1
#define LOCK1_MASK                                                   0x00000002
#define LOCK1_RD(src)                                 (((src) & 0x00000002)>>1)
#define LOCK1_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields LOCK0	 */
#define LOCK0_WIDTH                                                           1
#define LOCK0_SHIFT                                                           0
#define LOCK0_MASK                                                   0x00000001
#define LOCK0_RD(src)                                    (((src) & 0x00000001))
#define LOCK0_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_PLLDLY	*/ 
/*	 Fields PllStartDelay	 */
#define PLLSTARTDELAY_WIDTH                                                  16
#define PLLSTARTDELAY_SHIFT                                                  16
#define PLLSTARTDELAY_MASK                                           0xffff0000
#define PLLSTARTDELAY_RD(src)                        (((src) & 0xffff0000)>>16)
#define PLLSTARTDELAY_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields PllLockDelay	 */
#define PLLLOCKDELAY_WIDTH                                                   16
#define PLLLOCKDELAY_SHIFT                                                    0
#define PLLLOCKDELAY_MASK                                            0x0000ffff
#define PLLLOCKDELAY_RD(src)                             (((src) & 0x0000ffff))
#define PLLLOCKDELAY_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register SCU_PPC0_RESUME_DS	*/ 
/*	 Fields PPC0_RESUME_DS	 */
#define PPC0_RESUME_DS_WIDTH                                                 32
#define PPC0_RESUME_DS_SHIFT                                                  0
#define PPC0_RESUME_DS_MASK                                          0xffffffff
#define PPC0_RESUME_DS_RD(src)                           (((src) & 0xffffffff))
#define PPC0_RESUME_DS_WR(src)                      (((u32)(src)) & 0xffffffff)
#define PPC0_RESUME_DS_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register SCU_PPC1_RESUME_DS	*/ 
/*	 Fields PPC1_RESUME_DS	 */
#define PPC1_RESUME_DS_WIDTH                                                 32
#define PPC1_RESUME_DS_SHIFT                                                  0
#define PPC1_RESUME_DS_MASK                                          0xffffffff
#define PPC1_RESUME_DS_RD(src)                           (((src) & 0xffffffff))
#define PPC1_RESUME_DS_WR(src)                      (((u32)(src)) & 0xffffffff)
#define PPC1_RESUME_DS_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register SCU_SOC_PWR_CTL	*/ 
/*	 Fields Tap1Ctl	 */
#define TAP1CTL_WIDTH                                                         1
#define TAP1CTL_SHIFT                                                         9
#define TAP1CTL_MASK                                                 0x00000200
#define TAP1CTL_RD(src)                               (((src) & 0x00000200)>>9)
#define TAP1CTL_WR(src)                          (((u32)(src)<<9) & 0x00000200)
#define TAP1CTL_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields Tap0Ctl	 */
#define TAP0CTL_WIDTH                                                         1
#define TAP0CTL_SHIFT                                                         8
#define TAP0CTL_MASK                                                 0x00000100
#define TAP0CTL_RD(src)                               (((src) & 0x00000100)>>8)
#define TAP0CTL_WR(src)                          (((u32)(src)<<8) & 0x00000100)
#define TAP0CTL_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields SOC1PwrOff	 */
#define SOC1PWROFF_WIDTH                                                      1
#define SOC1PWROFF_SHIFT                                                      7
#define SOC1PWROFF_MASK                                              0x00000080
#define SOC1PWROFF_RD(src)                            (((src) & 0x00000080)>>7)
#define SOC1PWROFF_WR(src)                       (((u32)(src)<<7) & 0x00000080)
#define SOC1PWROFF_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields SOC0PwrOff	 */
#define SOC0PWROFF_WIDTH                                                      1
#define SOC0PWROFF_SHIFT                                                      6
#define SOC0PWROFF_MASK                                              0x00000040
#define SOC0PWROFF_RD(src)                            (((src) & 0x00000040)>>6)
#define SOC0PWROFF_WR(src)                       (((u32)(src)<<6) & 0x00000040)
#define SOC0PWROFF_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields CPU1PwrOff	 */
#define CPU1PWROFF_WIDTH                                                      1
#define CPU1PWROFF_SHIFT                                                      5
#define CPU1PWROFF_MASK                                              0x00000020
#define CPU1PWROFF_RD(src)                            (((src) & 0x00000020)>>5)
#define CPU1PWROFF_WR(src)                       (((u32)(src)<<5) & 0x00000020)
#define CPU1PWROFF_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields CPU0PwrOff	 */
#define CPU0PWROFF_WIDTH                                                      1
#define CPU0PWROFF_SHIFT                                                      4
#define CPU0PWROFF_MASK                                              0x00000010
#define CPU0PWROFF_RD(src)                            (((src) & 0x00000010)>>4)
#define CPU0PWROFF_WR(src)                       (((u32)(src)<<4) & 0x00000010)
#define CPU0PWROFF_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields CPU1Isolate	 */
#define CPU1ISOLATE_WIDTH                                                     1
#define CPU1ISOLATE_SHIFT                                                     3
#define CPU1ISOLATE_MASK                                             0x00000008
#define CPU1ISOLATE_RD(src)                           (((src) & 0x00000008)>>3)
#define CPU1ISOLATE_WR(src)                      (((u32)(src)<<3) & 0x00000008)
#define CPU1ISOLATE_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields CPU0Isolate	 */
#define CPU0ISOLATE_WIDTH                                                     1
#define CPU0ISOLATE_SHIFT                                                     2
#define CPU0ISOLATE_MASK                                             0x00000004
#define CPU0ISOLATE_RD(src)                           (((src) & 0x00000004)>>2)
#define CPU0ISOLATE_WR(src)                      (((u32)(src)<<2) & 0x00000004)
#define CPU0ISOLATE_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields SOC1Isolate	 */
#define SOC1ISOLATE_WIDTH                                                     1
#define SOC1ISOLATE_SHIFT                                                     1
#define SOC1ISOLATE_MASK                                             0x00000002
#define SOC1ISOLATE_RD(src)                           (((src) & 0x00000002)>>1)
#define SOC1ISOLATE_WR(src)                      (((u32)(src)<<1) & 0x00000002)
#define SOC1ISOLATE_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields SOC0Isolate	 */
#define SOC0ISOLATE_WIDTH                                                     1
#define SOC0ISOLATE_SHIFT                                                     0
#define SOC0ISOLATE_MASK                                             0x00000001
#define SOC0ISOLATE_RD(src)                              (((src) & 0x00000001))
#define SOC0ISOLATE_WR(src)                         (((u32)(src)) & 0x00000001)
#define SOC0ISOLATE_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_SOC_PWR_STAT	*/ 
/*	 Fields SOC_PWR_SM_RDY	 */
#define SOC_PWR_SM_RDY_WIDTH                                                  1
#define SOC_PWR_SM_RDY_SHIFT                                                  0
#define SOC_PWR_SM_RDY_MASK                                          0x00000001
#define SOC_PWR_SM_RDY_RD(src)                           (((src) & 0x00000001))
#define SOC_PWR_SM_RDY_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_PWRGOOD	*/ 
/*	 Fields PWRGOOD	 */
#define PWRGOOD_WIDTH                                                         4
#define PWRGOOD_SHIFT                                                         0
#define PWRGOOD_MASK                                                 0x0000000f
#define PWRGOOD_RD(src)                                  (((src) & 0x0000000f))
#define PWRGOOD_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_PS_CTL	*/ 
/*	 Fields PS_CTL	 */
#define PS_CTL_WIDTH                                                          3
#define PS_CTL_SHIFT                                                          0
#define PS_CTL_MASK                                                  0x00000007
#define PS_CTL_RD(src)                                   (((src) & 0x00000007))
#define PS_CTL_WR(src)                              (((u32)(src)) & 0x00000007)
#define PS_CTL_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register SCU_ECID0	*/ 
/*	 Fields SYS_VER_UPPER	 */
#define SYS_VER_UPPER0_WIDTH                                                 16
#define SYS_VER_UPPER0_SHIFT                                                 16
#define SYS_VER_UPPER0_MASK                                          0xffff0000
#define SYS_VER_UPPER0_RD(src)                       (((src) & 0xffff0000)>>16)
#define SYS_VER_UPPER0_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))

/*	Register SCU_ECID1	*/ 
/*	 Fields SYS_VER_LOWER	 */
#define SYS_VER_LOWER1_WIDTH                                                 16
#define SYS_VER_LOWER1_SHIFT                                                 16
#define SYS_VER_LOWER1_MASK                                          0xffff0000
#define SYS_VER_LOWER1_RD(src)                       (((src) & 0xffff0000)>>16)
#define SYS_VER_LOWER1_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))

/*	Register SCU_ECID2	*/ 
/*	 Fields ECID2	 */
#define ECID22_WIDTH                                                         32
#define ECID22_SHIFT                                                          0
#define ECID22_MASK                                                  0xffffffff
#define ECID22_RD(src)                                   (((src) & 0xffffffff))
#define ECID22_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register SCU_ECID3	*/ 
/*	 Fields ECID3	 */
#define ECID33_WIDTH                                                         32
#define ECID33_SHIFT                                                          0
#define ECID33_MASK                                                  0xffffffff
#define ECID33_RD(src)                                   (((src) & 0xffffffff))
#define ECID33_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register SCU_RAMRWM0	*/ 
/*	 Fields RWMB_MPA_RD	 */
#define RWMB_MPA_RD0_WIDTH                                                    4
#define RWMB_MPA_RD0_SHIFT                                                   28
#define RWMB_MPA_RD0_MASK                                            0xf0000000
#define RWMB_MPA_RD0_RD(src)                         (((src) & 0xf0000000)>>28)
#define RWMB_MPA_RD0_WR(src)                    (((u32)(src)<<28) & 0xf0000000)
#define RWMB_MPA_RD0_SET(dst,src) \
                      (((dst) & ~0xf0000000) | (((u32)(src)<<28) & 0xf0000000))
/*	 Fields RWMB_MPA_RC	 */
#define RWMB_MPA_RC0_WIDTH                                                    4
#define RWMB_MPA_RC0_SHIFT                                                   24
#define RWMB_MPA_RC0_MASK                                            0x0f000000
#define RWMB_MPA_RC0_RD(src)                         (((src) & 0x0f000000)>>24)
#define RWMB_MPA_RC0_WR(src)                    (((u32)(src)<<24) & 0x0f000000)
#define RWMB_MPA_RC0_SET(dst,src) \
                      (((dst) & ~0x0f000000) | (((u32)(src)<<24) & 0x0f000000))
/*	 Fields RWMB_MPA_RB	 */
#define RWMB_MPA_RB0_WIDTH                                                    4
#define RWMB_MPA_RB0_SHIFT                                                   20
#define RWMB_MPA_RB0_MASK                                            0x00f00000
#define RWMB_MPA_RB0_RD(src)                         (((src) & 0x00f00000)>>20)
#define RWMB_MPA_RB0_WR(src)                    (((u32)(src)<<20) & 0x00f00000)
#define RWMB_MPA_RB0_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields RWMB_MPA_RA	 */
#define RWMB_MPA_RA0_WIDTH                                                    4
#define RWMB_MPA_RA0_SHIFT                                                   16
#define RWMB_MPA_RA0_MASK                                            0x000f0000
#define RWMB_MPA_RA0_RD(src)                         (((src) & 0x000f0000)>>16)
#define RWMB_MPA_RA0_WR(src)                    (((u32)(src)<<16) & 0x000f0000)
#define RWMB_MPA_RA0_SET(dst,src) \
                      (((dst) & ~0x000f0000) | (((u32)(src)<<16) & 0x000f0000))
/*	 Fields RWMA_MPA_RD	 */
#define RWMA_MPA_RD0_WIDTH                                                    4
#define RWMA_MPA_RD0_SHIFT                                                   12
#define RWMA_MPA_RD0_MASK                                            0x0000f000
#define RWMA_MPA_RD0_RD(src)                         (((src) & 0x0000f000)>>12)
#define RWMA_MPA_RD0_WR(src)                    (((u32)(src)<<12) & 0x0000f000)
#define RWMA_MPA_RD0_SET(dst,src) \
                      (((dst) & ~0x0000f000) | (((u32)(src)<<12) & 0x0000f000))
/*	 Fields RWMA_MPA_RC	 */
#define RWMA_MPA_RC0_WIDTH                                                    4
#define RWMA_MPA_RC0_SHIFT                                                    8
#define RWMA_MPA_RC0_MASK                                            0x00000f00
#define RWMA_MPA_RC0_RD(src)                          (((src) & 0x00000f00)>>8)
#define RWMA_MPA_RC0_WR(src)                     (((u32)(src)<<8) & 0x00000f00)
#define RWMA_MPA_RC0_SET(dst,src) \
                       (((dst) & ~0x00000f00) | (((u32)(src)<<8) & 0x00000f00))
/*	 Fields RWMA_MPA_RB	 */
#define RWMA_MPA_RB0_WIDTH                                                    4
#define RWMA_MPA_RB0_SHIFT                                                    4
#define RWMA_MPA_RB0_MASK                                            0x000000f0
#define RWMA_MPA_RB0_RD(src)                          (((src) & 0x000000f0)>>4)
#define RWMA_MPA_RB0_WR(src)                     (((u32)(src)<<4) & 0x000000f0)
#define RWMA_MPA_RB0_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields RWMA_MPA_RA	 */
#define RWMA_MPA_RA0_WIDTH                                                    4
#define RWMA_MPA_RA0_SHIFT                                                    0
#define RWMA_MPA_RA0_MASK                                            0x0000000f
#define RWMA_MPA_RA0_RD(src)                             (((src) & 0x0000000f))
#define RWMA_MPA_RA0_WR(src)                        (((u32)(src)) & 0x0000000f)
#define RWMA_MPA_RA0_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_RAMRWM1	*/ 
/*	 Fields RWMB_MPA_RD1	 */
#define RWMB_MPA_RD11_WIDTH                                                   4
#define RWMB_MPA_RD11_SHIFT                                                  28
#define RWMB_MPA_RD11_MASK                                           0xf0000000
#define RWMB_MPA_RD11_RD(src)                        (((src) & 0xf0000000)>>28)
#define RWMB_MPA_RD11_WR(src)                   (((u32)(src)<<28) & 0xf0000000)
#define RWMB_MPA_RD11_SET(dst,src) \
                      (((dst) & ~0xf0000000) | (((u32)(src)<<28) & 0xf0000000))
/*	 Fields RWMB_MPA_RC1	 */
#define RWMB_MPA_RC11_WIDTH                                                   4
#define RWMB_MPA_RC11_SHIFT                                                  24
#define RWMB_MPA_RC11_MASK                                           0x0f000000
#define RWMB_MPA_RC11_RD(src)                        (((src) & 0x0f000000)>>24)
#define RWMB_MPA_RC11_WR(src)                   (((u32)(src)<<24) & 0x0f000000)
#define RWMB_MPA_RC11_SET(dst,src) \
                      (((dst) & ~0x0f000000) | (((u32)(src)<<24) & 0x0f000000))
/*	 Fields RWMB_MPA_RB1	 */
#define RWMB_MPA_RB11_WIDTH                                                   4
#define RWMB_MPA_RB11_SHIFT                                                  20
#define RWMB_MPA_RB11_MASK                                           0x00f00000
#define RWMB_MPA_RB11_RD(src)                        (((src) & 0x00f00000)>>20)
#define RWMB_MPA_RB11_WR(src)                   (((u32)(src)<<20) & 0x00f00000)
#define RWMB_MPA_RB11_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields RWMB_MPA_RA1	 */
#define RWMB_MPA_RA11_WIDTH                                                   4
#define RWMB_MPA_RA11_SHIFT                                                  16
#define RWMB_MPA_RA11_MASK                                           0x000f0000
#define RWMB_MPA_RA11_RD(src)                        (((src) & 0x000f0000)>>16)
#define RWMB_MPA_RA11_WR(src)                   (((u32)(src)<<16) & 0x000f0000)
#define RWMB_MPA_RA11_SET(dst,src) \
                      (((dst) & ~0x000f0000) | (((u32)(src)<<16) & 0x000f0000))
/*	 Fields RWMA_MPA_RD1	 */
#define RWMA_MPA_RD11_WIDTH                                                   4
#define RWMA_MPA_RD11_SHIFT                                                  12
#define RWMA_MPA_RD11_MASK                                           0x0000f000
#define RWMA_MPA_RD11_RD(src)                        (((src) & 0x0000f000)>>12)
#define RWMA_MPA_RD11_WR(src)                   (((u32)(src)<<12) & 0x0000f000)
#define RWMA_MPA_RD11_SET(dst,src) \
                      (((dst) & ~0x0000f000) | (((u32)(src)<<12) & 0x0000f000))
/*	 Fields RWMA_MPA_RC1	 */
#define RWMA_MPA_RC11_WIDTH                                                   4
#define RWMA_MPA_RC11_SHIFT                                                   8
#define RWMA_MPA_RC11_MASK                                           0x00000f00
#define RWMA_MPA_RC11_RD(src)                         (((src) & 0x00000f00)>>8)
#define RWMA_MPA_RC11_WR(src)                    (((u32)(src)<<8) & 0x00000f00)
#define RWMA_MPA_RC11_SET(dst,src) \
                       (((dst) & ~0x00000f00) | (((u32)(src)<<8) & 0x00000f00))
/*	 Fields RWMA_MPA_RB1	 */
#define RWMA_MPA_RB11_WIDTH                                                   4
#define RWMA_MPA_RB11_SHIFT                                                   4
#define RWMA_MPA_RB11_MASK                                           0x000000f0
#define RWMA_MPA_RB11_RD(src)                         (((src) & 0x000000f0)>>4)
#define RWMA_MPA_RB11_WR(src)                    (((u32)(src)<<4) & 0x000000f0)
#define RWMA_MPA_RB11_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields RWMA_MPA_RA1	 */
#define RWMA_MPA_RA11_WIDTH                                                   4
#define RWMA_MPA_RA11_SHIFT                                                   0
#define RWMA_MPA_RA11_MASK                                           0x0000000f
#define RWMA_MPA_RA11_RD(src)                            (((src) & 0x0000000f))
#define RWMA_MPA_RA11_WR(src)                       (((u32)(src)) & 0x0000000f)
#define RWMA_MPA_RA11_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_RAMRWM2	*/ 
/*	 Fields RWMB_PKA_LNME	 */
#define RWMB_PKA_LNME2_WIDTH                                                  4
#define RWMB_PKA_LNME2_SHIFT                                                 20
#define RWMB_PKA_LNME2_MASK                                          0x00f00000
#define RWMB_PKA_LNME2_RD(src)                       (((src) & 0x00f00000)>>20)
#define RWMB_PKA_LNME2_WR(src)                  (((u32)(src)<<20) & 0x00f00000)
#define RWMB_PKA_LNME2_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields RWMB_PKA_R	 */
#define RWMB_PKA_R2_WIDTH                                                     4
#define RWMB_PKA_R2_SHIFT                                                    16
#define RWMB_PKA_R2_MASK                                             0x000f0000
#define RWMB_PKA_R2_RD(src)                          (((src) & 0x000f0000)>>16)
#define RWMB_PKA_R2_WR(src)                     (((u32)(src)<<16) & 0x000f0000)
#define RWMB_PKA_R2_SET(dst,src) \
                      (((dst) & ~0x000f0000) | (((u32)(src)<<16) & 0x000f0000))
/*	 Fields RWMB_PKA_PR	 */
#define RWMB_PKA_PR2_WIDTH                                                    4
#define RWMB_PKA_PR2_SHIFT                                                   12
#define RWMB_PKA_PR2_MASK                                            0x0000f000
#define RWMB_PKA_PR2_RD(src)                         (((src) & 0x0000f000)>>12)
#define RWMB_PKA_PR2_WR(src)                    (((u32)(src)<<12) & 0x0000f000)
#define RWMB_PKA_PR2_SET(dst,src) \
                      (((dst) & ~0x0000f000) | (((u32)(src)<<12) & 0x0000f000))
/*	 Fields RWMA_PKA_LNME	 */
#define RWMA_PKA_LNME2_WIDTH                                                  4
#define RWMA_PKA_LNME2_SHIFT                                                  8
#define RWMA_PKA_LNME2_MASK                                          0x00000f00
#define RWMA_PKA_LNME2_RD(src)                        (((src) & 0x00000f00)>>8)
#define RWMA_PKA_LNME2_WR(src)                   (((u32)(src)<<8) & 0x00000f00)
#define RWMA_PKA_LNME2_SET(dst,src) \
                       (((dst) & ~0x00000f00) | (((u32)(src)<<8) & 0x00000f00))
/*	 Fields RWMA_PKA_R	 */
#define RWMA_PKA_R2_WIDTH                                                     4
#define RWMA_PKA_R2_SHIFT                                                     4
#define RWMA_PKA_R2_MASK                                             0x000000f0
#define RWMA_PKA_R2_RD(src)                           (((src) & 0x000000f0)>>4)
#define RWMA_PKA_R2_WR(src)                      (((u32)(src)<<4) & 0x000000f0)
#define RWMA_PKA_R2_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields RWMA_PKA_PR	 */
#define RWMA_PKA_PR2_WIDTH                                                    4
#define RWMA_PKA_PR2_SHIFT                                                    0
#define RWMA_PKA_PR2_MASK                                            0x0000000f
#define RWMA_PKA_PR2_RD(src)                             (((src) & 0x0000000f))
#define RWMA_PKA_PR2_WR(src)                        (((u32)(src)) & 0x0000000f)
#define RWMA_PKA_PR2_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_RAMRWM3	*/ 
/*	 Fields TEST_DMA	 */
#define TEST_DMA3_WIDTH                                                       4
#define TEST_DMA3_SHIFT                                                       8
#define TEST_DMA3_MASK                                               0x00000f00
#define TEST_DMA3_RD(src)                             (((src) & 0x00000f00)>>8)
#define TEST_DMA3_WR(src)                        (((u32)(src)<<8) & 0x00000f00)
#define TEST_DMA3_SET(dst,src) \
                       (((dst) & ~0x00000f00) | (((u32)(src)<<8) & 0x00000f00))
/*	 Fields RWMB_DMA	 */
#define RWMB_DMA3_WIDTH                                                       4
#define RWMB_DMA3_SHIFT                                                       4
#define RWMB_DMA3_MASK                                               0x000000f0
#define RWMB_DMA3_RD(src)                             (((src) & 0x000000f0)>>4)
#define RWMB_DMA3_WR(src)                        (((u32)(src)<<4) & 0x000000f0)
#define RWMB_DMA3_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields RWMA_DMA	 */
#define RWMA_DMA3_WIDTH                                                       4
#define RWMA_DMA3_SHIFT                                                       0
#define RWMA_DMA3_MASK                                               0x0000000f
#define RWMA_DMA3_RD(src)                                (((src) & 0x0000000f))
#define RWMA_DMA3_WR(src)                           (((u32)(src)) & 0x0000000f)
#define RWMA_DMA3_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_ROMRM	*/ 
/*	 Fields RM_MPA_ROMB	 */
#define RM_MPA_ROMB_WIDTH                                                     4
#define RM_MPA_ROMB_SHIFT                                                     4
#define RM_MPA_ROMB_MASK                                             0x000000f0
#define RM_MPA_ROMB_RD(src)                           (((src) & 0x000000f0)>>4)
#define RM_MPA_ROMB_WR(src)                      (((u32)(src)<<4) & 0x000000f0)
#define RM_MPA_ROMB_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields RM_MPA_ROMA	 */
#define RM_MPA_ROMA_WIDTH                                                     4
#define RM_MPA_ROMA_SHIFT                                                     0
#define RM_MPA_ROMA_MASK                                             0x0000000f
#define RM_MPA_ROMA_RD(src)                              (((src) & 0x0000000f))
#define RM_MPA_ROMA_WR(src)                         (((u32)(src)) & 0x0000000f)
#define RM_MPA_ROMA_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_RAMTEST0	*/ 
/*	 Fields TEST_PKA_LNME	 */
#define TEST_PKA_LNME0_WIDTH                                                  4
#define TEST_PKA_LNME0_SHIFT                                                 24
#define TEST_PKA_LNME0_MASK                                          0x0f000000
#define TEST_PKA_LNME0_RD(src)                       (((src) & 0x0f000000)>>24)
#define TEST_PKA_LNME0_WR(src)                  (((u32)(src)<<24) & 0x0f000000)
#define TEST_PKA_LNME0_SET(dst,src) \
                      (((dst) & ~0x0f000000) | (((u32)(src)<<24) & 0x0f000000))
/*	 Fields TEST_PKA_R	 */
#define TEST_PKA_R0_WIDTH                                                     4
#define TEST_PKA_R0_SHIFT                                                    20
#define TEST_PKA_R0_MASK                                             0x00f00000
#define TEST_PKA_R0_RD(src)                          (((src) & 0x00f00000)>>20)
#define TEST_PKA_R0_WR(src)                     (((u32)(src)<<20) & 0x00f00000)
#define TEST_PKA_R0_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields TEST_PKA_PR	 */
#define TEST_PKA_PR0_WIDTH                                                    4
#define TEST_PKA_PR0_SHIFT                                                   16
#define TEST_PKA_PR0_MASK                                            0x000f0000
#define TEST_PKA_PR0_RD(src)                         (((src) & 0x000f0000)>>16)
#define TEST_PKA_PR0_WR(src)                    (((u32)(src)<<16) & 0x000f0000)
#define TEST_PKA_PR0_SET(dst,src) \
                      (((dst) & ~0x000f0000) | (((u32)(src)<<16) & 0x000f0000))
/*	 Fields TEST_MPA_RD	 */
#define TEST_MPA_RD0_WIDTH                                                    4
#define TEST_MPA_RD0_SHIFT                                                   12
#define TEST_MPA_RD0_MASK                                            0x0000f000
#define TEST_MPA_RD0_RD(src)                         (((src) & 0x0000f000)>>12)
#define TEST_MPA_RD0_WR(src)                    (((u32)(src)<<12) & 0x0000f000)
#define TEST_MPA_RD0_SET(dst,src) \
                      (((dst) & ~0x0000f000) | (((u32)(src)<<12) & 0x0000f000))
/*	 Fields TEST_MPA_RC	 */
#define TEST_MPA_RC0_WIDTH                                                    4
#define TEST_MPA_RC0_SHIFT                                                    8
#define TEST_MPA_RC0_MASK                                            0x00000f00
#define TEST_MPA_RC0_RD(src)                          (((src) & 0x00000f00)>>8)
#define TEST_MPA_RC0_WR(src)                     (((u32)(src)<<8) & 0x00000f00)
#define TEST_MPA_RC0_SET(dst,src) \
                       (((dst) & ~0x00000f00) | (((u32)(src)<<8) & 0x00000f00))
/*	 Fields TEST_MPA_RB	 */
#define TEST_MPA_RB0_WIDTH                                                    4
#define TEST_MPA_RB0_SHIFT                                                    4
#define TEST_MPA_RB0_MASK                                            0x000000f0
#define TEST_MPA_RB0_RD(src)                          (((src) & 0x000000f0)>>4)
#define TEST_MPA_RB0_WR(src)                     (((u32)(src)<<4) & 0x000000f0)
#define TEST_MPA_RB0_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields TEST_MPA_RA	 */
#define TEST_MPA_RA0_WIDTH                                                    4
#define TEST_MPA_RA0_SHIFT                                                    0
#define TEST_MPA_RA0_MASK                                            0x0000000f
#define TEST_MPA_RA0_RD(src)                             (((src) & 0x0000000f))
#define TEST_MPA_RA0_WR(src)                        (((u32)(src)) & 0x0000000f)
#define TEST_MPA_RA0_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_RAMTEST1	*/ 
/*	 Fields TEST_ROMB	 */
#define TEST_ROMB1_WIDTH                                                      4
#define TEST_ROMB1_SHIFT                                                     28
#define TEST_ROMB1_MASK                                              0xf0000000
#define TEST_ROMB1_RD(src)                           (((src) & 0xf0000000)>>28)
#define TEST_ROMB1_WR(src)                      (((u32)(src)<<28) & 0xf0000000)
#define TEST_ROMB1_SET(dst,src) \
                      (((dst) & ~0xf0000000) | (((u32)(src)<<28) & 0xf0000000))
/*	 Fields TEST_ROMA	 */
#define TEST_ROMA1_WIDTH                                                      4
#define TEST_ROMA1_SHIFT                                                     24
#define TEST_ROMA1_MASK                                              0x0f000000
#define TEST_ROMA1_RD(src)                           (((src) & 0x0f000000)>>24)
#define TEST_ROMA1_WR(src)                      (((u32)(src)<<24) & 0x0f000000)
#define TEST_ROMA1_SET(dst,src) \
                      (((dst) & ~0x0f000000) | (((u32)(src)<<24) & 0x0f000000))
/*	 Fields TEST_MPA_RD1	 */
#define TEST_MPA_RD11_WIDTH                                                   4
#define TEST_MPA_RD11_SHIFT                                                  12
#define TEST_MPA_RD11_MASK                                           0x0000f000
#define TEST_MPA_RD11_RD(src)                        (((src) & 0x0000f000)>>12)
#define TEST_MPA_RD11_WR(src)                   (((u32)(src)<<12) & 0x0000f000)
#define TEST_MPA_RD11_SET(dst,src) \
                      (((dst) & ~0x0000f000) | (((u32)(src)<<12) & 0x0000f000))
/*	 Fields TEST_MPA_RC1	 */
#define TEST_MPA_RC11_WIDTH                                                   4
#define TEST_MPA_RC11_SHIFT                                                   8
#define TEST_MPA_RC11_MASK                                           0x00000f00
#define TEST_MPA_RC11_RD(src)                         (((src) & 0x00000f00)>>8)
#define TEST_MPA_RC11_WR(src)                    (((u32)(src)<<8) & 0x00000f00)
#define TEST_MPA_RC11_SET(dst,src) \
                       (((dst) & ~0x00000f00) | (((u32)(src)<<8) & 0x00000f00))
/*	 Fields TEST_MPA_RB1	 */
#define TEST_MPA_RB11_WIDTH                                                   4
#define TEST_MPA_RB11_SHIFT                                                   4
#define TEST_MPA_RB11_MASK                                           0x000000f0
#define TEST_MPA_RB11_RD(src)                         (((src) & 0x000000f0)>>4)
#define TEST_MPA_RB11_WR(src)                    (((u32)(src)<<4) & 0x000000f0)
#define TEST_MPA_RB11_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields TEST_MPA_RA1	 */
#define TEST_MPA_RA11_WIDTH                                                   4
#define TEST_MPA_RA11_SHIFT                                                   0
#define TEST_MPA_RA11_MASK                                           0x0000000f
#define TEST_MPA_RA11_RD(src)                            (((src) & 0x0000000f))
#define TEST_MPA_RA11_WR(src)                       (((u32)(src)) & 0x0000000f)
#define TEST_MPA_RA11_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register SCU_MRDY	*/ 
/*	 Fields AHBC	 */
#define AHBC_WIDTH                                                            1
#define AHBC_SHIFT                                                           31
#define AHBC_MASK                                                    0x80000000
#define AHBC_RD(src)                                 (((src) & 0x80000000)>>31)
#define AHBC_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields MPIC	 */
#define MPIC_F1_WIDTH                                                         1
#define MPIC_F1_SHIFT                                                        28
#define MPIC_F1_MASK                                                 0x10000000
#define MPIC_F1_RD(src)                              (((src) & 0x10000000)>>28)
#define MPIC_F1_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields SATA0	 */
#define SATA0_F2_WIDTH                                                        1
#define SATA0_F2_SHIFT                                                       27
#define SATA0_F2_MASK                                                0x08000000
#define SATA0_F2_RD(src)                             (((src) & 0x08000000)>>27)
#define SATA0_F2_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields SATA1	 */
#define SATA1_F2_WIDTH                                                        1
#define SATA1_F2_SHIFT                                                       26
#define SATA1_F2_MASK                                                0x04000000
#define SATA1_F2_RD(src)                             (((src) & 0x04000000)>>26)
#define SATA1_F2_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields PCIE1	 */
#define PCIE1_F2_WIDTH                                                        1
#define PCIE1_F2_SHIFT                                                       22
#define PCIE1_F2_MASK                                                0x00400000
#define PCIE1_F2_RD(src)                             (((src) & 0x00400000)>>22)
#define PCIE1_F2_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields PCIE2	 */
#define PCIE2_F2_WIDTH                                                        1
#define PCIE2_F2_SHIFT                                                       21
#define PCIE2_F2_MASK                                                0x00200000
#define PCIE2_F2_RD(src)                             (((src) & 0x00200000)>>21)
#define PCIE2_F2_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields PCIE3	 */
#define PCIE3_F2_WIDTH                                                        1
#define PCIE3_F2_SHIFT                                                       20
#define PCIE3_F2_MASK                                                0x00100000
#define PCIE3_F2_RD(src)                             (((src) & 0x00100000)>>20)
#define PCIE3_F2_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields ENET0	 */
#define ENET0_F2_WIDTH                                                        1
#define ENET0_F2_SHIFT                                                       19
#define ENET0_F2_MASK                                                0x00080000
#define ENET0_F2_RD(src)                             (((src) & 0x00080000)>>19)
#define ENET0_F2_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields SEC_EIP96	 */
#define SEC_EIP96_WIDTH                                                       1
#define SEC_EIP96_SHIFT                                                      17
#define SEC_EIP96_MASK                                               0x00020000
#define SEC_EIP96_RD(src)                            (((src) & 0x00020000)>>17)
#define SEC_EIP96_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields MEMC	 */
#define MEMC_F1_WIDTH                                                         1
#define MEMC_F1_SHIFT                                                        14
#define MEMC_F1_MASK                                                 0x00004000
#define MEMC_F1_RD(src)                              (((src) & 0x00004000)>>14)
#define MEMC_F1_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))
/*	 Fields OCM	 */
#define OCM_F2_WIDTH                                                          1
#define OCM_F2_SHIFT                                                         11
#define OCM_F2_MASK                                                  0x00000800
#define OCM_F2_RD(src)                               (((src) & 0x00000800)>>11)
#define OCM_F2_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields QMTM	 */
#define QMTM_F2_WIDTH                                                         1
#define QMTM_F2_SHIFT                                                         9
#define QMTM_F2_MASK                                                 0x00000200
#define QMTM_F2_RD(src)                               (((src) & 0x00000200)>>9)
#define QMTM_F2_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields CLE	 */
#define CLE_WIDTH                                                             1
#define CLE_SHIFT                                                             7
#define CLE_MASK                                                     0x00000080
#define CLE_RD(src)                                   (((src) & 0x00000080)>>7)
#define CLE_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields MPA	 */
#define MPA_WIDTH                                                             1
#define MPA_SHIFT                                                             0
#define MPA_MASK                                                     0x00000001
#define MPA_RD(src)                                      (((src) & 0x00000001))
#define MPA_SET(dst,src) (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register SCU_SOC_TS_CTL	*/ 
/*	 Fields START	 */
#define START_WIDTH                                                           1
#define START_SHIFT                                                          31
#define START_MASK                                                   0x80000000
#define START_RD(src)                                (((src) & 0x80000000)>>31)
#define START_WR(src)                           (((u32)(src)<<31) & 0x80000000)
#define START_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))

/*	Register SCU_SOC_TDR_CTL	*/ 
/*	 Fields GLBL_TDR	 */
#define GLBL_TDR_WIDTH                                                        8
#define GLBL_TDR_SHIFT                                                        0
#define GLBL_TDR_MASK                                                0x000000ff
#define GLBL_TDR_RD(src)                                 (((src) & 0x000000ff))
#define GLBL_TDR_WR(src)                            (((u32)(src)) & 0x000000ff)
#define GLBL_TDR_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register SCU_SOCDIV	*/ 
/*	 Fields IO_AXI_CLK_FREQ_SEL	 */
#define IO_AXI_CLK_FREQ_SEL_WIDTH                                             5
#define IO_AXI_CLK_FREQ_SEL_SHIFT                                            24
#define IO_AXI_CLK_FREQ_SEL_MASK                                     0x1f000000
#define IO_AXI_CLK_FREQ_SEL_RD(src)                  (((src) & 0x1f000000)>>24)
#define IO_AXI_CLK_FREQ_SEL_WR(src)             (((u32)(src)<<24) & 0x1f000000)
#define IO_AXI_CLK_FREQ_SEL_SET(dst,src) \
                      (((dst) & ~0x1f000000) | (((u32)(src)<<24) & 0x1f000000))
/*	 Fields AHB_CLK_FREQ_SEL	 */
#define AHB_CLK_FREQ_SEL_WIDTH                                                5
#define AHB_CLK_FREQ_SEL_SHIFT                                               16
#define AHB_CLK_FREQ_SEL_MASK                                        0x001f0000
#define AHB_CLK_FREQ_SEL_RD(src)                     (((src) & 0x001f0000)>>16)
#define AHB_CLK_FREQ_SEL_WR(src)                (((u32)(src)<<16) & 0x001f0000)
#define AHB_CLK_FREQ_SEL_SET(dst,src) \
                      (((dst) & ~0x001f0000) | (((u32)(src)<<16) & 0x001f0000))
/*	 Fields APB_CLK_FREQ_SEL	 */
#define APB_CLK_FREQ_SEL_WIDTH                                                5
#define APB_CLK_FREQ_SEL_SHIFT                                                8
#define APB_CLK_FREQ_SEL_MASK                                        0x00001f00
#define APB_CLK_FREQ_SEL_RD(src)                      (((src) & 0x00001f00)>>8)
#define APB_CLK_FREQ_SEL_WR(src)                 (((u32)(src)<<8) & 0x00001f00)
#define APB_CLK_FREQ_SEL_SET(dst,src) \
                       (((dst) & ~0x00001f00) | (((u32)(src)<<8) & 0x00001f00))
/*	 Fields IEEE1588_CLK_PTP_ON_CHIP_FREQ_SEL	 */
#define IEEE1588_CLK_PTP_ON_CHIP_FREQ_SEL_WIDTH                               5
#define IEEE1588_CLK_PTP_ON_CHIP_FREQ_SEL_SHIFT                               0
#define IEEE1588_CLK_PTP_ON_CHIP_FREQ_SEL_MASK                       0x0000001f
#define IEEE1588_CLK_PTP_ON_CHIP_FREQ_SEL_RD(src)        (((src) & 0x0000001f))
#define IEEE1588_CLK_PTP_ON_CHIP_FREQ_SEL_WR(src)   (((u32)(src)) & 0x0000001f)
#define IEEE1588_CLK_PTP_ON_CHIP_FREQ_SEL_SET(dst,src) \
                          (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register SCU_SOCDIV1	*/ 
/*	 Fields LCD_SER_FREQ_SEL	 */
#define LCD_SER_FREQ_SEL1_WIDTH                                               8
#define LCD_SER_FREQ_SEL1_SHIFT                                              24
#define LCD_SER_FREQ_SEL1_MASK                                       0xff000000
#define LCD_SER_FREQ_SEL1_RD(src)                    (((src) & 0xff000000)>>24)
#define LCD_SER_FREQ_SEL1_WR(src)               (((u32)(src)<<24) & 0xff000000)
#define LCD_SER_FREQ_SEL1_SET(dst,src) \
                      (((dst) & ~0xff000000) | (((u32)(src)<<24) & 0xff000000))
/*	 Fields PCIE_CLK_FREQ_SEL	 */
#define PCIE_CLK_FREQ_SEL1_WIDTH                                              5
#define PCIE_CLK_FREQ_SEL1_SHIFT                                             16
#define PCIE_CLK_FREQ_SEL1_MASK                                      0x001f0000
#define PCIE_CLK_FREQ_SEL1_RD(src)                   (((src) & 0x001f0000)>>16)
#define PCIE_CLK_FREQ_SEL1_WR(src)              (((u32)(src)<<16) & 0x001f0000)
#define PCIE_CLK_FREQ_SEL1_SET(dst,src) \
                      (((dst) & ~0x001f0000) | (((u32)(src)<<16) & 0x001f0000))
/*	 Fields DDR2X_CLK_FREQ_SEL	 */
#define DDR2X_CLK_FREQ_SEL1_WIDTH                                             5
#define DDR2X_CLK_FREQ_SEL1_SHIFT                                             8
#define DDR2X_CLK_FREQ_SEL1_MASK                                     0x00001f00
#define DDR2X_CLK_FREQ_SEL1_RD(src)                   (((src) & 0x00001f00)>>8)
#define DDR2X_CLK_FREQ_SEL1_WR(src)              (((u32)(src)<<8) & 0x00001f00)
#define DDR2X_CLK_FREQ_SEL1_SET(dst,src) \
                       (((dst) & ~0x00001f00) | (((u32)(src)<<8) & 0x00001f00))
/*	 Fields LCD_CLK_FREQ_SEL	 */
#define LCD_CLK_FREQ_SEL1_WIDTH                                               8
#define LCD_CLK_FREQ_SEL1_SHIFT                                               0
#define LCD_CLK_FREQ_SEL1_MASK                                       0x000000ff
#define LCD_CLK_FREQ_SEL1_RD(src)                        (((src) & 0x000000ff))
#define LCD_CLK_FREQ_SEL1_WR(src)                   (((u32)(src)) & 0x000000ff)
#define LCD_CLK_FREQ_SEL1_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register SCU_SOCDIV2	*/ 
/*	 Fields SEC_CRYPTO_FREQ_SEL	 */
#define SEC_CRYPTO_FREQ_SEL2_WIDTH                                            5
#define SEC_CRYPTO_FREQ_SEL2_SHIFT                                           24
#define SEC_CRYPTO_FREQ_SEL2_MASK                                    0x1f000000
#define SEC_CRYPTO_FREQ_SEL2_RD(src)                 (((src) & 0x1f000000)>>24)
#define SEC_CRYPTO_FREQ_SEL2_WR(src)            (((u32)(src)<<24) & 0x1f000000)
#define SEC_CRYPTO_FREQ_SEL2_SET(dst,src) \
                      (((dst) & ~0x1f000000) | (((u32)(src)<<24) & 0x1f000000))
/*	 Fields ARM_TRCLKIN_FREQ_SEL	 */
#define ARM_TRCLKIN_FREQ_SEL2_WIDTH                                           5
#define ARM_TRCLKIN_FREQ_SEL2_SHIFT                                          16
#define ARM_TRCLKIN_FREQ_SEL2_MASK                                   0x001f0000
#define ARM_TRCLKIN_FREQ_SEL2_RD(src)                (((src) & 0x001f0000)>>16)
#define ARM_TRCLKIN_FREQ_SEL2_WR(src)           (((u32)(src)<<16) & 0x001f0000)
#define ARM_TRCLKIN_FREQ_SEL2_SET(dst,src) \
                      (((dst) & ~0x001f0000) | (((u32)(src)<<16) & 0x001f0000))
/*	 Fields DDR_PHY_IO_CAL_FREQ_SEL	 */
#define DDR_PHY_IO_CAL_FREQ_SEL2_WIDTH                                        5
#define DDR_PHY_IO_CAL_FREQ_SEL2_SHIFT                                        8
#define DDR_PHY_IO_CAL_FREQ_SEL2_MASK                                0x00001f00
#define DDR_PHY_IO_CAL_FREQ_SEL2_RD(src)              (((src) & 0x00001f00)>>8)
#define DDR_PHY_IO_CAL_FREQ_SEL2_WR(src)         (((u32)(src)<<8) & 0x00001f00)
#define DDR_PHY_IO_CAL_FREQ_SEL2_SET(dst,src) \
                       (((dst) & ~0x00001f00) | (((u32)(src)<<8) & 0x00001f00))
/*	 Fields MPA_AHB_CLK_FREQ_SEL	 */
#define MPA_AHB_CLK_FREQ_SEL2_WIDTH                                           5
#define MPA_AHB_CLK_FREQ_SEL2_SHIFT                                           0
#define MPA_AHB_CLK_FREQ_SEL2_MASK                                   0x0000001f
#define MPA_AHB_CLK_FREQ_SEL2_RD(src)                    (((src) & 0x0000001f))
#define MPA_AHB_CLK_FREQ_SEL2_WR(src)               (((u32)(src)) & 0x0000001f)
#define MPA_AHB_CLK_FREQ_SEL2_SET(dst,src) \
                          (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register SCU_SOCDIV3	*/ 
/*	 Fields ETHREF_MUX_SEL	 */
#define ETHREF_MUX_SEL3_WIDTH                                                 1
#define ETHREF_MUX_SEL3_SHIFT                                                31
#define ETHREF_MUX_SEL3_MASK                                         0x80000000
#define ETHREF_MUX_SEL3_RD(src)                      (((src) & 0x80000000)>>31)
#define ETHREF_MUX_SEL3_WR(src)                 (((u32)(src)<<31) & 0x80000000)
#define ETHREF_MUX_SEL3_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields LCD_PLL_MUX_SEL	 */
#define LCD_PLL_MUX_SEL3_WIDTH                                                1
#define LCD_PLL_MUX_SEL3_SHIFT                                               29
#define LCD_PLL_MUX_SEL3_MASK                                        0x20000000
#define LCD_PLL_MUX_SEL3_RD(src)                     (((src) & 0x20000000)>>29)
#define LCD_PLL_MUX_SEL3_WR(src)                (((u32)(src)<<29) & 0x20000000)
#define LCD_PLL_MUX_SEL3_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields IICCLK_MUX_SEL	 */
#define IICCLK_MUX_SEL3_WIDTH                                                 1
#define IICCLK_MUX_SEL3_SHIFT                                                28
#define IICCLK_MUX_SEL3_MASK                                         0x10000000
#define IICCLK_MUX_SEL3_RD(src)                      (((src) & 0x10000000)>>28)
#define IICCLK_MUX_SEL3_WR(src)                 (((u32)(src)<<28) & 0x10000000)
#define IICCLK_MUX_SEL3_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields SOC_STRK_CLKMON_SEL	 */
#define SOC_STRK_CLKMON_SEL3_WIDTH                                            1
#define SOC_STRK_CLKMON_SEL3_SHIFT                                           27
#define SOC_STRK_CLKMON_SEL3_MASK                                    0x08000000
#define SOC_STRK_CLKMON_SEL3_RD(src)                 (((src) & 0x08000000)>>27)
#define SOC_STRK_CLKMON_SEL3_WR(src)            (((u32)(src)<<27) & 0x08000000)
#define SOC_STRK_CLKMON_SEL3_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields STRK_CLKMON_SEL	 */
#define STRK_CLKMON_SEL3_WIDTH                                                3
#define STRK_CLKMON_SEL3_SHIFT                                               24
#define STRK_CLKMON_SEL3_MASK                                        0x07000000
#define STRK_CLKMON_SEL3_RD(src)                     (((src) & 0x07000000)>>24)
#define STRK_CLKMON_SEL3_WR(src)                (((u32)(src)<<24) & 0x07000000)
#define STRK_CLKMON_SEL3_SET(dst,src) \
                      (((dst) & ~0x07000000) | (((u32)(src)<<24) & 0x07000000))
/*	 Fields STRK_BYPASSDIV	 */
#define STRK_BYPASSDIV3_WIDTH                                                 1
#define STRK_BYPASSDIV3_SHIFT                                                23
#define STRK_BYPASSDIV3_MASK                                         0x00800000
#define STRK_BYPASSDIV3_RD(src)                      (((src) & 0x00800000)>>23)
#define STRK_BYPASSDIV3_WR(src)                 (((u32)(src)<<23) & 0x00800000)
#define STRK_BYPASSDIV3_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields SOC_TRC_MUX_SEL	 */
#define SOC_TRC_MUX_SEL3_WIDTH                                                1
#define SOC_TRC_MUX_SEL3_SHIFT                                               22
#define SOC_TRC_MUX_SEL3_MASK                                        0x00400000
#define SOC_TRC_MUX_SEL3_RD(src)                     (((src) & 0x00400000)>>22)
#define SOC_TRC_MUX_SEL3_WR(src)                (((u32)(src)<<22) & 0x00400000)
#define SOC_TRC_MUX_SEL3_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))

/*	Register SCU_SOCDIV4	*/ 
/*	 Fields RGMII1_CLK_FREQ_SEL	 */
#define RGMII1_CLK_FREQ_SEL4_WIDTH                                            9
#define RGMII1_CLK_FREQ_SEL4_SHIFT                                           16
#define RGMII1_CLK_FREQ_SEL4_MASK                                    0x01ff0000
#define RGMII1_CLK_FREQ_SEL4_RD(src)                 (((src) & 0x01ff0000)>>16)
#define RGMII1_CLK_FREQ_SEL4_WR(src)            (((u32)(src)<<16) & 0x01ff0000)
#define RGMII1_CLK_FREQ_SEL4_SET(dst,src) \
                      (((dst) & ~0x01ff0000) | (((u32)(src)<<16) & 0x01ff0000))
/*	 Fields RGMII0_CLK_FREQ_SEL	 */
#define RGMII0_CLK_FREQ_SEL4_WIDTH                                            9
#define RGMII0_CLK_FREQ_SEL4_SHIFT                                            0
#define RGMII0_CLK_FREQ_SEL4_MASK                                    0x000001ff
#define RGMII0_CLK_FREQ_SEL4_RD(src)                     (((src) & 0x000001ff))
#define RGMII0_CLK_FREQ_SEL4_WR(src)                (((u32)(src)) & 0x000001ff)
#define RGMII0_CLK_FREQ_SEL4_SET(dst,src) \
                          (((dst) & ~0x000001ff) | (((u32)(src)) & 0x000001ff))

/*	Register SCU_SOCDIV5	*/ 
/*	 Fields EBUS_CLK_FREQ_SEL	 */
#define EBUS_CLK_FREQ_SEL5_WIDTH                                              8
#define EBUS_CLK_FREQ_SEL5_SHIFT                                             24
#define EBUS_CLK_FREQ_SEL5_MASK                                      0xff000000
#define EBUS_CLK_FREQ_SEL5_RD(src)                   (((src) & 0xff000000)>>24)
#define EBUS_CLK_FREQ_SEL5_WR(src)              (((u32)(src)<<24) & 0xff000000)
#define EBUS_CLK_FREQ_SEL5_SET(dst,src) \
                      (((dst) & ~0xff000000) | (((u32)(src)<<24) & 0xff000000))
/*	 Fields SDIO_CLK_FREQ_SEL	 */
#define SDIO_CLK_FREQ_SEL5_WIDTH                                              8
#define SDIO_CLK_FREQ_SEL5_SHIFT                                             16
#define SDIO_CLK_FREQ_SEL5_MASK                                      0x00ff0000
#define SDIO_CLK_FREQ_SEL5_RD(src)                   (((src) & 0x00ff0000)>>16)
#define SDIO_CLK_FREQ_SEL5_WR(src)              (((u32)(src)<<16) & 0x00ff0000)
#define SDIO_CLK_FREQ_SEL5_SET(dst,src) \
                      (((dst) & ~0x00ff0000) | (((u32)(src)<<16) & 0x00ff0000))
/*	 Fields SOC_TRACE_CLK_FREQ_SEL	 */
#define SOC_TRACE_CLK_FREQ_SEL5_WIDTH                                         9
#define SOC_TRACE_CLK_FREQ_SEL5_SHIFT                                         0
#define SOC_TRACE_CLK_FREQ_SEL5_MASK                                 0x000001ff
#define SOC_TRACE_CLK_FREQ_SEL5_RD(src)                  (((src) & 0x000001ff))
#define SOC_TRACE_CLK_FREQ_SEL5_WR(src)             (((u32)(src)) & 0x000001ff)
#define SOC_TRACE_CLK_FREQ_SEL5_SET(dst,src) \
                          (((dst) & ~0x000001ff) | (((u32)(src)) & 0x000001ff))

/*	Register SCU_SOC_SMS_CTL	*/ 
/*	 Fields START	 */
#define START_F1_WIDTH                                                        1
#define START_F1_SHIFT                                                       31
#define START_F1_MASK                                                0x80000000
#define START_F1_RD(src)                             (((src) & 0x80000000)>>31)
#define START_F1_WR(src)                        (((u32)(src)<<31) & 0x80000000)
#define START_F1_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields SMS	 */
#define SMS_WIDTH                                                             8
#define SMS_SHIFT                                                             0
#define SMS_MASK                                                     0x000000ff
#define SMS_RD(src)                                      (((src) & 0x000000ff))
#define SMS_WR(src)                                 (((u32)(src)) & 0x000000ff)
#define SMS_SET(dst,src) (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register SCU_CSR_SRST	*/ 
/*	 Fields AHBC	 */
#define AHBC_F1_WIDTH                                                         1
#define AHBC_F1_SHIFT                                                        30
#define AHBC_F1_MASK                                                 0x40000000
#define AHBC_F1_RD(src)                              (((src) & 0x40000000)>>30)
#define AHBC_F1_WR(src)                         (((u32)(src)<<30) & 0x40000000)
#define AHBC_F1_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields TDM	 */
#define TDM_F2_WIDTH                                                          1
#define TDM_F2_SHIFT                                                         29
#define TDM_F2_MASK                                                  0x20000000
#define TDM_F2_RD(src)                               (((src) & 0x20000000)>>29)
#define TDM_F2_WR(src)                          (((u32)(src)<<29) & 0x20000000)
#define TDM_F2_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields MPIC	 */
#define MPIC_F2_WIDTH                                                         1
#define MPIC_F2_SHIFT                                                        28
#define MPIC_F2_MASK                                                 0x10000000
#define MPIC_F2_RD(src)                              (((src) & 0x10000000)>>28)
#define MPIC_F2_WR(src)                         (((u32)(src)<<28) & 0x10000000)
#define MPIC_F2_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields SATA0	 */
#define SATA0_F3_WIDTH                                                        1
#define SATA0_F3_SHIFT                                                       27
#define SATA0_F3_MASK                                                0x08000000
#define SATA0_F3_RD(src)                             (((src) & 0x08000000)>>27)
#define SATA0_F3_WR(src)                        (((u32)(src)<<27) & 0x08000000)
#define SATA0_F3_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields SATA1	 */
#define SATA1_F3_WIDTH                                                        1
#define SATA1_F3_SHIFT                                                       26
#define SATA1_F3_MASK                                                0x04000000
#define SATA1_F3_RD(src)                             (((src) & 0x04000000)>>26)
#define SATA1_F3_WR(src)                        (((u32)(src)<<26) & 0x04000000)
#define SATA1_F3_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields PCIE1	 */
#define PCIE1_F3_WIDTH                                                        1
#define PCIE1_F3_SHIFT                                                       22
#define PCIE1_F3_MASK                                                0x00400000
#define PCIE1_F3_RD(src)                             (((src) & 0x00400000)>>22)
#define PCIE1_F3_WR(src)                        (((u32)(src)<<22) & 0x00400000)
#define PCIE1_F3_SET(dst,src) \
                      (((dst) & ~0x00400000) | (((u32)(src)<<22) & 0x00400000))
/*	 Fields PCIE2	 */
#define PCIE2_F3_WIDTH                                                        1
#define PCIE2_F3_SHIFT                                                       21
#define PCIE2_F3_MASK                                                0x00200000
#define PCIE2_F3_RD(src)                             (((src) & 0x00200000)>>21)
#define PCIE2_F3_WR(src)                        (((u32)(src)<<21) & 0x00200000)
#define PCIE2_F3_SET(dst,src) \
                      (((dst) & ~0x00200000) | (((u32)(src)<<21) & 0x00200000))
/*	 Fields PCIE3	 */
#define PCIE3_F3_WIDTH                                                        1
#define PCIE3_F3_SHIFT                                                       20
#define PCIE3_F3_MASK                                                0x00100000
#define PCIE3_F3_RD(src)                             (((src) & 0x00100000)>>20)
#define PCIE3_F3_WR(src)                        (((u32)(src)<<20) & 0x00100000)
#define PCIE3_F3_SET(dst,src) \
                      (((dst) & ~0x00100000) | (((u32)(src)<<20) & 0x00100000))
/*	 Fields ENET0	 */
#define ENET0_F3_WIDTH                                                        1
#define ENET0_F3_SHIFT                                                       19
#define ENET0_F3_MASK                                                0x00080000
#define ENET0_F3_RD(src)                             (((src) & 0x00080000)>>19)
#define ENET0_F3_WR(src)                        (((u32)(src)<<19) & 0x00080000)
#define ENET0_F3_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields ENET1	 */
#define ENET1_F2_WIDTH                                                        1
#define ENET1_F2_SHIFT                                                       18
#define ENET1_F2_MASK                                                0x00040000
#define ENET1_F2_RD(src)                             (((src) & 0x00040000)>>18)
#define ENET1_F2_WR(src)                        (((u32)(src)<<18) & 0x00040000)
#define ENET1_F2_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields MEMC	 */
#define MEMC_F2_WIDTH                                                         1
#define MEMC_F2_SHIFT                                                        14
#define MEMC_F2_MASK                                                 0x00004000
#define MEMC_F2_RD(src)                              (((src) & 0x00004000)>>14)
#define MEMC_F2_WR(src)                         (((u32)(src)<<14) & 0x00004000)
#define MEMC_F2_SET(dst,src) \
                      (((dst) & ~0x00004000) | (((u32)(src)<<14) & 0x00004000))
/*	 Fields OCM	 */
#define OCM_F3_WIDTH                                                          1
#define OCM_F3_SHIFT                                                         11
#define OCM_F3_MASK                                                  0x00000800
#define OCM_F3_RD(src)                               (((src) & 0x00000800)>>11)
#define OCM_F3_WR(src)                          (((u32)(src)<<11) & 0x00000800)
#define OCM_F3_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields PKTDMA	 */
#define PKTDMA_F2_WIDTH                                                       1
#define PKTDMA_F2_SHIFT                                                      10
#define PKTDMA_F2_MASK                                               0x00000400
#define PKTDMA_F2_RD(src)                            (((src) & 0x00000400)>>10)
#define PKTDMA_F2_WR(src)                       (((u32)(src)<<10) & 0x00000400)
#define PKTDMA_F2_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields QMTM	 */
#define QMTM_F3_WIDTH                                                         1
#define QMTM_F3_SHIFT                                                         9
#define QMTM_F3_MASK                                                 0x00000200
#define QMTM_F3_RD(src)                               (((src) & 0x00000200)>>9)
#define QMTM_F3_WR(src)                          (((u32)(src)<<9) & 0x00000200)
#define QMTM_F3_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields QMLite	 */
#define QMLITE_F2_WIDTH                                                       1
#define QMLITE_F2_SHIFT                                                       8
#define QMLITE_F2_MASK                                               0x00000100
#define QMLITE_F2_RD(src)                             (((src) & 0x00000100)>>8)
#define QMLITE_F2_WR(src)                        (((u32)(src)<<8) & 0x00000100)
#define QMLITE_F2_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields LCD	 */
#define LCD_F2_WIDTH                                                          1
#define LCD_F2_SHIFT                                                          6
#define LCD_F2_MASK                                                  0x00000040
#define LCD_F2_RD(src)                                (((src) & 0x00000040)>>6)
#define LCD_F2_WR(src)                           (((u32)(src)<<6) & 0x00000040)
#define LCD_F2_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields TRACE	 */
#define TRACE_F2_WIDTH                                                        1
#define TRACE_F2_SHIFT                                                        4
#define TRACE_F2_MASK                                                0x00000010
#define TRACE_F2_RD(src)                              (((src) & 0x00000010)>>4)
#define TRACE_F2_WR(src)                         (((u32)(src)<<4) & 0x00000010)
#define TRACE_F2_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))

/*	Register SCU_CSR_SRST1	*/ 
/*	 Fields MPA	 */
#define MPA1_F2_WIDTH                                                         1
#define MPA1_F2_SHIFT                                                        31
#define MPA1_F2_MASK                                                 0x80000000
#define MPA1_F2_RD(src)                              (((src) & 0x80000000)>>31)
#define MPA1_F2_WR(src)                         (((u32)(src)<<31) & 0x80000000)
#define MPA1_F2_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields CLE	 */
#define CLE1_WIDTH                                                            1
#define CLE1_SHIFT                                                           23
#define CLE1_MASK                                                    0x00800000
#define CLE1_RD(src)                                 (((src) & 0x00800000)>>23)
#define CLE1_WR(src)                            (((u32)(src)<<23) & 0x00800000)
#define CLE1_SET(dst,src) \
                      (((dst) & ~0x00800000) | (((u32)(src)<<23) & 0x00800000))
/*	 Fields SEC	 */
#define SEC1_F2_WIDTH                                                         1
#define SEC1_F2_SHIFT                                                        19
#define SEC1_F2_MASK                                                 0x00080000
#define SEC1_F2_RD(src)                              (((src) & 0x00080000)>>19)
#define SEC1_F2_WR(src)                         (((u32)(src)<<19) & 0x00080000)
#define SEC1_F2_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))

/*	Register SCU_SOCPLL4	*/ 
/*	 Fields PWRDN	 */
#define PWRDN4_WIDTH                                                          1
#define PWRDN4_SHIFT                                                         31
#define PWRDN4_MASK                                                  0x80000000
#define PWRDN4_RD(src)                               (((src) & 0x80000000)>>31)
#define PWRDN4_WR(src)                          (((u32)(src)<<31) & 0x80000000)
#define PWRDN4_SET(dst,src) \
                      (((dst) & ~0x80000000) | (((u32)(src)<<31) & 0x80000000))
/*	 Fields BYPASS	 */
#define BYPASS4_WIDTH                                                         1
#define BYPASS4_SHIFT                                                        30
#define BYPASS4_MASK                                                 0x40000000
#define BYPASS4_RD(src)                              (((src) & 0x40000000)>>30)
#define BYPASS4_WR(src)                         (((u32)(src)<<30) & 0x40000000)
#define BYPASS4_SET(dst,src) \
                      (((dst) & ~0x40000000) | (((u32)(src)<<30) & 0x40000000))
/*	 Fields CLKR	 */
#define CLKR4_WIDTH                                                           6
#define CLKR4_SHIFT                                                          24
#define CLKR4_MASK                                                   0x3f000000
#define CLKR4_RD(src)                                (((src) & 0x3f000000)>>24)
#define CLKR4_WR(src)                           (((u32)(src)<<24) & 0x3f000000)
#define CLKR4_SET(dst,src) \
                      (((dst) & ~0x3f000000) | (((u32)(src)<<24) & 0x3f000000))
/*	 Fields CLKOD	 */
#define CLKOD4_WIDTH                                                          4
#define CLKOD4_SHIFT                                                         20
#define CLKOD4_MASK                                                  0x00f00000
#define CLKOD4_RD(src)                               (((src) & 0x00f00000)>>20)
#define CLKOD4_WR(src)                          (((u32)(src)<<20) & 0x00f00000)
#define CLKOD4_SET(dst,src) \
                      (((dst) & ~0x00f00000) | (((u32)(src)<<20) & 0x00f00000))
/*	 Fields ENSAT	 */
#define ENSAT4_WIDTH                                                          1
#define ENSAT4_SHIFT                                                         19
#define ENSAT4_MASK                                                  0x00080000
#define ENSAT4_RD(src)                               (((src) & 0x00080000)>>19)
#define ENSAT4_WR(src)                          (((u32)(src)<<19) & 0x00080000)
#define ENSAT4_SET(dst,src) \
                      (((dst) & ~0x00080000) | (((u32)(src)<<19) & 0x00080000))
/*	 Fields FASTEN	 */
#define FASTEN4_WIDTH                                                         1
#define FASTEN4_SHIFT                                                        18
#define FASTEN4_MASK                                                 0x00040000
#define FASTEN4_RD(src)                              (((src) & 0x00040000)>>18)
#define FASTEN4_WR(src)                         (((u32)(src)<<18) & 0x00040000)
#define FASTEN4_SET(dst,src) \
                      (((dst) & ~0x00040000) | (((u32)(src)<<18) & 0x00040000))
/*	 Fields TEST	 */
#define TEST4_WIDTH                                                           1
#define TEST4_SHIFT                                                          17
#define TEST4_MASK                                                   0x00020000
#define TEST4_RD(src)                                (((src) & 0x00020000)>>17)
#define TEST4_WR(src)                           (((u32)(src)<<17) & 0x00020000)
#define TEST4_SET(dst,src) \
                      (((dst) & ~0x00020000) | (((u32)(src)<<17) & 0x00020000))
/*	 Fields RESET	 */
#define RESET4_WIDTH                                                          1
#define RESET4_SHIFT                                                         16
#define RESET4_MASK                                                  0x00010000
#define RESET4_RD(src)                               (((src) & 0x00010000)>>16)
#define RESET4_WR(src)                          (((u32)(src)<<16) & 0x00010000)
#define RESET4_SET(dst,src) \
                      (((dst) & ~0x00010000) | (((u32)(src)<<16) & 0x00010000))
/*	 Fields CLKF	 */
#define CLKF4_WIDTH                                                          13
#define CLKF4_SHIFT                                                           0
#define CLKF4_MASK                                                   0x00001fff
#define CLKF4_RD(src)                                    (((src) & 0x00001fff))
#define CLKF4_WR(src)                               (((u32)(src)) & 0x00001fff)
#define CLKF4_SET(dst,src) \
                          (((dst) & ~0x00001fff) | (((u32)(src)) & 0x00001fff))

/*	Register SCU_SOCPLLADJ4	*/ 
/*	 Fields BWADJ	 */
#define BWADJ4_WIDTH                                                         12
#define BWADJ4_SHIFT                                                          0
#define BWADJ4_MASK                                                  0x00000fff
#define BWADJ4_RD(src)                                   (((src) & 0x00000fff))
#define BWADJ4_WR(src)                              (((u32)(src)) & 0x00000fff)
#define BWADJ4_SET(dst,src) \
                          (((dst) & ~0x00000fff) | (((u32)(src)) & 0x00000fff))

/*	Register I2C_BOOT_General_Cfg	*/ 
/*	 Fields CFG_ic_ss_hcnt	 */
#define CFG_IC_SS_HCNT_WIDTH                                                 16
#define CFG_IC_SS_HCNT_SHIFT                                                 16
#define CFG_IC_SS_HCNT_MASK                                          0xffff0000
#define CFG_IC_SS_HCNT_RD(src)                       (((src) & 0xffff0000)>>16)
#define CFG_IC_SS_HCNT_WR(src)                  (((u32)(src)<<16) & 0xffff0000)
#define CFG_IC_SS_HCNT_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields CFG_hs_sync	 */
#define CFG_HS_SYNC_WIDTH                                                     1
#define CFG_HS_SYNC_SHIFT                                                     7
#define CFG_HS_SYNC_MASK                                             0x00000080
#define CFG_HS_SYNC_RD(src)                           (((src) & 0x00000080)>>7)
#define CFG_HS_SYNC_WR(src)                      (((u32)(src)<<7) & 0x00000080)
#define CFG_HS_SYNC_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields CFG_fs_sync	 */
#define CFG_FS_SYNC_WIDTH                                                     1
#define CFG_FS_SYNC_SHIFT                                                     6
#define CFG_FS_SYNC_MASK                                             0x00000040
#define CFG_FS_SYNC_RD(src)                           (((src) & 0x00000040)>>6)
#define CFG_FS_SYNC_WR(src)                      (((u32)(src)<<6) & 0x00000040)
#define CFG_FS_SYNC_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields CFG_ss_sync	 */
#define CFG_SS_SYNC_WIDTH                                                     1
#define CFG_SS_SYNC_SHIFT                                                     5
#define CFG_SS_SYNC_MASK                                             0x00000020
#define CFG_SS_SYNC_RD(src)                           (((src) & 0x00000020)>>5)
#define CFG_SS_SYNC_WR(src)                      (((u32)(src)<<5) & 0x00000020)
#define CFG_SS_SYNC_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields CFG_10bit_mst_sync	 */
#define CFG_10BIT_MST_SYNC_WIDTH                                              1
#define CFG_10BIT_MST_SYNC_SHIFT                                              4
#define CFG_10BIT_MST_SYNC_MASK                                      0x00000010
#define CFG_10BIT_MST_SYNC_RD(src)                    (((src) & 0x00000010)>>4)
#define CFG_10BIT_MST_SYNC_WR(src)               (((u32)(src)<<4) & 0x00000010)
#define CFG_10BIT_MST_SYNC_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields CFG_rstrt_en_sync	 */
#define CFG_RSTRT_EN_SYNC_WIDTH                                               1
#define CFG_RSTRT_EN_SYNC_SHIFT                                               3
#define CFG_RSTRT_EN_SYNC_MASK                                       0x00000008
#define CFG_RSTRT_EN_SYNC_RD(src)                     (((src) & 0x00000008)>>3)
#define CFG_RSTRT_EN_SYNC_WR(src)                (((u32)(src)<<3) & 0x00000008)
#define CFG_RSTRT_EN_SYNC_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields CFG_ic_hs_maddr	 */
#define CFG_IC_HS_MADDR_WIDTH                                                 3
#define CFG_IC_HS_MADDR_SHIFT                                                 0
#define CFG_IC_HS_MADDR_MASK                                         0x00000007
#define CFG_IC_HS_MADDR_RD(src)                          (((src) & 0x00000007))
#define CFG_IC_HS_MADDR_WR(src)                     (((u32)(src)) & 0x00000007)
#define CFG_IC_HS_MADDR_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register I2C_BOOT_General_Rst	*/ 
/*	 Fields CFG_fifo_rst	 */
#define CFG_FIFO_RST_WIDTH                                                    1
#define CFG_FIFO_RST_SHIFT                                                    3
#define CFG_FIFO_RST_MASK                                            0x00000008
#define CFG_FIFO_RST_RD(src)                          (((src) & 0x00000008)>>3)
#define CFG_FIFO_RST_WR(src)                     (((u32)(src)<<3) & 0x00000008)
#define CFG_FIFO_RST_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields CFG_tx_fifo_rst	 */
#define CFG_TX_FIFO_RST_WIDTH                                                 1
#define CFG_TX_FIFO_RST_SHIFT                                                 2
#define CFG_TX_FIFO_RST_MASK                                         0x00000004
#define CFG_TX_FIFO_RST_RD(src)                       (((src) & 0x00000004)>>2)
#define CFG_TX_FIFO_RST_WR(src)                  (((u32)(src)<<2) & 0x00000004)
#define CFG_TX_FIFO_RST_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields CFG_master_srst_sync	 */
#define CFG_MASTER_SRST_SYNC_WIDTH                                            1
#define CFG_MASTER_SRST_SYNC_SHIFT                                            1
#define CFG_MASTER_SRST_SYNC_MASK                                    0x00000002
#define CFG_MASTER_SRST_SYNC_RD(src)                  (((src) & 0x00000002)>>1)
#define CFG_MASTER_SRST_SYNC_WR(src)             (((u32)(src)<<1) & 0x00000002)
#define CFG_MASTER_SRST_SYNC_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields CFG_srst_sync	 */
#define CFG_SRST_SYNC_WIDTH                                                   1
#define CFG_SRST_SYNC_SHIFT                                                   0
#define CFG_SRST_SYNC_MASK                                           0x00000001
#define CFG_SRST_SYNC_RD(src)                            (((src) & 0x00000001))
#define CFG_SRST_SYNC_WR(src)                       (((u32)(src)) & 0x00000001)
#define CFG_SRST_SYNC_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register I2C_BOOT_HS_Cnt	*/ 
/*	 Fields CFG_ic_hcnt	 */
#define CFG_IC_HCNT_WIDTH                                                    16
#define CFG_IC_HCNT_SHIFT                                                    16
#define CFG_IC_HCNT_MASK                                             0xffff0000
#define CFG_IC_HCNT_RD(src)                          (((src) & 0xffff0000)>>16)
#define CFG_IC_HCNT_WR(src)                     (((u32)(src)<<16) & 0xffff0000)
#define CFG_IC_HCNT_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields CFG_ic_lcnt	 */
#define CFG_IC_LCNT_WIDTH                                                    16
#define CFG_IC_LCNT_SHIFT                                                     0
#define CFG_IC_LCNT_MASK                                             0x0000ffff
#define CFG_IC_LCNT_RD(src)                              (((src) & 0x0000ffff))
#define CFG_IC_LCNT_WR(src)                         (((u32)(src)) & 0x0000ffff)
#define CFG_IC_LCNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register I2C_BOOT_FS_Cnt	*/ 
/*	 Fields CFG_ic_fs_hcnt	 */
#define CFG_IC_FS_HCNT_WIDTH                                                 16
#define CFG_IC_FS_HCNT_SHIFT                                                 16
#define CFG_IC_FS_HCNT_MASK                                          0xffff0000
#define CFG_IC_FS_HCNT_RD(src)                       (((src) & 0xffff0000)>>16)
#define CFG_IC_FS_HCNT_WR(src)                  (((u32)(src)<<16) & 0xffff0000)
#define CFG_IC_FS_HCNT_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields CFG_ic_fs_lcnt	 */
#define CFG_IC_FS_LCNT_WIDTH                                                 16
#define CFG_IC_FS_LCNT_SHIFT                                                  0
#define CFG_IC_FS_LCNT_MASK                                          0x0000ffff
#define CFG_IC_FS_LCNT_RD(src)                           (((src) & 0x0000ffff))
#define CFG_IC_FS_LCNT_WR(src)                      (((u32)(src)) & 0x0000ffff)
#define CFG_IC_FS_LCNT_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Global Base Address	*/
#define MPA_PKP_TRNG_I_BASE_ADDR			0xd00428000ULL

/*    Address MPA_PKP_TRNG_I  Registers */
#define TRNG_OUTPUT_ADDR                                             0x00000000
#define TRNG_OUTPUT_DEFAULT                                          0x00000000
#define TRNG_STATUS_ADDR                                             0x00000004
#define TRNG_STATUS_DEFAULT                                          0x00000001
#define TRNG_CNTL_ADDR                                               0x00000008
#define TRNG_CNTL_DEFAULT                                            0x00000400
#define TRNG_CFG_ADDR                                                0x0000000c
#define TRNG_CFG_DEFAULT                                             0x00000fdc
#define TRNG_ALARMCNT_ADDR                                           0x00000010
#define TRNG_ALARMCNT_DEFAULT                                        0x00000000
#define TRNG_CNTR_ADDR                                               0x00000014
#define TRNG_CNTR_DEFAULT                                            0x00000000
#define TRNG_A_ADDR                                                  0x00000018
#define TRNG_A_DEFAULT                                               0x00000000
#define TRNG_B_ADDR                                                  0x0000001c
#define TRNG_B_DEFAULT                                               0x00000000
#define TRNG_X0_ADDR                                                 0x00000020
#define TRNG_X0_DEFAULT                                              0x7841707c
#define TRNG_X1_ADDR                                                 0x00000024
#define TRNG_X1_DEFAULT                                              0x75cb6092
#define TRNG_X2_ADDR                                                 0x00000028
#define TRNG_X2_DEFAULT                                              0x0001cffa
#define TRNG_LFSR1_L_ADDR                                            0x0000002c
#define TRNG_LFSR1_L_DEFAULT                                         0xc3251ce5
#define TRNG_LFSR1_H_ADDR                                            0x00000030
#define TRNG_LFSR1_H_DEFAULT                                         0x0000fa60
#define TRNG_LFSR2_L_ADDR                                            0x00000034
#define TRNG_LFSR2_L_DEFAULT                                         0x621eb502
#define TRNG_LFSR2_H_ADDR                                            0x00000038
#define TRNG_LFSR2_H_DEFAULT                                         0x0000d28f
#define TRNG_KEY0_L_ADDR                                             0x0000003c
#define TRNG_KEY0_L_DEFAULT                                          0x00000000
#define TRNG_KEY0_H_ADDR                                             0x00000040
#define TRNG_KEY0_H_DEFAULT                                          0x00000000
#define TRNG_KEY1_L_ADDR                                             0x00000044
#define TRNG_KEY1_L_DEFAULT                                          0x00000000
#define TRNG_KEY1_H_ADDR                                             0x00000048
#define TRNG_KEY1_H_DEFAULT                                          0x00000000
#define TRNG_IV_L_ADDR                                               0x0000004c
#define TRNG_IV_L_DEFAULT                                            0x00000000
#define TRNG_IV_H_ADDR                                               0x00000050
#define TRNG_IV_H_DEFAULT                                            0x00000000

/*	Register TRNG_OUTPUT	*/ 
/*	 Fields OUTPUT	 */
#define OUTPUT_WIDTH                                                         32
#define OUTPUT_SHIFT                                                          0
#define OUTPUT_MASK                                                  0xffffffff
#define OUTPUT_RD(src)                                   (((src) & 0xffffffff))
#define OUTPUT_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_STATUS	*/ 
/*	 Fields BUSY	 */
#define BUSY_F16_WIDTH                                                        1
#define BUSY_F16_SHIFT                                                        0
#define BUSY_F16_MASK                                                0x00000001
#define BUSY_F16_RD(src)                                 (((src) & 0x00000001))
#define BUSY_F16_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register TRNG_CNTL	*/ 
/*	 Fields POST_PROC	 */
#define POST_PROC_WIDTH                                                       1
#define POST_PROC_SHIFT                                                      12
#define POST_PROC_MASK                                               0x00001000
#define POST_PROC_RD(src)                            (((src) & 0x00001000)>>12)
#define POST_PROC_WR(src)                       (((u32)(src)<<12) & 0x00001000)
#define POST_PROC_SET(dst,src) \
                      (((dst) & ~0x00001000) | (((u32)(src)<<12) & 0x00001000))
/*	 Fields BYP_TRNG	 */
#define BYP_TRNG_WIDTH                                                        1
#define BYP_TRNG_SHIFT                                                       11
#define BYP_TRNG_MASK                                                0x00000800
#define BYP_TRNG_RD(src)                             (((src) & 0x00000800)>>11)
#define BYP_TRNG_WR(src)                        (((u32)(src)<<11) & 0x00000800)
#define BYP_TRNG_SET(dst,src) \
                      (((dst) & ~0x00000800) | (((u32)(src)<<11) & 0x00000800))
/*	 Fields RST_LFSR	 */
#define RST_LFSR_WIDTH                                                        1
#define RST_LFSR_SHIFT                                                       10
#define RST_LFSR_MASK                                                0x00000400
#define RST_LFSR_RD(src)                             (((src) & 0x00000400)>>10)
#define RST_LFSR_WR(src)                        (((u32)(src)<<10) & 0x00000400)
#define RST_LFSR_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields TST_LFSR	 */
#define TST_LFSR_WIDTH                                                        1
#define TST_LFSR_SHIFT                                                        9
#define TST_LFSR_MASK                                                0x00000200
#define TST_LFSR_RD(src)                              (((src) & 0x00000200)>>9)
#define TST_LFSR_WR(src)                         (((u32)(src)<<9) & 0x00000200)
#define TST_LFSR_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields TST_ALARM	 */
#define TST_ALARM_WIDTH                                                       1
#define TST_ALARM_SHIFT                                                       8
#define TST_ALARM_MASK                                               0x00000100
#define TST_ALARM_RD(src)                             (((src) & 0x00000100)>>8)
#define TST_ALARM_WR(src)                        (((u32)(src)<<8) & 0x00000100)
#define TST_ALARM_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields SHORT	 */
#define SHORT_WIDTH                                                           1
#define SHORT_SHIFT                                                           7
#define SHORT_MASK                                                   0x00000080
#define SHORT_RD(src)                                 (((src) & 0x00000080)>>7)
#define SHORT_WR(src)                            (((u32)(src)<<7) & 0x00000080)
#define SHORT_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields CLK_ON	 */
#define CLK_ON_WIDTH                                                          1
#define CLK_ON_SHIFT                                                          6
#define CLK_ON_MASK                                                  0x00000040
#define CLK_ON_RD(src)                                (((src) & 0x00000040)>>6)
#define CLK_ON_WR(src)                           (((u32)(src)<<6) & 0x00000040)
#define CLK_ON_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields DIS_ALARM	 */
#define DIS_ALARM_WIDTH                                                       1
#define DIS_ALARM_SHIFT                                                       5
#define DIS_ALARM_MASK                                               0x00000020
#define DIS_ALARM_RD(src)                             (((src) & 0x00000020)>>5)
#define DIS_ALARM_WR(src)                        (((u32)(src)<<5) & 0x00000020)
#define DIS_ALARM_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields TST_EN2	 */
#define TST_EN2_WIDTH                                                         1
#define TST_EN2_SHIFT                                                         4
#define TST_EN2_MASK                                                 0x00000010
#define TST_EN2_RD(src)                               (((src) & 0x00000010)>>4)
#define TST_EN2_WR(src)                          (((u32)(src)<<4) & 0x00000010)
#define TST_EN2_SET(dst,src) \
                       (((dst) & ~0x00000010) | (((u32)(src)<<4) & 0x00000010))
/*	 Fields TST_EN1	 */
#define TST_EN1_WIDTH                                                         1
#define TST_EN1_SHIFT                                                         3
#define TST_EN1_MASK                                                 0x00000008
#define TST_EN1_RD(src)                               (((src) & 0x00000008)>>3)
#define TST_EN1_WR(src)                          (((u32)(src)<<3) & 0x00000008)
#define TST_EN1_SET(dst,src) \
                       (((dst) & ~0x00000008) | (((u32)(src)<<3) & 0x00000008))
/*	 Fields TST_RUN	 */
#define TST_RUN_WIDTH                                                         1
#define TST_RUN_SHIFT                                                         2
#define TST_RUN_MASK                                                 0x00000004
#define TST_RUN_RD(src)                               (((src) & 0x00000004)>>2)
#define TST_RUN_WR(src)                          (((u32)(src)<<2) & 0x00000004)
#define TST_RUN_SET(dst,src) \
                       (((dst) & ~0x00000004) | (((u32)(src)<<2) & 0x00000004))
/*	 Fields TST_MODE	 */
#define TST_MODE_WIDTH                                                        1
#define TST_MODE_SHIFT                                                        1
#define TST_MODE_MASK                                                0x00000002
#define TST_MODE_RD(src)                              (((src) & 0x00000002)>>1)
#define TST_MODE_WR(src)                         (((u32)(src)<<1) & 0x00000002)
#define TST_MODE_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields TST_RING_OUT	 */
#define TST_RING_OUT_WIDTH                                                    1
#define TST_RING_OUT_SHIFT                                                    0
#define TST_RING_OUT_MASK                                            0x00000001
#define TST_RING_OUT_RD(src)                             (((src) & 0x00000001))
#define TST_RING_OUT_WR(src)                        (((u32)(src)) & 0x00000001)
#define TST_RING_OUT_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register TRNG_CFG	*/ 
/*	 Fields RST_CNT	 */
#define RST_CNT_WIDTH                                                         6
#define RST_CNT_SHIFT                                                         6
#define RST_CNT_MASK                                                 0x00000fc0
#define RST_CNT_RD(src)                               (((src) & 0x00000fc0)>>6)
#define RST_CNT_WR(src)                          (((u32)(src)<<6) & 0x00000fc0)
#define RST_CNT_SET(dst,src) \
                       (((dst) & ~0x00000fc0) | (((u32)(src)<<6) & 0x00000fc0))
/*	 Fields R2_DLY	 */
#define R2_DLY_WIDTH                                                          3
#define R2_DLY_SHIFT                                                          3
#define R2_DLY_MASK                                                  0x00000038
#define R2_DLY_RD(src)                                (((src) & 0x00000038)>>3)
#define R2_DLY_WR(src)                           (((u32)(src)<<3) & 0x00000038)
#define R2_DLY_SET(dst,src) \
                       (((dst) & ~0x00000038) | (((u32)(src)<<3) & 0x00000038))
/*	 Fields R1_DLY	 */
#define R1_DLY_WIDTH                                                          3
#define R1_DLY_SHIFT                                                          0
#define R1_DLY_MASK                                                  0x00000007
#define R1_DLY_RD(src)                                   (((src) & 0x00000007))
#define R1_DLY_WR(src)                              (((u32)(src)) & 0x00000007)
#define R1_DLY_SET(dst,src) \
                          (((dst) & ~0x00000007) | (((u32)(src)) & 0x00000007))

/*	Register TRNG_ALARMCNT	*/ 
/*	 Fields AL_CNT	 */
#define AL_CNT_WIDTH                                                          8
#define AL_CNT_SHIFT                                                          0
#define AL_CNT_MASK                                                  0x000000ff
#define AL_CNT_RD(src)                                   (((src) & 0x000000ff))
#define AL_CNT_WR(src)                              (((u32)(src)) & 0x000000ff)
#define AL_CNT_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register TRNG_CNTR	*/ 
/*	 Fields CNT	 */
#define CNT_F2_WIDTH                                                         24
#define CNT_F2_SHIFT                                                          0
#define CNT_F2_MASK                                                  0x00ffffff
#define CNT_F2_RD(src)                                   (((src) & 0x00ffffff))
#define CNT_F2_WR(src)                              (((u32)(src)) & 0x00ffffff)
#define CNT_F2_SET(dst,src) \
                          (((dst) & ~0x00ffffff) | (((u32)(src)) & 0x00ffffff))

/*	Register TRNG_A	*/ 
/*	 Fields ENTROPYA	 */
#define ENTROPYA_WIDTH                                                       16
#define ENTROPYA_SHIFT                                                        0
#define ENTROPYA_MASK                                                0x0000ffff
#define ENTROPYA_RD(src)                                 (((src) & 0x0000ffff))
#define ENTROPYA_WR(src)                            (((u32)(src)) & 0x0000ffff)
#define ENTROPYA_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register TRNG_B	*/ 
/*	 Fields ENTROPYB	 */
#define ENTROPYB_WIDTH                                                       16
#define ENTROPYB_SHIFT                                                        0
#define ENTROPYB_MASK                                                0x0000ffff
#define ENTROPYB_RD(src)                                 (((src) & 0x0000ffff))
#define ENTROPYB_WR(src)                            (((u32)(src)) & 0x0000ffff)
#define ENTROPYB_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register TRNG_X0	*/ 
/*	 Fields ENTROPYX0	 */
#define ENTROPYX00_WIDTH                                                     32
#define ENTROPYX00_SHIFT                                                      0
#define ENTROPYX00_MASK                                              0xffffffff
#define ENTROPYX00_RD(src)                               (((src) & 0xffffffff))
#define ENTROPYX00_WR(src)                          (((u32)(src)) & 0xffffffff)
#define ENTROPYX00_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_X1	*/ 
/*	 Fields ENTROPYX1	 */
#define ENTROPYX11_WIDTH                                                     32
#define ENTROPYX11_SHIFT                                                      0
#define ENTROPYX11_MASK                                              0xffffffff
#define ENTROPYX11_RD(src)                               (((src) & 0xffffffff))
#define ENTROPYX11_WR(src)                          (((u32)(src)) & 0xffffffff)
#define ENTROPYX11_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_X2	*/ 
/*	 Fields ENTROPYX2	 */
#define ENTROPYX22_WIDTH                                                     17
#define ENTROPYX22_SHIFT                                                      0
#define ENTROPYX22_MASK                                              0x0001ffff
#define ENTROPYX22_RD(src)                               (((src) & 0x0001ffff))
#define ENTROPYX22_WR(src)                          (((u32)(src)) & 0x0001ffff)
#define ENTROPYX22_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register TRNG_LFSR1_L	*/ 
/*	 Fields LFSR1_L	 */
#define LFSR1_L_WIDTH                                                        32
#define LFSR1_L_SHIFT                                                         0
#define LFSR1_L_MASK                                                 0xffffffff
#define LFSR1_L_RD(src)                                  (((src) & 0xffffffff))
#define LFSR1_L_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_LFSR1_H	*/ 
/*	 Fields LFSR1_H	 */
#define LFSR1_H_WIDTH                                                        17
#define LFSR1_H_SHIFT                                                         0
#define LFSR1_H_MASK                                                 0x0001ffff
#define LFSR1_H_RD(src)                                  (((src) & 0x0001ffff))
#define LFSR1_H_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register TRNG_LFSR2_L	*/ 
/*	 Fields LFSR2_L	 */
#define LFSR2_L_WIDTH                                                        32
#define LFSR2_L_SHIFT                                                         0
#define LFSR2_L_MASK                                                 0xffffffff
#define LFSR2_L_RD(src)                                  (((src) & 0xffffffff))
#define LFSR2_L_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_LFSR2_H	*/ 
/*	 Fields LFSR2_H	 */
#define LFSR2_H_WIDTH                                                        16
#define LFSR2_H_SHIFT                                                         0
#define LFSR2_H_MASK                                                 0x0000ffff
#define LFSR2_H_RD(src)                                  (((src) & 0x0000ffff))
#define LFSR2_H_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register TRNG_KEY0_L	*/ 
/*	 Fields KEY0_L	 */
#define KEY0_L_WIDTH                                                         32
#define KEY0_L_SHIFT                                                          0
#define KEY0_L_MASK                                                  0xffffffff
#define KEY0_L_RD(src)                                   (((src) & 0xffffffff))
#define KEY0_L_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_KEY0_H	*/ 
/*	 Fields KEY0_H	 */
#define KEY0_H_WIDTH                                                         32
#define KEY0_H_SHIFT                                                          0
#define KEY0_H_MASK                                                  0xffffffff
#define KEY0_H_RD(src)                                   (((src) & 0xffffffff))
#define KEY0_H_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_KEY1_L	*/ 
/*	 Fields KEY1_L	 */
#define KEY1_L_WIDTH                                                         32
#define KEY1_L_SHIFT                                                          0
#define KEY1_L_MASK                                                  0xffffffff
#define KEY1_L_RD(src)                                   (((src) & 0xffffffff))
#define KEY1_L_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_KEY1_H	*/ 
/*	 Fields KEY1_H	 */
#define KEY1_H_WIDTH                                                         32
#define KEY1_H_SHIFT                                                          0
#define KEY1_H_MASK                                                  0xffffffff
#define KEY1_H_RD(src)                                   (((src) & 0xffffffff))
#define KEY1_H_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_IV_L	*/ 
/*	 Fields IV_L	 */
#define IV_L_WIDTH                                                           32
#define IV_L_SHIFT                                                            0
#define IV_L_MASK                                                    0xffffffff
#define IV_L_RD(src)                                     (((src) & 0xffffffff))
#define IV_L_WR(src)                                (((u32)(src)) & 0xffffffff)
#define IV_L_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register TRNG_IV_H	*/ 
/*	 Fields IV_H	 */
#define IV_H_WIDTH                                                           32
#define IV_H_SHIFT                                                            0
#define IV_H_MASK                                                    0xffffffff
#define IV_H_RD(src)                                     (((src) & 0xffffffff))
#define IV_H_WR(src)                                (((u32)(src)) & 0xffffffff)
#define IV_H_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Global Base Address	*/
#define MPA_QMI_SLAVE_I_BASE_ADDR				0xddd8b7800ULL

/*    Address QMI_SLAVE_I  Registers */
#define MPA_CFGSSQMI0_ADDR                                           0x00000000
#define MPA_CFGSSQMI0_DEFAULT                                        0x0002c821
#define MPA_CFGSSQMI1_ADDR                                           0x00000004
#define MPA_CFGSSQMI1_DEFAULT                                        0x2de8b77c
#define MPA_CFGSSQMIFPBUFFER_ADDR                                    0x00000008
#define MPA_CFGSSQMIFPBUFFER_DEFAULT                                 0x00000000
#define MPA_CFGSSQMIWQBUFFER_ADDR                                    0x0000000c
#define MPA_CFGSSQMIWQBUFFER_DEFAULT                                 0x00000000
#define MPA_STSSSQMIFPBUFFER0_ADDR                                   0x00000010
#define MPA_STSSSQMIFPBUFFER0_DEFAULT                                0x00000000
#define MPA_STSSSQMIFPBUFFER1_ADDR                                   0x00000014
#define MPA_STSSSQMIFPBUFFER1_DEFAULT                                0x00000000
#define MPA_STSSSQMIFPBUFFER2_ADDR                                   0x00000018
#define MPA_STSSSQMIFPBUFFER2_DEFAULT                                0x00000000
#define MPA_STSSSQMIWQBUFFER0_ADDR                                   0x0000001c
#define MPA_STSSSQMIWQBUFFER0_DEFAULT                                0x00000000
#define MPA_STSSSQMIWQBUFFER1_ADDR                                   0x00000020
#define MPA_STSSSQMIWQBUFFER1_DEFAULT                                0x00000000
#define MPA_STSSSQMIWQBUFFER2_ADDR                                   0x00000024
#define MPA_STSSSQMIWQBUFFER2_DEFAULT                                0x00000000
#define MPA_STSSSQMIWQBUFFER3_ADDR                                   0x00000028
#define MPA_STSSSQMIWQBUFFER3_DEFAULT                                0x00000000
#define MPA_CFGSSQMISAB_ADDR                                         0x0000002c
#define MPA_CFGSSQMISAB_DEFAULT                                      0x00000000
#define MPA_CFGSSQMISAB0_ADDR                                        0x00000030
#define MPA_CFGSSQMISAB0_DEFAULT                                     0x00000000
#define MPA_CFGSSQMISAB1_ADDR                                        0x00000034
#define MPA_CFGSSQMISAB1_DEFAULT                                     0x00000000
#define MPA_CFGSSQMISAB2_ADDR                                        0x00000038
#define MPA_CFGSSQMISAB2_DEFAULT                                     0x00000000
#define MPA_CFGSSQMISAB3_ADDR                                        0x0000003c
#define MPA_CFGSSQMISAB3_DEFAULT                                     0x00000000
#define MPA_CFGSSQMISAB4_ADDR                                        0x00000040
#define MPA_CFGSSQMISAB4_DEFAULT                                     0x00000000
#define MPA_STSSSQMIINT0_ADDR                                        0x00000044
#define MPA_STSSSQMIINT0_DEFAULT                                     0x00000000
#define MPA_STSSSQMIINT0MASK_ADDR                                    0x00000048
#define MPA_STSSSQMIINT1_ADDR                                        0x0000004c
#define MPA_STSSSQMIINT1_DEFAULT                                     0x00000000
#define MPA_STSSSQMIINT1MASK_ADDR                                    0x00000050
#define MPA_STSSSQMIINT2_ADDR                                        0x00000054
#define MPA_STSSSQMIINT2_DEFAULT                                     0x00000000
#define MPA_STSSSQMIINT2MASK_ADDR                                    0x00000058
#define MPA_STSSSQMIINT3_ADDR                                        0x0000005c
#define MPA_STSSSQMIINT3_DEFAULT                                     0x00000000
#define MPA_STSSSQMIINT3MASK_ADDR                                    0x00000060
#define MPA_STSSSQMIINT4_ADDR                                        0x00000064
#define MPA_STSSSQMIINT4_DEFAULT                                     0x00000000
#define MPA_STSSSQMIINT4MASK_ADDR                                    0x00000068
#define MPA_CFGSSQMIDBGCTRL_ADDR                                     0x0000006c
#define MPA_CFGSSQMIDBGCTRL_DEFAULT                                  0x00000000
#define MPA_CFGSSQMIDBGDATA0_ADDR                                    0x00000070
#define MPA_CFGSSQMIDBGDATA0_DEFAULT                                 0x00000000
#define MPA_CFGSSQMIDBGDATA1_ADDR                                    0x00000074
#define MPA_CFGSSQMIDBGDATA1_DEFAULT                                 0x00000000
#define MPA_CFGSSQMIDBGDATA2_ADDR                                    0x00000078
#define MPA_CFGSSQMIDBGDATA2_DEFAULT                                 0x00000000
#define MPA_CFGSSQMIDBGDATA3_ADDR                                    0x0000007c
#define MPA_CFGSSQMIDBGDATA3_DEFAULT                                 0x00000000
#define MPA_STSSSQMIDBGDATA_ADDR                                     0x00000080
#define MPA_STSSSQMIDBGDATA_DEFAULT                                  0x00000000
#define MPA_CFGSSQMILITE_ADDR                                        0x00000084
#define MPA_CFGSSQMILITE_DEFAULT                                     0x00003400
#define MPA_CFGSSQMIFPQASSOC_ADDR                                    0x00000088
#define MPA_CFGSSQMIFPQASSOC_DEFAULT                                 0x00030000
#define MPA_CFGSSQMIWQASSOC_ADDR                                     0x0000008c
#define MPA_CFGSSQMIWQASSOC_DEFAULT                                  0x00010000
#define MPA_CFGSSQMIMEMORY_ADDR                                      0x00000090
#define MPA_CFGSSQMIMEMORY_DEFAULT                                   0x00000000
#define MPA_STSSSQMIFIFO_ADDR                                        0x00000094
#define MPA_STSSSQMIFIFO_DEFAULT                                     0x07ffffff

/*	Register CfgSsQmi0	*/ 
/*	 Fields WQ16Disable	 */
#define MPA_WQ16DISABLE0_WIDTH                                                1
#define MPA_WQ16DISABLE0_SHIFT                                               29
#define MPA_WQ16DISABLE0_MASK                                        0x20000000
#define MPA_WQ16DISABLE0_RD(src)                     (((src) & 0x20000000)>>29)
#define MPA_WQ16DISABLE0_WR(src)                (((u32)(src)<<29) & 0x20000000)
#define MPA_WQ16DISABLE0_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields WQ16Reset	 */
#define MPA_WQ16RESET0_WIDTH                                                  1
#define MPA_WQ16RESET0_SHIFT                                                 28
#define MPA_WQ16RESET0_MASK                                          0x10000000
#define MPA_WQ16RESET0_RD(src)                       (((src) & 0x10000000)>>28)
#define MPA_WQ16RESET0_WR(src)                  (((u32)(src)<<28) & 0x10000000)
#define MPA_WQ16RESET0_SET(dst,src) \
                      (((dst) & ~0x10000000) | (((u32)(src)<<28) & 0x10000000))
/*	 Fields FP17Disable	 */
#define MPA_FP17DISABLE0_WIDTH                                                1
#define MPA_FP17DISABLE0_SHIFT                                               27
#define MPA_FP17DISABLE0_MASK                                        0x08000000
#define MPA_FP17DISABLE0_RD(src)                     (((src) & 0x08000000)>>27)
#define MPA_FP17DISABLE0_WR(src)                (((u32)(src)<<27) & 0x08000000)
#define MPA_FP17DISABLE0_SET(dst,src) \
                      (((dst) & ~0x08000000) | (((u32)(src)<<27) & 0x08000000))
/*	 Fields FP16Disable	 */
#define MPA_FP16DISABLE0_WIDTH                                                1
#define MPA_FP16DISABLE0_SHIFT                                               26
#define MPA_FP16DISABLE0_MASK                                        0x04000000
#define MPA_FP16DISABLE0_RD(src)                     (((src) & 0x04000000)>>26)
#define MPA_FP16DISABLE0_WR(src)                (((u32)(src)<<26) & 0x04000000)
#define MPA_FP16DISABLE0_SET(dst,src) \
                      (((dst) & ~0x04000000) | (((u32)(src)<<26) & 0x04000000))
/*	 Fields FP17Reset	 */
#define MPA_FP17RESET0_WIDTH                                                  1
#define MPA_FP17RESET0_SHIFT                                                 25
#define MPA_FP17RESET0_MASK                                          0x02000000
#define MPA_FP17RESET0_RD(src)                       (((src) & 0x02000000)>>25)
#define MPA_FP17RESET0_WR(src)                  (((u32)(src)<<25) & 0x02000000)
#define MPA_FP17RESET0_SET(dst,src) \
                      (((dst) & ~0x02000000) | (((u32)(src)<<25) & 0x02000000))
/*	 Fields FP16Reset	 */
#define MPA_FP16RESET0_WIDTH                                                  1
#define MPA_FP16RESET0_SHIFT                                                 24
#define MPA_FP16RESET0_MASK                                          0x01000000
#define MPA_FP16RESET0_RD(src)                       (((src) & 0x01000000)>>24)
#define MPA_FP16RESET0_WR(src)                  (((u32)(src)<<24) & 0x01000000)
#define MPA_FP16RESET0_SET(dst,src) \
                      (((dst) & ~0x01000000) | (((u32)(src)<<24) & 0x01000000))
/*	 Fields FPDecDiffThreshold	 */
#define MPA_FPDECDIFFTHRESHOLD0_WIDTH                                         3
#define MPA_FPDECDIFFTHRESHOLD0_SHIFT                                        21
#define MPA_FPDECDIFFTHRESHOLD0_MASK                                 0x00e00000
#define MPA_FPDECDIFFTHRESHOLD0_RD(src)              (((src) & 0x00e00000)>>21)
#define MPA_FPDECDIFFTHRESHOLD0_WR(src)         (((u32)(src)<<21) & 0x00e00000)
#define MPA_FPDECDIFFTHRESHOLD0_SET(dst,src) \
                      (((dst) & ~0x00e00000) | (((u32)(src)<<21) & 0x00e00000))
/*	 Fields WQDecDiffThreshold	 */
#define MPA_WQDECDIFFTHRESHOLD0_WIDTH                                         4
#define MPA_WQDECDIFFTHRESHOLD0_SHIFT                                        17
#define MPA_WQDECDIFFTHRESHOLD0_MASK                                 0x001e0000
#define MPA_WQDECDIFFTHRESHOLD0_RD(src)              (((src) & 0x001e0000)>>17)
#define MPA_WQDECDIFFTHRESHOLD0_WR(src)         (((u32)(src)<<17) & 0x001e0000)
#define MPA_WQDECDIFFTHRESHOLD0_SET(dst,src) \
                      (((dst) & ~0x001e0000) | (((u32)(src)<<17) & 0x001e0000))
/*	 Fields DeallocThreshold	 */
#define MPA_DEALLOCTHRESHOLD0_WIDTH                                           3
#define MPA_DEALLOCTHRESHOLD0_SHIFT                                          14
#define MPA_DEALLOCTHRESHOLD0_MASK                                   0x0001c000
#define MPA_DEALLOCTHRESHOLD0_RD(src)                (((src) & 0x0001c000)>>14)
#define MPA_DEALLOCTHRESHOLD0_WR(src)           (((u32)(src)<<14) & 0x0001c000)
#define MPA_DEALLOCTHRESHOLD0_SET(dst,src) \
                      (((dst) & ~0x0001c000) | (((u32)(src)<<14) & 0x0001c000))
/*	 Fields FPDecThreshold	 */
#define MPA_FPDECTHRESHOLD0_WIDTH                                             3
#define MPA_FPDECTHRESHOLD0_SHIFT                                            11
#define MPA_FPDECTHRESHOLD0_MASK                                     0x00003800
#define MPA_FPDECTHRESHOLD0_RD(src)                  (((src) & 0x00003800)>>11)
#define MPA_FPDECTHRESHOLD0_WR(src)             (((u32)(src)<<11) & 0x00003800)
#define MPA_FPDECTHRESHOLD0_SET(dst,src) \
                      (((dst) & ~0x00003800) | (((u32)(src)<<11) & 0x00003800))
/*	 Fields FPBAvlThreshold	 */
#define MPA_FPBAVLTHRESHOLD0_WIDTH                                            3
#define MPA_FPBAVLTHRESHOLD0_SHIFT                                            8
#define MPA_FPBAVLTHRESHOLD0_MASK                                    0x00000700
#define MPA_FPBAVLTHRESHOLD0_RD(src)                  (((src) & 0x00000700)>>8)
#define MPA_FPBAVLTHRESHOLD0_WR(src)             (((u32)(src)<<8) & 0x00000700)
#define MPA_FPBAVLTHRESHOLD0_SET(dst,src) \
                       (((dst) & ~0x00000700) | (((u32)(src)<<8) & 0x00000700))
/*	 Fields WQDecThreshold	 */
#define MPA_WQDECTHRESHOLD0_WIDTH                                             4
#define MPA_WQDECTHRESHOLD0_SHIFT                                             4
#define MPA_WQDECTHRESHOLD0_MASK                                     0x000000f0
#define MPA_WQDECTHRESHOLD0_RD(src)                   (((src) & 0x000000f0)>>4)
#define MPA_WQDECTHRESHOLD0_WR(src)              (((u32)(src)<<4) & 0x000000f0)
#define MPA_WQDECTHRESHOLD0_SET(dst,src) \
                       (((dst) & ~0x000000f0) | (((u32)(src)<<4) & 0x000000f0))
/*	 Fields WQBAvlThreshold	 */
#define MPA_WQBAVLTHRESHOLD0_WIDTH                                            4
#define MPA_WQBAVLTHRESHOLD0_SHIFT                                            0
#define MPA_WQBAVLTHRESHOLD0_MASK                                    0x0000000f
#define MPA_WQBAVLTHRESHOLD0_RD(src)                     (((src) & 0x0000000f))
#define MPA_WQBAVLTHRESHOLD0_WR(src)                (((u32)(src)) & 0x0000000f)
#define MPA_WQBAVLTHRESHOLD0_SET(dst,src) \
                          (((dst) & ~0x0000000f) | (((u32)(src)) & 0x0000000f))

/*	Register CfgSsQmi1	*/ 
/*	 Fields CmOverrideLLFields	 */
#define MPA_CMOVERRIDELLFIELDS1_WIDTH                                         1
#define MPA_CMOVERRIDELLFIELDS1_SHIFT                                        29
#define MPA_CMOVERRIDELLFIELDS1_MASK                                 0x20000000
#define MPA_CMOVERRIDELLFIELDS1_RD(src)              (((src) & 0x20000000)>>29)
#define MPA_CMOVERRIDELLFIELDS1_WR(src)         (((u32)(src)<<29) & 0x20000000)
#define MPA_CMOVERRIDELLFIELDS1_SET(dst,src) \
                      (((dst) & ~0x20000000) | (((u32)(src)<<29) & 0x20000000))
/*	 Fields CmCtrlbuffThreshold	 */
#define MPA_CMCTRLBUFFTHRESHOLD1_WIDTH                                        3
#define MPA_CMCTRLBUFFTHRESHOLD1_SHIFT                                       26
#define MPA_CMCTRLBUFFTHRESHOLD1_MASK                                0x1c000000
#define MPA_CMCTRLBUFFTHRESHOLD1_RD(src)             (((src) & 0x1c000000)>>26)
#define MPA_CMCTRLBUFFTHRESHOLD1_WR(src)        (((u32)(src)<<26) & 0x1c000000)
#define MPA_CMCTRLBUFFTHRESHOLD1_SET(dst,src) \
                      (((dst) & ~0x1c000000) | (((u32)(src)<<26) & 0x1c000000))
/*	 Fields CmDatabuffThreshold	 */
#define MPA_CMDATABUFFTHRESHOLD1_WIDTH                                        5
#define MPA_CMDATABUFFTHRESHOLD1_SHIFT                                       21
#define MPA_CMDATABUFFTHRESHOLD1_MASK                                0x03e00000
#define MPA_CMDATABUFFTHRESHOLD1_RD(src)             (((src) & 0x03e00000)>>21)
#define MPA_CMDATABUFFTHRESHOLD1_WR(src)        (((u32)(src)<<21) & 0x03e00000)
#define MPA_CMDATABUFFTHRESHOLD1_SET(dst,src) \
                      (((dst) & ~0x03e00000) | (((u32)(src)<<21) & 0x03e00000))
/*	 Fields CmMsgfThreshold	 */
#define MPA_CMMSGFTHRESHOLD1_WIDTH                                            4
#define MPA_CMMSGFTHRESHOLD1_SHIFT                                           17
#define MPA_CMMSGFTHRESHOLD1_MASK                                    0x001e0000
#define MPA_CMMSGFTHRESHOLD1_RD(src)                 (((src) & 0x001e0000)>>17)
#define MPA_CMMSGFTHRESHOLD1_WR(src)            (((u32)(src)<<17) & 0x001e0000)
#define MPA_CMMSGFTHRESHOLD1_SET(dst,src) \
                      (((dst) & ~0x001e0000) | (((u32)(src)<<17) & 0x001e0000))
/*	 Fields CmRegfThreshold	 */
#define MPA_CMREGFTHRESHOLD1_WIDTH                                            3
#define MPA_CMREGFTHRESHOLD1_SHIFT                                           14
#define MPA_CMREGFTHRESHOLD1_MASK                                    0x0001c000
#define MPA_CMREGFTHRESHOLD1_RD(src)                 (((src) & 0x0001c000)>>14)
#define MPA_CMREGFTHRESHOLD1_WR(src)            (((u32)(src)<<14) & 0x0001c000)
#define MPA_CMREGFTHRESHOLD1_SET(dst,src) \
                      (((dst) & ~0x0001c000) | (((u32)(src)<<14) & 0x0001c000))
/*	 Fields QMDeviceAddress	 */
#define MPA_QMDEVICEADDRESS1_WIDTH                                           14
#define MPA_QMDEVICEADDRESS1_SHIFT                                            0
#define MPA_QMDEVICEADDRESS1_MASK                                    0x00003fff
#define MPA_QMDEVICEADDRESS1_RD(src)                     (((src) & 0x00003fff))
#define MPA_QMDEVICEADDRESS1_WR(src)                (((u32)(src)) & 0x00003fff)
#define MPA_QMDEVICEADDRESS1_SET(dst,src) \
                          (((dst) & ~0x00003fff) | (((u32)(src)) & 0x00003fff))

/*	Register CfgSsQmiFPBuffer	*/ 
/*	 Fields Disable	 */
#define MPA_DISABLE_WIDTH                                                    16
#define MPA_DISABLE_SHIFT                                                    16
#define MPA_DISABLE_MASK                                             0xffff0000
#define MPA_DISABLE_RD(src)                          (((src) & 0xffff0000)>>16)
#define MPA_DISABLE_WR(src)                     (((u32)(src)<<16) & 0xffff0000)
#define MPA_DISABLE_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields Reset	 */
#define MPA_RESET_WIDTH                                                      16
#define MPA_RESET_SHIFT                                                       0
#define MPA_RESET_MASK                                               0x0000ffff
#define MPA_RESET_RD(src)                                (((src) & 0x0000ffff))
#define MPA_RESET_WR(src)                           (((u32)(src)) & 0x0000ffff)
#define MPA_RESET_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register CfgSsQmiWQBuffer	*/ 
/*	 Fields Disable	 */
#define MPA_DISABLE_F1_WIDTH                                                 16
#define MPA_DISABLE_F1_SHIFT                                                 16
#define MPA_DISABLE_F1_MASK                                          0xffff0000
#define MPA_DISABLE_F1_RD(src)                       (((src) & 0xffff0000)>>16)
#define MPA_DISABLE_F1_WR(src)                  (((u32)(src)<<16) & 0xffff0000)
#define MPA_DISABLE_F1_SET(dst,src) \
                      (((dst) & ~0xffff0000) | (((u32)(src)<<16) & 0xffff0000))
/*	 Fields Reset	 */
#define MPA_RESET_F1_WIDTH                                                   16
#define MPA_RESET_F1_SHIFT                                                    0
#define MPA_RESET_F1_MASK                                            0x0000ffff
#define MPA_RESET_F1_RD(src)                             (((src) & 0x0000ffff))
#define MPA_RESET_F1_WR(src)                        (((u32)(src)) & 0x0000ffff)
#define MPA_RESET_F1_SET(dst,src) \
                          (((dst) & ~0x0000ffff) | (((u32)(src)) & 0x0000ffff))

/*	Register StsSsQmiFPBuffer0	*/ 
/*	 Fields WritePointer	 */
#define MPA_WRITEPOINTER0_WIDTH                                              32
#define MPA_WRITEPOINTER0_SHIFT                                               0
#define MPA_WRITEPOINTER0_MASK                                       0xffffffff
#define MPA_WRITEPOINTER0_RD(src)                        (((src) & 0xffffffff))
#define MPA_WRITEPOINTER0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register StsSsQmiFPBuffer1	*/ 
/*	 Fields WritePointer	 */
#define MPA_WRITEPOINTER1_WIDTH                                               4
#define MPA_WRITEPOINTER1_SHIFT                                              24
#define MPA_WRITEPOINTER1_MASK                                       0x0f000000
#define MPA_WRITEPOINTER1_RD(src)                    (((src) & 0x0f000000)>>24)
#define MPA_WRITEPOINTER1_SET(dst,src) \
                      (((dst) & ~0x0f000000) | (((u32)(src)<<24) & 0x0f000000))
/*	 Fields Entries	 */
#define MPA_ENTRIES1_WIDTH                                                   24
#define MPA_ENTRIES1_SHIFT                                                    0
#define MPA_ENTRIES1_MASK                                            0x00ffffff
#define MPA_ENTRIES1_RD(src)                             (((src) & 0x00ffffff))
#define MPA_ENTRIES1_SET(dst,src) \
                          (((dst) & ~0x00ffffff) | (((u32)(src)) & 0x00ffffff))

/*	Register StsSsQmiFPBuffer2	*/ 
/*	 Fields Entries	 */
#define MPA_ENTRIES2_WIDTH                                                   30
#define MPA_ENTRIES2_SHIFT                                                    0
#define MPA_ENTRIES2_MASK                                            0x3fffffff
#define MPA_ENTRIES2_RD(src)                             (((src) & 0x3fffffff))
#define MPA_ENTRIES2_SET(dst,src) \
                          (((dst) & ~0x3fffffff) | (((u32)(src)) & 0x3fffffff))

/*	Register StsSsQmiWQBuffer0	*/ 
/*	 Fields WritePointer	 */
#define MPA_WRITEPOINTER0_F1_WIDTH                                           24
#define MPA_WRITEPOINTER0_F1_SHIFT                                            0
#define MPA_WRITEPOINTER0_F1_MASK                                    0x00ffffff
#define MPA_WRITEPOINTER0_F1_RD(src)                     (((src) & 0x00ffffff))
#define MPA_WRITEPOINTER0_F1_SET(dst,src) \
                          (((dst) & ~0x00ffffff) | (((u32)(src)) & 0x00ffffff))

/*	Register StsSsQmiWQBuffer1	*/ 
/*	 Fields Entries	 */
#define MPA_ENTRIES1_F1_WIDTH                                                 4
#define MPA_ENTRIES1_F1_SHIFT                                                27
#define MPA_ENTRIES1_F1_MASK                                         0x78000000
#define MPA_ENTRIES1_F1_RD(src)                      (((src) & 0x78000000)>>27)
#define MPA_ENTRIES1_F1_SET(dst,src) \
                      (((dst) & ~0x78000000) | (((u32)(src)<<27) & 0x78000000))
/*	 Fields WritePointer	 */
#define MPA_WRITEPOINTER1_F1_WIDTH                                           27
#define MPA_WRITEPOINTER1_F1_SHIFT                                            0
#define MPA_WRITEPOINTER1_F1_MASK                                    0x07ffffff
#define MPA_WRITEPOINTER1_F1_RD(src)                     (((src) & 0x07ffffff))
#define MPA_WRITEPOINTER1_F1_SET(dst,src) \
                          (((dst) & ~0x07ffffff) | (((u32)(src)) & 0x07ffffff))

/*	Register StsSsQmiWQBuffer2	*/ 
/*	 Fields Entries	 */
#define MPA_ENTRIES2_F1_WIDTH                                                32
#define MPA_ENTRIES2_F1_SHIFT                                                 0
#define MPA_ENTRIES2_F1_MASK                                         0xffffffff
#define MPA_ENTRIES2_F1_RD(src)                          (((src) & 0xffffffff))
#define MPA_ENTRIES2_F1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register StsSsQmiWQBuffer3	*/ 
/*	 Fields Entries	 */
#define MPA_ENTRIES3_WIDTH                                                   32
#define MPA_ENTRIES3_SHIFT                                                    0
#define MPA_ENTRIES3_MASK                                            0xffffffff
#define MPA_ENTRIES3_RD(src)                             (((src) & 0xffffffff))
#define MPA_ENTRIES3_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiSab	*/ 
/*	 Fields EnableMonitoring	 */
#define MPA_ENABLEMONITORING_WIDTH                                           17
#define MPA_ENABLEMONITORING_SHIFT                                            0
#define MPA_ENABLEMONITORING_MASK                                    0x0001ffff
#define MPA_ENABLEMONITORING_RD(src)                     (((src) & 0x0001ffff))
#define MPA_ENABLEMONITORING_WR(src)                (((u32)(src)) & 0x0001ffff)
#define MPA_ENABLEMONITORING_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register CfgSsQmiSab0	*/ 
/*	 Fields QID	 */
#define MPA_QID0_WIDTH                                                       32
#define MPA_QID0_SHIFT                                                        0
#define MPA_QID0_MASK                                                0xffffffff
#define MPA_QID0_RD(src)                                 (((src) & 0xffffffff))
#define MPA_QID0_WR(src)                            (((u32)(src)) & 0xffffffff)
#define MPA_QID0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiSab1	*/ 
/*	 Fields QID	 */
#define MPA_QID1_WIDTH                                                       32
#define MPA_QID1_SHIFT                                                        0
#define MPA_QID1_MASK                                                0xffffffff
#define MPA_QID1_RD(src)                                 (((src) & 0xffffffff))
#define MPA_QID1_WR(src)                            (((u32)(src)) & 0xffffffff)
#define MPA_QID1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiSab2	*/ 
/*	 Fields QID	 */
#define MPA_QID2_WIDTH                                                       32
#define MPA_QID2_SHIFT                                                        0
#define MPA_QID2_MASK                                                0xffffffff
#define MPA_QID2_RD(src)                                 (((src) & 0xffffffff))
#define MPA_QID2_WR(src)                            (((u32)(src)) & 0xffffffff)
#define MPA_QID2_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiSab3	*/ 
/*	 Fields QID	 */
#define MPA_QID3_WIDTH                                                       32
#define MPA_QID3_SHIFT                                                        0
#define MPA_QID3_MASK                                                0xffffffff
#define MPA_QID3_RD(src)                                 (((src) & 0xffffffff))
#define MPA_QID3_WR(src)                            (((u32)(src)) & 0xffffffff)
#define MPA_QID3_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiSab4	*/ 
/*	 Fields QID	 */
#define MPA_QID4_WIDTH                                                        8
#define MPA_QID4_SHIFT                                                        0
#define MPA_QID4_MASK                                                0x000000ff
#define MPA_QID4_RD(src)                                 (((src) & 0x000000ff))
#define MPA_QID4_WR(src)                            (((u32)(src)) & 0x000000ff)
#define MPA_QID4_SET(dst,src) \
                          (((dst) & ~0x000000ff) | (((u32)(src)) & 0x000000ff))

/*	Register StsSsQmiInt0	*/ 
/*	 Fields FPOverflow	 */
#define MPA_FPOVERFLOW0_WIDTH                                                18
#define MPA_FPOVERFLOW0_SHIFT                                                 0
#define MPA_FPOVERFLOW0_MASK                                         0x0003ffff
#define MPA_FPOVERFLOW0_RD(src)                          (((src) & 0x0003ffff))
#define MPA_FPOVERFLOW0_WR(src)                     (((u32)(src)) & 0x0003ffff)
#define MPA_FPOVERFLOW0_SET(dst,src) \
                          (((dst) & ~0x0003ffff) | (((u32)(src)) & 0x0003ffff))

/*	Register StsSsQmiInt0Mask	*/
/*    Mask Register Fields FPOverflowMask    */
#define MPA_FPOVERFLOWMASK_WIDTH                                             18
#define MPA_FPOVERFLOWMASK_SHIFT                                              0
#define MPA_FPOVERFLOWMASK_MASK                                      0x0003ffff
#define MPA_FPOVERFLOWMASK_RD(src)                       (((src) & 0x0003ffff))
#define MPA_FPOVERFLOWMASK_WR(src)                  (((u32)(src)) & 0x0003ffff)
#define MPA_FPOVERFLOWMASK_SET(dst,src) \
                          (((dst) & ~0x0003ffff) | (((u32)(src)) & 0x0003ffff))

/*	Register StsSsQmiInt1	*/ 
/*	 Fields WQOverflow	 */
#define MPA_WQOVERFLOW1_WIDTH                                                17
#define MPA_WQOVERFLOW1_SHIFT                                                 0
#define MPA_WQOVERFLOW1_MASK                                         0x0001ffff
#define MPA_WQOVERFLOW1_RD(src)                          (((src) & 0x0001ffff))
#define MPA_WQOVERFLOW1_WR(src)                     (((u32)(src)) & 0x0001ffff)
#define MPA_WQOVERFLOW1_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register StsSsQmiInt1Mask	*/
/*    Mask Register Fields WQOverflowMask    */
#define MPA_WQOVERFLOWMASK_WIDTH                                             17
#define MPA_WQOVERFLOWMASK_SHIFT                                              0
#define MPA_WQOVERFLOWMASK_MASK                                      0x0001ffff
#define MPA_WQOVERFLOWMASK_RD(src)                       (((src) & 0x0001ffff))
#define MPA_WQOVERFLOWMASK_WR(src)                  (((u32)(src)) & 0x0001ffff)
#define MPA_WQOVERFLOWMASK_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register StsSsQmiInt2	*/ 
/*	 Fields FPUnderRun	 */
#define MPA_FPUNDERRUN2_WIDTH                                                18
#define MPA_FPUNDERRUN2_SHIFT                                                 0
#define MPA_FPUNDERRUN2_MASK                                         0x0003ffff
#define MPA_FPUNDERRUN2_RD(src)                          (((src) & 0x0003ffff))
#define MPA_FPUNDERRUN2_WR(src)                     (((u32)(src)) & 0x0003ffff)
#define MPA_FPUNDERRUN2_SET(dst,src) \
                          (((dst) & ~0x0003ffff) | (((u32)(src)) & 0x0003ffff))

/*	Register StsSsQmiInt2Mask	*/
/*    Mask Register Fields FPUnderRunMask    */
#define MPA_FPUNDERRUNMASK_WIDTH                                             18
#define MPA_FPUNDERRUNMASK_SHIFT                                              0
#define MPA_FPUNDERRUNMASK_MASK                                      0x0003ffff
#define MPA_FPUNDERRUNMASK_RD(src)                       (((src) & 0x0003ffff))
#define MPA_FPUNDERRUNMASK_WR(src)                  (((u32)(src)) & 0x0003ffff)
#define MPA_FPUNDERRUNMASK_SET(dst,src) \
                          (((dst) & ~0x0003ffff) | (((u32)(src)) & 0x0003ffff))

/*	Register StsSsQmiInt3	*/ 
/*	 Fields WQUnderRun	 */
#define MPA_WQUNDERRUN3_WIDTH                                                17
#define MPA_WQUNDERRUN3_SHIFT                                                 0
#define MPA_WQUNDERRUN3_MASK                                         0x0001ffff
#define MPA_WQUNDERRUN3_RD(src)                          (((src) & 0x0001ffff))
#define MPA_WQUNDERRUN3_WR(src)                     (((u32)(src)) & 0x0001ffff)
#define MPA_WQUNDERRUN3_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register StsSsQmiInt3Mask	*/
/*    Mask Register Fields WQUnderRunMask    */
#define MPA_WQUNDERRUNMASK_WIDTH                                             17
#define MPA_WQUNDERRUNMASK_SHIFT                                              0
#define MPA_WQUNDERRUNMASK_MASK                                      0x0001ffff
#define MPA_WQUNDERRUNMASK_RD(src)                       (((src) & 0x0001ffff))
#define MPA_WQUNDERRUNMASK_WR(src)                  (((u32)(src)) & 0x0001ffff)
#define MPA_WQUNDERRUNMASK_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register StsSsQmiInt4	*/ 
/*	 Fields axiwcmr_slverr	 */
#define MPA_AXIWCMR_SLVERR4_WIDTH                                             1
#define MPA_AXIWCMR_SLVERR4_SHIFT                                             1
#define MPA_AXIWCMR_SLVERR4_MASK                                     0x00000002
#define MPA_AXIWCMR_SLVERR4_RD(src)                   (((src) & 0x00000002)>>1)
#define MPA_AXIWCMR_SLVERR4_WR(src)              (((u32)(src)<<1) & 0x00000002)
#define MPA_AXIWCMR_SLVERR4_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields axiwcmr_decerr	 */
#define MPA_AXIWCMR_DECERR4_WIDTH                                             1
#define MPA_AXIWCMR_DECERR4_SHIFT                                             0
#define MPA_AXIWCMR_DECERR4_MASK                                     0x00000001
#define MPA_AXIWCMR_DECERR4_RD(src)                      (((src) & 0x00000001))
#define MPA_AXIWCMR_DECERR4_WR(src)                 (((u32)(src)) & 0x00000001)
#define MPA_AXIWCMR_DECERR4_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register StsSsQmiInt4Mask	*/
/*    Mask Register Fields axiwcmr_slverrMask    */
#define MPA_AXIWCMR_SLVERRMASK_WIDTH                                          1
#define MPA_AXIWCMR_SLVERRMASK_SHIFT                                          1
#define MPA_AXIWCMR_SLVERRMASK_MASK                                  0x00000002
#define MPA_AXIWCMR_SLVERRMASK_RD(src)                (((src) & 0x00000002)>>1)
#define MPA_AXIWCMR_SLVERRMASK_WR(src)           (((u32)(src)<<1) & 0x00000002)
#define MPA_AXIWCMR_SLVERRMASK_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*    Mask Register Fields axiwcmr_decerrMask    */
#define MPA_AXIWCMR_DECERRMASK_WIDTH                                          1
#define MPA_AXIWCMR_DECERRMASK_SHIFT                                          0
#define MPA_AXIWCMR_DECERRMASK_MASK                                  0x00000001
#define MPA_AXIWCMR_DECERRMASK_RD(src)                   (((src) & 0x00000001))
#define MPA_AXIWCMR_DECERRMASK_WR(src)              (((u32)(src)) & 0x00000001)
#define MPA_AXIWCMR_DECERRMASK_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register CfgSsQmiDbgCtrl	*/ 
/*	 Fields PBID	 */
#define MPA_PBID_WIDTH                                                        6
#define MPA_PBID_SHIFT                                                       11
#define MPA_PBID_MASK                                                0x0001f800
#define MPA_PBID_RD(src)                             (((src) & 0x0001f800)>>11)
#define MPA_PBID_WR(src)                        (((u32)(src)<<11) & 0x0001f800)
#define MPA_PBID_SET(dst,src) \
                      (((dst) & ~0x0001f800) | (((u32)(src)<<11) & 0x0001f800))
/*	 Fields nAck	 */
#define MPA_NACK_F2_WIDTH                                                     1
#define MPA_NACK_F2_SHIFT                                                    10
#define MPA_NACK_F2_MASK                                             0x00000400
#define MPA_NACK_F2_RD(src)                          (((src) & 0x00000400)>>10)
#define MPA_NACK_F2_WR(src)                     (((u32)(src)<<10) & 0x00000400)
#define MPA_NACK_F2_SET(dst,src) \
                      (((dst) & ~0x00000400) | (((u32)(src)<<10) & 0x00000400))
/*	 Fields last	 */
#define MPA_LAST_WIDTH                                                        1
#define MPA_LAST_SHIFT                                                        9
#define MPA_LAST_MASK                                                0x00000200
#define MPA_LAST_RD(src)                              (((src) & 0x00000200)>>9)
#define MPA_LAST_WR(src)                         (((u32)(src)<<9) & 0x00000200)
#define MPA_LAST_SET(dst,src) \
                       (((dst) & ~0x00000200) | (((u32)(src)<<9) & 0x00000200))
/*	 Fields Push	 */
#define MPA_PUSH_WIDTH                                                        1
#define MPA_PUSH_SHIFT                                                        8
#define MPA_PUSH_MASK                                                0x00000100
#define MPA_PUSH_RD(src)                              (((src) & 0x00000100)>>8)
#define MPA_PUSH_WR(src)                         (((u32)(src)<<8) & 0x00000100)
#define MPA_PUSH_SET(dst,src) \
                       (((dst) & ~0x00000100) | (((u32)(src)<<8) & 0x00000100))
/*	 Fields Write	 */
#define MPA_WRITE_WIDTH                                                       1
#define MPA_WRITE_SHIFT                                                       7
#define MPA_WRITE_MASK                                               0x00000080
#define MPA_WRITE_RD(src)                             (((src) & 0x00000080)>>7)
#define MPA_WRITE_WR(src)                        (((u32)(src)<<7) & 0x00000080)
#define MPA_WRITE_SET(dst,src) \
                       (((dst) & ~0x00000080) | (((u32)(src)<<7) & 0x00000080))
/*	 Fields Pop	 */
#define MPA_POP_WIDTH                                                         1
#define MPA_POP_SHIFT                                                         6
#define MPA_POP_MASK                                                 0x00000040
#define MPA_POP_RD(src)                               (((src) & 0x00000040)>>6)
#define MPA_POP_WR(src)                          (((u32)(src)<<6) & 0x00000040)
#define MPA_POP_SET(dst,src) \
                       (((dst) & ~0x00000040) | (((u32)(src)<<6) & 0x00000040))
/*	 Fields Read	 */
#define MPA_READ_WIDTH                                                        1
#define MPA_READ_SHIFT                                                        5
#define MPA_READ_MASK                                                0x00000020
#define MPA_READ_RD(src)                              (((src) & 0x00000020)>>5)
#define MPA_READ_WR(src)                         (((u32)(src)<<5) & 0x00000020)
#define MPA_READ_SET(dst,src) \
                       (((dst) & ~0x00000020) | (((u32)(src)<<5) & 0x00000020))
/*	 Fields BufferAddr	 */
#define MPA_BUFFERADDR_WIDTH                                                  5
#define MPA_BUFFERADDR_SHIFT                                                  0
#define MPA_BUFFERADDR_MASK                                          0x0000001f
#define MPA_BUFFERADDR_RD(src)                           (((src) & 0x0000001f))
#define MPA_BUFFERADDR_WR(src)                      (((u32)(src)) & 0x0000001f)
#define MPA_BUFFERADDR_SET(dst,src) \
                          (((dst) & ~0x0000001f) | (((u32)(src)) & 0x0000001f))

/*	Register CfgSsQmiDbgData0	*/ 
/*	 Fields Data	 */
#define MPA_DATA0_WIDTH                                                      32
#define MPA_DATA0_SHIFT                                                       0
#define MPA_DATA0_MASK                                               0xffffffff
#define MPA_DATA0_RD(src)                                (((src) & 0xffffffff))
#define MPA_DATA0_WR(src)                           (((u32)(src)) & 0xffffffff)
#define MPA_DATA0_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiDbgData1	*/ 
/*	 Fields Data	 */
#define MPA_DATA1_WIDTH                                                      32
#define MPA_DATA1_SHIFT                                                       0
#define MPA_DATA1_MASK                                               0xffffffff
#define MPA_DATA1_RD(src)                                (((src) & 0xffffffff))
#define MPA_DATA1_WR(src)                           (((u32)(src)) & 0xffffffff)
#define MPA_DATA1_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiDbgData2	*/ 
/*	 Fields Data	 */
#define MPA_DATA2_WIDTH                                                      32
#define MPA_DATA2_SHIFT                                                       0
#define MPA_DATA2_MASK                                               0xffffffff
#define MPA_DATA2_RD(src)                                (((src) & 0xffffffff))
#define MPA_DATA2_WR(src)                           (((u32)(src)) & 0xffffffff)
#define MPA_DATA2_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiDbgData3	*/ 
/*	 Fields Data	 */
#define MPA_DATA3_WIDTH                                                      32
#define MPA_DATA3_SHIFT                                                       0
#define MPA_DATA3_MASK                                               0xffffffff
#define MPA_DATA3_RD(src)                                (((src) & 0xffffffff))
#define MPA_DATA3_WR(src)                           (((u32)(src)) & 0xffffffff)
#define MPA_DATA3_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register StsSsQmiDbgData	*/ 
/*	 Fields Data	 */
#define MPA_DATA_WIDTH                                                       32
#define MPA_DATA_SHIFT                                                        0
#define MPA_DATA_MASK                                                0xffffffff
#define MPA_DATA_RD(src)                                 (((src) & 0xffffffff))
#define MPA_DATA_SET(dst,src) \
                          (((dst) & ~0xffffffff) | (((u32)(src)) & 0xffffffff))

/*	Register CfgSsQmiLite	*/ 
/*	 Fields QMLiteDeviceAddress	 */
#define MPA_QMLITEDEVICEADDRESS_WIDTH                                        15
#define MPA_QMLITEDEVICEADDRESS_SHIFT                                         0
#define MPA_QMLITEDEVICEADDRESS_MASK                                 0x00007fff
#define MPA_QMLITEDEVICEADDRESS_RD(src)                  (((src) & 0x00007fff))
#define MPA_QMLITEDEVICEADDRESS_WR(src)             (((u32)(src)) & 0x00007fff)
#define MPA_QMLITEDEVICEADDRESS_SET(dst,src) \
                          (((dst) & ~0x00007fff) | (((u32)(src)) & 0x00007fff))

/*	Register CfgSsQmiFPQAssoc	*/ 
/*	 Fields Association	 */
#define MPA_ASSOCIATION_WIDTH                                                18
#define MPA_ASSOCIATION_SHIFT                                                 0
#define MPA_ASSOCIATION_MASK                                         0x0003ffff
#define MPA_ASSOCIATION_RD(src)                          (((src) & 0x0003ffff))
#define MPA_ASSOCIATION_WR(src)                     (((u32)(src)) & 0x0003ffff)
#define MPA_ASSOCIATION_SET(dst,src) \
                          (((dst) & ~0x0003ffff) | (((u32)(src)) & 0x0003ffff))

/*	Register CfgSsQmiWQAssoc	*/ 
/*	 Fields Association	 */
#define MPA_ASSOCIATION_F1_WIDTH                                             17
#define MPA_ASSOCIATION_F1_SHIFT                                              0
#define MPA_ASSOCIATION_F1_MASK                                      0x0001ffff
#define MPA_ASSOCIATION_F1_RD(src)                       (((src) & 0x0001ffff))
#define MPA_ASSOCIATION_F1_WR(src)                  (((u32)(src)) & 0x0001ffff)
#define MPA_ASSOCIATION_F1_SET(dst,src) \
                          (((dst) & ~0x0001ffff) | (((u32)(src)) & 0x0001ffff))

/*	Register CfgSsQmiMemory	*/ 
/*	 Fields RMA	 */
#define MPA_RMA_WIDTH                                                         2
#define MPA_RMA_SHIFT                                                         4
#define MPA_RMA_MASK                                                 0x00000030
#define MPA_RMA_RD(src)                               (((src) & 0x00000030)>>4)
#define MPA_RMA_WR(src)                          (((u32)(src)<<4) & 0x00000030)
#define MPA_RMA_SET(dst,src) \
                       (((dst) & ~0x00000030) | (((u32)(src)<<4) & 0x00000030))
/*	 Fields RMB	 */
#define MPA_RMB_WIDTH                                                         2
#define MPA_RMB_SHIFT                                                         2
#define MPA_RMB_MASK                                                 0x0000000c
#define MPA_RMB_RD(src)                               (((src) & 0x0000000c)>>2)
#define MPA_RMB_WR(src)                          (((u32)(src)<<2) & 0x0000000c)
#define MPA_RMB_SET(dst,src) \
                       (((dst) & ~0x0000000c) | (((u32)(src)<<2) & 0x0000000c))
/*	 Fields RMEA	 */
#define MPA_RMEA_WIDTH                                                        1
#define MPA_RMEA_SHIFT                                                        1
#define MPA_RMEA_MASK                                                0x00000002
#define MPA_RMEA_RD(src)                              (((src) & 0x00000002)>>1)
#define MPA_RMEA_WR(src)                         (((u32)(src)<<1) & 0x00000002)
#define MPA_RMEA_SET(dst,src) \
                       (((dst) & ~0x00000002) | (((u32)(src)<<1) & 0x00000002))
/*	 Fields RMEB	 */
#define MPA_RMEB_WIDTH                                                        1
#define MPA_RMEB_SHIFT                                                        0
#define MPA_RMEB_MASK                                                0x00000001
#define MPA_RMEB_RD(src)                                 (((src) & 0x00000001))
#define MPA_RMEB_WR(src)                            (((u32)(src)) & 0x00000001)
#define MPA_RMEB_SET(dst,src) \
                          (((dst) & ~0x00000001) | (((u32)(src)) & 0x00000001))

/*	Register StsSsQmiFifo	*/ 
/*	 Fields empty	 */
#define MPA_EMPTY_WIDTH                                                      27
#define MPA_EMPTY_SHIFT                                                       0
#define MPA_EMPTY_MASK                                               0x07ffffff
#define MPA_EMPTY_RD(src)                                (((src) & 0x07ffffff))
#define MPA_EMPTY_SET(dst,src) \
                          (((dst) & ~0x07ffffff) | (((u32)(src)) & 0x07ffffff))
	


#endif
