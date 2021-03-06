#
# Makefile for the Broadcom et driver
#
# Copyright (C) 2013, Broadcom Corporation. All Rights Reserved.
# 
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
# 
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
# SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
# OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
# CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
#
# $Id: Makefile,v 1.5 2010-12-07 04:47:36 $
#


ETSRCDIR := ../src/et

et-objs := $(ETSRCDIR)/sys/et_linux.o $(ETSRCDIR)/sys/etc.o

## from linux dir ##########
export SRCBASE_et := $(src)/../src
KBUILD_CFLAGS += -I$(SRCBASE_et)/include -I$(SRCBASE_et)/et/sys
KBUILD_AFLAGS += -I$(SRCBASE_et)/include
KBUILD_CFLAGS += -DBCMDRIVER -Dlinux

KBUILD_CFLAGS += -DCFG_NORTHSTAR -DCFG_SIM

######## #########################

#EXTRA_CFLAGS += -DGMAC3

#EXTRA_CFLAGS += -DGMAC_RATE_LIMITING

ifeq ($(CONFIG_BCM_IPROC_GMAC_SG),y)
EXTRA_CFLAGS    += -DBCMDMASGLISTOSL
endif

ifeq ($(CONFIG_ET_47XX),y)
et-objs		+= $(ETSRCDIR)/sys/etcgmac.o
EXTRA_CFLAGS	+= -DCFG_GMAC -DBCMDMA64 -DBCMDMA32  -DBCMDBG_ERR
ifeq ($(CONFIG_ROOT_NFS),y)
else
ifeq ($(CONFIG_MACH_NS),y)
EXTRA_CFLAGS	+= -DETROBO
endif
endif
ifeq ($(CONFIG_MACH_NSP),y)
EXTRA_CFLAGS	+= -DETROBO
endif
endif

obj-$(CONFIG_ET) := et.o

EXTRA_CFLAGS	+= -DDMA -Wno-error
ifeq ($(CONFIG_ET_ALL_PASSIVE_ON),y)
#EXTRA_CFLAGS	+= -DET_ALL_PASSIVE_ON -DET_ALL_PASSIVE
# Forcing the use of CONFIG_ET_ALL_PASSIVE_RUNTIME
EXTRA_CFLAGS	+= -DET_ALL_PASSIVE
else
ifeq ($(CONFIG_ET_ALL_PASSIVE_RUNTIME),y)
EXTRA_CFLAGS	+= -DET_ALL_PASSIVE
endif
endif

ifeq ($(CONFIG_ET_NAPI_POLL),y)
EXTRA_CFLAGS	+= -DNAPI_POLL
else
ifeq ($(CONFIG_ET_NAPI2_POLL),y)
EXTRA_CFLAGS	+= -DNAPI2_POLL
endif
endif

# Disable PKTC for now, it is required the CTF enabled
#EXTRA_CFLAGS	+= -DPKTC

# Search for sources under src/et/sys or objects under src/et/linux
ifneq ($(wildcard $(ETSRCDIR)/sys),)
EXTRA_CFLAGS	+= -I$(ETSRCDIR)/sys
else
# et-objs := $(ETSRCDIR)/linux/et.o
endif

ifneq ($(KERNELRELEASE),)
# kbuild part of makefile
else
# Normal makefile
KERNELDIR := ../../kernel/linux
all:
	$(MAKE) -C $(KERNELDIR) M=`pwd`

clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean
endif

clean-files += $(ETSRCDIR)/sys/*.o $(ETSRCDIR)/sys/.*.o.cmd
