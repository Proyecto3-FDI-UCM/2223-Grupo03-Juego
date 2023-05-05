#pragma once
#include "Scripting\BehaviourScript.h"
#include <FlamingoBase/Transform.h>
#include <Physics/RigidBody.h>
#include "Sword.h"
#include "PlayerMovement.h"
#include <Audio/AudioSource.h>
#include <FlamingoUtils/Timer.h>

namespace Eldersbane
{
    class PlayerAttack : public Flamingo::BehaviourScript{
      public:
        PlayerAttack();
        ~PlayerAttack();
        Flamingo::BehaviourScript* clone() override;
        void start() override;

        void update(float t_deltaTime) override;

        void desactivarColliderEspada();
      private:
        Sword* m_sword;
        Flamingo::Transform* m_transform;
        Flamingo::Transform* m_Swordtransform;
        PlayerMovement* playerMovement;
        int frames;
        Flamingo::AudioSource* m_audio_ataque;
        
        Flamingo::Timer* m_attackTimer;
        unsigned int m_cooldownAttack;
    };
} // namespace Eldersbane