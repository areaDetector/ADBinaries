TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

ifeq (win32-x86, $(findstring win32-x86, $(T_A)))
NEXUS_LIBS = $(addprefix ../os/WIN32/, hdf5.lib libszip.lib zlib.lib)
LIB_INSTALLS_WIN32   +=  $(NEXUS_LIBS)

else ifeq (windows-x64, $(findstring windows-x64, $(T_A)))
NEXUS_LIBS = $(addprefix ../os/WIN32/x64/, hdf5.lib libszip.lib zlib.lib)
LIB_INSTALLS_WIN32   += $(NEXUS_LIBS)

else ifeq (cygwin-x86, $(findstring cygwin-x86, $(T_A)))
NEXUS_LIBS = $(addprefix ../os/WIN32/, hdf5.lib libszip.lib zlib.lib)
LIB_INSTALLS_cygwin32   += $(NEXUS_LIBS)

else ifeq (linux-x86_64, $(findstring linux-x86_64, $(T_A)))
NEXUS_LIBS = $(addprefix ../os/linux-x86_64/, libNeXus.a libhdf5.a libdf.a libmfhdf.a libmxml.a)
LIB_INSTALLS_Linux   += $(NEXUS_LIBS)

else ifeq (linux-x86, $(findstring linux-x86, $(T_A)))
NEXUS_LIBS = $(addprefix ../os/linux-x86/, libNeXus.a libhdf5.a libdf.a libmfhdf.a libmxml.a)
LIB_INSTALLS_Linux   += $(NEXUS_LIBS)

else ifeq (solaris-sparc, $(findstring solaris-sparc, $(T_A)))
NEXUS_LIBS = $(addprefix ../os/solaris-sparc/, libNeXus.a libNeXusCPP.a libhdf5.a libhdf5_cpp.a libmxml.a)
LIB_INSTALLS_solaris += $(NEXUS_LIBS)
endif

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

