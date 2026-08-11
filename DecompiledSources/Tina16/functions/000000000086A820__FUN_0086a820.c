/* Ghidra address: 0086a820 */
/* Ghidra symbol: FUN_0086a820 */


undefined4 FUN_0086a820(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined8 local_28;
  longlong *local_20;
  undefined2 local_18 [4];
  undefined4 local_10;
  
  local_20 = (longlong *)0x0;
  local_28 = 0;
  FUN_008687d0(param_1,&local_20);
  FUN_004168e0(&local_28,param_2);
  uVar1 = (**(code **)(*local_20 + 0x208))(local_20,local_28,local_18);
  FUN_0041d630(uVar1);
  *param_3 = local_18[0];
  local_10 = 0;
  FUN_00414520(&local_28);
  FUN_0041b800(&local_20);
  return local_10;
}

