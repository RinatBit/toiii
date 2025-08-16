#include <iostream>
#include <string>
#include <iomanip>

void printCentered(const std::string& text, int width = 60) {
    int padding = (width - text.length()) / 2;
    if (padding > 0) {
        std::cout << std::string(padding, ' ');
    }
    std::cout << text << std::endl;
}

void printSectionHeader(const std::string& text, int width = 60) {
    std::cout << std::string(width, '=') << std::endl;
    printCentered(text, width);
    std::cout << std::string(width, '=') << std::endl << std::endl;
}

int main() {
    // Set console output to UTF-8 for Kazakh characters
    #ifdef _WIN32
    system("chcp 65001");
    #endif

    // Print the invitation
    std::cout << std::string(60, '*') << std::endl;
    printCentered("✨ «Бақбергеннің 40 жас мерейтойына шақыру» ✨", 60);
    std::cout << std::string(60, '*') << std::endl << std::endl;

    printCentered("Құрметті ағайын-туыс, дос-жарандар!");
    printCentered("Сіздерді ардақты Бақбергеннің 40 жасқа толуына");
    printCentered("арналған мерейтой дастарханына шақырамыз.");
    printCentered("Бұл қуанышты күні сіздердің қасымызда болуыңыз");
    printCentered("– біз үшін ең үлкен сыйлық.");
    
    std::cout << std::endl;
    printSectionHeader("МЕРЕЙТОЙ МӘЛІМЕТТЕРІ");
    
    std::cout << std::left << std::setw(15) << "Күні:";
    std::cout << "17.08.2025" << std::endl;
    
    std::cout << std::left << std::setw(15) << "Уақыты:";
    std::cout << "19:00" << std::endl;
    
    std::cout << std::left << std::setw(15) << "Орны:";
    std::cout << "«AiAdil» мейрамханасы, 29а ықшамаудан, 22" << std::endl;
    
    std::cout << std::left << std::setw(15) << "2ГИС сілтемесі:";
    std::cout << "https://2gis.kz/almaty/firm/70000001018949139" << std::endl;
    
    std::cout << std::endl;
    printSectionHeader("КЕШ БАҒДАРЛАМАСЫ");
    
    std::cout << "• Дастархан басы" << std::endl;
    std::cout << "• Ән мен би" << std::endl;
    std::cout << "• Шын жүректен жылы лебіздер мен тосынсыйлар" << std::endl;
    
    std::cout << std::endl;
    printCentered("Сіздерді қуана күтетін боламыз!");
    std::cout << std::string(60, '*') << std::endl;
    
    return 0;
}