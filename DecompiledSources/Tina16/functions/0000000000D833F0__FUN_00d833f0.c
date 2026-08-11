/* Ghidra address: 00d833f0 */
/* Ghidra symbol: FUN_00d833f0 */


undefined8 *
FUN_00d833f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = param_4;
  return param_1;
}

