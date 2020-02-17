#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "CommandInterface.h"

class TurnOffCommand : public CommandInterface
{
    public:
        virtual void execute() override;
};
