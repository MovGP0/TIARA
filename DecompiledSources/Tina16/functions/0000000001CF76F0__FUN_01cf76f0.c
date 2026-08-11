/* Ghidra address: 01cf76f0 */
/* Ghidra symbol: FUN_01cf76f0 */


undefined8 * FUN_01cf76f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_01d316c0(param_3,param_2);
  uVar1 = FUN_00f30500(*param_2,0,0);
  local_10 = FUN_004113f0(uVar1,&LAB_00f23b78);
  FUN_00410f20(local_10);
  return param_2;
}

