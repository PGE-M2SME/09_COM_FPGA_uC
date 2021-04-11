#include <gui/screenanalyseb_screen/ScreenanalysebView.hpp>

ScreenanalysebView::ScreenanalysebView()
{

}

void ScreenanalysebView::setupScreen()
{
    ScreenanalysebViewBase::setupScreen();
    cpt=presenter->setRecBus(8);
    cpt=0;
}

void ScreenanalysebView::tearDownScreen()
{
    ScreenanalysebViewBase::tearDownScreen();
}

void ScreenanalysebView::handleTickEvent()
{
	if((presenter->setRecBus(7)==1) && (cpt==700))
	{
		Unicode::snprintf(TypebusBuffer, TYPEBUS_SIZE, "%d",presenter->setRecBus(1));
		Typebus.invalidate();
		Unicode::snprintf(FacteurBaudBuffer, FACTEURBAUD_SIZE,"%d",presenter->setRecBus(5));
		FacteurBaud.invalidate();
		Unicode::snprintf(OperateurbaudBuffer, OPERATEURBAUD_SIZE,"%d",presenter->setRecBus(4));
		Operateurbaud.invalidate();
		Unicode::snprintf(AdresseBuffer, ADRESSE_SIZE,"%d",presenter->setRecBus(3));
		Adresse.invalidate();
		Unicode::snprintf(TaillemotBuffer, TAILLEMOT_SIZE,"%d",presenter->setRecBus(2));
		Taillemot.invalidate();
		Unicode::snprintf(MotBuffer, MOT_SIZE,"%d",presenter->setRecBus(6));
		Mot.invalidate();
	}
	else
	{
		Unicode::snprintf(TypebusBuffer, TYPEBUS_SIZE, "%d%d%d%d",0,0,0,0);
		Typebus.invalidate();
		Unicode::snprintf(FacteurBaudBuffer, FACTEURBAUD_SIZE,"%d%d%d%d",0,0,0,0);
		FacteurBaud.invalidate();
		Unicode::snprintf(OperateurbaudBuffer, OPERATEURBAUD_SIZE,"%d%d%d%d",0,0,0,0);
		Operateurbaud.invalidate();
		Unicode::snprintf(AdresseBuffer, ADRESSE_SIZE,"%d%d%d%d",0,0,0,0);
		Adresse.invalidate();
		Unicode::snprintf(TaillemotBuffer, TAILLEMOT_SIZE,"%d%d%d%d",0,0,0,0);
		Taillemot.invalidate();
		Unicode::snprintf(MotBuffer, MOT_SIZE,"%d%d%d%d",0,0,0,0);
		Mot.invalidate();
		if(cpt<=400)
		{
		cpt++;
		}
		else
		{
		cpt=700;
		}
	}
}
