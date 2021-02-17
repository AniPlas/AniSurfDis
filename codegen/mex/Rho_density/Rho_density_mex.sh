MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/xiaolei/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for Rho_density" > Rho_density_mex.mki
echo "CC=$CC" >> Rho_density_mex.mki
echo "CFLAGS=$CFLAGS" >> Rho_density_mex.mki
echo "CLIBS=$CLIBS" >> Rho_density_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> Rho_density_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> Rho_density_mex.mki
echo "CXX=$CXX" >> Rho_density_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> Rho_density_mex.mki
echo "CXXLIBS=$CXXLIBS" >> Rho_density_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> Rho_density_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> Rho_density_mex.mki
echo "LDFLAGS=$LDFLAGS" >> Rho_density_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> Rho_density_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> Rho_density_mex.mki
echo "Arch=$Arch" >> Rho_density_mex.mki
echo "LD=$LD" >> Rho_density_mex.mki
echo OMPFLAGS= >> Rho_density_mex.mki
echo OMPLINKFLAGS= >> Rho_density_mex.mki
echo "EMC_COMPILER=gcc" >> Rho_density_mex.mki
echo "EMC_CONFIG=optim" >> Rho_density_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f Rho_density_mex.mk
