// built-in include guard removal
// just in case the user has a local dependency with the same file name
#if defined _inc_test_boilerplate
	#undef _inc_test_boilerplate
#endif
// custom include-guard to ensure we don't duplicate
#if defined _test_boilerplate_included
	#endinput
#endif
#define _test_boilerplate_included

#include <a_samp>
#include <YSI_Coding\y_hooks>

#define _TB_DEFAULT_POS_X (300.0)
#define _TB_DEFAULT_POS_Y (1800.0)
#define _TB_DEFAULT_POS_Z (18.0)

hook OnGameModeInit() {
	AddPlayerClass(101,
		_TB_DEFAULT_POS_X, _TB_DEFAULT_POS_Y, _TB_DEFAULT_POS_Z,
		0.0, 0, 0, 0, 0, 0, 0);
}

hook OnPlayerConnect(playerid) {
	SetSpawnInfo(playerid, NO_TEAM, 101,
		_TB_DEFAULT_POS_X, _TB_DEFAULT_POS_Y, _TB_DEFAULT_POS_Z,
		0.0, 0, 0, 0, 0, 0, 0);
	SpawnPlayer(playerid);

	return Y_HOOKS_CONTINUE_RETURN_1;
}

hook OnPlayerRequestClass(playerid, classid) {
	SetSpawnInfo(playerid, NO_TEAM, 101,
		_TB_DEFAULT_POS_X, _TB_DEFAULT_POS_Y, _TB_DEFAULT_POS_Z,
		0.0, 0, 0, 0, 0, 0, 0);

	return Y_HOOKS_BREAK_RETURN_0;
}

hook OnPlayerRequestSpawn(playerid) {
	SetSpawnInfo(playerid, NO_TEAM, 101,
		_TB_DEFAULT_POS_X, _TB_DEFAULT_POS_Y, _TB_DEFAULT_POS_Z,
		0.0, 0, 0, 0, 0, 0, 0);

	return Y_HOOKS_BREAK_RETURN_1;
}

hook OnPlayerSpawn(playerid) {
	SendClientMessage(playerid, -1, "Using ScavengeSurvive/test-boilerplate");
	TogglePlayerControllable(playerid, true);
	TogglePlayerSpectating(playerid, false);
	SetPlayerPos(playerid, _TB_DEFAULT_POS_X, _TB_DEFAULT_POS_Y, _TB_DEFAULT_POS_Z);
	SetCameraBehindPlayer(playerid);

	return Y_HOOKS_CONTINUE_RETURN_1;
}
