/* Ghidra address: 01bcd530 */
/* Ghidra symbol: FUN_01bcd530 */


void FUN_01bcd530(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong *local_40 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_40[0] = (longlong *)0x0;
  local_30 = *param_3;
  uStack_28 = param_3[1];
  uStack_20 = param_3[2];
  FUN_0046bd60(&local_30);
  FUN_01bccc20(param_1,local_40);
  uVar1 = (**(code **)(*local_40[0] + 0x110))(local_40[0],param_2,&local_30);
  FUN_0041d630(uVar1);
  FUN_0041b800(local_40);
  FUN_00460ba0(&local_30);
  return;
}

