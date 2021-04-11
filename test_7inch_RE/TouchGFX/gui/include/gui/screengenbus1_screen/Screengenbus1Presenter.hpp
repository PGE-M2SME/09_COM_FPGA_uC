#ifndef SCREENGENBUS1PRESENTER_HPP
#define SCREENGENBUS1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screengenbus1View;

class Screengenbus1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screengenbus1Presenter(Screengenbus1View& v);

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

    virtual ~Screengenbus1Presenter() {};
    virtual void setGenBus(int choix, int val);

private:
    Screengenbus1Presenter();

    Screengenbus1View& view;
    int val;
    int choix;
};

#endif // SCREENGENBUS1PRESENTER_HPP
