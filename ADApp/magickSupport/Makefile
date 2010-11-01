TOP=../..
include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

# This directory contains files to support GraphicsMagick so users don't need to install it
# These files were obtained from the distribution at
# http://gnuwin32.sourceforge.net/packages/tiff.htm
# http://gnuwin32.sourceforge.net/packages/jpeg.htm
# 
INC += Magick++.h
INC += $(foreach dir, Magick++ magick wand, \
     $(subst ../,,$(wildcard ../$(dir)/*.h)) )

LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_Magick++_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_bzlib_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_coders_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_filters_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_jbig_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_jp2_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_jpeg_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_lcms_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_libxml_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_magick_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_png_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_tiff_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_ttf_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_wand_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_wmf_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_xlib_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/CORE_RL_zlib_.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/X11.lib
LIB_INSTALLS_WIN32    += ../os/WIN32/Xext.lib

LIB_INSTALLS_cygwin32 += ../os/cygwin32/libGraphicsMagick++.lib ../os/cygwin32/libGraphicsMagickWand.lib ../os/cygwin32/libGraphicsMagick.lib
LIB_INSTALLS_cygwin32 += ../os/cygwin32/liblcms.lib ../os/cygwin32/libpng14.lib ../os/cygwin32/libbz2.lib ../os/cygwin32/libfreetype.lib
LIB_INSTALLS_cygwin32 += ../os/cygwin32/libjbig.lib ../os/cygwin32/libxml2.dll.lib
BIN_INSTALLS_cygwin32 += ../os/cygwin32/cygxml2-2.dll

ifeq ($(T_A), linux-x86)
LIB_INSTALLS_Linux += ../os/linux-x86/libGraphicsMagick++.a ../os/linux-x86/libGraphicsMagickWand.a ../os/linux-x86/libGraphicsMagick.a
endif
ifeq ($(T_A), linux-x86_64) 
LIB_INSTALLS_Linux += ../os/linux-x86_64/libGraphicsMagick++.a ../os/linux-x86_64/libGraphicsMagickWand.a ../os/linux-x86_64/libGraphicsMagick.a
endif

#=============================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

