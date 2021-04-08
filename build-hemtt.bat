@echo off
set BIOUTPUT=1

if exist a3 (
  rmdir a3
)
mklink /j a3 include\a3

mkdir x
mkdir x\GRAD_MOD_EXTRAS
if exist x\GRAD_MOD_EXTRAS\addons (
  rmdir x\GRAD_MOD_EXTRAS\addons
)
mklink /j x\GRAD_MOD_EXTRAS\addons addons

hemtt build --force --release
set BUILD_STATUS=%errorlevel%

rmdir a3
rmdir x\GRAD_MOD_EXTRAS\addons
rmdir x\GRAD_MOD_EXTRAS
rmdir x

if %BUILD_STATUS% neq 0 (
  echo Build failed
  exit /b %errorlevel%
) else (
  echo Build successful
  EXIT
)
