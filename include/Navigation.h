//
// Created by Ove Ljosland on 07/10/2024.
//

#ifndef ASSISTIVEGOGGLES_NAVIGATION_H
#define ASSISTIVEGOGGLES_NAVIGATION_H

class NavigationSystem {
public:
    NavigationSystem(const std::string& apiKey);
    void navigateHome(double currenLat, double currentLng, double homeLat, double homeLng);
private:
    std::string apiKey;
};

#endif //ASSISTIVEGOGGLES_NAVIGATION_H
