/* Ghidra address: 005667f0 */
/* Ghidra symbol: FUN_005667f0 */


void FUN_005667f0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_0059b550(param_1 + 8,0);
  }
  FUN_0059b400(param_1 + 8,0);
  FUN_005661a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

