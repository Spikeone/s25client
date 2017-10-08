// Copyright (c) 2005 - 2017 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.

#ifndef BuildingTypes_h__
#define BuildingTypes_h__

#include "BuildingQuality.h"
#include "GoodTypes.h"
#include "JobTypes.h"

struct BuildingCost
{
    unsigned char boards;
    unsigned char stones;
};

// Größe der Gebäude
enum BuildingSize
{
    BZ_HUT = 0,
    BZ_HOUSE,
    BZ_CASTLE,
    BZ_MINE
};

// Konstanten zu den "normalen Gebäuden" (Betrieben), beginnt erst mit Granitmine
struct UsualBuilding
{
    /// Arbeitertyp, der in diesem Gebäude arbeitet
    Job job;
    /// Ware, die das Gebäude produziert
    GoodType produced_ware;
    /// Anzahl Waren, die das Gebäude benötigt
    unsigned char wares_needed_count;
    /// Waren, die das Gebäude benötigt
    GoodType wares_needed[3];
};

/// Rauch-Konstanten zu den "normalen Gebäuden" (Betrieben), beginnt erst mit Granitmine
struct SmokeConst
{
    /// Art des Rauches (von 1-4), 0 = kein Rauch!
    unsigned char type;
    /// Position des Rauches relativ zum Nullpunkt des Gebäudes
    signed char x, y;
};

enum BuildingType
{
    BLD_HEADQUARTERS = 0,    // ----
    BLD_BARRACKS = 1,        // NJR
    BLD_GUARDHOUSE = 2,      // NJR
    BLD_NOTHING2 = 3,        // ----
    BLD_WATCHTOWER = 4,      // NJ
    BLD_NOTHING3 = 5,        // ----
    BLD_NOTHING4 = 6,        // ----
    BLD_NOTHING5 = 7,        // ----
    BLD_NOTHING6 = 8,        // ----
    BLD_FORTRESS = 9,        // NJR
    BLD_GRANITEMINE = 10,    // NJR
    BLD_COALMINE = 11,       // NJR
    BLD_IRONMINE = 12,       // NJR
    BLD_GOLDMINE = 13,       // NJR
    BLD_LOOKOUTTOWER = 14,   //
    BLD_NOTHING7 = 15,       // ----
    BLD_CATAPULT = 16,       //
    BLD_WOODCUTTER = 17,     // NJR
    BLD_FISHERY = 18,        // N
    BLD_QUARRY = 19,         // NJR
    BLD_FORESTER = 20,       // NJR
    BLD_SLAUGHTERHOUSE = 21, // NJR
    BLD_HUNTER = 22,         // NJ
    BLD_BREWERY = 23,        // NJR
    BLD_ARMORY = 24,         // NJR
    BLD_METALWORKS = 25,     // NJR
    BLD_IRONSMELTER = 26,    // NJR
    BLD_CHARBURNER = 27,     // ---- // neu
    BLD_PIGFARM = 28,        // NJR
    BLD_STOREHOUSE = 29,     //
    BLD_NOTHING9 = 30,       // ----
    BLD_MILL = 31,           // NJR
    BLD_BAKERY = 32,         // NJR
    BLD_SAWMILL = 33,        // NJR
    BLD_MINT = 34,           // NJR
    BLD_WELL = 35,           // NJR
    BLD_SHIPYARD = 36,       //
    BLD_FARM = 37,           // NJR
    BLD_DONKEYBREEDER = 38,  //
    BLD_HARBORBUILDING = 39, //
    BLD_NOTHING,
    BLD_COUNT = BLD_NOTHING
};

// Anzahl an unterschiedlichen Gebäudetypen
const unsigned BUILDING_TYPES_COUNT = BLD_COUNT;
// NUmber of NOTHING entries (currently unused buildings)
const unsigned NUM_UNUSED_BLD_TYPES = 7;

#endif // BuildingTypes_h__
