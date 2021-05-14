@echo off
title AULA 06 - SISTEMAS DE INFORMACAO - BATCH - JO KEN PO
mode 110,20
color 0a
echo --------------------------------------
set /p nome=Digite seu nome:
echo --------------------------------------
set vitoria=0
set empate=0
set perdas=0
:inicio
set /a numero=(%random% %% 4) + 1
cls
echo.
echo =======================================================================================================
echo =      ::::::::::: ::::::::           :::    ::: :::::::::: ::::    :::           :::::::::   ::::::::= 
echo =         :+:    :+:    :+:          :+:   :+:  :+:        :+:+:   :+:           :+:    :+: :+:    :+:=  
echo =        +:+    +:+    +:+          +:+  +:+   +:+        :+:+:+  +:+           +:+    +:+ +:+    +:+ =  
echo =       +#+    +#+    +:+          +#++:++    +#++:++#   +#+ +:+ +#+           +#++:++#+  +#+    +:+  =  
echo =      +#+    +#+    +#+          +#+  +#+   +#+        +#+  +#+#+#           +#+        +#+    +#+   =  
echo = #+# #+#    #+#    #+#          #+#   #+#  #+#        #+#   #+#+#           #+#        #+#    #+#    =  
echo = #####      ########           ###    ### ########## ###    ####           ###         ########      = 
echo =======================================================================================================
echo.
echo [1] Pedra
echo [2] Papel
echo [3] Tesoura
echo [4] Largato
echo [5] Spock
echo [E] Encerrar jogo
echo [R] Regras
echo ===========================
echo.
set /p op=Digite opcao desejada:
if /i %op% == 1 (goto:pedra)
if /i %op% == 2 (goto:papel)
if /i %op% == 3 (goto:tesoura)
if /i %op% == 4 (goto:lagarto)
if /i %op% == 5 (goto:spock)
if /i %op% == e (goto:sair)
if /i %op% == r (goto:regras)
echo.
echo -----------------
echo Opcao Invalida!
echo -----------------
pause > nul
goto:inicio)

:regras
echo Preda:
echo    Empata com Pedra; Ganha de Tesoura e Lagarto; Perde de Papel e Spock
echo.
echo Papel:
echo    Empata com Papel; Ganha de Pedra e Spock; Perde de Tesoura e Lagarto;
echo.
echo Tesoura:
echo    Empata com Tesoura; Ganha de Lagart e Papel; Perde de Pedra e Spock
echo.
echo Lagarto:
echo    Empata com Lagarto; Ganha de Papel e Spock; Perde de Pedra e Tesoura;
echo.
echo Spock:
echo    Empata com Spock; Ganha de Pedra e Tesoura; Perde de Lagarto e Papel;
echo.
pause
goto:result

:pedra
echo.
echo %nome% escolheu Pedra
echo.
pause
if %op% == %numero% (
    set /a empate = empate + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voces empataram
    echo -----------------
    echo.    
    pause
    )
if %numero% == 3 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Tesoura
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 4 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Lagarto
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 2 (
    set /a vitoria = perdas + 1
    echo.
    echo Maquina escolheu Papel
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
if %numero% == 5 (
    set /a perdas = perdas + 1
    echo.
    echo Maquina escolheu Tesoura
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
goto:result

:papel
echo.
echo %nome% escolheu Papel
echo.
pause
if %op% == %numero% (
    set /a empate = empate + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voces empataram
    echo -----------------
    echo.    
    pause
    )
if %numero% == 1 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 5 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Spock
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 3 (
    set /a perdas = perdas + 1
    echo.
    echo Maquina escolheu Tesoura
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
if %numero% == 4 (
    set /a perdas = perdas + 1
    echo.
    echo Maquina escolheu Lagarto
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
goto:result

:tesoura
echo.
echo %nome% escolheu Tesoura
echo.
pause
if %op% == %numero% (
    set /a empate = empate + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voces empataram
    echo -----------------
    echo.    
    pause
    )
if %numero% == 2 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Papel
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 4 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Lagarto
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 1 (
    set /a perdas = perdas + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
if %numero% == 5 (
    set /a perdas = perdas + 1
    echo.
    echo Maquina escolheu Spock
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
goto:result

:lagarto
echo.
echo %nome% escolheu Lagarto
echo.
pause
if %op% == %numero% (
    set /a empate = empate + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voces empataram
    echo -----------------
    echo.    
    pause
    )
if %numero% == 2 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Papel
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 5 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Spock
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 3 (
    set /a vitoria = perdas + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
if %numero% == 4 (
    set /a perdas = perdas + 1
    echo.
    echo Maquina escolheu Tesoura
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
goto:result

:spock
echo.
echo %nome% escolheu Spock
echo.
pause
if %op% == %numero% (
    set /a empate = empate + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voces empataram
    echo -----------------
    echo.    
    pause
    )
if %numero% == 1 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Pedra
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 3 (
    set /a vitoria = vitoria + 1
    echo.
    echo Maquina escolheu Tesoura
    echo -----------------
    echo Voce ganhou
    echo -----------------
    echo.
    pause
    )
if %numero% == 2 (
    set /a perdas = perdas + 1
    echo.
    echo Maquina escolheu Papel
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
if %numero% == 4 (
    set /a perdas = perdas + 1
    echo.
    echo Maquina escolheu Lagarto
    echo -----------------
    echo Voce perdeu
    echo -----------------
    echo.
    pause
    )
goto:result

:sair
set /p resp=Deseja fechar o jogo [S/N]:
if /i %resp% == s (goto:inicio) else (exit)
:novo
set /p resp=Deseja jogar novamente? [S/N]:
if /i %resp% == s (goto:inicio) else (exit)

:result
echo.
echo empates: %empate%
echo.
echo perdas: %perdas%
echo.
echo vitorias: %vitoria%
echo.
pause
goto:novo