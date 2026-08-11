/* Ghidra address: 008665a0 */
/* Ghidra symbol: FUN_008665a0 */


undefined4 FUN_008665a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_40 = (longlong *)0x0;
  local_48 = 0;
  *param_3 = 0;
  FUN_00866490(param_1,&local_40);
  FUN_004168e0(&local_48,param_2);
  uVar2 = FUN_00460ba0(&local_38);
  uVar1 = (**(code **)(*local_40 + 0x160))(local_40,local_48,uVar2);
  FUN_0041d630(uVar1);
  FUN_0046c3f0(param_3,&local_38);
  local_20 = 0;
  FUN_00414520(&local_48);
  FUN_0041b800(&local_40);
  FUN_00460ba0(&local_38);
  return local_20;
}

