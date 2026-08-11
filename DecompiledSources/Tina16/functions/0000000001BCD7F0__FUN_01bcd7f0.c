/* Ghidra address: 01bcd7f0 */
/* Ghidra symbol: FUN_01bcd7f0 */


void FUN_01bcd7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *local_40 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_40[0] = (longlong *)0x0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_0046f1a0(&local_30);
  FUN_01bccc20(param_1,local_40);
  uVar1 = (**(code **)(*local_40[0] + 0x1a0))
                    (local_40[0],param_2,param_3,param_4,&local_30,&local_30);
  FUN_0041d630(uVar1);
  FUN_0041b800(local_40);
  FUN_00460ba0(&local_30);
  return;
}

