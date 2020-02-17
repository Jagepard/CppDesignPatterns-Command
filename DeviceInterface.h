#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <string>
#include "CommandInterface.h"

using namespace std;

class DeviceInterface
{
    public:
        virtual void setCommand(string v, CommandInterface* command) = 0;
        virtual void execute(string v) = 0;
};
