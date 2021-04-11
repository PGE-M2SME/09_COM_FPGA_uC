#include <gui/screengenfluxvideo4_screen/Screengenfluxvideo4View.hpp>

Screengenfluxvideo4View::Screengenfluxvideo4View()
{

}

void Screengenfluxvideo4View::setupScreen()
{
    Screengenfluxvideo4ViewBase::setupScreen();
}

void Screengenfluxvideo4View::tearDownScreen()
{
    Screengenfluxvideo4ViewBase::tearDownScreen();
}

void Screengenfluxvideo4View::l1_1()
{
	if(il1<4)
	{
	l1tab[il1]=1;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();
	}

}

void Screengenfluxvideo4View::l1_2()
{
	if(il1<4)
	{
	l1tab[il1]=2;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();
	}

}

void Screengenfluxvideo4View::l1_3()
{
	if(il1<4)
	{
	l1tab[il1]=3;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}

}

void Screengenfluxvideo4View::l1_4()
{
	if(il1<4)
	{
	l1tab[il1]=4;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}

}

void Screengenfluxvideo4View::l1_5()
{
	if(il1<4)
	{
	l1tab[il1]=5;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}

}

void Screengenfluxvideo4View::l1_6()
{
	if(il1<4)
	{
	l1tab[il1]=6;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}

}

void Screengenfluxvideo4View::l1_7()
{
	if(il1<4)
	{
	l1tab[il1]=7;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}

}

void Screengenfluxvideo4View::l1_8()
{
	if(il1<4)
	{
	l1tab[il1]=8;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
}

void Screengenfluxvideo4View::l1_9()
{
	if(il1<4)
	{
	l1tab[il1]=9;
	il1++;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

	}
}

void Screengenfluxvideo4View::l1_er()
{
	if(il1>0)
	{
		il1-=1;
		l1tab[il1]=0;
		Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
		textArea3.invalidate();

	}

}

void Screengenfluxvideo4View::l1_enter()
{
    // Override and implement this function in Screengenfluxvideo1
	//Juste avant la mise a zero recuperer la ltab
	l1tab[0]=0;
	l1tab[1]=0;
	l1tab[2]=0;
	l1tab[3]=0;
	il1=0;
	Unicode::snprintf(textArea3Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l1tab[0],l1tab[1],l1tab[2],l1tab[3]);
	textArea3.invalidate();

}



void Screengenfluxvideo4View::l2_1()
{
	if(il2<4)
	{
	l2tab[il2]=1;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();
	}

}

void Screengenfluxvideo4View::l2_2()
{
	if(il2<4)
	{
	l2tab[il2]=2;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();
	}

}

void Screengenfluxvideo4View::l2_3()
{
	if(il2<4)
	{
	l2tab[il2]=3;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}

}

void Screengenfluxvideo4View::l2_4()
{
	if(il2<4)
	{
	l2tab[il2]=4;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}

}

void Screengenfluxvideo4View::l2_5()
{
	if(il2<4)
	{
	l2tab[il2]=5;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}

}

void Screengenfluxvideo4View::l2_6()
{
	if(il2<4)
	{
	l2tab[il2]=6;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}

}

void Screengenfluxvideo4View::l2_7()
{
	if(il2<4)
	{
	l2tab[il2]=7;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}

}

void Screengenfluxvideo4View::l2_8()
{
	if(il2<4)
	{
	l2tab[il2]=8;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
}

void Screengenfluxvideo4View::l2_9()
{
	if(il2<4)
	{
	l2tab[il2]=9;
	il2++;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();

	}
}

void Screengenfluxvideo4View::l2_er()
{
	if(il2>0)
	{
		il2-=1;
		l2tab[il2]=0;
		Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_1_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
		textArea3_1.invalidate();

	}

}

void Screengenfluxvideo4View::l2_enter()
{
    // Override and implement this function in Screengenfluxvideo1
	//Juste avant la mise a zero recuperer la ltab
	l2tab[0]=0;
	l2tab[1]=0;
	l2tab[2]=0;
	l2tab[3]=0;
	il2=0;
	Unicode::snprintf(textArea3_1Buffer,TEXTAREA3_SIZE, "%d%d%d%d", l2tab[0],l2tab[1],l2tab[2],l2tab[3]);
	textArea3_1.invalidate();
}

void Screengenfluxvideo4View::l3_1()
{
	if(il3<4)
	{
	l3tab[il3]=1;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();
	}

}

void Screengenfluxvideo4View::l3_2()
{
	if(il3<4)
	{
	l3tab[il3]=2;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();
	}

}

void Screengenfluxvideo4View::l3_3()
{
	if(il3<4)
	{
	l3tab[il3]=3;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}

}

void Screengenfluxvideo4View::l3_4()
{
	if(il3<4)
	{
	l3tab[il3]=4;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}

}

void Screengenfluxvideo4View::l3_5()
{
	if(il3<4)
	{
	l3tab[il3]=5;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}

}

void Screengenfluxvideo4View::l3_6()
{
	if(il3<4)
	{
	l3tab[il3]=6;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}

}

void Screengenfluxvideo4View::l3_7()
{
	if(il3<4)
	{
	l3tab[il3]=7;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}

}

void Screengenfluxvideo4View::l3_8()
{
	if(il3<4)
	{
	l3tab[il3]=8;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
}

void Screengenfluxvideo4View::l3_9()
{
	if(il3<4)
	{
	l3tab[il3]=9;
	il3++;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();

	}
}

void Screengenfluxvideo4View::l3_er()
{
	if(il3>0)
	{
		il3-=1;
		l3tab[il3]=0;
		Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
		textArea3_1_1.invalidate();

	}

}

void Screengenfluxvideo4View::l3_enter()
{
    // Override and implement this function in Screengenfluxvideo1
	//Juste avant la mise a zero recuperer la ltab
	l3tab[0]=0;
	l3tab[1]=0;
	l3tab[2]=0;
	l3tab[3]=0;
	il3=0;
	Unicode::snprintf(textArea3_1_1Buffer,TEXTAREA3_1_1_SIZE, "%d%d%d%d", l3tab[0],l3tab[1],l3tab[2],l3tab[3]);
	textArea3_1_1.invalidate();
}

void Screengenfluxvideo4View::l4_1()
{
	if(il4<4)
	{
	l4tab[il4]=1;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();
	}

}

void Screengenfluxvideo4View::l4_2()
{
	if(il4<4)
	{
	l4tab[il4]=2;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();
	}

}

void Screengenfluxvideo4View::l4_3()
{
	if(il4<4)
	{
	l4tab[il4]=3;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}

}

void Screengenfluxvideo4View::l4_4()
{
	if(il4<4)
	{
	l4tab[il4]=4;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}

}

void Screengenfluxvideo4View::l4_5()
{
	if(il4<4)
	{
	l4tab[il4]=5;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}

}

void Screengenfluxvideo4View::l4_6()
{
	if(il4<4)
	{
	l4tab[il4]=6;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}

}

void Screengenfluxvideo4View::l4_7()
{
	if(il4<4)
	{
	l4tab[il4]=7;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}

}

void Screengenfluxvideo4View::l4_8()
{
	if(il4<4)
	{
	l4tab[il4]=8;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
}

void Screengenfluxvideo4View::l4_9()
{
	if(il4<4)
	{
	l4tab[il4]=9;
	il4++;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

	}
}

void Screengenfluxvideo4View::l4_er()
{
	if(il4>0)
	{
		il4-=1;
		l4tab[il4]=0;
		Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
		textArea3_2.invalidate();

	}

}

void Screengenfluxvideo4View::l4_enter()
{
    // Override and implement this function in Screengenfluxvideo1
	//Juste avant la mise a zero recuperer la ltab
	l4tab[0]=0;
	l4tab[1]=0;
	l4tab[2]=0;
	l4tab[3]=0;
	il4=0;
	Unicode::snprintf(textArea3_2Buffer,TEXTAREA3_2_SIZE, "%d%d%d%d", l4tab[0],l4tab[1],l4tab[2],l4tab[3]);
	textArea3_2.invalidate();

}
