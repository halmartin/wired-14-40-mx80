#
# Copyright (c) 2010 Applied Micro Circuits Corporation.
# All rights reserved. Feng Kan <fkan@apm.com>.
#
# See file CREDITS for list of people who contributed to this
# project.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 2 of
# the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston,
# MA 02111-1307 USA
#
sinclude $(OBJTREE)/board/$(BOARDDIR)/config.tmp

ifeq ($(ramsym),1)
TEXT_BASE = 0x07FD0000
else
ifndef TEXT_BASE
TEXT_BASE = 0xfffa0000
endif
endif

PLATFORM_CPPFLAGS += -DCONFIG_440=1 -DCONFIG_460=1  

ifeq ($(debug),1)
PLATFORM_CPPFLAGS += -DDEBUG
endif

ifeq ($(dbcr),1)
PLATFORM_CPPFLAGS += -DCONFIG_SYS_INIT_DBCR=0x8cff0000
endif
