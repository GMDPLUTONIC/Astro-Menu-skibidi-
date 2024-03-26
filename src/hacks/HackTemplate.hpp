#pragma once

#include <Geode/Geode.hpp>
#include <iostream>
#include "HackManager.hpp"

using namespace geode::prelude;
using namespace std;

class Hack {
public:
	inline static std::string name = "Hack";
	inline static std::string description = "Placeholder";
	inline static std::string hackKey;

	inline static void setEnabled(bool enabled) {
		Hacks::setModEnabled(hackKey, enabled);
	}
	inline static void loadValue() {
		Hacks::setModEnabled(hackKey, Mod::get()->getSavedValue<bool>(hackKey));
	}
};
