#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>


struct
{
    float healthPoints;
    float maxHealthPoints;
    float mana;
    float maxMana;

    std::string name;
    bool equippedStatus;
    bool playerSkills;

} playerCharacter;

void playerCharacterSkills()
{
    // Strength
    std::vector<std::string> strengthSkills = {
    "One Handed", "Two Handed", "Dual Wield", "Smithing", "Heavy Armor", "Unarmed"
    };
    // Agility
    std::vector<std::string> agilitySkills = {
    "Thieving", "Lockpicking", "Stealth", "Archery", "Speech", "Charm"
    };
    // Magic
    std::vector<std::string> magicSkills = {
    "Evocation", "Illusion", "Necromancy", "Conjuration", "Enchantment", "Divination"
    };
}

void playerPerks() {
    int perkPoint = 1;
    float exp = 0.0f;
    float expMax = 100.0f;
    if (exp = expMax; expMAX * 1.5f) {
        perkPoint++;
        for (player.exp = i; player.exp > 1000; ++perkPoint) {
            playerCharacter.playerSkills();
        }
    }
}

void playerActiveSkills()
{
    std::vector<std::string> playerSkills = {" "};
    if (player.perkpoint = 1;) {
        bool isActive = true;
    }

}

void playerStats() {
    playerCharacter.healthPoints = playerCharacter.maxHealthPoints;
    playerCharacter.mana = playerCharacter.maxMana;

    if (playerCharacter.healthPoints > playerCharacter.maxHealthPoints) {

    }
}