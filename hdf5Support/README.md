The files in this directory come from:


*.h, header files HDF 1.8.7 source distribution. These files were located in the hdf5/include directory
after installing the package on Linux.  The exception is H5FDWindows.h came from src/ directory in the
distribution.

The windows binaries came from:
* The library files in os/win32-x86-static were extracted from HDF5-1.8.7_win_x86.zip, that was downloaded from the HDF Web site.
* The library files in os/win32-x86-dynamic were extracted from HDF5-1.8.7_CMake_x86_shared.zip, that was downloaded from the HDF Web site.
* The library files in windows-x64-static were extracted from HDF5-1.8.7_win_x64.zip, that was downloaded from the HDF Web site.
* The library files in os/windows-x64-dynamic were extracted from HDF5-1.8.7_CMake_x64_shared.zip, that was downloaded from the HDF Web site.

Note that the Cmask static versions did not work.  Those libraries seemed to have been linked with /MD (?) so no choice of /NO_DEFAULTLIB would work to
link a static executable.


