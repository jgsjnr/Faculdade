dim nome, op, words(30), i, ac, resp, audio, test_a, test_b

call agregador

sub agregador()
words(1) = "Azul"
words(2) = "Amarelo"
words(3) = "Preto"
words(4) = "Branco"
words(5) = "Vermelho"
words(6) = "Verde"
words(7) = "Colorido"
words(8) = "Agua"
words(9) = "Fogo"
words(10) = "Terra"
words(11) = "Ar"
words(12) = "Avatar"
words(13) = "A"
words(14) = "Lenda"
words(15) = "De"
words(16) = "Mulher"
words(17) = "Homem"
words(18) = "Feminino"
words(19) = "Masculino"
words(20) = "Macho"
words(21) = "Fêmea"
words(22) = "Cisgênero"
words(23) = "Trans"
words(24) = "Feminista"
words(25) = "Logista"
words(26) = "Taxista"
words(27) = "Calcinha"
words(28) = "Cueca"
words(29) = "Chiclete"
words(30) = "Bala"
call carregar_voz
end sub

sub carregar_voz()
set audio=createobject("SAPI.SPVOICE")
audio.rate=1 'Velocidade da fala
audio.volume=100
call inicio
end sub

sub gerador()
randomize(second(time))
	i=int(rnd * 30) + 1
audio.speak(words(i))
test_a = 0
call main
end sub

sub main()
op=inputbox("Olá "& nome &"" + vbnewline &_
            "DIGITE A PALAVRA OUVIDA ABAIXO "& words(i) &"" + vbnewline &_
            "==============================" + vbnewline &_
		    "[O] Ouvir novamente" + vbnewline &_
			"[P] Pular a palavra uma única vez","SOLETRANDO 1.4 V74")
if ac = 12 then
msgbox("O jogo acabou" + vbnewline &_
    "Total de acertos "& ac &""),vbexclamation+vbokonly,"AVISO"
    resp=msgbox("Deseja jogar novamente?",vbquestion+vbyesno,"AVISO")
	if resp=vbyes then
        call gerador
        test_b = 0
	else
	    wscript.quit
	end if
end if
if cstr(op) = words(i) then
    ac = ac + 1
    msgbox(nome + vbnewline &_
    "Você acertou" + vbnewline &_
    "Total de acertos "& ac &""" de 12"),vbinformation+vbokonly,"AVISO"
    call gerador
elseif cstr(op) = "O" or cstr(op) = "P"  then
    select case op
        case "O":
            if test_a = 1 then
            msgbox("Você ja usou essa vantagem nessa rodada"),vbinformation+vbokonly,"AVISO"
            call main
            else
            audio.speak(words(i))
            test_a = 1
            call main
            end if
        case "P":
            if test_b <> 1 then
            msgbox("Você ja usou essa vantagem nessa rodada"),vbinformation+vbokonly,"AVISO"
            call main
            else
            call gerador
            test_b = 1
            end if 
    end select
    else 
    msgbox("Você errou" + vbnewline &_
    "Total de acertos "& ac &""),vbexclamation+vbokonly,"AVISO"
    resp=msgbox("Deseja jogar novamente?",vbquestion+vbyesno,"AVISO")
	if resp=vbyes then
        ac = 0
        call gerador
	else
	    wscript.quit
	end if
end if
end sub

sub inicio()
nome=inputbox("Digite seu nome: ")
call gerador
end sub