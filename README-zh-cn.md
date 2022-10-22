<img src="https://github.com/Oringe9235/Oringe9235.github.io/blob/master/images/MasCNLogo.png">

# MasCN

<img src="https://github.com/Oringe9235/Oringe9235.github.io/blob/master/images/license.svg">

**Language:** [English](https://github.com/Oringe9235/MasCN/blob/master/README.md) | 中文 

## 基本信息

`MasCN`是一个**嵌入式系统**，它可以运行在`x86_64`。这也是一个64位的的操作系统内核。

这个项目开始开发在2022.08.22。这是一个[GUN](https://www.gun.org/)开源的项目。

这个操作系统内核多数个部分，例如：`kernel`，`user`等等。

此操作系统内核在`Qemu`。

如果你要[`Clone`]此git项目到本地，首先你要先了解这里的文件：
* kernel -- [内核文件]
* user -- [用户文件夹]

## 编译内核

通过`GCC-6.3.0-1`和`NASM Version 2.00`编译这些内核文件，通过`ld 2.28`将所有内核文件链接到`内核.bin`。

适配工具的版本：

* gcc-6.3.0-1
* nasm version 2.00
* ld 2.28
* Qemu-20220817

## UEFI

此操作系统 / 系统内核是基于UEFI开发的。

UEFI官方网站 [UEFI](https://uefi.org) 。

## 代码风格

代码风格的`doc`文件，你可以查看[`Code-style`](https://github.com/Oringe9235/MasCN/blob/master/docs/kernel/Code-style.md/)文件。

## 计划

下一个完成的部分`Filesys`。

## 反馈

> 如果这些是内核文件中的错误，希望你能向MasCN维基报告。\
> 有了您的反馈和支持，MasCN将永远记住您的贡献。\
> 感谢您的支持！
