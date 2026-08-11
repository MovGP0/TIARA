/* Ghidra address: 00407330 */
/* Ghidra symbol: FUN_00407330 */


void FUN_00407330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

