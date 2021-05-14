dim op,result,n,x,y,z,ac,err,inp,resp

call gerar

sub gerar()
randomize(second(time))
	x=int((rnd * 10) + 1)
	y=int((rnd * 10) + 1)
	z=int((rnd * 3) + 1)
select case z
            case 1:
			    result= cint(x * y)
                op=" * "
			case 2:
			    result= cint(x + y)
                op=" + "
		    case 3:
			    result= cint(x - y)
                op=" - "
end select
call inicio
end sub

sub inicio()
inp=cint(inputbox("===============" + vbnewline &_
            "ACERTE O NÚMERO" + vbnewline &_
		    "===============" + vbnewline &_
			"Conta: "& x &""& op &""& y &"", "FAÇA CONTINHAS 1.3 V2"))
if inp = result then
    ac = ac+1
    msgbox("Você acertou" + vbnewline &_
    "Acertos = "& ac &""),vbinformation+vbokonly,"AVISO"
    resp=msgbox("Deseja jogar novamente?",vbquestion+vbyesno,"AVISO")
	if resp=vbyes then
	    call gerar
	else
	    wscript.quit
	end if
else
    err = err+1
    msgbox("Você errou"+ vbnewline &_
    "Erros = "& err &""),vbCritical+vbokonly,"AVISO"
    resp=msgbox("Deseja jogar novamente?",vbquestion+vbyesno,"AVISO")
	if resp=vbyes then
        call gerar
	else
	    wscript.quit
	end if
end if
end sub