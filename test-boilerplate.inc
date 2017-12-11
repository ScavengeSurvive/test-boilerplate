#if defined _test_boilerplate_included
	#endinput
#endif
#define _test_boilerplate_included

#include <a_samp>
#include <YSI\y_hooks>

hook OnGameModeInit() {
    AddPlayerClass(
        101,
        1958.33, 1343.12, 15.36, 269.15,
        0, 0, 0, 0, 0, 0
    );

    return 1;
}

hook OnPlayerSpawn(playerid) {
    SendClientMessage(playerid, -1, "test-boilerplate.inc");

    return 1;
}
