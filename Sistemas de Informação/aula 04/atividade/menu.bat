@echo off
rem comentario
title Menu principal
mode 60,30
color 1a
:inicio
cls
echo.
echo ==========================
echo MENU PRINCIPAL
echo ==========================
echo [1] Pacote office
echo [2] Aplicativos windows
echo [3] Servicos de rede
echo [4] Gerenciamento de maquina
echo [E] Encerrar sessao (login)
echo [F] Finalizar script
echo ===========================
echo.
set /p op=Digite opcao desejada:

if /i %op% == 1 (call office.bat)
if /i %op% == 2 (call app.bat)
if /i %op% == 3 (call rede.bat)
if /i %op% == 4 (call pc.bat)
if /i %op% == e (call login.bat)
if /i %op% == f (goto:sair)
echo.
echo -----------------
echo Opcao Invalida!
echo -----------------
pause > nul
goto:inicio)

:sair
echo.
set /p resp=Deseja realmente sair [S/N]:
if /i %resp% == s (exit) else (
echo.
goto:inicio)