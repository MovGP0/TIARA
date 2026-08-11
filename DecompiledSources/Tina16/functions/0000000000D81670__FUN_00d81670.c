/* Ghidra address: 00d81670 */
/* Ghidra symbol: FUN_00d81670 */


undefined8 *
FUN_00d81670(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = uVar1;
  return param_2;
}

