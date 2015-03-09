////////////////////////////////////////////////////////////////////////////////
//
// $LastChangedBy$
// $LastChangedDate$
// $LastChangedRevision$
//
////////////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef __FF_EVENTS_H__
#define __FF_EVENTS_H__

#include "TF_Config.h"

typedef enum eFF_Version
{
	FF_VERSION_0_1 = 1,
	FF_VERSION_0_2,
	FF_VERSION_0_3,
	FF_VERSION_0_4,
	FF_VERSION_0_5,
	FF_VERSION_0_6,
	FF_VERSION_0_7,
	FF_VERSION_0_8,
	FF_VERSION_0_9,
	FF_VERSION_0_10,
	FF_VERSION_0_11,
	FF_VERSION_0_12,
	FF_VERSION_0_13,
	FF_VERSION_0_14,
	FF_VERSION_0_15,
	FF_VERSION_0_16,
	FF_VERSION_0_17,
	FF_VERSION_0_18,
	FF_VERSION_0_19,
	FF_VERSION_0_20,
	FF_VERSION_LAST,
	FF_VERSION_LATEST = FF_VERSION_LAST - 1
} FF_Version;

// enumerations: FF_Team
//		FF_TEAM_BLUE - Blue team.
//		FF_TEAM_RED - Red team.
//		FF_TEAM_YELLOW - Yellow team.
//		FF_TEAM_GREEN - Green team.
typedef enum eFF_Team
{
	FF_TEAM_NONE = OB_TEAM_NONE,
	FF_TEAM_BLUE,
	FF_TEAM_RED,
	FF_TEAM_YELLOW,
	FF_TEAM_GREEN,

	// THIS MUST STAY LAST
	FF_TEAM_MAX
} FF_Team;

#endif