/* Ghidra address: 006daee0 */
/* Ghidra symbol: FUN_006daee0 */


void FUN_006daee0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4d0) != param_2) {
    *(char *)(param_1 + 0x4d0) = param_2;
    FUN_00655b90();
  }
  return;
}

