// diag.cpp — part of computer-assistant.

#include "computerassistant/diag.h"

#include <cstdio>

namespace computerassistant {

Diag::Diag(const std::string& config_path)
    : config_path_(config_path) {}

void Diag::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Diag::run() {
    if (verbose_) std::fprintf(stderr, "[computer-assistant] diag: run\n");
    // core logic lives here
    return true;
}

}  // namespace computerassistant
