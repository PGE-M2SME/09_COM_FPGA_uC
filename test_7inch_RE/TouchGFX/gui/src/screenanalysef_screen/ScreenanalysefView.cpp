#include <gui/screenanalysef_screen/ScreenanalysefView.hpp>

ScreenanalysefView::ScreenanalysefView()
{

}

void ScreenanalysefView::setupScreen()
{
    ScreenanalysefViewBase::setupScreen();
    cpt=presenter->setRecFlux(9);
    cpt=presenter->setRecFlux(10);
    cpt=0;
}

void ScreenanalysefView::tearDownScreen()
{
    ScreenanalysefViewBase::tearDownScreen();
}

void ScreenanalysefView::handleTickEvent()
{ //Dire a l'envoie flux de mettre ces valeurs a 0 si il n'y a pas d'envoi

	if(cpt==700)
     {
		Unicode::snprintf(VideoFormatBuffer, VIDEOFORMAT_SIZE, "%d",presenter->setRecFlux(8));
		VideoFormat.invalidate();
		Unicode::snprintf(VResolutionBuffer, VRESOLUTION_SIZE,"%d",presenter->setRecFlux(2));
		VResolution.invalidate();
		Unicode::snprintf(HResolutionBuffer, HRESOLUTION_SIZE,"%d",presenter->setRecFlux(1));
		HResolution.invalidate();
		Unicode::snprintf(HSyncBuffer, HSYNC_SIZE,"%d",presenter->setRecFlux(3));
		HSync.invalidate();
		Unicode::snprintf(VSyncBuffer, VSYNC_SIZE,"%d",presenter->setRecFlux(4));
		VSync.invalidate();
		Unicode::snprintf(FrameformatBuffer, FRAMEFORMAT_SIZE,"%d",presenter->setRecFlux(7));
		Frameformat.invalidate();
		Unicode::snprintf(VBlankingBuffer, VBLANKING_SIZE,"%d",presenter->setRecFlux(6));
		VBlanking.invalidate();
		Unicode::snprintf(HBlankingBuffer, HBLANKING_SIZE,"%d",presenter->setRecFlux(5));
		HBlanking.invalidate();
	}
	else
	{
		Unicode::snprintf(VideoFormatBuffer, VIDEOFORMAT_SIZE, "%d%d%d%d",0,0,0,0);
		VideoFormat.invalidate();
		Unicode::snprintf(VResolutionBuffer, VRESOLUTION_SIZE,"%d%d%d%d",0,0,0,0);
		VResolution.invalidate();
		Unicode::snprintf(HResolutionBuffer, HRESOLUTION_SIZE,"%d%d%d%d",0,0,0,0);
		HResolution.invalidate();
		Unicode::snprintf(HSyncBuffer, HSYNC_SIZE,"%d%d%d%d",0,0,0,0);
		HSync.invalidate();
		Unicode::snprintf(VSyncBuffer, VSYNC_SIZE,"%d%d%d%d",0,0,0,0);
		VSync.invalidate();
		Unicode::snprintf(FrameformatBuffer, FRAMEFORMAT_SIZE,"%d%d%d%d",0,0,0,0);
		Frameformat.invalidate();
		Unicode::snprintf(VBlankingBuffer, VBLANKING_SIZE,"%d%d%d%d",0,0,0,0);
		VBlanking.invalidate();
		Unicode::snprintf(HBlankingBuffer, HBLANKING_SIZE,"%d%d%d%d",0,0,0,0);
		HBlanking.invalidate();
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
