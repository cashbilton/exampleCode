#pragma once

/*
All include files should go here
*/

#include "rev/CANSparkMax.h"

class Shooter {

    public:

        Shooter();
        ~Shooter();

        rev::CANSparkMax m_shooterMotor {1, rev::CANSparkMax::MotorType::kBrushless};

        void shoot(double speed);
        void unjam(double speed);

};