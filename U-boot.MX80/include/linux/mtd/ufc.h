/**
 * APM SoC APM86xxx UFC  
 *
 * Copyright (c) 2010 Applied Micro Circuits Corporation.
 * All rights reserved. Feng Kan <fkan@apm.com>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 *  Info:
 *   Contains defines, datastructures for ufc(Naksha) generic flash controller
 *
 */
#ifndef __LINUX_MTD_UFC_H
#define __LINUX_MTD_UFC_H

#if defined(CONFIG_I2C_U_BOOT) || defined(CONFIG_I2C_SPL)
#define	UFC_BASE_ADDR		0x60000000
#else
#define	UFC_BASE_ADDR		CONFIG_SYS_EBC_BASE
#endif

/* UFC Register definitions */
#define UFC_CMD_THRES		0x00
#define UFC_INT_THRES		0x04
#define UFC_INT_EN		0x08
#define UFC_INT_STAT		0x0C
#define	UFC_TX_CMDDATA 		0x10
#define UFC_RX_CMDDATA		0x14
#define UFC_STAT1		0x18
#define UFC_STAT2		0x1c
#define UFC_FLAG		0x20
#define UFC_NFLASH_CTRL		0x24
#define UFC_NFLASH_CTRL2_0	0x28
#define UFC_NFLASH_ROW_ADDR	0x2C
#define UFC_NFLASH_COL_ADDR     0x30
#define	UFC_NFLASH_TIM_INTER_0	0x34
#define	UFC_SPI_CTRL		0x38
#define	UFC_NFLASH_CTRL3	0x44
#define	UFC_NFLASH_CTRL2_1	0x48
#define	UFC_NFLASH_CTRL2_2	0x4C
#define	UFC_NFLASH_CTRL2_3	0x50
#define	UFC_NFLASH_TIM_INTER_1	0x54
#define	UFC_NFLASH_TIM_INTER_2	0x58
#define	UFC_NFLASH_TIM_INTER_3	0x5C
#define	UFC_PKTCNT_PKTSIZE	0x60
#define	UFC_NFLASH_CMD_REG	0x64
#define	UFC_NFLASH_SPARE_OFF	0x68
#define	UFC_NFLASH_ECC_REG(n)	((0x6C + (n * 4)))
#define	UFC_STAT_REG		0xAC
#define UFC_RDYBSYLOW_CND(n)	((0xB0 + (n * 4)))
#define	UFC_RDYBSYLOW_CNT_0	0xB0
#define	UFC_RDYBSYLOW_CNT_1	0xB4
#define	UFC_RDYBSYLOW_CNT_2	0xB8
#define	UFC_RDYBSYLOW_CNT_3	0xBC
#define	UFC_TIMING1_INTER(n)	((0xC0 + (n * 4)))
#define	UFC_TIMING1_INTER_0	0xC0
#define	UFC_TIMING1_INTER_1	0xC4
#define	UFC_TIMING1_INTER_2	0xC8
#define	UFC_TIMING1_INTER_3	0xCC
#define	UFC_SRAM_CTRL(n)	((0xD0 + (n * 4)))
#define	UFC_SRAM_CTRL1_0	0xD0
#define	UFC_SRAM_CTRL1_1	0xD4
#define	UFC_SRAM_CTRL1_2	0xD8
#define	UFC_SRAM_CTRL1_4	0xDC
#define UFC_SRAM_CTRL2(n)	((0xE0 + (n * 4)))
#define	UFC_SRAM_CTRL2_0	0xE0
#define	UFC_SRAM_CTRL2_1	0xE4
#define	UFC_SRAM_CTRL2_2	0xE8
#define	UFC_SRAM_CTRL2_3	0xEC
#define	UFC_SRAM_CFG(n)		((0xF0 + (n * 4)))
#define	UFC_SRAM_CFG_0		0xF0
#define	UFC_SRAM_CFG_1		0xF4
#define	UFC_SRAM_CFG_2		0xF8
#define	UFC_SRAM_CFG_3		0xFC
#define	UFC_SRAM_BANKCFG(n)	((0x100 + (n * 4)))
#define	UFC_SRAM_BANKCFG_0	0x100
#define	UFC_SRAM_BANKCFG_1	0x104
#define	UFC_SRAM_BANKCFG_2	0x108
#define	UFC_SRAM_BANKCFG_3	0x10C
#define	UFC_SRAM_BEAR		0x110
#define	UFC_SRAM_BESR		0x114
#define	UFC_SRAM_EXTRESET	0x118
#define	UFC_SRAM_BOOT_CFG	0x11C
#define	UFC_SRAM_CS		0x120

#define UFC_MAX_BANKS		0x1

#define	UFC_RX_FIFO_CNT		0x000000FF
#define	UFC_TX_FIFO_FREE	0x0000FF00
#define	UFC_TX_FIFO_SHIFT	8

#define	UFC_FLAG_OEN		0x0000000F
/* Banks are from 0-3 */
#define UFC_FLAG_EN(x)		((1 << (x)) | (~(0xF00 & (1 << (x + 8))) & 0xF00))
#define	UFC_TX_BUF_WRRDY_INT	0x00004000
#define	UFC_RX_BUF_RDRDY_INT	0x00008000
#define	UFC_WRRD_DONE_INT	0x00010000
#define	UFC_MUL_BIT_ERR_INT	0x00002000

#define	UFC_CTRL_OPCODE1	0x000000FF
#define	UFC_CTRL_CMD0_PRE	0x00000100
#define	UFC_CTRL_COL_ADDR_PRE	0x00000200
#define	UFC_CTRL_ROW_ADDR_PRE	0x00000400
#define	UFC_CTRL_CMD1_PRE	0x00000800
#define	UFC_CTRL_READ		0x00001000
#define	UFC_CTRL_WRITE		0x00002000
#define	UFC_CTRL_ADDR_SPL	0x00004000
#define	UFC_CTRL_START		0x00008000
#define	UFC_CTRL_OPCODE2	0x00FF0000
#define	UFC_CTRL_DATACNT	0x03000000
#define	UFC_CTRL_DATAHALF	0x01000000
#define	UFC_CTRL_BUSY		0x08000000
#define UFC_CTRL_ERROR		0x10000000
#define	UFC_CTRL_FIFO_RST	0x80000000

#define UFC_CTRL_CMD1_SHIFT     16

#define	UFC_CTRL2_DEV_SIZE	0x00000001
#define	UFC_CTRL2_PROT_ENA	0x00000002
#define	UFC_CTRL2_COL_SIZE	0x0000000C
#define	UFC_CTRL2_ROW_SIZE	0x00000030

#define	UFC_TIM_WE_WIDTH	0x0000003F
#define	UFC_TIM_BUSY		0x00000FC0
#define	UFC_TIM_WE_SETUP	0x0003F000
#define	UFC_TIM_ALE_HOLD	0x00FC0000
#define	UFC_TIM_WAIT_TIME	0x3F000000

#define	UFC_FLASH_TYPE_BANK0	0x00000003
#define	UFC_FLASH_TYPE_BANK1	0x0000000C
#define	UFC_FLASH_TYPE_BANK2	0x00000030
#define	UFC_FLASH_TYPE_BANK3	0x000000C0

#define UFC_FLASH_TYPE_NAND	0x1
#define UFC_FLASH_TYPE_NOR	0x2
#define UFC_FLASH_TYPE_SRAM	0x3

#define	UFC_PKTSIZE		0x0000FFFF
#define	UFC_PKTCNT		0xFFFF0000
#define UFC_PKTCNT_SHIFT	16

#define	UFC_ECC_ON_OFF		0x00000001
#define	UFC_PAGE_SIZE		0x00000006
#define	UFC_PAGE_2K		0x00000002
#define	UFC_PAGE_4K		0x00000004
#define	UFC_FLASH_WRITE		0x00000008
#define	UFC_FLASH_READ		0x00000010
#define	UFC_FLASH_ERASE		0x00000020
#define	UFC_FLASH_RESET		0x00000080
#define	UFC_FLASH_CHCOL		0x00000100
#define	UFC_FLASH_AUTO		0x80000000

#define	UFC_SPARE_OFF		0x000000FF

#define	UFC_SRAM_CTRL1_BME	0x00000001
#define	UFC_SRAM_CTRL1_TWT	0x7F0001FE

#define	UFC_SRAM_CTRL2_FWT	0xFC000000
#define	UFC_SRAM_CTRL2_BWT	0x03800000
#define	UFC_SRAM_CTRL2_BCE	0x00400000
#define	UFC_SRAM_CTRL2_BCT	0x00300000
#define	UFC_SRAM_CTRL2_CSN	0x000C0000
#define	UFC_SRAM_CTRL2_OEN	0x00030000
#define	UFC_SRAM_CTRL2_WBN	0x0000C000
#define	UFC_SRAM_CTRL2_WBF	0x00003000
#define	UFC_SRAM_CTRL2_TH	0x00000E00
#define	UFC_SRAM_CTRL2_RE	0x00000100
#define	UFC_SRAM_CTRL2_SOR	0x00000080
#define	UFC_SRAM_CTRL2_BEM	0x00000040
#define	UFC_SRAM_CTRL2_PEN	0x00000020
#define	UFC_SRAM_CTRL2_ALN	0x00000018

#define	UFC_SRAM_BANK_RO	0x00000001
#define	UFC_SRAM_BANK_WO	0x00000002
#define	UFC_SRAM_BANK_RW	0x00000003
#define	UFC_SRAM_BW		0x00000000

#define	UFC_SRAM_CS_ADDR_BK0	0xF0000000
#define UFC_SRAM_CS_ADDR_BK1	0x0F000000

#if defined(CONFIG_NAND_SPL)
#define udelay(x)	{ \
	volatile u32 delay; \
	for (delay = 0; delay < ((x) * 100); delay++); \
}
#endif

#endif
