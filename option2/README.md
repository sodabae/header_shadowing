# Build for "Real"

cmake -S . -B build  
cmake --build build
./build/app

#Build for "Mock"

cmake -S . -B build_mock -DUSE_MOCK=ON  
cmake --build build_mock
./build_mock/app
