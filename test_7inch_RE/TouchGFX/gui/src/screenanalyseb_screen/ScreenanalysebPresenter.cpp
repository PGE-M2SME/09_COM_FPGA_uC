#include <gui/screenanalyseb_screen/ScreenanalysebView.hpp>
#include <gui/screenanalyseb_screen/ScreenanalysebPresenter.hpp>

ScreenanalysebPresenter::ScreenanalysebPresenter(ScreenanalysebView& v)
    : view(v)
{

}

void ScreenanalysebPresenter::activate()
{

}

void ScreenanalysebPresenter::deactivate()
{

}

uint16_t ScreenanalysebPresenter::setRecBus(int choix)
{
	switch (choix)
	{
	case 1:
	  return sortie=model->setRecBus(1);
	  break;
	case 2:
	  return sortie=model->setRecBus(2);
	  break;
	case 3:
	  return sortie=model->setRecBus(3);
	  break;
	case 4:
	  return sortie=model->setRecBus(4);
	  break;
	case 5:
	  return sortie=model->setRecBus(5);
	  break;
	case 6:
	  return sortie=model->setRecBus(6);
	  break;
	case 7:
	  return sortie=model->setRecBus(7);
	  break;
	case 8:
	  return sortie=model->setRecBus(8);
	  break;
	default:
		return 0;
	  break;
	}
}
