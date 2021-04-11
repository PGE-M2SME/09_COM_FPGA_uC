#include <gui/screengenbus2_screen/Screengenbus2View.hpp>
#include <gui/screengenbus2_screen/Screengenbus2Presenter.hpp>

Screengenbus2Presenter::Screengenbus2Presenter(Screengenbus2View& v)
    : view(v)
{

}

void Screengenbus2Presenter::activate()
{

}

void Screengenbus2Presenter::deactivate()
{

}

void Screengenbus2Presenter::setGenBus(int choix, int val)
{
	model->setGenBus(choix, val);
}
