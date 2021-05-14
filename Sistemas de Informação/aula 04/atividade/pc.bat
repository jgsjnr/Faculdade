@echo off
rem comentario
title Gerenciamento do computador
mode 60,30
color 3b
:inicio
cls
echo.
echo ==========================
echo MENU PRINCIPAL
echo ==========================
echo [1] Desligar maquina
echo [2] Reiniciar maquina
echo [3] Hibernar a maquina
echo [R] Retornar ao menu principal
echo ===========================
echo.
set /p op=Digite opcao desejada:

if /i %op% == 1 (goto:desligar)
if /i %op% == 2 (goto:reiniciar)
if /i %op% == 3 (goto:hibernar)
if /i %op% == r (call menu.bat)
echo.
echo -----------------
echo Opcao Invalida !
echo -----------------
pause > nul
goto:inicio)

:desligar
echo.
set /p resp=Deseja realmente desligar [S/N]:
if /i %resp% == s (shutdown /s) else (
echo.
goto:inicio)

:reiniciar
echo.
set /p resp=Deseja realmente reiniciar [S/N]:
if /i %resp% == s (shutdown /r) else (
echo.
goto:inicio)

:hibernar
echo.
set /p resp=Deseja realmente hibernar? [S/N]:
if /i %resp% == s (shutdown /h) else (
echo.
goto:inicio)