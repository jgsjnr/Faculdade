@echo off
rem comentario
title Aula 02 - Programacao Batch
mode 30,30
color 4f
:inicio
cls
echo.
echo ==========================
echo        TELA DE LOGIN
echo ==========================
echo.
set /p usuario=Digite usuario:

if /i %usuario% == fatec (goto:senha) else (
echo.
echo ==========================
echo        OPCAO INVALIDA
echo ==========================
echo.
pause > nul
goto:inicio
)

:senha
set /p senha=Digite senha:
if /i %senha% == fatec (call menu.bat) else (
echo.
echo ==========================
echo        OPCAO INVALIDA
echo ==========================
echo.
pause > nul
goto:inicio
)

