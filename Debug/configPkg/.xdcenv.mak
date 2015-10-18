#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = /home/burneykb/ti/tirtos_msp43x_2_12_01_33/packages;/home/burneykb/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages;/home/burneykb/ti/tirtos_msp43x_2_12_01_33/products/uia_2_00_02_39/packages;/home/burneykb/ti/msp430/MSPWare_2_30_00_49/driverlib/packages;/home/burneykb/ti/msp430/MSPWare_2_30_00_49/driverlib;/home/burneykb/ti/ccsv6/ccs_base
override XDCROOT = /home/burneykb/ti/xdctools_3_31_00_24_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = /home/burneykb/ti/tirtos_msp43x_2_12_01_33/packages;/home/burneykb/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages;/home/burneykb/ti/tirtos_msp43x_2_12_01_33/products/uia_2_00_02_39/packages;/home/burneykb/ti/msp430/MSPWare_2_30_00_49/driverlib/packages;/home/burneykb/ti/msp430/MSPWare_2_30_00_49/driverlib;/home/burneykb/ti/ccsv6/ccs_base;/home/burneykb/ti/xdctools_3_31_00_24_core/packages;..
HOSTOS = Linux
endif
