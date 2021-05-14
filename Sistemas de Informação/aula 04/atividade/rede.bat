@echo off
rem comentario
title Componentes de rede
mode 60,30
color 5a
:inicio
cls
echo.
echo ==========================
echo MENU PRINCIPAL
echo ==========================
echo [1] Navegar na web
echo [2] Testar conexao
echo [3] Obter IP da Maquina
echo [R] Retornar ao menu principal
echo ===========================
echo.
set /p op=Digite opcao desejada:

if /i %op% == 1 (goto:web)
if /i %op% == 2 (goto:teste)
if /i %op% == 3 (goto:ip)
if /i %op% == r (call menu.bat)
echo.
echo -----------------
echo Opcao Invalida !
echo -----------------
pause > nul
goto:inicio)

:web
echo.
set /p site=Digite o endereco da pagina :
start %site%
goto:inicio

:teste
echo.
set /p conexao=Digite o IP da Maquina ou endereco web:
ping %conexao% -t
goto:inicio

:ip
ipconfig
pause > nul
goto:inicio
