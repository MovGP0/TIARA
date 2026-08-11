/* Ghidra address: 00d03100 */
/* Ghidra symbol: FUN_00d03100 */


void FUN_00d03100(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_0041ddd0(&local_58,PTR_PTR_02001930);
  local_50 = local_58;
  local_48 = 0x11;
  FUN_00c8d310(*(undefined8 *)(param_1 + 0xc0),5,&local_50,0);
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x90))(*(longlong **)(param_1 + 0xc0),0,0);
  local_1c = FUN_00d02ff0(param_1);
  while (local_1c != 0) {
    if (*(longlong *)(param_1 + 0x98) == 0) {
      FUN_00caf540(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x100),(longlong)local_1c);
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x280) == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x100);
      (**(code **)(*plVar1 + 0x1a0))(plVar1,*(undefined8 *)(param_1 + 0x98),(longlong)local_1c,0);
    }
    else {
      FUN_00419260(&local_30,&DAT_0086e978,1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x100);
      (**(code **)(*plVar1 + 0x188))(plVar1,&local_30,local_1c);
      if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x280) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x280))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x288),
                   *(undefined8 *)(param_1 + 0xc0),&local_30);
      }
      FUN_008788c0(*(undefined8 *)(param_1 + 0x98),local_30,0xffffffff);
    }
    FUN_00d07930(*(undefined8 *)(param_1 + 0xc0),&local_60);
    local_1c = FUN_00d02ff0(param_1);
  }
  FUN_00d07930(*(undefined8 *)(param_1 + 0xc0),&local_28);
  while (local_28 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x18);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
    FUN_00d07930(*(undefined8 *)(param_1 + 0xc0),&local_28);
  }
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xa0))(*(longlong **)(param_1 + 0xc0),0);
  FUN_00414560(&local_60,2);
  FUN_00419430(&local_30,&DAT_0086e978);
  FUN_00414480(&local_28);
  return;
}

