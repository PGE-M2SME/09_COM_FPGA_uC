#include <gui/screengenfluxvideo2_screen/Screengenfluxvideo2View.hpp>
#include <gui/screengenfluxvideo2_screen/Screengenfluxvideo2Presenter.hpp>

Screengenfluxvideo2Presenter::Screengenfluxvideo2Presenter(Screengenfluxvideo2View& v)
    : view(v)
{

}

void Screengenfluxvideo2Presenter::activate()
{

}

void Screengenfluxvideo2Presenter::deactivate()
{

}

void Screengenfluxvideo2Presenter::setGenFlux(int choix, int val)
{
	model->setGenFlux(choix, val);
}
