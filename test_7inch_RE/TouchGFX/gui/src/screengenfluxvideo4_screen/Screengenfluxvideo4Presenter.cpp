#include <gui/screengenfluxvideo4_screen/Screengenfluxvideo4View.hpp>
#include <gui/screengenfluxvideo4_screen/Screengenfluxvideo4Presenter.hpp>

Screengenfluxvideo4Presenter::Screengenfluxvideo4Presenter(Screengenfluxvideo4View& v)
    : view(v)
{

}

void Screengenfluxvideo4Presenter::activate()
{

}

void Screengenfluxvideo4Presenter::deactivate()
{

}

void Screengenfluxvideo4Presenter::setGenFlux(int choix, int val)
{
	model->setGenFlux(choix, val);
}
