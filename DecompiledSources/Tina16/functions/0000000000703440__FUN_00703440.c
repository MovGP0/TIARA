/* Ghidra address: 00703440 */
/* Ghidra symbol: FUN_00703440 */


void FUN_00703440(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x490) != param_2) {
    *(char *)(param_1 + 0x490) = param_2;
    FUN_00655b90();
  }
  return;
}

