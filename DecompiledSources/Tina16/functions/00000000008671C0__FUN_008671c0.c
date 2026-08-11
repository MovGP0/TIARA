/* Ghidra address: 008671c0 */
/* Ghidra symbol: FUN_008671c0 */


undefined4 FUN_008671c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_20;
  
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_00866490(param_1,&local_28);
  FUN_004168e0(&local_30,param_2);
  FUN_00468b40(&local_48,param_3);
  uVar1 = (**(code **)(*local_28 + 0x168))(local_28,local_30,&local_48);
  FUN_0041d630(uVar1);
  local_20 = 0;
  FUN_00460ba0(&local_48);
  FUN_00414520(&local_30);
  FUN_0041b800(&local_28);
  return local_20;
}

