dim n1,n2,n3,sit,resp 'Declarando variáveis locais
dim audio



call carregar_voz



sub carregar_voz()
set audio=createobject("SAPI.SPVOICE")
audio.rate=1 'Velocidade da fala
audio.volume=100
call selecionar_saida
end sub

sub selecionar_saida()
resp=msgbox("Deseja ativar recuso de voz?",vbquestion + vbyesno,"ATENÇÃO")
if resp=vbyes then
call entrada_notas_audio
else
call entrada_notas
end if
end sub

sub entrada_notas()
n1=cint(inputbox("Digite a nota 1","RENDIMENTO DO ALUNO"))
n2=cint(inputbox("Digite a nota 2","RENDIMENTO DO ALUNO"))
n3=cint(inputbox("Digite a nota 3","RENDIMENTO DO ALUNO"))



'Processamento
if n1 > n2 then
    if n1 > n3 then
    msgbox("Maior numero: "& n1 &""),vbinformation+vbokonly,"RENDIMENTO DO ALUNO"
    end if
else
    if n2 > n1 then
        if n2 > n3 then
        msgbox("Maior numero: "& n2 &""),vbinformation+vbokonly,"RENDIMENTO DO ALUNO"
        end if
    else
        if n3 > n1 then
            if n3 > n2 then
            msgbox("Maior numero: "& n3 &""),vbinformation+vbokonly,"RENDIMENTO DO ALUNO"
            end if
end if

'Saída de Dados por Voz
audio.speak ("Rendimento do Aluno" + vbnewline &_
"Média do aluno "& med &"" + vbnewline &_
"Situação do aluno "& sit &"")




'Saída de Dados por mensagem
'msgbox("Média do Aluno: "& med &"" + vbnewline & _
' "Situação do Aluno: "& sit &""),vbinformation+vbokonly,"RENDIMENTO DO ALUNO"
call continuar
end sub



sub continuar()
resp=msgbox("Deseja Continuar?",vbquestion + vbyesno,"ATENÇÃO")
if resp=vbyes then
call entrada_notas
else
wscript.quit 'Encerra o Script
end if
end sub