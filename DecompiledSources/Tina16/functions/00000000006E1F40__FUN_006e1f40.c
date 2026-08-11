/* Ghidra address: 006e1f40 */
/* Ghidra symbol: FUN_006e1f40 */


void FUN_006e1f40(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x490) != (char)param_2) {
    *(char *)(param_1 + 0x490) = (char)param_2;
    FUN_006d3ef0(param_1,0x400,param_2);
  }
  return;
}

