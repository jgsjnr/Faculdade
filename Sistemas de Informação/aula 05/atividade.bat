@echo off
title AULA 05 - SISTEMAS DE INFORMACAO - BATCH
mode 60,20
color 0a
set /a cont=6
:sorteio
set /a numero=(%random% %% 49) + 1
set /a cont=%cont% - 1
cls
echo.
echo =====================================
echo Digite um numero entre 01 e 50
echo =====================================
echo Quantidade de tentativas restantes: %cont% %numero%
echo =====================================
echo.

:validar
set /p valor=Digite um numero entre 01 e 50:
if /i %valor% GTR 50 (
    echo.
    echo ========================
    echo O numero e maior que 50
    echo ========================
    echo.
    pause > nul
    goto:sorteio) else (goto:tentativas)

:tentativas
if %cont% EQU 0 (
    echo.
    echo ====================================
    echo Atingiu o valor maximo de tentativas
    echo ====================================
    echo.
    pause
    set /a cont=6
    goto:sorteio
) else (goto:menor)

:menor
if %valor% LSS %numero% (
    echo.
    echo ========================
    echo Digite um numero maior
    echo ========================
    echo.
    pause
    goto:validar) else (if %valor% GTR %numero% (
            echo.
            echo ========================
            echo Digite um numero menor
            echo ========================
            echo.
            pause
        goto:validar) else (if %valor% EQU %numero% (
                echo.
                echo ========================
                echo parabens voce acertou
                echo ========================
                echo.
                pause > nul) else (goto:sair)
        )
    )
)

:sair
set /p resp=Deseja sortear novamente? [S/N]:
if /i %resp% == s ( set /a cont=6
    goto:sorteio) else (exit)

