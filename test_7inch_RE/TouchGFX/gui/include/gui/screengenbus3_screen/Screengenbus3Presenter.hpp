#ifndef SCREENGENBUS3PRESENTER_HPP
#define SCREENGENBUS3PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screengenbus3View;

class Screengenbus3Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screengenbus3Presenter(Screengenbus3View& v);

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

    virtual ~Screengenbus3Presenter() {};
    virtual void setGenBus(int choix, int val);

private:
    Screengenbus3Presenter();

    Screengenbus3View& view;
    int val;
    int choix;
};

#endif // SCREENGENBUS3PRESENTER_HPP
