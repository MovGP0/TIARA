/* Ghidra address: 015320c0 */
/* Ghidra symbol: FUN_015320c0 */


void FUN_015320c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_38 = 0;
  FUN_00441920(&local_38,*(undefined8 *)(param_1 + 0x968));
  local_30 = local_38;
  local_28 = 0x11;
  FUN_00442f70(local_20,*(undefined8 *)(param_1 + 0x978),&local_30,0);
  FUN_00c78ad0(*(undefined8 *)(param_1 + 0x1c38),local_20[0]);
  FUN_00441920(&local_40,*(undefined8 *)(param_1 + 0x968));
  FUN_00724380(*(undefined8 *)(param_1 + 0x1c38),local_40);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1c38) + 0xa8))(*(longlong **)(param_1 + 0x1c38));
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x1c38),&local_50);
    FUN_0043e1a0(&local_48,local_50);
    FUN_00414ad0(param_1 + 0x968,local_48);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x958) + 0x4e8);
    (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined8 *)(param_1 + 0x968));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x958),0);
    FUN_00441920(&local_60,*(undefined8 *)(param_1 + 0x968));
    local_30 = local_60;
    local_28 = 0x11;
    FUN_00442f70(&local_58,*(undefined8 *)(param_1 + 0x970),&local_30,0);
    FUN_0064de00(param_1,local_58);
    FUN_01530440(param_1,*(undefined8 *)(param_1 + 0x968));
  }
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_50);
  FUN_00414560(&local_48,3);
  FUN_00414480(local_20);
  return;
}

