/* Ghidra address: 0108bad0 */
/* Ghidra symbol: FUN_0108bad0 */


void FUN_0108bad0(longlong param_1)

{
  if (*(char *)(param_1 + 0xbe8) != '\0') {
    FUN_010860d0(param_1,*(undefined8 *)(param_1 + 0x4cb0));
    if (*(char *)(param_1 + 0x4c34) == '\0') {
      FUN_01085cd0(param_1);
      FUN_010892f0(param_1);
    }
    else if (*(char *)(param_1 + 0xbd6) != '\0') {
      FUN_01085cd0(param_1);
      FUN_010892f0(param_1);
    }
  }
  return;
}

