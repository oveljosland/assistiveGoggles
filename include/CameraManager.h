//
// Created by Ove Ljosland on 07/10/2024.
//

#ifndef ASSISTIVEGOGGLES_CAMERAMANAGER_H
#define ASSISTIVEGOGGLES_CAMERAMANAGER_H

class CameraManager {
public:
    CameraManager();
    ~CameraManager();
    cv::Mat captureImage(); // capture image
};


#endif //ASSISTIVEGOGGLES_CAMERAMANAGER_H
