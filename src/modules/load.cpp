#include "modules/load.hpp"

namespace waybar::modules {
  Load::Load(const std::string& id, const Json::Value& config) 
    : ALabel(config, "load", id, "{}") {}

  auto Load::update() -> void {}

  std::tuple<double, double, double> Load::getLoad() { 
    return {0.0, 0.0, 0.0}; 
  }
}
