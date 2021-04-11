/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

screenViewBase::screenViewBase() :
    buttonCallback(this, &screenViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    buttonWithLabel1.setXY(220, 142);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID2));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setAction(buttonCallback);

    buttonWithLabel3.setXY(220, 288);
    buttonWithLabel3.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID));
    buttonWithLabel3.setLabelText(touchgfx::TypedText(T_SINGLEUSEID4));
    buttonWithLabel3.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel3.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel3.setAction(buttonCallback);

    buttonWithLabel4.setXY(220, 364);
    buttonWithLabel4.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID));
    buttonWithLabel4.setLabelText(touchgfx::TypedText(T_SINGLEUSEID5));
    buttonWithLabel4.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel4.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel4.setAction(buttonCallback);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_SME_LOGO_SMALL_ID));
    scalableImage1.setPosition(686, 20, 90, 93);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_LOGO_FSI_VF_ID));
    scalableImage2.setPosition(23, 20, 200, 109);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage3.setBitmap(touchgfx::Bitmap(BITMAP_TACHYSSEMA_LOGO_SMALL_ID));
    scalableImage3.setPosition(293, 66, 214, 57);
    scalableImage3.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    buttonWithLabe2.setXY(220, 216);
    buttonWithLabe2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_LARGE_ID));
    buttonWithLabe2.setLabelText(touchgfx::TypedText(T_SINGLEUSEID543));
    buttonWithLabe2.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabe2.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabe2.setAction(buttonCallback);

    scalableImage4.setBitmap(touchgfx::Bitmap(BITMAP_COPYRIGTH_SME_ID));
    scalableImage4.setPosition(698, 440, 23, 21);
    scalableImage4.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    textArea1.setXY(721, 438);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID544));

    add(__background);
    add(buttonWithLabel1);
    add(buttonWithLabel3);
    add(buttonWithLabel4);
    add(scalableImage1);
    add(scalableImage2);
    add(scalableImage3);
    add(buttonWithLabe2);
    add(scalableImage4);
    add(textArea1);
}

void screenViewBase::setupScreen()
{

}

void screenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel1)
    {
        //Interaction1
        //When buttonWithLabel1 clicked change screen to Screengenfluxvideo1
        //Go to Screengenfluxvideo1 with screen transition towards East
        application().gotoScreengenfluxvideo1ScreenSlideTransitionEast();
    }
    else if (&src == &buttonWithLabel3)
    {
        //Interaction3
        //When buttonWithLabel3 clicked change screen to Screenanalysef
        //Go to Screenanalysef with screen transition towards East
        application().gotoScreenanalysefScreenSlideTransitionEast();
    }
    else if (&src == &buttonWithLabel4)
    {
        //Interaction4
        //When buttonWithLabel4 clicked change screen to Screenanalyseb
        //Go to Screenanalyseb with screen transition towards East
        application().gotoScreenanalysebScreenSlideTransitionEast();
    }
    else if (&src == &buttonWithLabe2)
    {
        //Interaction5
        //When buttonWithLabe2 clicked change screen to Screengenbus1
        //Go to Screengenbus1 with no screen transition
        application().gotoScreengenbus1ScreenNoTransition();
    }
}
