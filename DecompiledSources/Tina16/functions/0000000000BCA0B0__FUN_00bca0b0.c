/* Ghidra address: 00bca0b0 */
/* Ghidra symbol: FUN_00bca0b0 */


undefined8 FUN_00bca0b0(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[0x32] == 0) {
    (**(code **)*param_1)(param_1,0x3f0);
  }
  else {
    FUN_004167d0(param_2,param_1[0x32]);
  }
  return param_2;
}

