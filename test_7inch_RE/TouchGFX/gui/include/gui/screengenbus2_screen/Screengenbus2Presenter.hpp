#ifndef SCREENGENBUS2PRESENTER_HPP
#define SCREENGENBUS2PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screengenbus2View;

class Screengenbus2Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screengenbus2Presenter(Screengenbus2View& v);

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

    virtual ~Screengenbus2Presenter() {};
    virtual void setGenBus(int choix, int val);

private:
    Screengenbus2Presenter();

    Screengenbus2View& view;
    int val;
    int choix;
};

#endif // SCREENGENBUS2PRESENTER_HPP
