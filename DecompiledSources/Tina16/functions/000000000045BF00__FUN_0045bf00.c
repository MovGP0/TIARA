/* Ghidra address: 0045bf00 */
/* Ghidra symbol: FUN_0045bf00 */


void FUN_0045bf00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = FUN_0045be20;
  param_1[1] = param_3;
  param_1[2] = uVar1;
  param_1[3] = (longlong)param_4;
  return;
}

