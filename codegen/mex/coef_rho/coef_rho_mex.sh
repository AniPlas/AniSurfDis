MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/xiaolei/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for coef_rho" > coef_rho_mex.mki
echo "CC=$CC" >> coef_rho_mex.mki
echo "CFLAGS=$CFLAGS" >> coef_rho_mex.mki
echo "CLIBS=$CLIBS" >> coef_rho_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> coef_rho_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> coef_rho_mex.mki
echo "CXX=$CXX" >> coef_rho_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> coef_rho_mex.mki
echo "CXXLIBS=$CXXLIBS" >> coef_rho_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> coef_rho_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> coef_rho_mex.mki
echo "LDFLAGS=$LDFLAGS" >> coef_rho_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> coef_rho_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> coef_rho_mex.mki
echo "Arch=$Arch" >> coef_rho_mex.mki
echo "LD=$LD" >> coef_rho_mex.mki
echo OMPFLAGS= >> coef_rho_mex.mki
echo OMPLINKFLAGS= >> coef_rho_mex.mki
echo "EMC_COMPILER=gcc" >> coef_rho_mex.mki
echo "EMC_CONFIG=optim" >> coef_rho_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f coef_rho_mex.mk
