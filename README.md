# test-boilerplate.inc

Package for testing non-gamemode modules, contains minimal code for spawning.

## Usage

Simply add to your `pawn.json` and include:

```json
{
    "dependencies": [
        "ScavengeSurvive/test-boilerplate"
    ]
}
```

```pawn
#include <test-boilerplate>

#include "your-library.inc"
```

```bash
sampctl package build
sampctl package run
```

Connect to `localhost:7777` and test your library!
