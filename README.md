# Gruppe Adler Extras

[![GitHub tag](https://img.shields.io/github/tag/gruppe-adler/grad_extras.svg)](https://github.com/gruppe-adler/grad_extras/releases)
![build](https://github.com/gruppe-adler/grad_extras/workflows/CI/badge.svg)

Gruppe Adler Extras is a collection of Gruppe Adler original addons that add new functionality or modify and improve existing functionality to suit our Arma gameplay. The main difference to [Gruppe Adler Mod](https://github.com/gruppe-adler/grad_mod) is that addons included in this mod can have additional dependencies (other than CBA / ACE).

## Dependencies
- CBA
- ACE3
- TFAR
- RHS
- GM
- NIArms G3 / MG3

## For Developers

We're using [HEMTT](https://github.com/synixebrett/HEMTT).

### Releasing
- Update `addons\main\script_version.hpp`
- Commit your changes
- Create tag on GitHub
- NO NEED to upload the built mod. A GitHub Action workflow will take care of that

### Building
On Linux:
```
hemtt build --release
```
On Windows:
```
start build-hemtt.bat 
```
