#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#

unexport MAKEFILE_LIST
MK_NOGENDEPS := $(filter clean,$(MAKECMDGOALS))
override PKGDIR = xconfig_alarm_clock
XDCINCS = -I. -I$(strip $(subst ;, -I,$(subst $(space),\$(space),$(XPKGPATH))))
XDCCFGDIR = package/cfg/

#
# The following dependencies ensure package.mak is rebuilt
# in the event that some included BOM script changes.
#
ifneq (clean,$(MAKECMDGOALS))
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/utils.js:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/utils.js
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/xdc.tci:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/xdc.tci
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/template.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/template.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/om2.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/om2.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/xmlgen.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/xmlgen.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/xmlgen2.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/xmlgen2.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/Warnings.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/Warnings.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/IPackage.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/IPackage.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/package.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/package.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/services/global/Clock.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/services/global/Clock.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/services/global/Trace.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/services/global/Trace.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/bld.js:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/bld.js
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/BuildEnvironment.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/BuildEnvironment.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/PackageContents.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/PackageContents.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/_gen.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/_gen.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Library.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Library.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Executable.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Executable.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Repository.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Repository.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Configuration.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Configuration.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Script.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Script.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Manifest.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Manifest.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Utils.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/Utils.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/ITarget.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/ITarget.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/ITarget2.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/ITarget2.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/ITarget3.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/ITarget3.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/ITargetFilter.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/ITargetFilter.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/package.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/bld/package.xs
package.mak: config.bld
/home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/ITarget.xs:
package.mak: /home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/ITarget.xs
/home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/C28_large.xs:
package.mak: /home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/C28_large.xs
/home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/C28_float.xs:
package.mak: /home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/C28_float.xs
/home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/package.xs:
package.mak: /home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/package.xs
/home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/arm/elf/IArm.xs:
package.mak: /home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/arm/elf/IArm.xs
/home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/arm/elf/package.xs:
package.mak: /home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/arm/elf/package.xs
package.mak: package.bld
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/tools/configuro/template/compiler.opt.xdt:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/tools/configuro/template/compiler.opt.xdt
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/services/io/File.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/services/io/File.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/services/io/package.xs:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/services/io/package.xs
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/tools/configuro/template/compiler.defs.xdt:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/tools/configuro/template/compiler.defs.xdt
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/tools/configuro/template/custom.mak.exe.xdt:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/tools/configuro/template/custom.mak.exe.xdt
/home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/tools/configuro/template/package.xs.xdt:
package.mak: /home/vens/ti/xdctools_3_31_00_24_core/packages/xdc/tools/configuro/template/package.xs.xdt
endif

ti.targets.arm.elf.M4F.rootDir ?= /home/vens/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5
ti.targets.arm.elf.packageBase ?= /home/vens/ti/tirtos_msp43x_2_12_01_33/products/bios_6_41_04_54/packages/ti/targets/arm/elf/
.PRECIOUS: $(XDCCFGDIR)/%.oem4f
.PHONY: all,em4f .dlls,em4f .executables,em4f test,em4f
all,em4f: .executables,em4f
.executables,em4f: .libraries,em4f
.executables,em4f: .dlls,em4f
.dlls,em4f: .libraries,em4f
.libraries,em4f: .interfaces
	@$(RM) $@
	@$(TOUCH) "$@"

.help::
	@$(ECHO) xdc test,em4f
	@$(ECHO) xdc .executables,em4f
	@$(ECHO) xdc .libraries,em4f
	@$(ECHO) xdc .dlls,em4f


all: .executables 
.executables: .libraries .dlls
.libraries: .interfaces

PKGCFGS := $(wildcard package.xs) package/build.cfg
.interfaces: package/package.xdc.inc package/package.defs.h package.xdc $(PKGCFGS)

-include package/package.xdc.dep
package/%.xdc.inc package/%_xconfig_alarm_clock.c package/%.defs.h: %.xdc $(PKGCFGS)
	@$(MSG) generating interfaces for package xconfig_alarm_clock" (because $@ is older than $(firstword $?))" ...
	$(XSRUN) -f xdc/services/intern/cmd/build.xs $(MK_IDLOPTS) -m package/package.xdc.dep -i package/package.xdc.inc package.xdc

.dlls,em4f .dlls: alarm_clock.pem4f

-include package/cfg/alarm_clock_pem4f.mak
-include package/cfg/alarm_clock_pem4f.cfg.mak
ifeq (,$(MK_NOGENDEPS))
-include package/cfg/alarm_clock_pem4f.dep
endif
alarm_clock.pem4f: package/cfg/alarm_clock_pem4f.xdl
	@


ifeq (,$(wildcard .libraries,em4f))
alarm_clock.pem4f package/cfg/alarm_clock_pem4f.c: .libraries,em4f
endif

package/cfg/alarm_clock_pem4f.c package/cfg/alarm_clock_pem4f.h package/cfg/alarm_clock_pem4f.xdl: override _PROG_NAME := alarm_clock.xem4f
package/cfg/alarm_clock_pem4f.c: package/cfg/alarm_clock_pem4f.cfg
package/cfg/alarm_clock_pem4f.xdc.inc: package/cfg/alarm_clock_pem4f.xdl
package/cfg/alarm_clock_pem4f.xdl package/cfg/alarm_clock_pem4f.c: .interfaces

clean:: clean,em4f
	-$(RM) package/cfg/alarm_clock_pem4f.cfg
	-$(RM) package/cfg/alarm_clock_pem4f.dep
	-$(RM) package/cfg/alarm_clock_pem4f.c
	-$(RM) package/cfg/alarm_clock_pem4f.xdc.inc

clean,em4f::
	-$(RM) alarm_clock.pem4f
.executables,em4f .executables: alarm_clock.xem4f

alarm_clock.xem4f: |alarm_clock.pem4f

-include package/cfg/alarm_clock.xem4f.mak
alarm_clock.xem4f: package/cfg/alarm_clock_pem4f.oem4f 
	$(RM) $@
	@$(MSG) lnkem4f $@ ...
	$(RM) $(XDCCFGDIR)/$@.map
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armlnk -w -q -u _c_int00 -fs $(XDCCFGDIR)$(dir $@)  -q -o $@ package/cfg/alarm_clock_pem4f.oem4f   package/cfg/alarm_clock_pem4f.xdl --silicon_version=7M4 --strict_compatibility=on -c -m $(XDCCFGDIR)/$@.map -l $(ti.targets.arm.elf.M4F.rootDir)/lib/libc.a
	
alarm_clock.xem4f: export C_DIR=
alarm_clock.xem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

alarm_clock.test test,em4f test: alarm_clock.xem4f.test

alarm_clock.xem4f.test:: alarm_clock.xem4f
ifeq (,$(_TESTLEVEL))
	@$(MAKE) -R -r --no-print-directory -f $(XDCROOT)/packages/xdc/bld/xdc.mak _TESTLEVEL=1 alarm_clock.xem4f.test
else
	@$(MSG) running $<  ...
	$(call EXEC.alarm_clock.xem4f, ) 
endif

clean,em4f::
	-$(RM) $(wildcard .tmp,alarm_clock.xem4f,*)


clean:: clean,em4f

clean,em4f::
	-$(RM) alarm_clock.xem4f
%,copy:
	@$(if $<,,$(MSG) don\'t know how to build $*; exit 1)
	@$(MSG) cp $< $@
	$(RM) $@
	$(CP) $< $@
alarm_clock_pem4f.oem4f,copy : package/cfg/alarm_clock_pem4f.oem4f
alarm_clock_pem4f.sem4f,copy : package/cfg/alarm_clock_pem4f.sem4f

$(XDCCFGDIR)%.c $(XDCCFGDIR)%.h $(XDCCFGDIR)%.xdl: $(XDCCFGDIR)%.cfg $(XDCROOT)/packages/xdc/cfg/Main.xs | .interfaces
	@$(MSG) "configuring $(_PROG_NAME) from $< ..."
	$(CONFIG) $(_PROG_XSOPTS) xdc.cfg $(_PROG_NAME) $(XDCCFGDIR)$*.cfg $(XDCCFGDIR)$*

.PHONY: release,xconfig_alarm_clock
ifeq (,$(MK_NOGENDEPS))
-include package/rel/xconfig_alarm_clock.tar.dep
endif
package/rel/xconfig_alarm_clock/xconfig_alarm_clock/package/package.rel.xml: package/package.bld.xml
package/rel/xconfig_alarm_clock/xconfig_alarm_clock/package/package.rel.xml: package/build.cfg
package/rel/xconfig_alarm_clock/xconfig_alarm_clock/package/package.rel.xml: package/package.xdc.inc
package/rel/xconfig_alarm_clock/xconfig_alarm_clock/package/package.rel.xml: .force
	@$(MSG) generating external release references $@ ...
	$(XS) $(JSENV) -f $(XDCROOT)/packages/xdc/bld/rel.js $(MK_RELOPTS) . $@

xconfig_alarm_clock.tar: package/rel/xconfig_alarm_clock.xdc.inc package/rel/xconfig_alarm_clock/xconfig_alarm_clock/package/package.rel.xml
	@$(MSG) making release file $@ "(because of $(firstword $?))" ...
	-$(RM) $@
	$(call MKRELTAR,package/rel/xconfig_alarm_clock.xdc.inc,package/rel/xconfig_alarm_clock.tar.dep)


release release,xconfig_alarm_clock: all xconfig_alarm_clock.tar
clean:: .clean
	-$(RM) xconfig_alarm_clock.tar
	-$(RM) package/rel/xconfig_alarm_clock.xdc.inc
	-$(RM) package/rel/xconfig_alarm_clock.tar.dep

clean:: .clean
	-$(RM) .libraries $(wildcard .libraries,*)
clean:: 
	-$(RM) .dlls $(wildcard .dlls,*)
#
# The following clean rule removes user specified
# generated files or directories.
#

ifneq (clean,$(MAKECMDGOALS))
ifeq (,$(wildcard package))
    $(shell $(MKDIR) package)
endif
ifeq (,$(wildcard package/cfg))
    $(shell $(MKDIR) package/cfg)
endif
ifeq (,$(wildcard package/lib))
    $(shell $(MKDIR) package/lib)
endif
ifeq (,$(wildcard package/rel))
    $(shell $(MKDIR) package/rel)
endif
ifeq (,$(wildcard package/internal))
    $(shell $(MKDIR) package/internal)
endif
endif
clean::
	-$(RMDIR) package

include custom.mak