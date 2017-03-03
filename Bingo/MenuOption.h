//
// Created by emperorbyl on 2/22/2017.
//

#ifndef BINGO_MENUOPTION_H
#define BINGO_MENUOPTION_H

#include <string>
class MenuOption {
private:
    std::string m_command;
    std::string m_description;

public:
    MenuOption(std::string command, std::string description);
    const std::string& getCommand() const { return m_command; }
    const std::string& getDescription() const { return m_description; }
};


#endif //BINGO_MENUOPTION_H
