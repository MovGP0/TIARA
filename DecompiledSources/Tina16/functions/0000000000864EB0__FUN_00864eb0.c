/* Ghidra address: 00864eb0 */
/* Ghidra symbol: FUN_00864eb0 */


undefined4 FUN_00864eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_00863030(&local_28,param_2);
  FUN_00863030(&local_30,param_3);
  FUN_00468a90(&local_48,local_30);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x150))
                    (*(longlong **)(param_1 + 0x18),local_28,&local_48);
  FUN_0041d630(uVar1);
  local_20 = 0;
  FUN_00460ba0(&local_48);
  FUN_00417840(&local_30,&LAB_0069aa08,2);
  return local_20;
}

