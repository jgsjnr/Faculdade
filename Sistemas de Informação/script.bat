@echo off
rem comentario
title Menu principal
mode 60,30
color 1a
:inicio
cls
echo.
echo ==========================
echo Executando Script
echo ==========================
echo.
set user=JiangPu
set user1=Kakashin197
set ts3client="C:\Users\jgsj9\AppData\Local\TeamSpeak 3 Client"
set pwclient=E:\Perfect World\element
pause > nul
goto:team

:team
set /p resp=TS ja esta aberto? [S/N]:
    if /i %resp% == s (goto:pw) else (
        call %ts3client%\ts3client_win64.exe -nosingleinstance ts3server://blossom.ts3esports.com?channel="preparação"?nickname="Kakashin197"
        call %ts3client%\ts3client_win64.exe -nosingleinstance ts3server://blossom.ts3esports.com?channel="preparação"?nickname="%user%"
        pause > nul)
echo.
goto:pw)

:pw
set ext=bat
echo call elementclient startbypatcher rendernofocus user:%user% pwd:@senhadopw123A role:JiangPu > %pwclient%\user.%ext%
echo call elementclient startbypatcher rendernofocus user:pezaomaster pwd:@Luiz-12l role:Kakashin197 > %pwclient%\user1.%ext%
set /p resp=Kakashin ja esta aberto? [S/N]:
    if /i %resp% == s (goto:abrir) else (
    cd %pwclient%
    call %pwclient%\user1.bat
    echo.
    pause > nul
    echo.
    goto:abrir
    )   

:abrir
set /p resp=JiangPu ja esta logado? [S/N]:
    if /i %resp% == n (
    cd %pwclient%
    call %pwclient%\user.bat) else (
    echo.
    pause > nul
    goto:inicio)