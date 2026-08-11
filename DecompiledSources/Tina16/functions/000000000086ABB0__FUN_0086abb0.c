/* Ghidra address: 0086abb0 */
/* Ghidra symbol: FUN_0086abb0 */


undefined4 FUN_0086abb0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined4 local_20;
  
  local_28 = (longlong *)0x0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_008687d0(param_1,&local_28);
  FUN_00468a50(&local_40,param_2);
  uVar1 = (**(code **)(*local_28 + 0x210))(local_28,&local_40);
  FUN_0041d630(uVar1);
  local_20 = 0;
  FUN_00460ba0(&local_40);
  FUN_0041b800(&local_28);
  return local_20;
}

