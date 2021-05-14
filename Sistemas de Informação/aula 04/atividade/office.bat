@echo off
rem comentario
title Aplicativos Office
mode 60,30
color 0a
:inicio
cls
echo.
echo ==========================
echo MENU PRINCIPAL
echo ==========================
echo [1] Executar o Word
echo [2] Executar o Excel
echo [3] Executar o PowerPoint
echo [4] Executar o Access
echo [R] Retornar ao menu principal
echo ===========================
echo.
set /p op=Digite opcao desejada:

if /i %op% == 1 (goto:word)
if /i %op% == 2 (goto:excel)
if /i %op% == 3 (goto:power)
if /i %op% == 4 (goto:access)
if /i %op% == r (call menu.bat)
echo.
echo -----------------
echo Opcao Invalida !
echo -----------------
pause > nul
goto:inicio)
:word
start winword.exe
goto:inicio

:excel
start excel.exe
goto:inicio

:power
start powerpnt.exe
goto:inicio

:access
start msaccess.exe
goto:inicio