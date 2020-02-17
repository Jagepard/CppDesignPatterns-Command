#pragma once

/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "CommandInterface.h"

class ToggleCommand : public CommandInterface
{
    private:
        int toggle = 0b1;
    public:
        void execute();
};
