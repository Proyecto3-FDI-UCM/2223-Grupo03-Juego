#pragma once
#ifndef __RED_ENEMY_H__
#define __RED_ENEMY_H__
#include "Scripting/BehaviourScript.h"

namespace Eldersbane
{
    /// <summary>
    /// Clase de enemigo fuerte pero con poca vida.
    /// Posee variables para obtener sus atributos
    /// </summary>
    class RedEnemy : public Flamingo::BehaviourScript
    {
      public:
        RedEnemy();
        ~RedEnemy();
        Flamingo::BehaviourScript* clone() override;
        bool initValues(std::unordered_map<std::string, std::string> = {}) override;
        int getDamage();
        int getLives();

        int m_damage=2;
        int m_lives;
    };
}
#endif