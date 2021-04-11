#include <gui/screengenbus1_screen/Screengenbus1View.hpp>
#include <gui/screengenbus1_screen/Screengenbus1Presenter.hpp>

Screengenbus1Presenter::Screengenbus1Presenter(Screengenbus1View& v)
    : view(v)
{

}

void Screengenbus1Presenter::activate()
{

}

void Screengenbus1Presenter::deactivate()
{

}

void Screengenbus1Presenter::setGenBus(int choix, int val)
{
	model->setGenBus(choix, val);
}
