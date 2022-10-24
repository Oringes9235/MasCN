<img src="https://github.com/Oringes9235/Oringes9235.github.io/blob/master/images/MasCNLogo.png">

# MasCN

<img src="https://github.com/Oringes9235/Oringes9235.github.io/blob/master/images/license.svg">

**Language:** English | [中文](https://github.com/Oringes9235/MasCN/blob/master/README-zh-cn.md) 

## Basic information

`MasCN` is an **embedded systems**, it can running in `x86_64`. And it's also a 64-bits operating system kernel.

It is development began in the Apr 22, 2022. It is an open-source project of [GNU](https://www.gnu.org).

The operating system kernel has several sections, such as: `kernel`, `user`and so on.

The kernel is debugging with `Qemu`.

If you want to [`Clone`] this git project to your, First you should know the files:

* kernel -- [kernel files] 
* user -- [the file of user]

## Compile kernel

Compile these kernel files by `GCC-6.3.0-1` and `NASM version 2.00`, link all the file of kernel to [kernel.bin] by `ld 2.28`.

Version of the adaptation tool：

* gcc-6.3.0-1
* nasm version 2.00
* ld 2.28
* Qemu-20220817

This project is compiled on `Linux`, not on Windows or Mac.

## UEFI

This is a UEFI based operating system / system kernel.

UEFI's msater website [UEFI](https://uefi.org) .

## Code style

The `doc` file for code style, you can go to see the [`Code-style`](https://github.com/Oringes9235/MasCN/blob/master/docs/kernel/Code-style.md/) file.

## Schedule

The next thing that's done is `Shell`.

## Feedback

> If these is error in the kernel file, hope you can report it to the MasCN Wiki.\
> With your feedback and support, MasCN will always remember your contribution.\ 
> Thank you for your support!

