/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "Lamp.h"
#include "Lamp.h"
#include <iostream>

void Lamp::setCommand(string v, CommandInterface* command)
{
    commands.insert(std::make_pair(v, command));
}

void Lamp::execute(string v)
{
    try {
        if (!(commands.find(v) != commands.end())) {
            throw "Command does not exist in the registry";
        }

        commands.find(v)->second->execute();
    }
    catch (const char* exception)
    {
        std::cerr << exception << std::endl;
    }
}
