/* Ghidra address: 00d03420 */
/* Ghidra symbol: FUN_00d03420 */


void FUN_00d03420(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  longlong local_28 [3];
  
  local_50 = auStack_98;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_28[0] = 0;
  FUN_008af950(&local_60,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x70),L"boundary",3);
  local_78 = &DAT_00d037e0;
  FUN_00416cd0(&local_58,3,&DAT_00d037e0,local_60);
  FUN_00877e10(local_28,local_58,0);
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x90))(*(longlong **)(param_1 + 0xc0),0,0);
  while( true ) {
    local_2c = FUN_00c8b6a0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x100) + 0x108),
                            local_28[0],0);
    if (local_2c != -1) break;
    local_40 = local_28[0];
    if (local_28[0] != 0) {
      local_40 = *(longlong *)(local_28[0] + -8);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x100);
    local_30 = (*(int *)(plVar1[0x21] + 0x30) - (int)local_40) + 1;
    if (0 < local_30) {
      if (*(longlong *)(param_1 + 0x98) == 0) {
        FUN_00caf540(plVar1,(longlong)local_30);
      }
      else {
        (**(code **)(*plVar1 + 0x1a0))(plVar1,*(undefined8 *)(param_1 + 0x98),(longlong)local_30,0);
      }
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x100);
    (**(code **)(*plVar1 + 0x118))(plVar1,0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x100);
    (**(code **)(*plVar1 + 0x110))(plVar1,1);
  }
  local_38 = local_28[0];
  if (local_28[0] != 0) {
    local_38 = *(longlong *)(local_28[0] + -8);
  }
  local_30 = local_2c + (int)local_38;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    FUN_00caf540(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x100),(longlong)local_30);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x100);
    (**(code **)(*plVar1 + 0x1a0))(plVar1,*(undefined8 *)(param_1 + 0x98),(longlong)local_30,0);
  }
  FUN_00d07930(*(undefined8 *)(param_1 + 0xc0),&local_68);
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xa0))(*(longlong **)(param_1 + 0xc0),0);
  FUN_00414560(&local_68,3);
  FUN_00419430(local_28,&DAT_0086e978);
  return;
}

