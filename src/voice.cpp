// voice.cpp — part of computer-assistant.

#include "computerassistant/voice.h"

#include <cstdio>

namespace computerassistant {

Voice::Voice(const std::string& config_path)
    : config_path_(config_path) {}

void Voice::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Voice::run() {
    if (verbose_) std::fprintf(stderr, "[computer-assistant] voice: run\n");
    // core logic lives here
    return true;
}

}  // namespace computerassistant
