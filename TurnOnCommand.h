#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "CommandInterface.h"

class TurnOnCommand : public CommandInterface
{
    public:
        virtual void execute() override;
};
