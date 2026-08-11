/* Ghidra address: 006e1fa0 */
/* Ghidra symbol: FUN_006e1fa0 */


void FUN_006e1fa0(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x513) != (char)param_2) {
    *(char *)(param_1 + 0x513) = (char)param_2;
    FUN_006d3ef0(param_1,0x1000,param_2);
  }
  return;
}

