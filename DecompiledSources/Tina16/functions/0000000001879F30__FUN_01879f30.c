/* Ghidra address: 01879f30 */
/* Ghidra symbol: FUN_01879f30 */


void FUN_01879f30(undefined8 *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  (**(code **)*param_1)(param_1);
  FUN_00410f20(param_1[1]);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

