MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/xiaolei/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for stress" > stress_mex.mki
echo "CC=$CC" >> stress_mex.mki
echo "CFLAGS=$CFLAGS" >> stress_mex.mki
echo "CLIBS=$CLIBS" >> stress_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> stress_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> stress_mex.mki
echo "CXX=$CXX" >> stress_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> stress_mex.mki
echo "CXXLIBS=$CXXLIBS" >> stress_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> stress_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> stress_mex.mki
echo "LDFLAGS=$LDFLAGS" >> stress_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> stress_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> stress_mex.mki
echo "Arch=$Arch" >> stress_mex.mki
echo "LD=$LD" >> stress_mex.mki
echo OMPFLAGS= >> stress_mex.mki
echo OMPLINKFLAGS= >> stress_mex.mki
echo "EMC_COMPILER=gcc" >> stress_mex.mki
echo "EMC_CONFIG=optim" >> stress_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f stress_mex.mk
