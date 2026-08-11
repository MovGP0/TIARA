/* Ghidra address: 00bd43f0 */
/* Ghidra symbol: FUN_00bd43f0 */


void FUN_00bd43f0(undefined8 *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(param_1[4]);
  FUN_00410f20(param_1[3]);
  (**(code **)*param_1)(param_1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

