#ifndef MODEL_HPP
#define MODEL_HPP
#include <touchgfx/hal/types.hpp>
class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    virtual uint16_t setRecFlux(int choix);
    virtual uint16_t setRecBus(int choix);
    virtual void setGenFlux(int choix, int val);
    virtual void setGenBus(int choix, int val);

protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
