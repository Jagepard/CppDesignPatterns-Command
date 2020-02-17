/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>
#include "Lamp.h"
#include "TurnOnCommand.h"
#include "TurnOffCommand.h"
#include "ToggleCommand.h"

int main()
{
    Lamp device;
    TurnOnCommand on;
    TurnOffCommand off;
    ToggleCommand toggle;

    try
    {
        device.setCommand("on", &on);
        device.setCommand("off", &off);
        device.setCommand("toggle", &toggle);
        device.execute("on");
        device.execute("off");
        device.execute("toggle");
        device.execute("toggle");
    }
    catch (const char* exception)
    {
        std::cerr << exception << std::endl;
    }
}
