/* Ghidra address: 006842d0 */
/* Ghidra symbol: FUN_006842d0 */


void FUN_006842d0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x548) != param_2) {
    *(char *)(param_1 + 0x548) = param_2;
    FUN_00655b90();
  }
  return;
}

