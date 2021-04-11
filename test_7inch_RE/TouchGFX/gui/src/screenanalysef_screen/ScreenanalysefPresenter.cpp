#include <gui/screenanalysef_screen/ScreenanalysefView.hpp>
#include <gui/screenanalysef_screen/ScreenanalysefPresenter.hpp>

ScreenanalysefPresenter::ScreenanalysefPresenter(ScreenanalysefView& v)
    : view(v)
{

}

void ScreenanalysefPresenter::activate()
{

}

void ScreenanalysefPresenter::deactivate()
{

}

uint16_t ScreenanalysefPresenter::setRecFlux(int choix)
{
	switch (choix)
	{
	case 1:
	  return sortie=model->setRecFlux(1);
	  break;
	case 2:
	  return sortie=model->setRecFlux(2);
	  break;
	case 3:
	  return sortie=model->setRecFlux(3);
	  break;
	case 4:
	  return sortie=model->setRecFlux(4);
	  break;
	case 5:
	  return sortie=model->setRecFlux(5);
	  break;
	case 6:
	  return sortie=model->setRecFlux(6);
	  break;
	case 7:
	  return sortie=model->setRecFlux(7);
	  break;
	case 8:
	  return sortie=model->setRecFlux(8);
	  break;
	case 9:
	  return sortie=model->setRecFlux(9);
	  break;
	case 10:
	  return sortie=model->setRecFlux(10);
	  break;
	default:
		return 0;
	  break;
	}
}
