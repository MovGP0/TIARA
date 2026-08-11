/* Ghidra address: 0195efc0 */
/* Ghidra symbol: FUN_0195efc0 */


undefined1 FUN_0195efc0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_40 = 0;
  local_19 = 1;
  local_28 = FUN_004ba3c0(&PTR_FUN_0047d288,1,0);
  uVar1 = (**(code **)*param_2)(param_2);
  FUN_004b8ba0(local_28,param_2,uVar1);
  FUN_004ba980(local_28,&local_38);
  FUN_004168e0(&local_40,local_38);
  (**(code **)(*param_1 + 0x358))(param_1,local_40);
  FUN_00410f20(local_28);
  FUN_00414520(&local_40);
  FUN_00414480(&local_38);
  return local_19;
}

