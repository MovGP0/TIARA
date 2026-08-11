/* Ghidra address: 00d03ec0 */
/* Ghidra symbol: FUN_00d03ec0 */


void FUN_00d03ec0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_6c;
  longlong local_68;
  int local_5c;
  longlong local_58;
  int local_4c;
  longlong local_48;
  int local_3c;
  longlong local_38;
  int local_2c;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_80 = auStack_f8;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_20 = 0;
  local_18 = FUN_00cc4a90(&LAB_00cc4158,1,*(undefined8 *)(param_2 + 0x148));
  local_28 = *(longlong *)(local_18 + 0x40);
  local_2c = 0;
  if (local_28 != 0) {
    local_2c = *(int *)(local_28 + -4);
  }
  if (0 < local_2c) {
    FUN_00414ad0(param_2 + 0x108,*(undefined8 *)(local_18 + 0x40));
    FUN_00414ad0(param_2 + 0xf0,*(undefined8 *)(local_18 + 0x48));
  }
  FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x40,*(undefined8 *)(param_2 + 0x108));
  FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x48,*(undefined8 *)(param_2 + 0xf0));
  FUN_008ac670(&local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x28),
               *(undefined8 *)(local_18 + 0x28),&DAT_00d046ec);
  FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x28,local_88);
  FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 8,*(undefined8 *)(local_18 + 8));
  FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x50,*(undefined8 *)(local_18 + 0x50));
  local_38 = *(longlong *)(local_18 + 0x30);
  local_3c = 0;
  if (local_38 != 0) {
    local_3c = *(int *)(local_38 + -4);
  }
  if (0 < local_3c) {
    FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x30,*(undefined8 *)(local_18 + 0x30));
  }
  local_48 = *(longlong *)(local_18 + 0x10);
  local_4c = 0;
  if (local_48 != 0) {
    local_4c = *(int *)(local_48 + -4);
  }
  if (local_4c < 1) {
    cVar4 = FUN_00879070(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x10),L"https");
    if (cVar4 == '\0') {
      FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x10,L"http");
    }
    else {
      FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x10,L"https");
    }
  }
  else {
    FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x10,*(undefined8 *)(local_18 + 0x10));
  }
  local_58 = *(longlong *)(local_18 + 0x20);
  local_5c = 0;
  if (local_58 != 0) {
    local_5c = *(int *)(local_58 + -4);
  }
  if (local_5c < 1) {
    cVar4 = FUN_00879070(*(undefined8 *)(local_18 + 0x10),L"http");
    if (cVar4 == '\0') {
      cVar4 = FUN_00879070(*(undefined8 *)(local_18 + 0x10),L"https");
      if (cVar4 == '\0') {
        local_68 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20);
        local_6c = 0;
        if (local_68 != 0) {
          local_6c = *(int *)(local_68 + -4);
        }
        if (local_6c == 0) {
          FUN_0041ddd0(&local_a0,PTR_PTR_02004d20);
          uVar7 = FUN_0086dfd0(&PTR_FUN_00d00160,1,local_a0);
          FUN_004134c0(uVar7);
        }
      }
      else {
        FUN_0043f750(&local_98,0x1bb);
        FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x20,local_98);
      }
    }
    else {
      FUN_0043f750(&local_90,0x50);
      FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x20,local_90);
    }
  }
  else {
    FUN_00414ad0(*(longlong *)(param_1 + 0x208) + 0x20,*(undefined8 *)(local_18 + 0x20));
  }
  cVar4 = FUN_00879070(*(undefined8 *)(param_2 + 0x150),L"OPTIONS");
  if (cVar4 == '\0') {
    cVar4 = FUN_00879070(*(undefined8 *)(param_2 + 0x138),L"OPTIONS");
    if (cVar4 != '\0') goto LAB_00d04352;
LAB_00d0438d:
    FUN_00cc6270(*(undefined8 *)(param_1 + 0x208),&local_a8);
    FUN_00414ad0(param_2 + 0x148,local_a8);
  }
  else {
LAB_00d04352:
    cVar4 = FUN_00879070(*(undefined8 *)(local_18 + 8),&DAT_00d04748);
    if (cVar4 == '\0') goto LAB_00d0438d;
    FUN_00414ad0(param_2 + 0x148,*(undefined8 *)(local_18 + 8));
  }
  uVar1 = *(undefined1 *)(local_18 + 0x58);
  *(undefined1 *)(param_2 + 0x161) = uVar1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 0x58) = uVar1;
  uVar5 = FUN_00874bb0(*(undefined8 *)(param_2 + 0x150),&PTR_u_TRACE_01eb35e8,4,0);
  if (uVar5 < 0x80000000) {
LAB_00d04435:
    if (*(char *)(param_1 + 0x1f8) != '\x01') {
      FUN_0041ddd0(&local_b0,PTR_PTR_02001458);
      uVar7 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_b0);
      FUN_004134c0(uVar7);
    }
  }
  else {
    iVar6 = FUN_00874bb0(*(undefined8 *)(param_2 + 0x138),&PTR_u_TRACE_01eb35e8,4,0);
    if (-1 < iVar6) goto LAB_00d04435;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x158);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_00ce1e40(param_2,0xffffffffffffffff);
  }
  else {
    uVar7 = (**(code **)*puVar2)(puVar2);
    FUN_00ce1e40(param_2,uVar7);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x208) + 0x58) == '\x01') {
    FUN_008759b0(&local_b8,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x30));
    if (local_b8 == 0) goto LAB_00d0450b;
    local_d8 = &DAT_00d04768;
    FUN_00416cd0(&local_20,3,&DAT_00d04758,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x30));
  }
  else {
LAB_00d0450b:
    FUN_00414b50(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x30));
  }
  cVar4 = FUN_00879070(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x10),L"http");
  if (cVar4 == '\0') {
LAB_00d04578:
    cVar4 = FUN_00879070(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x10),L"https");
    if (cVar4 != '\0') {
      FUN_0043f750(&local_c8,0x1bb);
      iVar6 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x20),local_c8);
      if (iVar6 == 0) goto LAB_00d045c7;
    }
    local_d8 = *(undefined **)(*(longlong *)(param_1 + 0x208) + 0x20);
    FUN_00416cd0(param_2 + 0x110,3,local_20,&LAB_00d04778);
  }
  else {
    FUN_0043f750(&local_c0,0x50);
    iVar6 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x20),local_c0);
    if (iVar6 != 0) goto LAB_00d04578;
LAB_00d045c7:
    FUN_00414ad0(param_2 + 0x110,local_20);
  }
  lVar3 = local_18;
  local_10 = local_18;
  local_18 = 0;
  FUN_00410f20(lVar3);
  FUN_00414560(&local_c8,9);
  FUN_00414480(&local_20);
  return;
}

