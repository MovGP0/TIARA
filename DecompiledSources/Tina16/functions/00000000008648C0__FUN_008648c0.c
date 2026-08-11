/* Ghidra address: 008648c0 */
/* Ghidra symbol: FUN_008648c0 */


undefined4 FUN_008648c0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00468b40(&local_38,local_res10[0]);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                    (*(longlong **)(param_1 + 0x18),&local_38);
  FUN_0041d630(uVar1);
  local_20 = 0;
  FUN_00460ba0(&local_38);
  FUN_00414480(local_res10);
  return local_20;
}

