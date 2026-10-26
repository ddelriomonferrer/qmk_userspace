#pragma once

// Global default tapping term (in milliseconds)
#define TAPPING_TERM 180

// Enable per-key tapping terms
#define TAPPING_TERM_PER_KEY


// Flow Tap: desactiva holds durante escritura rápida a ráfagas
#define FLOW_TAP_TERM 250

// Chordal Hold: restringe holds a combinaciones de manos opuestas correctamente
#define CHORDAL_HOLD

// EEPROM storage for layer state
#define EEPROM_LAYER_STICKY

// Combos configuration
#define COMBO_TERM 300
#define COMBO_COUNT 9
#define COMBO_ALLOW_ACTION_KEYS

// Enable mouse keys for mouse click bindings
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_DELAY 0
