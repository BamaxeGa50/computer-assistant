// main.cpp — entry point. Wires config and subsystems together.

#include "computerassistant/settings.h"
#include "computerassistant/voice.h"
#include "computerassistant/diag.h"
#include "computerassistant/fixer.h"
#include "computerassistant/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    computerassistant::Settings settings = computerassistant::Settings::load_default();
    computerassistant::Voice voice(settings.store_path);
    computerassistant::Diag diag(settings.store_path);
    computerassistant::Fixer fixer(settings.store_path);
    computerassistant::Cli cli(settings.store_path);
    std::fprintf(stderr, "[computer-assistant] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
