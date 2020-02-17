/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "ToggleCommand.h"
#include "TurnOffCommand.h"
#include "TurnOnCommand.h"

void ToggleCommand::execute()
{
    if ((toggle % 0b10) == 0b1) {
        TurnOnCommand on;
        on.execute();
    }
    else 
    {
        TurnOffCommand off;
        off.execute();
    }
    toggle++;
}
