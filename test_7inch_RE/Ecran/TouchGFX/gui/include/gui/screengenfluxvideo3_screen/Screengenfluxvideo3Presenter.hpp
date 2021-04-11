#ifndef SCREENGENFLUXVIDEO3PRESENTER_HPP
#define SCREENGENFLUXVIDEO3PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screengenfluxvideo3View;

class Screengenfluxvideo3Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screengenfluxvideo3Presenter(Screengenfluxvideo3View& v);

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

    virtual ~Screengenfluxvideo3Presenter() {};

private:
    Screengenfluxvideo3Presenter();

    Screengenfluxvideo3View& view;
};

#endif // SCREENGENFLUXVIDEO3PRESENTER_HPP
