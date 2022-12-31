#include "Shooter.h"

Shooter::Shooter() {}
Shooter::~Shooter() {}

void Shooter::shoot(double speed) {

m_shooterMotor.Set(speed);

}

void Shooter::unjam(double speed) {

m_shooterMotor.Set(-speed);

}