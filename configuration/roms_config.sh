#!/usr/bin/env bash

# ROMS Building configuration file
if [[ -z "${ROMS_SRC}" ]]; then
  export ROMS_SRC=/nesi/project/mocean02574/roms_src_latest
fi
#export ROMS_CONFIGDIR=${PWD}
export MY_CPP_FLAGS=
export ROMS_APPLICATION=ROMS3D
#export GIT_BRANCH=roms3.4
export USE_OpenMP=
export USE_MPI=on
export USE_MPIF90=on
export USE_LARGE=on
export USE_DEBUG=
export USE_NETCDF4=on
export ARPACK_LIBDIR=${EBROOTARPACKMINNG}
#export PARPACK_LIBDIR=/share/apps/romstools/lib
export SCRATCH_DIR=${ROMS_CONFIGDIR}/build
export BINDIR=${ROMS_CONFIGDIR}
export MY_HEADER_DIR=${ROMS_CONFIGDIR}
export MY_ANALYTICAL_DIR=${ROMS_CONFIGDIR}/include
export USE_ARPACK=on
export UPDATE_VARINFO=on
export NC_CONFIG=/opt/nesi/mahuika/netCDF/4.4.1-intel-2017a/bin/nc-config
#export NETCDF_INCDIR=${EBROOTNETCDFMINFORTRAN}/include
#export NETCDF_LIBDIR=${EBROOTNETCDFMINFORTRAN}/lib64
export NETCDF_INCDIR=$EBROOTNETCDFMINFORTRAN/include
export NETCDF_LIBDIR=$EBROOTNETCDFMINFORTRAN/lib
export HDF5_LIBDIR=/cm/shared/apps/hdf5/1.10.0/lib
export FC=ifort
