/* Ghidra address: 006e2110 */
/* Ghidra symbol: FUN_006e2110 */


void FUN_006e2110(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x52d) != (char)param_2) {
    *(char *)(param_1 + 0x52d) = (char)param_2;
    FUN_006d3ef0(param_1,2,param_2);
  }
  return;
}

