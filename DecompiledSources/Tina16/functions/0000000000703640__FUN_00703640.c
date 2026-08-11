/* Ghidra address: 00703640 */
/* Ghidra symbol: FUN_00703640 */


void FUN_00703640(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a8) != param_2) {
    *(char *)(param_1 + 0x4a8) = param_2;
    FUN_00655b90();
  }
  return;
}

