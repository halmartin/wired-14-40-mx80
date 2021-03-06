/*
 * Copyright (c) 2010 Applied Micro Circuits Corporation.
 * All rights reserved. Feng Kan <fkan@apm.com>.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <ppc_asm.tmpl>
#include <config.h>
#include <asm-ppc/mmu.h>

/**
 * TLB TABLE
 *
 * This table is used by the cpu boot code to setup the initial tlb
 * entries. Rather than make broad assumptions in the cpu source tree,
 * this table lets each board set things up however they like.
 *
 *  Pointer to the table is returned in r1
 *
 */
#if (defined(CONFIG_NAND_U_BOOT) && !defined(CONFIG_NAND_SPL)) || (defined(CONFIG_MEDIA_U_BOOT) && !defined(CONFIG_MEDIA_SPL))
	
#else
	.section .bootpg,"ax"
#endif
	.globl tlbtab
tlbtab:
	tlbtab_start

#ifdef CONFIG_PAL
	/*
	 * BOOT_CS (FLASH) must be first. Before relocation SA_I can be off to use the
	 * speed up boot process. It is patched after relocation to enable SA_I
	 */
	tlbentry(CONFIG_SYS_BOOT_BASE_ADDR, SZ_16M, CONFIG_SYS_BOOT_BASE_ADDR, 0xF, AC_R|AC_W|AC_X|SA_G)

	/* OCM mapping - 32KB */
	tlbentry(CONFIG_SYS_ISRAM_BASE, SZ_16K, 0xFFFF8000, 0xE, AC_R|AC_W|AC_X|SA_G)
	tlbentry(CONFIG_SYS_ISRAM_BASE+0x4000, SZ_16K, 0xFFFFC000, 0xE, AC_R|AC_W|AC_X|SA_G)
#else
	/*
	 * BOOT_CS (FLASH) must be first. Before relocation SA_I can be off to use the
	 * speed up boot process. It is patched after relocation to enable SA_I
	 */
#ifndef CONFIG_HW_BRINGUP
	tlbentry(CONFIG_SYS_BOOT_BASE_ADDR, SZ_16M, CONFIG_SYS_BOOT_BASE_ADDR, CONFIG_SYS_BOOT_BASE_ERPN, AC_R|AC_W|AC_X|SA_I)
#else
#if !defined(CONFIG_OCM_U_BOOT) && !defined(CONFIG_NAND_SPL_S2)
	tlbentry(CONFIG_SYS_BOOT_BASE_ADDR, SZ_16M, CONFIG_SYS_BOOT_BASE_ADDR, CONFIG_SYS_BOOT_BASE_ERPN, AC_R|AC_W|AC_X|SA_I)
#endif	
#ifndef CONFIG_HW_DDR
	tlbentry(0x00000000, SZ_256K, 0x00000000, 0x4, FAR|AC_R|AC_W|AC_X|SA_I)
	tlbentry(0x00040000, SZ_256K, 0x00040000, 0x4, AC_R|AC_W|AC_X|SA_I)
#endif
	
#endif
#if !defined(CONFIG_NAND_SPL_S2)
	/* OCM mapping - 32KB */
	tlbentry(CONFIG_SYS_ISRAM_BASE, SZ_16K, 0xFFFF8000, 0xE, AC_R|AC_W|AC_X|SA_I)
	tlbentry(CONFIG_SYS_ISRAM_BASE+0x4000, SZ_16K, 0xFFFFC000, 0xE, AC_R|AC_W|AC_X|SA_I)
#endif
#ifdef CONFIG_SYS_INIT_RAM_DCACHE
	tlbentry(CONFIG_SYS_INIT_RAM_ADDR, SZ_16K, 0x0, 0x2, AC_R|AC_W|AC_X|SA_G)
#endif
#endif /* CONFIG_PAL */

	/* Mapping for the Mailbox and the MEMC */
	tlbentry(CONFIG_SYS_MB_DDRC_BASE + 0x3000, SZ_4K, 0xFFFFF000, 0x3, AC_R|AC_W|AC_X|SA_I|SA_G)

	/* CSR */
	tlbentry(CONFIG_SYS_CSR_BASE, SZ_1M, CONFIG_SYS_CSR_BASE, CONFIG_SYS_PHY_CSR_BASE_HI, AC_R|AC_W|SA_G|SA_I)

	/* Primary fabric */
	tlbentry(CONFIG_SYS_PRI_FABRIC_BASE, SZ_16M, 0xDF000000, CONFIG_SYS_PHY_CSR_BASE_HI, AC_R|AC_W|SA_I)

	/* Peripheral base */
	tlbentry(CONFIG_SYS_PERIPHERAL_BASE, SZ_1M, 0xA0000000, 0xF, AC_R|AC_W|SA_G|SA_I)
	tlbentry(CONFIG_SYS_PERIPHERAL_BASE+1<<20, SZ_1M, 0xA0000000+1<<20, 0xF, AC_R|AC_W|SA_G|SA_I)
	
	/* Deep Sleep fabric */
	tlbentry(CONFIG_SYS_PERIPHERAL_BASE+2<<20, SZ_1M, 0x00400000, 0xD, AC_R|AC_W|SA_G|SA_I)
	
	/* PCIE 0, 1, and 2 memory and configuration space */
#if defined(CONFIG_PCI) && (CONFIG_SYS_PCIE0_CFGBASE != 0)	
	tlbentry(CONFIG_SYS_PCIE0_MEMBASE, SZ_256M, CONFIG_SYS_PCIE0_PHYMEMBASE_LO + CONFIG_SYS_PCIE0_MEMBASE, CONFIG_SYS_PCIE0_PHYMEMBASE_HI, AC_R|AC_W|SA_G|SA_I)
	tlbentry(CONFIG_SYS_PCIE0_CFGBASE, SZ_16M, CONFIG_SYS_PCIE0_PHYMEMBASE_LO + CONFIG_SYS_PCIE0_CFGBASE, CONFIG_SYS_PCIE0_PHYMEMBASE_HI, AC_R|AC_W|SA_G|SA_I)
#endif
#if defined(CONFIG_PCI) && (CONFIG_SYS_PCIE1_CFGBASE != 0)	
	tlbentry(CONFIG_SYS_PCIE1_MEMBASE, SZ_256M, CONFIG_SYS_PCIE1_PHYMEMBASE_LO + CONFIG_SYS_PCIE1_MEMBASE, CONFIG_SYS_PCIE1_PHYMEMBASE_HI, AC_R|AC_W|SA_G|SA_I)
	tlbentry(CONFIG_SYS_PCIE1_CFGBASE, SZ_16M, CONFIG_SYS_PCIE1_PHYMEMBASE_LO + CONFIG_SYS_PCIE1_CFGBASE, CONFIG_SYS_PCIE1_PHYMEMBASE_HI, AC_R|AC_W|SA_G|SA_I)
#endif
#if defined(CONFIG_PCI) && (CONFIG_SYS_PCIE2_CFGBASE != 0)	
	tlbentry(CONFIG_SYS_PCIE2_MEMBASE, SZ_256M, CONFIG_SYS_PCIE2_PHYMEMBASE_LO + CONFIG_SYS_PCIE2_MEMBASE, CONFIG_SYS_PCIE2_PHYMEMBASE_HI, AC_R|AC_W|SA_G|SA_I)
	tlbentry(CONFIG_SYS_PCIE2_CFGBASE, SZ_16M, CONFIG_SYS_PCIE2_PHYMEMBASE_LO + CONFIG_SYS_PCIE2_CFGBASE, CONFIG_SYS_PCIE2_PHYMEMBASE_HI, AC_R|AC_W|SA_G|SA_I)
#endif
	
	tlbtab_end

#if (defined(CONFIG_NAND_U_BOOT) && !defined(CONFIG_NAND_SPL)) || (defined(CONFIG_MEDIA_U_BOOT) && !defined(CONFIG_MEDIA_SPL))
        /*
         * For NAND booting the first TLB has to be reconfigured to full size
         * and with caching disabled after running from RAM!
         */
#define TLB00   TLB0(CONFIG_SYS_BOOT_BASE_ADDR, SZ_256M)
#define TLB01   TLB1(CONFIG_SYS_BOOT_BASE_ADDR, 1)
#define TLB02   TLB2(AC_R|AC_W|AC_X|SA_G|SA_I)

        .globl  reconfig_tlb0
reconfig_tlb0:
        sync
        isync
        addi    r4,r0,0x0000            /* TLB entry #0 */
        lis     r5,TLB00@h
        ori     r5,r5,TLB00@l
        tlbwe   r5,r4,0x0000            /* Save it out */
        lis     r5,TLB01@h
        ori     r5,r5,TLB01@l
        tlbwe   r5,r4,0x0001            /* Save it out */
        lis     r5,TLB02@h
        ori     r5,r5,TLB02@l
        tlbwe   r5,r4,0x0002            /* Save it out */
        sync
        isync
        blr
#endif

