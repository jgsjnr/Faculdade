dim n1,n2,n3,med,sit,resp 'Declarando variáveis locais
dim audio



call carregar_voz



sub carregar_voz()
set audio=createobject("SAPI.SPVOICE")
audio.rate=1 'Velocidade da fala
audio.volume=100
call entrada_notas
end sub



sub entrada_notas()
n1=cdbl(inputbox("Digite a nota 1","RENDIMENTO DO ALUNO"))
n2=cdbl(inputbox("Digite a nota 2","RENDIMENTO DO ALUNO"))
n3=cdbl(inputbox("Digite a nota 3","RENDIMENTO DO ALUNO"))



'Processamento
med=round((n1+n2+n3)/3,2)
if med < 4 then
sit="Reprovado"
elseif med >=4 and med <6 then
sit="Exame"
else
sit="Aprovado"
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