/* Ghidra address: 016d4490 */
/* Ghidra symbol: FUN_016d4490 */


void FUN_016d4490(longlong param_1)

{
  if (*(char *)(param_1 + 0x588) != '\0') {
    *(undefined1 *)(param_1 + 0x588) = 0;
    thunk_FUN_041ba077(*(undefined8 *)(param_1 + 0x5a0));
    thunk_FUN_04186983(*(undefined8 *)(param_1 + 0x5a0));
  }
  return;
}

