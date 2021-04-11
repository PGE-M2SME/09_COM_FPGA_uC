#include <gui/screengenbus3_screen/Screengenbus3View.hpp>
#include <gui/screengenbus3_screen/Screengenbus3Presenter.hpp>

Screengenbus3Presenter::Screengenbus3Presenter(Screengenbus3View& v)
    : view(v)
{

}

void Screengenbus3Presenter::activate()
{

}

void Screengenbus3Presenter::deactivate()
{

}

void Screengenbus3Presenter::setGenBus(int choix, int val)
{
	model->setGenBus(choix, val);
}
