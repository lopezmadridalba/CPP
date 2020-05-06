#include "BasePlayer.h"

BasePlayer::BasePlayer() {
}

BasePlayer::BasePlayer(float custom_life) { // constructor
	life = custom_life;
}

BasePlayer::~BasePlayer() { // destructor
}

void BasePlayer::RecieveDamage(float damage) {
	life -= damage;
}

void BasePlayer::ApplyDamage(BasePlayer* punter, float damage) {
	punter->RecieveDamage(damage);
}

float BasePlayer::getLife() {
	return life;
}