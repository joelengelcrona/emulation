#ifndef DISSAS_H
#define DISSAS_H

#include "emu.h"

size_t read_rom(uint8_t **buffer, char *rom_filename, int offset);

void dissas_curr_inst(State *state);

void dissas_rom(uint8_t *rom, size_t len);

#endif // DISSAS_H
