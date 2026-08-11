/* Ghidra address: 01806780 */
/* Ghidra symbol: FUN_01806780 */


void FUN_01806780(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_00410f20(param_1[6]);
  FUN_009e6fc0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

