# Build for "Real"

cmake -S . -B build  
cmake --build build


#Build for "Mock"

cmake -S . -B build -DUSE_MOCK=ON  
cmake --build build
