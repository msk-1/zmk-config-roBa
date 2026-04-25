#ifdef CONFIG_LAYOUT_SHIFT_TARGET_COLEMAK
#define LAYOUT_DEFINED
// Colemak keyboard layout mappings
// Maps US QWERTY keycodes to their Colemak equivalents
static const struct keycode_mapping layout_map[] = {
    /* from -> to, optional_modifiers */
    {E, F, OPTIONAL_ALL},                   // E -> F
    {R, P, OPTIONAL_ALL},                   // R -> P
    {T, G, OPTIONAL_ALL},                   // T -> G
    {Y, J, OPTIONAL_ALL},                   // Y -> J
    {U, L, OPTIONAL_ALL},                   // U -> L
    {I, U, OPTIONAL_ALL},                   // I -> U
    {O, Y, OPTIONAL_ALL},                   // O -> Y
    {P, SEMI, OPTIONAL_ALL},                // P -> ;
    {S, R, OPTIONAL_ALL},                   // S -> R
    {D, S, OPTIONAL_ALL},                   // D -> S
    {F, T, OPTIONAL_ALL},                   // F -> T
    {G, D, OPTIONAL_ALL},                   // G -> D
    {J, N, OPTIONAL_ALL},                   // J -> N
    {K, E, OPTIONAL_ALL},                   // K -> E
    {L, I, OPTIONAL_ALL},                   // L -> I
    {SEMI, O, OPTIONAL_ALL},                // ; -> O
    {N, K, OPTIONAL_ALL},                   // N -> K
};
#endif
