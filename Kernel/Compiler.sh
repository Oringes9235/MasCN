mkdir bin/

clang KernelMaster.c Memory.c Shell.c Video.c -c -nostdlib -ffreestanding

ld KernelMaster.o Memory.o Shell.o Video.o -e KernelStart -o ./bin/Kernel.elf

rm KernelMaster.o, Memory.o, Shell.o, Video.o