MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/xiaolei/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for rho_distri" > rho_distri_mex.mki
echo "CC=$CC" >> rho_distri_mex.mki
echo "CFLAGS=$CFLAGS" >> rho_distri_mex.mki
echo "CLIBS=$CLIBS" >> rho_distri_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> rho_distri_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> rho_distri_mex.mki
echo "CXX=$CXX" >> rho_distri_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> rho_distri_mex.mki
echo "CXXLIBS=$CXXLIBS" >> rho_distri_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> rho_distri_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> rho_distri_mex.mki
echo "LDFLAGS=$LDFLAGS" >> rho_distri_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> rho_distri_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> rho_distri_mex.mki
echo "Arch=$Arch" >> rho_distri_mex.mki
echo "LD=$LD" >> rho_distri_mex.mki
echo OMPFLAGS= >> rho_distri_mex.mki
echo OMPLINKFLAGS= >> rho_distri_mex.mki
echo "EMC_COMPILER=gcc" >> rho_distri_mex.mki
echo "EMC_CONFIG=optim" >> rho_distri_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f rho_distri_mex.mk
