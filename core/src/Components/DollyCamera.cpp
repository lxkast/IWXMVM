#include "StdInclude.hpp"
#include "DollyCamera.hpp"

#include "Mod.hpp"

namespace IWXMVM::Components
{
    void DollyCamera::Initialize()
    {
    }

    void DollyCamera::Update()
    {
        const auto demoInfo = Mod::GetGameInterface()->GetDemoInfo();
        if (demoInfo.isRewinding)
            return;
        const auto currentTick = demoInfo.currentTick;
        
        const auto& keyframeManager = KeyframeManager::Get();
        const auto interpolatedValue = keyframeManager.Interpolate(
            keyframeManager.GetProperty(Types::KeyframeablePropertyType::CampathCamera), currentTick);

        this->GetPosition() = interpolatedValue.cameraData.position;
        this->GetRotation() = interpolatedValue.cameraData.rotation;
        this->GetFov() = interpolatedValue.cameraData.fov;
    }
}  // namespace IWXMVM::Components
