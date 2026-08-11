/* Ghidra address: 01a2f120 */
/* Ghidra symbol: FUN_01a2f120 */


void FUN_01a2f120(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4,
                 undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  wchar_t *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  if (param_6 == 0) {
    if (param_2 < param_3) {
      FUN_0147b880(&local_28,param_2);
      FUN_0147b880(&local_30,param_3);
      local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 8);
      local_80 = 0x11;
      local_78 = param_5;
      local_70 = 0x11;
      local_68 = local_28;
      local_60 = 0x11;
      local_58 = local_30;
      local_50 = 0x11;
      FUN_00442f70(local_20,L"Downloading model:  \'%s\'  sha256:...%s [%s / %s]",&local_88,3);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x40))(plVar1,iVar2 + -1,local_20[0]);
    }
    else if (param_4 == 1) {
      local_b8 = *(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 8);
      local_b0 = 0x11;
      local_a8 = param_5;
      local_a0 = 0x11;
      local_98 = L"completed";
      local_90 = 0x11;
      FUN_00442f70(local_20,L"Downloading model:  \'%s\'  sha256:...%s  %s",&local_b8,2);
      FUN_00c39530(*(undefined8 *)(param_1 + 0x6d0),100);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x40))(plVar1,iVar2 + -1,local_20[0]);
    }
  }
  else {
    local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 8);
    local_40 = 0x11;
    FUN_00442f70(local_20,L"Model %s already downloaded",&local_48,0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
  }
  FUN_00414560(&local_30,3);
  FUN_00414560(&param_5,2);
  return;
}

