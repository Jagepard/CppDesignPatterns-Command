/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>
#include "TurnOffCommand.h"

void TurnOffCommand::execute()
{
    std::cout << "The Light turns off" << std::endl;
}
