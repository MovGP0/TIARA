/* Ghidra address: 006daec0 */
/* Ghidra symbol: FUN_006daec0 */


void FUN_006daec0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4b9) != param_2) {
    *(char *)(param_1 + 0x4b9) = param_2;
    FUN_00655b90();
  }
  return;
}

