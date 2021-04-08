@echo off
set BIOUTPUT=1

if exist a3 (
  rmdir a3
)
mklink /j a3 include\a3

mkdir x
mkdir x\test_pzf3
if exist x\test_pzf3\addons (
  rmdir x\test_pzf3\addons
)
mklink /j x\test_pzf3\addons addons

hemtt build --force --release
set BUILD_STATUS=%errorlevel%

rmdir a3
rmdir x\test_pzf3\addons
rmdir x\test_pzf3
rmdir x

if %BUILD_STATUS% neq 0 (
  echo Build failed
  exit /b %errorlevel%
) else (
  echo Build successful
  EXIT
)
