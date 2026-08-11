/* Ghidra address: 006e2140 */
/* Ghidra symbol: FUN_006e2140 */


void FUN_006e2140(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x52e) != (char)param_2) {
    *(char *)(param_1 + 0x52e) = (char)param_2;
    FUN_006d3ef0(param_1,4,param_2);
  }
  return;
}

