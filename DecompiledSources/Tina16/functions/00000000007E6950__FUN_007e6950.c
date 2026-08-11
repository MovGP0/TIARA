/* Ghidra address: 007e6950 */
/* Ghidra symbol: FUN_007e6950 */


void FUN_007e6950(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x88) = param_2;
  FUN_007e67c0(param_1);
  if ((PTR_DAT_02005bd0[0xd] != '\0') && (param_2 != 0)) {
    if (*(char *)(param_1 + 0x91) == '\0') {
      FUN_007e6890(param_1);
    }
    else {
      FUN_007e7070(param_1);
    }
  }
  return;
}

