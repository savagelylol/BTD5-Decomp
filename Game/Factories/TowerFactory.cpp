#include "TowerFactory.h"

#include <string>
#include <vector>

CTowerFactory::CTowerFactory(void* param_1, void* param_2) {
    this->definitions = "Assets/JSON/TowerDefinitions/";
    std::vector<std::string> proStatuses = {
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NonPro",
        "Pro",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
        "NA",
    };
    std::vector<std::string> towerNames = {
        "TestTower",
        "DartMonkey",
        "TackTower",
        "SniperMonkey",
        "BoomerangThrower",
        "NinjaMonkey",
        "BombTower",
        "IceTower",
        "GlueGunner",
        "MonkeyBuccaneer",
        "MonkeyAce",
        "SuperMonkey",
        "MonkeyApprentice",
        "MonkeyVillage",
        "BananaFarm",
        "MortarTower",
        "DartlingGun",
        "SpikeFactory",
        "HeliPilot",
        "RoadSpikes",
        "ExplodingPineapple",
        "MonkeyEngineer",
        "Bloonchipper",
        "MonkeySub",
        "MeerkatSpyPro",
        "MeerkatSpy",
        "TribalTurtlePro",
        "TribalTurtle",
        "PortableLakePro",
        "PortableLake",
        "PontoonPro",
        "Pontoon",
        "BloonsdayDevicePro",
        "BloonsdayDevice",
        "AngrySquirrelPro",
        "AngrySquirrel",
        "SuperMonkeyStormPro",
        "SuperMonkeyStorm",
        "BeeKeeperPro",
        "BeeKeeper",
        "BloonberryBushPro",
        "BloonberryBush",
        "RadadactylPro",
        "Radadactyl",
        "BananaFarmerPro",
        "BananaFarmer",
        "WizardLord",
        "AcePlane",
        "AircraftCarrier",
        "PhoenixPlane",
        "SuperPhoenixPlane",
        "SupplyDropPlane",
        "HeliPilotAircraft",
        "RadadactylPlane",
        "RadderdactylPlane",
        "MonkeyEngineerSentry",
        "MonkeyEngineerSentryTier4",
        "GameDummy"
    };
    std::vector<std::string> groundTargets = {
        "First",
        "Last",
        "Close",
        "Strong",
        "AnyInRange",
        "Any",
        "ManualActive",
        "ManualPassive",
        "Arc",
        "None",
        "Submerge"
    }
    std::vector<std::string> local_2c = {
        "Type"
    }
    std::vector<std::string> arialTargets = {
        "FollowPath",
        "Patrol",
        "FollowPlayer",
        "LockInPlace",
        "Pursuit"
    }
    this->LoadCategory(0, g_towerIds, g_towerIds.size(), 0);
    this->LoadCategory(1, groundTargets, groundTargets.size(), 0);
    this->LoadCategory(2, local_2c, local_2c.size(), 0);
    this->LoadCategory(3, arialTargets, arialTargets.size(), 0);
    this->LoadCategory(4, proStatuses, proStatuses.size(), 0);
    this->LoadCategory(5, towerNames, towerNames.size(), 0);
}