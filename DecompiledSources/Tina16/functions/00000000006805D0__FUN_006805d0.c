/* Ghidra address: 006805d0 */
/* Ghidra symbol: FUN_006805d0 */


void FUN_006805d0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a0) != param_2) {
    *(char *)(param_1 + 0x4a0) = param_2;
    FUN_00655b90();
  }
  return;
}

