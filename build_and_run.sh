TEST_ENABLED = false

echo "day:$1"
echo "part:$2"
if [$3 == -t]
then
    TEST_ENABLED = true //TODO, Add functionality for this
fi

mkdir build
cd build
cmake ..
make
./AdventOfCodeExe $1 $2