#ifndef SCREENANALYSEFPRESENTER_HPP
#define SCREENANALYSEFPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenanalysefView;

class ScreenanalysefPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenanalysefPresenter(ScreenanalysefView& v);

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

    virtual ~ScreenanalysefPresenter() {};

private:
    ScreenanalysefPresenter();

    ScreenanalysefView& view;
};

#endif // SCREENANALYSEFPRESENTER_HPP
