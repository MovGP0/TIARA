/* Ghidra address: 0167e1d0 */
/* Ghidra symbol: FUN_0167e1d0 */


void FUN_0167e1d0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_0059b670(param_1 + 8,0);
  }
  FUN_0059b400(param_1 + 8,0);
  FUN_0167db60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

