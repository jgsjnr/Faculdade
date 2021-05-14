@echo off
title AULA 05 - SISTEMAS DE INFORMACAO - BATCH
mode 60,20
color 0a
set /a cont=0
:sorteio
set /a numero=(%random% %% 100) + 1
set /a cont=%cont% + 1
cls
echo.
echo              (o   o)
echo =========ooO===( )=====Ooo=======
echo     Numero Sorteado: %numero%
echo     Qtde de Sorteios: %cont%
echo =================================
echo.
pause 
set /p resp=Deseja sortear novamente? [S/N]:
if /i %resp% == s (goto:sorteio) else (exit)