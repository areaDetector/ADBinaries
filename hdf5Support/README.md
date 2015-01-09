The files in this directory come from:

*.h, header files HDF 1.8.7 source distribution. These files were located in the hdf5/include directory
after installing the package on Linux.  The exception is H5FDWindows.h came from src/ directory in the
distribution.

The library files in os/linux-x86 were generated as follows:
- libhdf5.a was built on Linux from the source 1.8.7 distribution using --with-szlib=/usr/local/szip-2.1/szip/.
- libsz.a was built on Linux from the source 2.1 distribution

The library files in os/win32-x86-static were extracted from HDF5-1.8.7_win_x86.zip, that was downloaded from the HDF Web site.

The library files in os/win32-x86-dynamic were extracted from HDF5-1.8.7_CMake_x86_shared.zip, that was downloaded from the HDF Web site.

The library files in windows-x64-static were extracted from HDF5-1.8.7_win_x64.zip, that was downloaded from the HDF Web site.

The library files in os/windows-x64-dynamic were extracted from HDF5-1.8.7_CMake_x64_shared.zip, that was downloaded from the HDF Web site.

Note that the Cmask static versions did not work.  Those libraries seemed to have been linked with /MD (?) so no choice of /NO_DEFAULTLIB would work to
link a static executable.

The library files in cygwin-x86 were extracted from hdf5-1.8.7_cygwin_x86_static.zip, that was downloaded from the HDF Web site.
libhdf5.a was renamed to libhdf5.lib, and libsz.a was renamed to libsz.lib to work with EPICS, which expects libraries to have 
the .lib extension.

The library files in os/darwin-x86 are universal libraries for the i386 and x86_64 architectures.  They
require Mac OS X 10.5 or later.  They were built from the HDF5 1.8.7 and szip 2.1 source distributions.
