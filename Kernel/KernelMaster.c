#include "./KernelMaster.h"

UINT64 KernelStart
(
    BOOT_CONFIG *BootConfig
)
{  
    UINT64 PassBack = 0;

    // initialization drivers
    VideoInitialization(BootConfig);
    ShellInitialization();
    MemoryInitialization(BootConfig);

    while (1)
    {
        ;
    }
    
    return PassBack;
}