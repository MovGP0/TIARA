/* Ghidra address: 01b72750 */
/* Ghidra symbol: FUN_01b72750 */


void FUN_01b72750(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  *(undefined1 *)(param_1 + 0x6e8) = 0;
  FUN_0064dd90(param_1,&local_28);
  local_30 = 0;
  local_38[0] = param_2;
  FUN_00442f70(local_20,local_28,local_38,0);
  FUN_00414ad0(param_1 + 0x6f0,local_20[0]);
  FUN_0043f750(&local_40,(longlong)*(short *)(param_3 + 8));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_40);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x4d8);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_3 + 0x10));
  FUN_00414480(&local_40);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

