#include <gui/screengenfluxvideo1_screen/Screengenfluxvideo1View.hpp>
#include <gui/screengenfluxvideo1_screen/Screengenfluxvideo1Presenter.hpp>

Screengenfluxvideo1Presenter::Screengenfluxvideo1Presenter(Screengenfluxvideo1View& v)
    : view(v)
{

}

void Screengenfluxvideo1Presenter::activate()
{

}

void Screengenfluxvideo1Presenter::deactivate()
{

}

void Screengenfluxvideo1Presenter::setGenFlux(int choix, int val)
{
	model->setGenFlux(choix, val);
}
