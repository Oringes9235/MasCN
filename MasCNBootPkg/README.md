# GUIDE for Boot Section

## Include

The code of Boot is developed based on `UEFI EDK2` library and compilation environment.

To compile the code for this section, compile it under `EDK2`, see the following *compilation instructions*.

## Compilation instructions

* Modify `edk2/Conf/target.txt` file, the parameters in `ACTIVE_PLATFORM` is amended as: 

```txt
ACTIVE_PLATFORM = MasCNBootPkg/MasCNBootPkg.dsc
```

* Modify `edk2/Conf/target.txt` file, changed `TOOL_CHAIN_TAG` to: 

```txt
TOOL_CHAIN_TAG = GCC5
```

* Modify `edk2/Conf/target.txt` file, Change the architecture to the X64 platform: 

```txt
TARGET_ARCH = X64
```

