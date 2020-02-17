#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <map>
#include "DeviceInterface.h"

class Lamp : public DeviceInterface
{
    private:
        std::map<string, CommandInterface*> commands;
    public:
        virtual void setCommand(string v, CommandInterface* command) override;
        virtual void execute(string v) override;
};
