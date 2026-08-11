/* Ghidra address: 0095f3d0 */
/* Ghidra symbol: FUN_0095f3d0 */


void FUN_0095f3d0(undefined8 *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)*param_1)(param_1);
  FUN_00410f20(param_1[5]);
  FUN_00410f20(param_1[6]);
  FUN_00410f20(param_1[7]);
  FUN_00410f20(param_1[8]);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

