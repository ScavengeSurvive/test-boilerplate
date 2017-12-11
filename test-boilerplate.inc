#include <a_samp>

public OnGameModeInit() {
    AddPlayerClass(
        101,
        1958.33, 1343.12, 15.36, 269.15,
        0, 0, 0, 0, 0, 0
    );

    return 1;
}

public OnPlayerSpawn(playerid) {
    SendClientMessage(playerid, -1, "test-boilerplate.inc");

    return 1;
}
