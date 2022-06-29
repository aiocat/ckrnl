/**
 * Copyright (c) 2022 aiocat
 *
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include "./headers/utils.h"

void SetFrameRate(uint16_t frameRate)
{
    if (!PipeActive())
        return;

    char formatted[128];
    sprintf(formatted, "setfpscap(%d)", frameRate);

    SendToPipe(formatted);
}

void SetWalkSpeed(uint16_t walkSpeed)
{
    if (!PipeActive())
        return;

    char formatted[512];
    sprintf(formatted, "game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = %d", walkSpeed);

    SendToPipe(formatted);
}

void SetJumpPower(uint16_t jumpPower)
{
    if (!PipeActive())
        return;

    char formatted[512];
    sprintf(formatted, "game.Players.LocalPlayer.Character.Humanoid.JumpPower = %d", jumpPower);

    SendToPipe(formatted);
}