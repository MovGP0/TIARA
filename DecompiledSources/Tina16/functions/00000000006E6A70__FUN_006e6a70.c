/* Ghidra address: 006e6a70 */
/* Ghidra symbol: FUN_006e6a70 */


void FUN_006e6a70(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a9) != param_2) {
    *(char *)(param_1 + 0x4a9) = param_2;
    FUN_00655b90();
  }
  return;
}

