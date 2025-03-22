//
// Created by doom3 on 22/03/2025.
//
#include "raylib"
#include "movement.h"
#include <iostream>

void movement() {

    float movementX = 0;
    float movementY = 0;

    float mouseMovementY = 0.0f;
    float mouseMovementX = 0.0f;

    switch (movement) {
        case 0:
            if (KeyPress W)
                movementY++;
        break;
        case 1:
            if (keyPress S)
                movementY--;
        break;
        case 2:
            if (keyPress D)
                movementX++;
        break;
        case 3:
            if (keyPress A)
                movementX--;
        break;
    };

int getMouseY(void);
int getMouseX(void);
Vector2 GetMouseDelta(void);
Vector2 GetMousePosition(void);
        if (mouseMovementY > mouseMovementX) {
            mouseMovementX = mouseMovementY;
            mouseMovementY = getMouseY();
        }

    }