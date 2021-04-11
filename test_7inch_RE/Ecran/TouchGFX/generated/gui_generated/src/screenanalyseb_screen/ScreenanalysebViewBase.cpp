/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenanalyseb_screen/ScreenanalysebViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

ScreenanalysebViewBase::ScreenanalysebViewBase() :
    buttonCallback(this, &ScreenanalysebViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, -3, 800, 486);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    buttonWithIcon1.setXY(709, 402);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID));
    buttonWithIcon1.setIconXY(15, 16);
    buttonWithIcon1.setAction(buttonCallback);

    AnalyseBus.setXY(241, 36);
    AnalyseBus.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    AnalyseBus.setLinespacing(0);
    AnalyseBus.setTypedText(touchgfx::TypedText(T_SINGLEUSEID378));

    FacteurBaud.setXY(285, 267);
    FacteurBaud.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 253, 253));
    FacteurBaud.setLinespacing(0);
    Unicode::snprintf(FacteurBaudBuffer, FACTEURBAUD_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID380).getText());
    FacteurBaud.setWildcard(FacteurBaudBuffer);
    FacteurBaud.resizeToCurrentText();
    FacteurBaud.setTypedText(touchgfx::TypedText(T_SINGLEUSEID379));

    Operateurbaud.setXY(275, 228);
    Operateurbaud.setColor(touchgfx::Color::getColorFrom24BitRGB(245, 242, 242));
    Operateurbaud.setLinespacing(0);
    Unicode::snprintf(OperateurbaudBuffer, OPERATEURBAUD_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID382).getText());
    Operateurbaud.setWildcard(OperateurbaudBuffer);
    Operateurbaud.resizeToCurrentText();
    Operateurbaud.setTypedText(touchgfx::TypedText(T_SINGLEUSEID381));

    Adresse.setXY(307, 189);
    Adresse.setColor(touchgfx::Color::getColorFrom24BitRGB(251, 248, 248));
    Adresse.setLinespacing(0);
    Unicode::snprintf(AdresseBuffer, ADRESSE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID384).getText());
    Adresse.setWildcard(AdresseBuffer);
    Adresse.resizeToCurrentText();
    Adresse.setTypedText(touchgfx::TypedText(T_SINGLEUSEID383));

    Taillemot.setXY(302, 151);
    Taillemot.setColor(touchgfx::Color::getColorFrom24BitRGB(247, 246, 246));
    Taillemot.setLinespacing(0);
    Unicode::snprintf(TaillemotBuffer, TAILLEMOT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID386).getText());
    Taillemot.setWildcard(TaillemotBuffer);
    Taillemot.resizeToCurrentText();
    Taillemot.setTypedText(touchgfx::TypedText(T_SINGLEUSEID385));

    Typebus.setXY(306, 111);
    Typebus.setColor(touchgfx::Color::getColorFrom24BitRGB(249, 244, 244));
    Typebus.setLinespacing(0);
    Unicode::snprintf(TypebusBuffer, TYPEBUS_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID388).getText());
    Typebus.setWildcard(TypebusBuffer);
    Typebus.resizeToCurrentText();
    Typebus.setTypedText(touchgfx::TypedText(T_SINGLEUSEID387));

    Mot.setXY(332, 306);
    Mot.setColor(touchgfx::Color::getColorFrom24BitRGB(245, 242, 242));
    Mot.setLinespacing(0);
    Unicode::snprintf(MotBuffer, MOT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID390).getText());
    Mot.setWildcard(MotBuffer);
    Mot.resizeToCurrentText();
    Mot.setTypedText(touchgfx::TypedText(T_SINGLEUSEID389));

    add(__background);
    add(box1);
    add(buttonWithIcon1);
    add(AnalyseBus);
    add(FacteurBaud);
    add(Operateurbaud);
    add(Adresse);
    add(Taillemot);
    add(Typebus);
    add(Mot);
}

void ScreenanalysebViewBase::setupScreen()
{

}

void ScreenanalysebViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithIcon1)
    {
        //Interaction1
        //When buttonWithIcon1 clicked change screen to screen
        //Go to screen with screen transition towards East
        application().gotoscreenScreenSlideTransitionEast();
    }
}