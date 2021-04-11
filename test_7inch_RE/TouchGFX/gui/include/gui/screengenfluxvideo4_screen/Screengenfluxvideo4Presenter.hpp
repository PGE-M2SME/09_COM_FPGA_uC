#ifndef SCREENGENFLUXVIDEO4PRESENTER_HPP
#define SCREENGENFLUXVIDEO4PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screengenfluxvideo4View;

class Screengenfluxvideo4Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screengenfluxvideo4Presenter(Screengenfluxvideo4View& v);

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

    virtual ~Screengenfluxvideo4Presenter() {};
    virtual void setGenFlux(int choix, int val);

private:
    Screengenfluxvideo4Presenter();

    Screengenfluxvideo4View& view;
    int val;
    int choix;
};

#endif // SCREENGENFLUXVIDEO4PRESENTER_HPP
