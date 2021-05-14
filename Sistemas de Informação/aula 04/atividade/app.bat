@echo off
rem comentario
title Aplicativos do windows
mode 60,30
color c3
:inicio
cls
echo.
echo ==========================
echo MENU PRINCIPAL
echo ==========================
echo [1] Teclado virtual
echo [2] Bloco de notas
echo [3] Paint
echo [4] Calculadora
echo [5] Painel de controle
echo [6] Windows explorer
echo [R] Retornar ao menu principal
echo ===========================
echo.
set /p op=Digite opcao desejada:

if /i %op% == 1 (goto:teclado)
if /i %op% == 2 (goto:bloco)
if /i %op% == 3 (goto:paint)
if /i %op% == 4 (goto:calc)
if /i %op% == 4 (goto:painel)
if /i %op% == 4 (goto:explorer)
if /i %op% == r (call menu.bat)
echo.
echo -----------------
echo Opcao Invalida!
echo -----------------
pause > nul
goto:inicio)
:teclado
start osk.exe
goto:inicio

:bloco
start notepad.exe
goto:inicio

:paint
start mspaint.exe
goto:inicio

:calc
start calc.exe
goto:inicio

:painel
start control.exe
goto:inicio

:explorer
start explorer.exe
goto:inicio