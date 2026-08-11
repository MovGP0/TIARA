/* Ghidra address: 00baf020 */
/* Ghidra symbol: FUN_00baf020 */


undefined8 FUN_00baf020(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  wchar_t *local_58;
  undefined1 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_98 = 0;
  local_88 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,local_30);
  if (local_30[0] != 0) {
    (**(code **)(*param_3 + 0x58))(param_3,&local_38);
    if (local_38 != 0) {
      (**(code **)(*param_3 + 0x58))(param_3,&local_40);
      (**(code **)(*param_1 + 0x10))(param_1,&local_48);
      if (local_40 != local_48) {
        uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,4,0x5a,&local_48,0xffffffff);
        FUN_004134c0(uVar3);
      }
    }
  }
  if (param_4 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],param_4);
    if (iVar1 == -1) {
      local_58 = L"RefChild is not a child of this node.";
      local_50 = 0x11;
      uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,8,0,&local_58,0);
      FUN_004134c0(uVar3);
    }
  }
  (**(code **)(*param_3 + 0x60))(param_3,&local_60);
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = param_1 + 2;
  }
  FUN_0041b890(&local_68,plVar4,&DAT_00baf47c);
  if (local_60 == local_68) {
    iVar2 = (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],param_3);
    if (iVar2 == iVar1) goto LAB_00baf357;
  }
  (**(code **)(*param_3 + 0x60))(param_3,&local_70);
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = param_1 + 2;
  }
  FUN_0041b890(&local_78,plVar4,&DAT_00baf47c);
  bVar5 = local_70 == local_78;
  (**(code **)(*param_3 + 0x60))(param_3,&local_80);
  if (local_80 != 0) {
    (**(code **)(*param_3 + 0x60))(param_3,&local_90);
    (**(code **)(*local_90 + 0x20))(local_90,&local_88);
    (**(code **)(*local_88 + 0x48))(local_88,param_3);
  }
  if (param_4 == 0) {
    FUN_00bae3c0(param_1,&local_98,param_3);
  }
  else {
    if (bVar5) {
      iVar1 = (**(code **)(*(longlong *)param_1[6] + 0x38))((longlong *)param_1[6],param_4);
    }
    (**(code **)(*(longlong *)param_1[6] + 0x40))((longlong *)param_1[6],iVar1,param_3);
    if (param_1 == (longlong *)0x0) {
      param_1 = (longlong *)0x0;
    }
    else {
      param_1 = param_1 + 10;
    }
    (**(code **)(*param_3 + 0x78))(param_3,param_1);
  }
  FUN_0041b840(param_2,param_3);
LAB_00baf357:
  FUN_00417840(&local_98,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_88);
  FUN_00417840(&local_80,&DAT_00b9f8e0,5);
  FUN_00417840(&local_48,&DAT_00b9fc60,4);
  return param_2;
}

