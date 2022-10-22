mkdir bin/

clang KernelMaster.c ./Power/Memory.c ./Shell/Shell.c ./Power/Video.c -c -nostdlib -ffreestanding

ld KernelMaster.o Memory.o Shell.o Video.o -e KernelStart -o ./bin/Kernel.elf

rm KernelMaster.o, Memory.o, Shell.o, Video.o