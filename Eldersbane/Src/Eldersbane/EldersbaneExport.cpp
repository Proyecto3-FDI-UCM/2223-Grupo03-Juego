// EldersbaneExport.cpp : Define las funciones exportadas del archivo DLL.
//

#include "Windows.h"
#include "EldersbaneExport.h"
#include <iostream>

#include "FlamingoExport/FlamingoExport.h"
#include "FlamingoExport/FlamingoCore.h"

#include "Lua/ScriptManager.h"
#include "ECS/Manager.h"

#include "ChangeScene.h"
#include "PlayerHealth.h"

bool InitJuego(Flamingo::FlamingoCore* t_core)
{
	//miMotor->DoSomething();
	
	std::cout << "juegoDado" << "\n";

	// Inicializar primera escena
	const std::string first_scene = "menu";
	t_core->addSceneToLoad(first_scene);
	t_core->setFirstScene(first_scene);

	// pasarle la lista de componentes del juego
	//setGameComponents(); // -> no lo encuentra :(
	//Flamingo::ScriptManager::instance()->addGameScript("ChangeScene", new ChangeScene());
	t_core->addGameScript("ChangeScene", new ChangeScene());

	return true;
}

void setGameComponents() 
{
	//Flamingo::ScriptManager::instance()->addGameScript("changeScene", new ChangeScene());
	//Flamingo::ScriptManager::instance()->addGameScript("playerHealth", new PlayerHealth());
}