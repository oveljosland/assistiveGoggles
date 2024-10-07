//
// Created by Ove Ljosland on 07/10/2024.
//

#ifndef ASSISTIVEGOGGLES_SENSORMANAGER_H
#define ASSISTIVEGOGGLES_SENSORMANAGER_H

class SensorManager {
public:
    SensorManager();
    void startListening();
    bool detectFall();
    bool detectCloseObject(); // warn user when object is very close to head
};

#endif //ASSISTIVEGOGGLES_SENSORMANAGER_H
