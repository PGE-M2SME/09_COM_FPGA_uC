#ifndef SCREENANALYSEBVIEW_HPP
#define SCREENANALYSEBVIEW_HPP

#include <gui_generated/screenanalyseb_screen/ScreenanalysebViewBase.hpp>
#include <gui/screenanalyseb_screen/ScreenanalysebPresenter.hpp>

class ScreenanalysebView : public ScreenanalysebViewBase
{
public:
    ScreenanalysebView();
    virtual ~ScreenanalysebView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENANALYSEBVIEW_HPP
