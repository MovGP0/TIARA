/* Ghidra address: 00d820b0 */
/* Ghidra symbol: FUN_00d820b0 */


undefined8 *
FUN_00d820b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5[1];
  *param_2 = *param_5;
  param_2[1] = uVar1;
  return param_2;
}

