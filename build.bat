@echo off
if exist build (
    rmdir /s /q build
)
mkdir build
cd build
cmake ..
cmake --build .
cd ..
echo Build done!
pause