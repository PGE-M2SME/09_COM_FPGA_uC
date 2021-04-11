#include <gui/screengenbus1_screen/Screengenbus1View.hpp>
#define nettoyage1 else{clear1();}
#define nettoyage2 else{clear2();}
#define nettoyage3 else{clear3();}
#define nettoyage4 else{clear4();}
Screengenbus1View::Screengenbus1View()
{

}

void Screengenbus1View::setupScreen()
{
    Screengenbus1ViewBase::setupScreen();
    init_val();
}

void Screengenbus1View::tearDownScreen()
{
    Screengenbus1ViewBase::tearDownScreen();
}

void Screengenbus1View::l1_0()
{
	if(il1<4)
	{
	l1tab[il1]=0;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();
	}
	nettoyage1

}

void Screengenbus1View::l1_1()
{
	if(il1<4)
	{
	l1tab[il1]=1;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();
	}
	nettoyage1

}

void Screengenbus1View::l1_2()
{
	if(il1<4)
	{
	l1tab[il1]=2;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();
	}
nettoyage1
}

void Screengenbus1View::l1_3()
{
	if(il1<4)
	{
	l1tab[il1]=3;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
nettoyage1
}

void Screengenbus1View::l1_4()
{
	if(il1<4)
	{
	l1tab[il1]=4;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
nettoyage1
}

void Screengenbus1View::l1_5()
{
	if(il1<4)
	{
	l1tab[il1]=5;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
nettoyage1
}

void Screengenbus1View::l1_6()
{
	if(il1<4)
	{
	l1tab[il1]=6;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
nettoyage1
}

void Screengenbus1View::l1_7()
{
	if(il1<4)
	{
	l1tab[il1]=7;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
nettoyage1
}

void Screengenbus1View::l1_8()
{
	if(il1<4)
	{
	l1tab[il1]=8;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
nettoyage1
}

void Screengenbus1View::l1_9()
{
	if(il1<4)
	{
	l1tab[il1]=9;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
	nettoyage1
}

void Screengenbus1View::l1_er()
{
	if(il1>0)
	{
		il1-=1;
		l1tab[il1]=0;
		Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
		textArea3.invalidate();

	}
nettoyage1
}

void Screengenbus1View::l1_enter()
{
    // Override and implement this function in Screengenfluxvideo1
	//Juste avant la mise a zero recuperer la ltab
	if(l1tab!=0)
	{
	setGenBus(1, transform_number(l1tab));
	l1tab[0]=0;
	l1tab[1]=0;
	l1tab[2]=0;
	l1tab[3]=0;
	il1=0;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();
	}

}

void Screengenbus1View::l2_0()
{
	if(il2<4)
	{
	l2tab[il2]=0;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();
	}
nettoyage2
}

void Screengenbus1View::l2_1()
{
	if(il2<4)
	{
	l2tab[il2]=1;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();
	}
nettoyage2
}

void Screengenbus1View::l2_2()
{
	if(il2<4)
	{
	l2tab[il2]=2;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();
	}
nettoyage2
}

void Screengenbus1View::l2_3()
{
	if(il2<4)
	{
	l2tab[il2]=3;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
nettoyage2
}

void Screengenbus1View::l2_4()
{
	if(il2<4)
	{
	l2tab[il2]=4;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
nettoyage2
}

void Screengenbus1View::l2_5()
{
	if(il2<4)
	{
	l2tab[il2]=5;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
nettoyage2
}

void Screengenbus1View::l2_6()
{
	if(il2<4)
	{
	l2tab[il2]=6;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
nettoyage2
}

void Screengenbus1View::l2_7()
{
	if(il2<4)
	{
	l2tab[il2]=7;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
nettoyage2
}

void Screengenbus1View::l2_8()
{
	if(il2<4)
	{
	l2tab[il2]=8;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
	nettoyage2
}

void Screengenbus1View::l2_9()
{
	if(il2<4)
	{
	l2tab[il2]=9;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
	nettoyage2
}

void Screengenbus1View::l2_er()
{
	if(il2>0)
	{
		il2-=1;
		l2tab[il2]=0;
		Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
		textArea3_1.invalidate();

	}
nettoyage2
}

void Screengenbus1View::l2_enter()
{
    // Override and implement this function in Screengenfluxvideo1
	//Juste avant la mise a zero recuperer la ltab
	if(l2tab[0]!=0)
	{
	setGenBus(2, transform_number(l2tab));
	l2tab[0]=0;
	l2tab[1]=0;
	l2tab[2]=0;
	l2tab[3]=0;
	il2=0;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();
	}

}

void Screengenbus1View::l3_0()
{
	if(il3<4)
	{
	l3tab[il3]=0;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();
	}
nettoyage3
}

void Screengenbus1View::l3_1()
{
	if(il3<4)
	{
	l3tab[il3]=1;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();
	}
nettoyage3
}

void Screengenbus1View::l3_2()
{
	if(il3<4)
	{
	l3tab[il3]=2;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();
	}
nettoyage3
}

void Screengenbus1View::l3_3()
{
	if(il3<4)
	{
	l3tab[il3]=3;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
nettoyage3
}

void Screengenbus1View::l3_4()
{
	if(il3<4)
	{
	l3tab[il3]=4;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
nettoyage3
}

void Screengenbus1View::l3_5()
{
	if(il3<4)
	{
	l3tab[il3]=5;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
nettoyage3
}

void Screengenbus1View::l3_6()
{
	if(il3<4)
	{
	l3tab[il3]=6;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
nettoyage3
}

void Screengenbus1View::l3_7()
{
	if(il3<4)
	{
	l3tab[il3]=7;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
nettoyage3
}

void Screengenbus1View::l3_8()
{
	if(il3<4)
	{
	l3tab[il3]=8;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
	nettoyage3
}

void Screengenbus1View::l3_9()
{
	if(il3<4)
	{
	l3tab[il3]=9;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
	nettoyage3
}

void Screengenbus1View::l3_er()
{
	if(il3>0)
	{
		il3-=1;
		l3tab[il3]=0;
		Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
		textArea3_1_1.invalidate();

	}
nettoyage3
}

void Screengenbus1View::l3_enter()
{
    // Override and implement this function in Screengenfluxvideo1
	//Juste avant la mise a zero recuperer la ltab
	if(l3tab[0]!=0)
	{
	setGenBus(3, transform_number(l3tab));
	l3tab[0]=0;
	l3tab[1]=0;
	l3tab[2]=0;
	l3tab[3]=0;
	il3=0;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();
	}

}

void Screengenbus1View::l4_0()
{
	if(il4<4)
	{
	l4tab[il4]=0;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();
	}
nettoyage4
}

void Screengenbus1View::l4_1()
{
	if(il4<4)
	{
	l4tab[il4]=1;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();
	}
nettoyage4
}

void Screengenbus1View::l4_2()
{
	if(il4<4)
	{
	l4tab[il4]=2;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();
	}
nettoyage4
}

void Screengenbus1View::l4_3()
{
	if(il4<4)
	{
	l4tab[il4]=3;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
nettoyage4
}

void Screengenbus1View::l4_4()
{
	if(il4<4)
	{
	l4tab[il4]=4;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
nettoyage4
}

void Screengenbus1View::l4_5()
{
	if(il4<4)
	{
	l4tab[il4]=5;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
nettoyage4
}

void Screengenbus1View::l4_6()
{
	if(il4<4)
	{
	l4tab[il4]=6;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
nettoyage4
}

void Screengenbus1View::l4_7()
{
	if(il4<4)
	{
	l4tab[il4]=7;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
nettoyage4
}

void Screengenbus1View::l4_8()
{
	if(il4<4)
	{
	l4tab[il4]=8;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
	nettoyage4
}

void Screengenbus1View::l4_9()
{
	if(il4<4)
	{
	l4tab[il4]=9;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
	nettoyage4
}

void Screengenbus1View::l4_er()
{
	if(il4>0)
	{
		il4-=1;
		l4tab[il4]=0;
		Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
		textArea3_2.invalidate();

	}
nettoyage4
}

void Screengenbus1View::l4_enter()
{
    // Override and implement this function in Screengenfluxvideo1
	//Juste avant la mise a zero recuperer la ltab
	if(l4tab[0]!=0)
	{
	setGenBus(4, transform_number(l4tab));
	l4tab[0]=0;
	l4tab[1]=0;
	l4tab[2]=0;
	l4tab[3]=0;
	il4=0;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();
	}

}

void Screengenbus1View::clear1()
{
	l1tab[0]=0;
	l1tab[1]=0;
	l1tab[2]=0;
	l1tab[3]=0;
	il1=0;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();
}

void Screengenbus1View::clear2()
{
	l2tab[0]=0;
	l2tab[1]=0;
	l2tab[2]=0;
	l2tab[3]=0;
	il2=0;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();
}

void Screengenbus1View::clear3()
{
	l3tab[0]=0;
	l3tab[1]=0;
	l3tab[2]=0;
	l3tab[3]=0;
	il3=0;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();
}

void Screengenbus1View::clear4()
{
	l4tab[0]=0;
	l4tab[1]=0;
	l4tab[2]=0;
	l4tab[3]=0;
	il4=0;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();
}


void Screengenbus1View::init_val()
{
	l1tab[0]=0;
	l1tab[1]=0;
	l1tab[2]=0;
	l1tab[3]=0;
	il1=0;
	l2tab[0]=0;
	l2tab[1]=0;
	l2tab[2]=0;
	l2tab[3]=0;
	il2=0;
	l3tab[0]=0;
	l3tab[1]=0;
	l3tab[2]=0;
	l3tab[3]=0;
	il3=0;
	l4tab[0]=0;
	l4tab[1]=0;
	l4tab[2]=0;
	l4tab[3]=0;
	il4=0;
}

void Screengenbus1View::setGenBus(int choix, int val)
{
	presenter->setGenBus(choix, val);
}

int Screengenbus1View::transform_number(int16_t * tab)
{
	if(tab[3]!=0)
	{
		 return nbr=1000*tab[0]+100*tab[1]+10*tab[2]+tab[3];
	}

	else if (tab[2]!=0)
	{
		return nbr=100*tab[0]+10*tab[1]+tab[2];
	}

	else if (tab[1]!=0)
	{
		return nbr=10*tab[0]+tab[1];
	}

	else if (tab[0]!=0)
	{
		return nbr=tab[0];
	}
	else
	{
		return 0;
	}
}



