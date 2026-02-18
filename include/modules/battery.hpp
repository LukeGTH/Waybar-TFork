#pragma once
#include <iostream>
namespace waybar::modules { class Battery : public AModule { public: Battery(const std::string&, const Json::Value&); virtual auto update() -> void; }; }
