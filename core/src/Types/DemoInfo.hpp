#pragma once

namespace IWXMVM::Types
{
    struct DemoInfo
    {
        std::string name;
        std::string path;

        uint32_t currentTick;
        uint32_t endTick;
        std::optional<uint32_t> frozenTick;
    };
}  // namespace IWXMVM::Types