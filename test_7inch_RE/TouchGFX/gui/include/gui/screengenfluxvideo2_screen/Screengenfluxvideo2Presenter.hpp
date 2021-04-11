#ifndef SCREENGENFLUXVIDEO2PRESENTER_HPP
#define SCREENGENFLUXVIDEO2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screengenfluxvideo2View;

class Screengenfluxvideo2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screengenfluxvideo2Presenter(Screengenfluxvideo2View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screengenfluxvideo2Presenter() {};
    virtual void setGenFlux(int choix, int val);

private:
    Screengenfluxvideo2Presenter();

    Screengenfluxvideo2View& view;
    int val;
    int choix;
};

#endif // SCREENGENFLUXVIDEO2PRESENTER_HPP
