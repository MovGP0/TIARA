/* Ghidra address: 00cc00b0 */
/* Ghidra symbol: FUN_00cc00b0 */


void FUN_00cc00b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),param_1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

