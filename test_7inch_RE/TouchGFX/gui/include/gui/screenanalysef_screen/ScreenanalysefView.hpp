#ifndef SCREENANALYSEFVIEW_HPP
#define SCREENANALYSEFVIEW_HPP

#include <gui_generated/screenanalysef_screen/ScreenanalysefViewBase.hpp>
#include <gui/screenanalysef_screen/ScreenanalysefPresenter.hpp>

class ScreenanalysefView : public ScreenanalysefViewBase
{
public:
    ScreenanalysefView();
    virtual ~ScreenanalysefView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
    int cpt;
};

#endif // SCREENANALYSEFVIEW_HPP
