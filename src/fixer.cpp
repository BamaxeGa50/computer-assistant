// fixer.cpp — part of computer-assistant.

#include "computerassistant/fixer.h"

#include <cstdio>

namespace computerassistant {

Fixer::Fixer(const std::string& config_path)
    : config_path_(config_path) {}

void Fixer::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Fixer::run() {
    if (verbose_) std::fprintf(stderr, "[computer-assistant] fixer: run\n");
    // core logic lives here
    return true;
}

}  // namespace computerassistant
