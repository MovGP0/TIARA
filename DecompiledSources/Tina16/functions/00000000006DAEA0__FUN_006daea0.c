/* Ghidra address: 006daea0 */
/* Ghidra symbol: FUN_006daea0 */


void FUN_006daea0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4b8) != param_2) {
    *(char *)(param_1 + 0x4b8) = param_2;
    FUN_00655b90();
  }
  return;
}

