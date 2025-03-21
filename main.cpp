#include <iostream>
#include <string>
#include <vector>
#include "SkillCategory.h"

// Represents the player's character attributes.
struct PlayerCharacter {
    float healthPoints;
    float maxHealthPoints;
    float mana;
    float maxMana;
    std::string name;
    bool equippedStatus;
    std::vector<std::string> activeSkills; // List of currently active skills
};

// Holds player progression data.
struct PlayerStats {
    int perkPoints;
    float exp;
    float expMax;
};

void displaySkills() {
    GameSkills::OneHanded.printPerks();
    GameSkills::TwoHanded.printPerks();
}

// Contains the various skill categories.
struct Skills {
    std::vector<std::string> strengthSkills;
    std::vector<std::string> agilitySkills;
    std::vector<std::string> magicSkills;

    // Constructor initializes the vectors with default skills.
    Skills()
      : strengthSkills{"One Handed", "Two Handed", "Dual Wield", "Smithing", "Heavy Armor", "Unarmed"},
        agilitySkills{"Thieving", "Lockpicking", "Stealth", "Archery", "Speech", "Charm"},
        magicSkills{"Evocation", "Illusion", "Necromancy", "Conjuration", "Enchantment", "Divination", "Chronomancy"}
    {}
};

// Checks if the player has gained enough experience to receive a perk point.
void updatePlayerPerks(PlayerStats &stats) {
    // If experience exceeds 150% of expMax, grant a perk point.
    if (stats.exp >= stats.expMax * 1.5f) {
        stats.perkPoints++;
        // Optionally, subtract the exp used to gain the perk and increase the threshold for the next perk.
        stats.exp -= stats.expMax * 1.5f;
        stats.expMax *= 1.2f;
        std::cout << "New perk point gained! Total perk points: " << stats.perkPoints << "\n";
    }
}

// Ensures that the player's health and mana do not exceed their maximum values.
void updatePlayerStats(PlayerCharacter &player) {
    if (player.healthPoints > player.maxHealthPoints)
        player.healthPoints = player.maxHealthPoints;
    if (player.mana > player.maxMana)
        player.mana = player.maxMana;
}

// Example function to activate a skill (this could be expanded as needed).
void activateSkill(PlayerCharacter &player, const std::string &skill, int requiredPerkPoints, const PlayerStats &stats) {
    if (stats.perkPoints >= requiredPerkPoints) {
        player.activeSkills.push_back(skill);
        std::cout << "Activated skill: " << skill << "\n";
    } else {
        std::cout << "Not enough perk points to activate " << skill << "\n";
    }
}

int main() {
    for (int i = 0; i < 10; i++) {

    }

    return 0;
}
