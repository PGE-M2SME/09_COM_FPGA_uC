#ifndef SCREENGENFLUXVIDEO3VIEW_HPP
#define SCREENGENFLUXVIDEO3VIEW_HPP

#include <gui_generated/screengenfluxvideo3_screen/Screengenfluxvideo3ViewBase.hpp>
#include <gui/screengenfluxvideo3_screen/Screengenfluxvideo3Presenter.hpp>

class Screengenfluxvideo3View : public Screengenfluxvideo3ViewBase
{
public:
    Screengenfluxvideo3View();
    virtual ~Screengenfluxvideo3View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void l2_1();
    virtual void l2_2();
    virtual void l2_3();
    virtual void l2_4();
    virtual void l2_5();
    virtual void l2_6();
    virtual void l2_7();
    virtual void l2_8();
    virtual void l2_9();
    virtual void l2_er();
    virtual void l2_enter();

    virtual void l1_1();
    virtual void l1_2();
    virtual void l1_3();
    virtual void l1_4();
    virtual void l1_5();
    virtual void l1_6();
    virtual void l1_7();
    virtual void l1_8();
    virtual void l1_9();
    virtual void l1_er();
    virtual void l1_enter();

    virtual void l3_1();
    virtual void l3_2();
    virtual void l3_3();
    virtual void l3_4();
    virtual void l3_5();
    virtual void l3_6();
    virtual void l3_7();
    virtual void l3_8();
    virtual void l3_9();
    virtual void l3_er();
    virtual void l3_enter();

    virtual void l4_1();
    virtual void l4_2();
    virtual void l4_3();
    virtual void l4_4();
    virtual void l4_5();
    virtual void l4_6();
    virtual void l4_7();
    virtual void l4_8();
    virtual void l4_9();
    virtual void l4_er();
    virtual void l4_enter();
protected:
    int16_t l1tab[5];
    int16_t l2tab[4];
    int16_t l3tab[5];
    int16_t l4tab[5];

      int16_t il1;
      int16_t il2;
      int16_t il3;
      int16_t il4;
};

#endif // SCREENGENFLUXVIDEO3VIEW_HPP
