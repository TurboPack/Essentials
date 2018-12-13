# TurboPack Essentials

Updated for **10.3 Rio** / VER330 / PKG 260

You can still access [10.2 Tokyo](https://github.com/TurboPack/Essentials/releases/tag/102Tokyo) and [10.1 Berlin](https://github.com/TurboPack/Essentials/releases/tag/101Berlin) too.

## Table of contents

1.  Introduction
2.  Package names
3.  Installation
4.  License

-----

## 1. Introduction

Essentials contains 13 native VCL controls for Embarcadero Delphi &
C++Builder. The controls include drop-down calendars & calculators,
roll-up dialogs, 3-D labels, tiled backgrounds, scrolling messages,
menu buttons, and more.

This is a source-only release of TurboPack Essentials. It includes
designtime and runtime packages for Delphi C++Builder. It supports WIn32 and Win64.

-----

## 2. Package names

TurboPack Essentials package names have the following form:

Delphi 
* EssentialsDR.bpl (Delphi Runtime)
* EssentialsDBDR.bpl (Delphi data aware Runtime)
* EssentialsDD.bpl (Delphi Runtime)

C++Builder
* EssentialsCR.bpl (C++Builder Runtime)
* EssentialsDBCR.bpl (C++Builder data aware Runtime)
* EssentialsCD.bpl (C++Builder Runtime)

The runtime package contains the core functionality of the product and
is not installed into the IDE. The designtime package references the
runtime package, registers the components, and contains property
editors used in the IDE.

-----

## 3. Installation

TurboPack Essentials is available via the [GetIt Package Manager](http://docwiki.embarcadero.com/RADStudio/en/Installing_a_Package_Using_GetIt_Package_Manager) where you can quickly and easily install and uninstall it.

To manually install TurboPack Essentials into your IDE, take the following
steps:

1. Unzip the release files into a directory (e.g., d:\essence).

2. Start RAD Studio.

3. Add the source subdirectory (e.g., d:\essence\source) to the
     IDE's library path. For CBuilder, add the hpp subdirectory
     (e.g., d:\essence\source\hpp\Win32\Release) to the IDE's system include path.

4. Open & compile the runtime package specific to the IDE being
     used.

5. Open & install the designtime package specific to the IDE being
     used. The IDE should notify you the components have been
     installed.

-----

## 4. License

[Mozilla Public License 1.1 (MPL 1.1)](https://www.mozilla.org/en-US/MPL/1.1/)
