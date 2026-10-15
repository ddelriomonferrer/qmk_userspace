#pragma once

// Global default tapping term (in milliseconds)
#define TAPPING_TERM 180

// Enable per-key tapping terms
#define TAPPING_TERM_PER_KEY

// Prevent hold being registered if released within tap term (similar to tap-preferred)
#define RETRO_TAPPING

// Activa el modificador en cuanto se pulsa otra tecla (vital para HRM)
#define PERMISSIVE_HOLD

// EEPROM storage for layer state
#define EEPROM_LAYER_STICKY

// Combos configuration
#define COMBO_TERM 300
#define COMBO_COUNT 9
#define COMBO_ALLOW_ACTION_KEYS

// Enable mouse keys for mouse click bindings
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_DELAY 0
