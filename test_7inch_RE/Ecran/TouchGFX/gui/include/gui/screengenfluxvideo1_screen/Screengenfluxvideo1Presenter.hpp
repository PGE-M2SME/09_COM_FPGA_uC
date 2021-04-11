#ifndef SCREENGENFLUXVIDEO1PRESENTER_HPP
#define SCREENGENFLUXVIDEO1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screengenfluxvideo1View;

class Screengenfluxvideo1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screengenfluxvideo1Presenter(Screengenfluxvideo1View& v);

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

    virtual ~Screengenfluxvideo1Presenter() {};

private:
    Screengenfluxvideo1Presenter();

    Screengenfluxvideo1View& view;
};

#endif // SCREENGENFLUXVIDEO1PRESENTER_HPP
