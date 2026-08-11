/* Ghidra address: 004b1060 */
/* Ghidra symbol: FUN_004b1060 */


void FUN_004b1060(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    FUN_004b1090(param_1,0);
  }
  else {
    (**(code **)*param_2)(param_2,param_1);
  }
  return;
}

