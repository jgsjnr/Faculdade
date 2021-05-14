@echo off
rem title é o nome da janela
title Class 02 - Programming batch script
rem mode é o tamanho da janela
mode 60,30
rem color é a cor do text em exadecimal
color 0a
rem quando há : é uma subrotina
:start
rem cls é clear
cls
rem echo. pula uma linha
echo.
echo ==========================
echo START MENU
echo ==========================
echo [1] Genetare files
echo [2] Organize files
echo [3] Hide files and folders
echo [4] Show files and folders
echo [5] Delete folder and files
echo [6] Exit
echo ===========================
echo.
rem set /p é entrada de texto e o que vem a seguir é uma variável
set /p op=Type your option:
rem if é o mesmo que o normal
if %op% == 1 (goto:generate)
if %op% == 2 (goto:organize)
if %op% == 3 (goto:hide)
if %op% == 4 (goto:show)
if %op% == 5 (goto:delete)
if %op% == 6 (goto:exit) else (
    echo.
    echo -------------------------------------
    echo            Invalid Option
    echo -------------------------------------
    rem isso pausa a tela
    pause > nul
    goto:start)
)
:gerar
set /p file=Type the nome of file to generate:
set /p amount=Type amount of files to generate:
set /p ext=Type file extension:
rem exemplo estrutura repeticao
rem o nome da estrutura e /L para ser um loop
rem após o in (numero inicial, incremento, quantidade)
for /L %%n in (1,1,%amount%) do (echo ADSMA2_SI > %file%%%n.%ext%)
echo.
echo --------------------------------
echo Generating of files successfully
echo --------------------------------
rem para ficar parado a frase na tela para o usuario observar
pause > nul
goto:start

:organize
set /p folder=Type the name of folder to create:
set /p ext=Type the extension of files to move:
md %pasta%
move *.%ext% C:\Users\jgsj9\Desktop\batch\%folder%\
echo.
echo -----------------------------------
echo   Files successfully organized!
echo ----------------------------------- 
pause > nul
goto:start

:hide
set /p folder=Type the name of folder to hidden:
attrib %folder% +r +h
echo.
echo -----------------------------
echo Hide the folder successufully
echo -----------------------------
pause > nul
goto:start

:exibir
set /p folder=Type name of the folder to show:
attrib %folder% -r -h
echo.
echo ---------------
echo Showing folder!
echo ---------------
pause > nul
goto:inicio

:delete
set /p folder=Type the name of the folder to exclude:
set /p del=You want to really exclude this folder? [Y/N]:
if /i %del% == Y (
c:
cd\Users\jgsj9\Desktop\batch\%folder%\
del /f /s /q %folder%
rd %folder%
echo --------------------------------------
echo Files and folder excluded with succeful!
echo --------------------------------------
pause > nul
goto:inicio) else (
goto:inicio)

:sair
set /p ans=Stop the script? [Y/N]:
if /i %ans% == Y (exit) else (goto:inicio)

