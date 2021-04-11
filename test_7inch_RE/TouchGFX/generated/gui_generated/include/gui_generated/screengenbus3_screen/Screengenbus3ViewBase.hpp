/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENGENBUS3VIEWBASE_HPP
#define SCREENGENBUS3VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screengenbus3_screen/Screengenbus3Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screengenbus3ViewBase : public touchgfx::View<Screengenbus3Presenter>
{
public:
    Screengenbus3ViewBase();
    virtual ~Screengenbus3ViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void l1_2()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_er()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_enter()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_1()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_2()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_3()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_4()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_5()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_7()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_8()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_9()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_er()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_enter()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_1()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_2()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_3()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_4()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_5()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_6()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_7()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_8()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_9()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_er()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_enter()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_3()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_4()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_5()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_6()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_7()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_8()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_9()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_1()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_6()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l1_0()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l2_0()
    {
        // Override and implement this function in Screengenbus3
    }

    virtual void l3_0()
    {
        // Override and implement this function in Screengenbus3
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::ButtonWithIcon buttonWithIcon1;
    touchgfx::TextArea textArea1;
    touchgfx::ButtonWithLabel br1;
    touchgfx::ButtonWithIcon buttonWithIcon2;
    touchgfx::ButtonWithIcon buttonWithIcon2_1;
    touchgfx::ButtonWithLabel br2;
    touchgfx::ButtonWithLabel br3;
    touchgfx::ButtonWithLabel br4;
    touchgfx::ButtonWithLabel br5;
    touchgfx::ButtonWithLabel br6;
    touchgfx::ButtonWithLabel br7;
    touchgfx::ButtonWithLabel br8;
    touchgfx::ButtonWithLabel br9;
    touchgfx::ButtonWithLabel br1_1;
    touchgfx::ButtonWithIcon buttonWithIcon2_2;
    touchgfx::ButtonWithIcon buttonWithIcon2_1_1;
    touchgfx::ButtonWithLabel br2_1;
    touchgfx::ButtonWithLabel br3_1;
    touchgfx::ButtonWithLabel br4_1;
    touchgfx::ButtonWithLabel br5_1;
    touchgfx::ButtonWithLabel br6_1;
    touchgfx::ButtonWithLabel br7_1;
    touchgfx::ButtonWithLabel br8_1;
    touchgfx::ButtonWithLabel br9_1;
    touchgfx::TextAreaWithOneWildcard textArea3;
    touchgfx::ButtonWithLabel br1_2_1;
    touchgfx::ButtonWithIcon buttonWithIcon2_3_1;
    touchgfx::ButtonWithIcon buttonWithIcon2_1_2_1;
    touchgfx::ButtonWithLabel br2_2_1;
    touchgfx::ButtonWithLabel br3_2_1;
    touchgfx::ButtonWithLabel br4_2_1;
    touchgfx::ButtonWithLabel br5_2_1;
    touchgfx::ButtonWithLabel br6_2_1;
    touchgfx::ButtonWithLabel br7_2_1;
    touchgfx::ButtonWithLabel br8_2_1;
    touchgfx::ButtonWithLabel br9_2_1;
    touchgfx::TextAreaWithOneWildcard textArea3_1;
    touchgfx::TextAreaWithOneWildcard textArea3_1_1;
    touchgfx::ButtonWithIcon buttonWithIcon3;
    touchgfx::ButtonWithLabel br0l1;
    touchgfx::ButtonWithLabel br0l2;
    touchgfx::ButtonWithLabel br0l3;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA3_SIZE = 5;
    touchgfx::Unicode::UnicodeChar textArea3Buffer[TEXTAREA3_SIZE];
    static const uint16_t TEXTAREA3_1_SIZE = 5;
    touchgfx::Unicode::UnicodeChar textArea3_1Buffer[TEXTAREA3_1_SIZE];
    static const uint16_t TEXTAREA3_1_1_SIZE = 5;
    touchgfx::Unicode::UnicodeChar textArea3_1_1Buffer[TEXTAREA3_1_1_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screengenbus3ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENGENBUS3VIEWBASE_HPP
