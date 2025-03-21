#pragma once

#include <string>
#include <vector>
#include <iostream>

// Class representing a single perk.
class Perk {
public:
    std::string name;
    int cost;

    Perk(const std::string& n, int c)
        : name(n), cost(c) {}
};

// Class representing a skill category containing multiple perks.
class SkillCategory {
private:
    std::string name;
    std::vector<Perk> perks;
public:
    SkillCategory(const std::string& n, const std::vector<Perk>& p)
        : name(n), perks(p) {}

    // Returns the name of the skill category.
    std::string getName() const { return name; }

    // Returns the vector of perks.
    const std::vector<Perk>& getPerks() const { return perks; }

    // Adds a new perk to the skill category.
    void addPerk(const Perk& perk) {
        perks.push_back(perk);
    }

    // Prints all perks in this skill category.
    void printPerks() const {
        std::cout << "Skill Category: " << name << "\n";
        for (const auto& perk : perks) {
            std::cout << "- " << perk.name 
                      << " (Cost: " << perk.cost 
                      << " perk point" << (perk.cost > 1 ? "s" : "") 
                      << ")\n";
        }
    }
};

namespace GameSkills {

    const SkillCategory OneHanded(
        "One Handed",
        {
            Perk("Armsman I", 1),
            Perk("Armsman II", 1),
            Perk("Armsman III", 1),
            Perk("Armsman IV", 2),
            Perk("Armsman V", 2),
            Perk("Fighting Stance", 2),
            Perk("Critical Charge", 2),
            Perk("Savage Strike", 3),
            Perk("Paralyzing Strike", 3),
            Perk("Dual Flurry I", 2),
            Perk("Dual Flurry II", 3),
            Perk("Dual Savagery", 4)
        }
    );

    const SkillCategory TwoHanded(
        "Two Handed",
        {
            Perk("Great Weapon Mastery I", 1),
            Perk("Great Weapon Mastery II", 1),
            Perk("Great Weapon Mastery III", 1),
            Perk("Cleave", 2),
            Perk("Heavy Strike", 2),
            Perk("Power Smash", 2),
            Perk("Rending Blow", 3),
            Perk("Devastating Swing", 3),
            Perk("Brutal Assault", 3),
            Perk("Sunder Armor", 4),
            Perk("Berserker Rage", 4),
            Perk("Finishing Strike", 5)
        }
    );

}

