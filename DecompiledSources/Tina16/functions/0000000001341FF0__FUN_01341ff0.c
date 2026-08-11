/* Ghidra address: 01341ff0 */
/* Ghidra symbol: FUN_01341ff0 */


void FUN_01341ff0(longlong param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (*(char *)(param_1 + 0x24) == '\0') {
    FUN_01341860(param_1);
  }
  else {
    FUN_01341a60(param_1);
  }
  FUN_013417f0(param_1);
  return;
}

