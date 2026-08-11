/* Ghidra address: 0086aad0 */
/* Ghidra symbol: FUN_0086aad0 */


undefined4 FUN_0086aad0(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong *local_30;
  undefined2 local_28 [4];
  undefined4 local_20;
  
  local_30 = (longlong *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_008687d0(param_1,&local_30);
  FUN_00468a50(&local_48,param_2);
  uVar1 = (**(code **)(*local_30 + 0x1d0))(local_30,&local_48,local_28);
  FUN_0041d630(uVar1);
  *param_3 = local_28[0];
  local_20 = 0;
  FUN_00460ba0(&local_48);
  FUN_0041b800(&local_30);
  return local_20;
}

