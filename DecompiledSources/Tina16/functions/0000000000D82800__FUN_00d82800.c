/* Ghidra address: 00d82800 */
/* Ghidra symbol: FUN_00d82800 */


int * FUN_00d82800(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4[1];
  *(undefined8 *)param_2 = *param_4;
  *(undefined8 *)(param_2 + 2) = uVar1;
  FUN_00423b10(param_2,0xfffffffe,0xfffffffe);
  *param_2 = *param_2 + 9;
  return param_2;
}

