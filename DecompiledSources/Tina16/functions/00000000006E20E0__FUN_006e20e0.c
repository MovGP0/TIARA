/* Ghidra address: 006e20e0 */
/* Ghidra symbol: FUN_006e20e0 */


void FUN_006e20e0(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x52c) != (char)param_2) {
    *(char *)(param_1 + 0x52c) = (char)param_2;
    FUN_006d3ef0(param_1,1,param_2);
  }
  return;
}

