/* Ghidra address: 006e6a50 */
/* Ghidra symbol: FUN_006e6a50 */


void FUN_006e6a50(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a8) != param_2) {
    *(char *)(param_1 + 0x4a8) = param_2;
    FUN_00655b90();
  }
  return;
}

