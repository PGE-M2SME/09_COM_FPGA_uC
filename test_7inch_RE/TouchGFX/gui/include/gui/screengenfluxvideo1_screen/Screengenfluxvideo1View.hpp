#ifndef SCREENGENFLUXVIDEO1VIEW_HPP
#define SCREENGENFLUXVIDEO1VIEW_HPP

#include <gui_generated/screengenfluxvideo1_screen/Screengenfluxvideo1ViewBase.hpp>
#include <gui/screengenfluxvideo1_screen/Screengenfluxvideo1Presenter.hpp>

class Screengenfluxvideo1View : public Screengenfluxvideo1ViewBase
{
public:
    Screengenfluxvideo1View();
    virtual ~Screengenfluxvideo1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void l2_0();
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

    virtual void l1_0();
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

    virtual void l3_0();
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

    virtual void l4_0();
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

    virtual void init_val();
    virtual void clear1();
    virtual void clear2();
    virtual void clear3();
    virtual void clear4();

    virtual int transform_number(int16_t * tab);
    virtual void setGenFlux(int choix, int val);
    virtual int verif_resolution(int res, int valmin);


protected:
    int16_t l1tab[5];
    int16_t l2tab[5];
    int16_t l3tab[5];
    int16_t l4tab[5];

      int16_t il1;
      int16_t il2;
      int16_t il3;
      int16_t il4;

      int verif_resol;
      int val;
      int choix;
      int nbr;
      int res;
      int rH;
      int rV;
      int pClk;
};

#endif // SCREENGENFLUXVIDEO1VIEW_HPP
