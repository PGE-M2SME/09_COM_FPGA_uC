/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenanalysef_screen/ScreenanalysefViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

ScreenanalysefViewBase::ScreenanalysefViewBase() :
    buttonCallback(this, &ScreenanalysefViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, -6, 800, 486);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    buttonWithIcon1.setXY(709, 402);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID));
    buttonWithIcon1.setIconXY(15, 16);
    buttonWithIcon1.setAction(buttonCallback);

    textArea1.setXY(289, 36);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID391));

    HBlanking.setXY(312, 188);
    HBlanking.setColor(touchgfx::Color::getColorFrom24BitRGB(251, 248, 248));
    HBlanking.setLinespacing(0);
    Unicode::snprintf(HBlankingBuffer, HBLANKING_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID393).getText());
    HBlanking.setWildcard(HBlankingBuffer);
    HBlanking.resizeToCurrentText();
    HBlanking.setTypedText(touchgfx::TypedText(T_SINGLEUSEID392));

    VBlanking.setXY(313, 225);
    VBlanking.setColor(touchgfx::Color::getColorFrom24BitRGB(247, 246, 246));
    VBlanking.setLinespacing(0);
    Unicode::snprintf(VBlankingBuffer, VBLANKING_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID395).getText());
    VBlanking.setWildcard(VBlankingBuffer);
    VBlanking.resizeToCurrentText();
    VBlanking.setTypedText(touchgfx::TypedText(T_SINGLEUSEID394));

    Frameformat.setXY(300, 155);
    Frameformat.setColor(touchgfx::Color::getColorFrom24BitRGB(249, 244, 244));
    Frameformat.setLinespacing(0);
    Unicode::snprintf(FrameformatBuffer, FRAMEFORMAT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID397).getText());
    Frameformat.setWildcard(FrameformatBuffer);
    Frameformat.resizeToCurrentText();
    Frameformat.setTypedText(touchgfx::TypedText(T_SINGLEUSEID396));

    VSync.setXY(336, 293);
    VSync.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 254, 254));
    VSync.setLinespacing(0);
    Unicode::snprintf(VSyncBuffer, VSYNC_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID399).getText());
    VSync.setWildcard(VSyncBuffer);
    VSync.resizeToCurrentText();
    VSync.setTypedText(touchgfx::TypedText(T_SINGLEUSEID398));

    HSync.setXY(331, 260);
    HSync.setColor(touchgfx::Color::getColorFrom24BitRGB(245, 242, 242));
    HSync.setLinespacing(0);
    Unicode::snprintf(HSyncBuffer, HSYNC_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID401).getText());
    HSync.setWildcard(HSyncBuffer);
    HSync.resizeToCurrentText();
    HSync.setTypedText(touchgfx::TypedText(T_SINGLEUSEID400));

    HResolution.setXY(313, 325);
    HResolution.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    HResolution.setLinespacing(0);
    Unicode::snprintf(HResolutionBuffer, HRESOLUTION_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID403).getText());
    HResolution.setWildcard(HResolutionBuffer);
    HResolution.resizeToCurrentText();
    HResolution.setTypedText(touchgfx::TypedText(T_SINGLEUSEID402));

    VResolution.setXY(304, 358);
    VResolution.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    VResolution.setLinespacing(0);
    Unicode::snprintf(VResolutionBuffer, VRESOLUTION_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID405).getText());
    VResolution.setWildcard(VResolutionBuffer);
    VResolution.resizeToCurrentText();
    VResolution.setTypedText(touchgfx::TypedText(T_SINGLEUSEID404));

    VideoFormat.setXY(300, 117);
    VideoFormat.setColor(touchgfx::Color::getColorFrom24BitRGB(249, 244, 244));
    VideoFormat.setLinespacing(0);
    Unicode::snprintf(VideoFormatBuffer, VIDEOFORMAT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID407).getText());
    VideoFormat.setWildcard(VideoFormatBuffer);
    VideoFormat.resizeToCurrentText();
    VideoFormat.setTypedText(touchgfx::TypedText(T_SINGLEUSEID406));

    add(__background);
    add(box1);
    add(buttonWithIcon1);
    add(textArea1);
    add(HBlanking);
    add(VBlanking);
    add(Frameformat);
    add(VSync);
    add(HSync);
    add(HResolution);
    add(VResolution);
    add(VideoFormat);
}

void ScreenanalysefViewBase::setupScreen()
{

}

void ScreenanalysefViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithIcon1)
    {
        //Interaction1
        //When buttonWithIcon1 clicked change screen to screen
        //Go to screen with screen transition towards East
        application().gotoscreenScreenSlideTransitionEast();
    }
}
