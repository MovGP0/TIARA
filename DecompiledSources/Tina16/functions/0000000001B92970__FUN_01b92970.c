/* Ghidra address: 01b92970 */
/* Ghidra symbol: FUN_01b92970 */


void FUN_01b92970(longlong param_1)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),local_20);
  (**(code **)**(undefined8 **)(param_1 + 0x778))(*(undefined8 **)(param_1 + 0x778),local_20[0]);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),&local_28);
  FUN_00414ad0(*(longlong *)(param_1 + 0x778) + 0x50,local_28);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_30);
  (**(code **)(**(longlong **)(param_1 + 0x778) + 0x10))(*(longlong **)(param_1 + 0x778),local_30);
  if (*(longlong *)(param_1 + 0x760) == 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_48);
    FUN_01768c30(*(undefined8 *)(param_1 + 0x778),local_48);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_40);
    FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0x760),&LAB_01b92b74,local_40);
    FUN_01768c30(*(undefined8 *)(param_1 + 0x778),local_38);
  }
  FUN_01768ff0(*(undefined8 *)(param_1 + 0x778),*(undefined1 *)(param_1 + 0x759));
  FUN_00414ad0(*(longlong *)(param_1 + 0x770) + 0x3b0,*(undefined8 *)(param_1 + 0x768));
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_38);
  FUN_00414560(&local_30,3);
  return;
}

