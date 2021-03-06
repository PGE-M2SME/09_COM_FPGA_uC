/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screengenbus3_screen/Screengenbus3ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screengenbus3ViewBase::Screengenbus3ViewBase() :
    buttonCallback(this, &Screengenbus3ViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 800, 480);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    buttonWithIcon1.setXY(698, 409);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID));
    buttonWithIcon1.setIconXY(15, 16);
    buttonWithIcon1.setAction(buttonCallback);

    textArea1.setXY(226, 19);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID500));

    br1.setXY(95, 66);
    br1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID501));
    br1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br1.setAction(buttonCallback);

    buttonWithIcon2.setXY(635, 66);
    buttonWithIcon2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    buttonWithIcon2.setIconXY(22, 15);
    buttonWithIcon2.setAction(buttonCallback);

    buttonWithIcon2_1.setXY(706, 66);
    buttonWithIcon2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DONE_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DONE_32_ID));
    buttonWithIcon2_1.setIconXY(15, 15);
    buttonWithIcon2_1.setAction(buttonCallback);

    br2.setXY(155, 66);
    br2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br2.setLabelText(touchgfx::TypedText(T_SINGLEUSEID502));
    br2.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br2.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br2.setAction(buttonCallback);

    br3.setXY(215, 66);
    br3.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br3.setLabelText(touchgfx::TypedText(T_SINGLEUSEID503));
    br3.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br3.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br3.setAction(buttonCallback);

    br4.setXY(275, 66);
    br4.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br4.setLabelText(touchgfx::TypedText(T_SINGLEUSEID504));
    br4.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br4.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br4.setAction(buttonCallback);

    br5.setXY(335, 66);
    br5.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br5.setLabelText(touchgfx::TypedText(T_SINGLEUSEID505));
    br5.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br5.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br5.setAction(buttonCallback);

    br6.setXY(395, 66);
    br6.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br6.setLabelText(touchgfx::TypedText(T_SINGLEUSEID506));
    br6.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br6.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br6.setAction(buttonCallback);

    br7.setXY(455, 66);
    br7.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br7.setLabelText(touchgfx::TypedText(T_SINGLEUSEID507));
    br7.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br7.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br7.setAction(buttonCallback);

    br8.setXY(515, 66);
    br8.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br8.setLabelText(touchgfx::TypedText(T_SINGLEUSEID508));
    br8.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br8.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br8.setAction(buttonCallback);

    br9.setXY(575, 66);
    br9.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br9.setLabelText(touchgfx::TypedText(T_SINGLEUSEID509));
    br9.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br9.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br9.setAction(buttonCallback);

    br1_1.setXY(95, 186);
    br1_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br1_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID510));
    br1_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br1_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br1_1.setAction(buttonCallback);

    buttonWithIcon2_2.setXY(635, 185);
    buttonWithIcon2_2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    buttonWithIcon2_2.setIconXY(22, 15);
    buttonWithIcon2_2.setAction(buttonCallback);

    buttonWithIcon2_1_1.setXY(706, 185);
    buttonWithIcon2_1_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DONE_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DONE_32_ID));
    buttonWithIcon2_1_1.setIconXY(15, 15);
    buttonWithIcon2_1_1.setAction(buttonCallback);

    br2_1.setXY(155, 185);
    br2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID511));
    br2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br2_1.setAction(buttonCallback);

    br3_1.setXY(215, 185);
    br3_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br3_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID512));
    br3_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br3_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br3_1.setAction(buttonCallback);

    br4_1.setXY(275, 185);
    br4_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br4_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID513));
    br4_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br4_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br4_1.setAction(buttonCallback);

    br5_1.setXY(335, 185);
    br5_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br5_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID514));
    br5_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br5_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br5_1.setAction(buttonCallback);

    br6_1.setXY(395, 185);
    br6_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br6_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID515));
    br6_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br6_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br6_1.setAction(buttonCallback);

    br7_1.setXY(455, 185);
    br7_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br7_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID516));
    br7_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br7_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br7_1.setAction(buttonCallback);

    br8_1.setXY(515, 185);
    br8_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br8_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID517));
    br8_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br8_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br8_1.setAction(buttonCallback);

    br9_1.setXY(575, 185);
    br9_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br9_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID518));
    br9_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br9_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br9_1.setAction(buttonCallback);

    textArea3.setXY(324, 130);
    textArea3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID520).getText());
    textArea3.setWildcard(textArea3Buffer);
    textArea3.resizeToCurrentText();
    textArea3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID519));

    br1_2_1.setXY(97, 307);
    br1_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br1_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID521));
    br1_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br1_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br1_2_1.setAction(buttonCallback);

    buttonWithIcon2_3_1.setXY(637, 307);
    buttonWithIcon2_3_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    buttonWithIcon2_3_1.setIconXY(22, 15);
    buttonWithIcon2_3_1.setAction(buttonCallback);

    buttonWithIcon2_1_2_1.setXY(708, 307);
    buttonWithIcon2_1_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_SQUARE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DONE_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_DONE_32_ID));
    buttonWithIcon2_1_2_1.setIconXY(15, 15);
    buttonWithIcon2_1_2_1.setAction(buttonCallback);

    br2_2_1.setXY(157, 307);
    br2_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br2_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID522));
    br2_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br2_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br2_2_1.setAction(buttonCallback);

    br3_2_1.setXY(217, 307);
    br3_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br3_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID523));
    br3_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br3_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br3_2_1.setAction(buttonCallback);

    br4_2_1.setXY(277, 307);
    br4_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br4_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID524));
    br4_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br4_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br4_2_1.setAction(buttonCallback);

    br5_2_1.setXY(337, 307);
    br5_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br5_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID525));
    br5_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br5_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br5_2_1.setAction(buttonCallback);

    br6_2_1.setXY(397, 307);
    br6_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br6_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID526));
    br6_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br6_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br6_2_1.setAction(buttonCallback);

    br7_2_1.setXY(457, 307);
    br7_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br7_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID527));
    br7_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br7_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br7_2_1.setAction(buttonCallback);

    br8_2_1.setXY(517, 307);
    br8_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br8_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID528));
    br8_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br8_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br8_2_1.setAction(buttonCallback);

    br9_2_1.setXY(577, 307);
    br9_2_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br9_2_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID529));
    br9_2_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br9_2_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br9_2_1.setAction(buttonCallback);

    textArea3_1.setXY(338, 250);
    textArea3_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea3_1.setLinespacing(0);
    Unicode::snprintf(textArea3_1Buffer, TEXTAREA3_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID540).getText());
    textArea3_1.setWildcard(textArea3_1Buffer);
    textArea3_1.resizeToCurrentText();
    textArea3_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID539));

    textArea3_1_1.setXY(300, 377);
    textArea3_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea3_1_1.setLinespacing(0);
    Unicode::snprintf(textArea3_1_1Buffer, TEXTAREA3_1_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID542).getText());
    textArea3_1_1.setWildcard(textArea3_1_1Buffer);
    textArea3_1_1.resizeToCurrentText();
    textArea3_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID541));

    buttonWithIcon3.setXY(32, 415);
    buttonWithIcon3.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_GO_BACK_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_GO_BACK_32_ID));
    buttonWithIcon3.setIconXY(15, 16);
    buttonWithIcon3.setAction(buttonCallback);

    br0l1.setXY(35, 66);
    br0l1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br0l1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID569));
    br0l1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br0l1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br0l1.setAction(buttonCallback);

    br0l2.setXY(35, 186);
    br0l2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br0l2.setLabelText(touchgfx::TypedText(T_SINGLEUSEID570));
    br0l2.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br0l2.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br0l2.setAction(buttonCallback);

    br0l3.setXY(37, 307);
    br0l3.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    br0l3.setLabelText(touchgfx::TypedText(T_SINGLEUSEID571));
    br0l3.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br0l3.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    br0l3.setAction(buttonCallback);

    add(__background);
    add(box1);
    add(buttonWithIcon1);
    add(textArea1);
    add(br1);
    add(buttonWithIcon2);
    add(buttonWithIcon2_1);
    add(br2);
    add(br3);
    add(br4);
    add(br5);
    add(br6);
    add(br7);
    add(br8);
    add(br9);
    add(br1_1);
    add(buttonWithIcon2_2);
    add(buttonWithIcon2_1_1);
    add(br2_1);
    add(br3_1);
    add(br4_1);
    add(br5_1);
    add(br6_1);
    add(br7_1);
    add(br8_1);
    add(br9_1);
    add(textArea3);
    add(br1_2_1);
    add(buttonWithIcon2_3_1);
    add(buttonWithIcon2_1_2_1);
    add(br2_2_1);
    add(br3_2_1);
    add(br4_2_1);
    add(br5_2_1);
    add(br6_2_1);
    add(br7_2_1);
    add(br8_2_1);
    add(br9_2_1);
    add(textArea3_1);
    add(textArea3_1_1);
    add(buttonWithIcon3);
    add(br0l1);
    add(br0l2);
    add(br0l3);
}

void Screengenbus3ViewBase::setupScreen()
{

}

void Screengenbus3ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithIcon1)
    {
        //Interaction1
        //When buttonWithIcon1 clicked change screen to screen
        //Go to screen with screen transition towards East
        application().gotoscreenScreenSlideTransitionEast();
    }
    else if (&src == &br1)
    {
        //Interaction46
        //When br1 clicked call virtual function
        //Call l1_1
        l1_1();
    }
    else if (&src == &buttonWithIcon2)
    {
        //Interaction5
        //When buttonWithIcon2 clicked call virtual function
        //Call l1_er
        l1_er();
    }
    else if (&src == &buttonWithIcon2_1)
    {
        //Interaction6
        //When buttonWithIcon2_1 clicked call virtual function
        //Call l1_enter
        l1_enter();
    }
    else if (&src == &br2)
    {
        //Interaction4
        //When br2 clicked call virtual function
        //Call l1_2
        l1_2();
    }
    else if (&src == &br3)
    {
        //Interaction39
        //When br3 clicked call virtual function
        //Call l1_3
        l1_3();
    }
    else if (&src == &br4)
    {
        //Interaction40
        //When br4 clicked call virtual function
        //Call l1_4
        l1_4();
    }
    else if (&src == &br5)
    {
        //Interaction41
        //When br5 clicked call virtual function
        //Call l1_5
        l1_5();
    }
    else if (&src == &br6)
    {
        //Interaction42
        //When br6 clicked call virtual function
        //Call l1_6
        l1_6();
    }
    else if (&src == &br7)
    {
        //Interaction43
        //When br7 clicked call virtual function
        //Call l1_7
        l1_7();
    }
    else if (&src == &br8)
    {
        //Interaction44
        //When br8 clicked call virtual function
        //Call l1_8
        l1_8();
    }
    else if (&src == &br9)
    {
        //Interaction45
        //When br9 clicked call virtual function
        //Call l1_9
        l1_9();
    }
    else if (&src == &br1_1)
    {
        //Interaction7
        //When br1_1 clicked call virtual function
        //Call l2_1
        l2_1();
    }
    else if (&src == &buttonWithIcon2_2)
    {
        //Interaction15
        //When buttonWithIcon2_2 clicked call virtual function
        //Call l2_er
        l2_er();
    }
    else if (&src == &buttonWithIcon2_1_1)
    {
        //Interaction16
        //When buttonWithIcon2_1_1 clicked call virtual function
        //Call l2_enter
        l2_enter();
    }
    else if (&src == &br2_1)
    {
        //Interaction8
        //When br2_1 clicked call virtual function
        //Call l2_2
        l2_2();
    }
    else if (&src == &br3_1)
    {
        //Interaction9
        //When br3_1 clicked call virtual function
        //Call l2_3
        l2_3();
    }
    else if (&src == &br4_1)
    {
        //Interaction10
        //When br4_1 clicked call virtual function
        //Call l2_4
        l2_4();
    }
    else if (&src == &br5_1)
    {
        //Interaction11
        //When br5_1 clicked call virtual function
        //Call l2_5
        l2_5();
    }
    else if (&src == &br6_1)
    {
        //Interaction47
        //When br6_1 clicked call virtual function
        //Call l2_6
        l2_6();
    }
    else if (&src == &br7_1)
    {
        //Interaction12
        //When br7_1 clicked call virtual function
        //Call l2_7
        l2_7();
    }
    else if (&src == &br8_1)
    {
        //Interaction13
        //When br8_1 clicked call virtual function
        //Call l2_8
        l2_8();
    }
    else if (&src == &br9_1)
    {
        //Interaction14
        //When br9_1 clicked call virtual function
        //Call l2_9
        l2_9();
    }
    else if (&src == &br1_2_1)
    {
        //Interaction17
        //When br1_2_1 clicked call virtual function
        //Call l3_1
        l3_1();
    }
    else if (&src == &buttonWithIcon2_3_1)
    {
        //Interaction26
        //When buttonWithIcon2_3_1 clicked call virtual function
        //Call l3_er
        l3_er();
    }
    else if (&src == &buttonWithIcon2_1_2_1)
    {
        //Interaction27
        //When buttonWithIcon2_1_2_1 clicked call virtual function
        //Call l3_enter
        l3_enter();
    }
    else if (&src == &br2_2_1)
    {
        //Interaction18
        //When br2_2_1 clicked call virtual function
        //Call l3_2
        l3_2();
    }
    else if (&src == &br3_2_1)
    {
        //Interaction19
        //When br3_2_1 clicked call virtual function
        //Call l3_3
        l3_3();
    }
    else if (&src == &br4_2_1)
    {
        //Interaction20
        //When br4_2_1 clicked call virtual function
        //Call l3_4
        l3_4();
    }
    else if (&src == &br5_2_1)
    {
        //Interaction21
        //When br5_2_1 clicked call virtual function
        //Call l3_5
        l3_5();
    }
    else if (&src == &br6_2_1)
    {
        //Interaction22
        //When br6_2_1 clicked call virtual function
        //Call l3_6
        l3_6();
    }
    else if (&src == &br7_2_1)
    {
        //Interaction23
        //When br7_2_1 clicked call virtual function
        //Call l3_7
        l3_7();
    }
    else if (&src == &br8_2_1)
    {
        //Interaction24
        //When br8_2_1 clicked call virtual function
        //Call l3_8
        l3_8();
    }
    else if (&src == &br9_2_1)
    {
        //Interaction25
        //When br9_2_1 clicked call virtual function
        //Call l3_9
        l3_9();
    }
    else if (&src == &buttonWithIcon3)
    {
        //Interaction3
        //When buttonWithIcon3 clicked change screen to Screengenbus2
        //Go to Screengenbus2 with no screen transition
        application().gotoScreengenbus2ScreenNoTransition();
    }
    else if (&src == &br0l1)
    {
        //Interaction48
        //When br0l1 clicked call virtual function
        //Call l1_0
        l1_0();
    }
    else if (&src == &br0l2)
    {
        //Interaction49
        //When br0l2 clicked call virtual function
        //Call l2_0
        l2_0();
    }
    else if (&src == &br0l3)
    {
        //Interaction50
        //When br0l3 clicked call virtual function
        //Call l3_0
        l3_0();
    }
}
