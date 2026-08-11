/* Ghidra address: 016ae4f0 */
/* Ghidra symbol: FUN_016ae4f0 */


void FUN_016ae4f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x31) != '\0') {
    FUN_016ae250(param_1,*(undefined4 *)(param_1 + 0x8458));
    *(undefined4 *)(param_1 + 0x8460) = *(undefined4 *)(param_1 + 0x8458);
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  return;
}

