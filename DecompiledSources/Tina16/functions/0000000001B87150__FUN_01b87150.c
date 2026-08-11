/* Ghidra address: 01b87150 */
/* Ghidra symbol: FUN_01b87150 */


longlong FUN_01b87150(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  wchar_t *local_110;
  uint local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 local_92 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_7a;
  undefined1 local_79;
  undefined8 local_78;
  longlong local_70;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  undefined1 local_54 [4];
  int local_50;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_a0 = auStack_138;
  local_e0 = 0;
  local_f8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = 0;
  local_92[0] = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0043e1a0(&local_a8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
  iVar2 = FUN_004170c0(L"jumper",local_a8,1);
  if (iVar2 < 1) {
    FUN_0043e1a0(&local_b0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
    iVar2 = FUN_00416db0(local_b0,&DAT_01b87970);
    if (iVar2 == 0) {
      local_50 = 2;
    }
    else {
      local_50 = 0x39;
    }
  }
  else {
    local_50 = 3;
  }
  local_30 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,(undefined2)local_50);
  FUN_01d38290(local_30,1);
  if (param_2 < 1) {
    FUN_00414ad0(local_30 + 0x98,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
  }
  else {
    local_d8 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20);
    local_d0 = 0x11;
    local_c8 = 1;
    local_c0 = 0;
    FUN_00442f70(&local_b8,L"%s_%d",&local_d8,1);
    FUN_00414ad0(local_30 + 0x98,local_b8);
  }
  FUN_01b86950(param_1,*(undefined8 *)(param_1 + 8));
  FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),&DAT_01b8799c);
  *(undefined4 *)(param_1 + 0x344) = 0;
  if ((local_50 == 2) || (local_50 == 3)) goto LAB_01b87731;
  FUN_00414b50(&local_70,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
  iVar2 = FUN_00416db0(local_70,&DAT_01b879b0);
  if ((iVar2 == 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) == 0 &&
      (*(longlong *)(*(longlong *)(param_1 + 8) + 0x40) == 0)))) {
    FUN_00414b50(&local_70,L"cap2");
  }
  if (local_70 != 0) {
    local_118 = (undefined8 *)
                CONCAT44(local_118._4_4_,
                         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 8));
    local_110 = *(wchar_t **)(*(longlong *)(param_1 + 8) + 0x20);
    local_108 = *(uint *)(param_1 + 0x358);
    uVar3 = FUN_01b81670(&DAT_01b7f810,1,local_30,local_70);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x3a8),uVar3);
  }
  iVar2 = FUN_00416db0(local_70,L"voltage");
  if (iVar2 == 0) {
LAB_01b87519:
    FUN_01b844c0(param_1,local_70,local_20);
  }
  else {
    iVar2 = FUN_00416db0(local_70,L"current");
    if (iVar2 == 0) goto LAB_01b87519;
    cVar1 = FUN_01b80cf0(local_70);
    if (cVar1 != '\0') goto LAB_01b87519;
    iVar2 = FUN_00416db0(local_70,&DAT_01b87a14);
    if (iVar2 == 0) goto LAB_01b87519;
    iVar2 = FUN_00416db0(local_70,&PTR_s_leManager_TSourceInfo_01b87a28);
    if (iVar2 == 0) goto LAB_01b87519;
    cVar1 = FUN_01b80e10(local_70,local_54);
    if (cVar1 != '\0') goto LAB_01b87519;
    cVar1 = FUN_01b80fa0(local_70);
    if (cVar1 != '\0') goto LAB_01b87519;
    cVar1 = FUN_01b80350(local_70);
    if (cVar1 != '\0') goto LAB_01b87519;
    cVar1 = FUN_01b80620(local_70);
    if (cVar1 != '\0') goto LAB_01b87519;
    cVar1 = FUN_01b81300(local_70);
    if (cVar1 == '\0') {
      local_118 = (undefined8 *)local_70;
      local_110 = L".cir";
      FUN_00416cd0(&local_78,4,*(undefined8 *)PTR_DAT_020049a0,L"\\VHDL\\LT\\models\\");
      cVar1 = FUN_00440a20(local_78,1);
      if (cVar1 == '\0') {
        local_118 = (undefined8 *)local_92;
        FUN_01b8bce0(param_1,local_70,local_20,&local_90);
      }
      else {
        (**(code **)(*local_20 + 0xd8))(local_20,local_78);
      }
    }
    else {
      FUN_0043e130(&local_f8,local_70);
      local_f0 = local_f8;
      local_e8 = 0x11;
      FUN_00442f70(&local_e0,L"Model is not supported: %s",&local_f0,0);
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_e0);
      FUN_004134c0(uVar3);
    }
  }
  local_118 = &local_88;
  local_110 = (wchar_t *)local_90;
  local_108 = CONCAT31(local_108._1_3_,local_92[0]);
  FUN_01b83200(param_1,local_30,local_70,local_20);
  if (*(int *)(param_1 + 0x340) == 1) {
    cVar1 = FUN_01b80280(local_70);
    if (cVar1 != '\0') {
      (**(code **)(*local_20 + 0x90))(local_20);
      *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
      *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + -1;
      FUN_01b844c0(param_1,local_70,local_20);
      local_118 = &local_88;
      local_110 = (wchar_t *)local_90;
      local_108 = local_108 & 0xffffff00;
      FUN_01b83200(param_1,local_30,local_70,local_20);
    }
  }
LAB_01b87731:
  local_7a = FUN_01b80970(*(undefined8 *)(param_1 + 8),&local_79);
  FUN_01b82500(param_1,&local_64,local_88);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
  local_5c = (int)uVar3;
  iStack_58 = (int)((ulonglong)uVar3 >> 0x20);
  local_5c = local_5c + *(int *)(param_1 + 0x378) + local_64;
  iStack_58 = iStack_58 + *(int *)(param_1 + 0x37c) + local_60;
  if (param_2 == 1) {
    local_5c = local_5c + -0x20;
    iStack_58 = iStack_58 + 0x40;
  }
  else if (param_2 == 2) {
    local_5c = local_5c + 0x20;
    iStack_58 = iStack_58 + 0x40;
  }
  *(int *)(local_30 + 0xc) = local_5c;
  *(int *)(local_30 + 0x10) = iStack_58;
  *(undefined1 *)(local_30 + 0xd1) = local_7a;
  *(undefined1 *)(local_30 + 0xd3) = local_79;
  local_28 = local_30;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),local_30);
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_f8);
  FUN_00414480(&local_e0);
  FUN_00414560(&local_b8,3);
  FUN_00414560(&local_78,2);
  return local_28;
}

