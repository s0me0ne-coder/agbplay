#pragma once

#include <string>
#include <filesystem>

namespace OS {
    void CheckTerminal();
    const std::filesystem::path GetLocalConfigDirectory();
    const std::filesystem::path GetGlobalConfigDirectory();
};