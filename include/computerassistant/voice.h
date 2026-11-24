// voice — part of computer-assistant.

#pragma once

#include <string>
#include <vector>

namespace computerassistant {

class Voice {
public:
    explicit Voice(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace computerassistant
