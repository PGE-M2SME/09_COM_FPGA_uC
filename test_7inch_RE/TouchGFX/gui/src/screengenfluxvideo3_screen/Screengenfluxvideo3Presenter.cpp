#include <gui/screengenfluxvideo3_screen/Screengenfluxvideo3View.hpp>
#include <gui/screengenfluxvideo3_screen/Screengenfluxvideo3Presenter.hpp>

Screengenfluxvideo3Presenter::Screengenfluxvideo3Presenter(Screengenfluxvideo3View& v)
    : view(v)
{

}

void Screengenfluxvideo3Presenter::activate()
{

}

void Screengenfluxvideo3Presenter::deactivate()
{

}

void Screengenfluxvideo3Presenter::setGenFlux(int choix, int val)
{
	model->setGenFlux(choix, val);
}
