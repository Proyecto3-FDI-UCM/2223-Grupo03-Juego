#include "ChangeScene.h"
#include "ECS/ManagerFunctions.h"
#include "FlamingoBase/Scene.h"
#include "FlamingoBase/SceneManager.h"
#include "FlamingoExport/FlamingoCore.h"
#include "UI/UIElement.h"
#include "Audio/AudioSource.h"
#include "Audio/AudioSystem.h"

namespace Eldersbane
{
    ChangeScene::ChangeScene()
        : BehaviourScript()
    {
    }

    ChangeScene::~ChangeScene()
    {
    }

    Flamingo::BehaviourScript* ChangeScene::clone()
    {
        return new ChangeScene();
    }

    bool ChangeScene::initValues(std::unordered_map<std::string, std::string> t_args)
    {
        auto k = t_args.find("t_scene_change");

        if (k != t_args.end())
        {
            m_sceneToChange = k->second;
            return true;
        }
        else
            return false;
    }

    void ChangeScene::setFirstScene()
    {

     /*   if (Flamingo::FlamingoCore::getSceneManager()->getSceneActive()->getName() == "mapa")
            Flamingo::FlamingoCore::getSceneManager()->startScene("menu");
        else
            Flamingo::FlamingoCore::getSceneManager()->startScene("mapa");*/

    }

    void ChangeScene::start()
    {
        auto m_sceneMngr = Flamingo::FlamingoCore::getSceneManager();
        Flamingo::Scene* m = m_sceneMngr->getSceneActive();

        auto d = this->gameObject();
        auto a = Flamingo::getComponent<Flamingo::UIElement>(d);

        a->subsEvent(this);
    }

    void ChangeScene::clickFuntion()
    {
     
         Flamingo::FlamingoCore::getSceneManager()->startScene(m_sceneToChange);
    }
}
