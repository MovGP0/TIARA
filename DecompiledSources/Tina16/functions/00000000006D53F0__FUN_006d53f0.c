/* Ghidra address: 006d53f0 */
/* Ghidra symbol: FUN_006d53f0 */


void FUN_006d53f0(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x4b3) != (char)param_2) {
    *(char *)(param_1 + 0x4b3) = (char)param_2;
    FUN_006d3ef0(param_1,0x800,param_2);
  }
  return;
}

