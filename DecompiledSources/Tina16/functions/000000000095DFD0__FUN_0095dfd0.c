/* Ghidra address: 0095dfd0 */
/* Ghidra symbol: FUN_0095dfd0 */


void FUN_0095dfd0(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 8))(param_1);
  FUN_00410f20(param_1[5]);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

