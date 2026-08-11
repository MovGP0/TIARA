/* Ghidra address: 00865dd0 */
/* Ghidra symbol: FUN_00865dd0 */


undefined4 FUN_00865dd0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_20;
  longlong *local_18;
  undefined4 local_10;
  
  local_18 = (longlong *)0x0;
  local_20 = 0;
  FUN_008659d0(param_1,&local_18);
  FUN_004168e0(&local_20,param_4);
  uVar1 = (**(code **)(*local_18 + 400))(local_18,param_2,param_3,local_20);
  FUN_0041d630(uVar1);
  local_10 = 0;
  FUN_00414520(&local_20);
  FUN_0041b800(&local_18);
  return local_10;
}

