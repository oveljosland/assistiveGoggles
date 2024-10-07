//
// Created by Ove Ljosland on 07/10/2024.
//

#ifndef ASSISTIVEGOGGLES_INPUTLISTENER_H
#define ASSISTIVEGOGGLES_INPUTLISTENER_H

class ButtonListener {
public:
    ButtonListener(int buttonPin);
    bool isButtonPressed();
};

#endif //ASSISTIVEGOGGLES_INPUTLISTENER_H
