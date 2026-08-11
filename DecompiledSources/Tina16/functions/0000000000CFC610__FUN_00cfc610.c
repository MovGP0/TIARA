/* Ghidra address: 00cfc610 */
/* Ghidra symbol: FUN_00cfc610 */


undefined1 FUN_00cfc610(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_64;
  longlong local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20;
  
  local_70 = auStack_128;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_29 = 1;
  puVar2 = auStack_128;
  if (*(int *)(param_1 + 8) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x40);
    if (plVar1 == (longlong *)0x0) {
      local_70 = auStack_128;
      uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)(param_1 + 0x40) = uVar6;
    }
    else {
      (**(code **)(*plVar1 + 0x90))(plVar1);
    }
    plVar1 = *(longlong **)(param_1 + 0x78);
    if (plVar1 == (longlong *)0x0) {
      uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)(param_1 + 0x78) = uVar6;
    }
    else {
      (**(code **)(*plVar1 + 0x90))(plVar1);
    }
    FUN_00cdda50(param_1,&local_38,L"Digest");
    local_108 = CONCAT71(local_108._1_7_,1);
    FUN_00874ee0(&local_78,&local_38,&DAT_00cfcce8,1);
    local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    while( true ) {
      local_54 = 0;
      if (local_38 != 0) {
        local_54 = *(int *)(local_38 + -4);
      }
      if (local_54 < 1) break;
      local_108._0_1_ = 1;
      FUN_00874ee0(&local_80,&local_38,&DAT_00cfccf8,1);
      FUN_0043ea00(&local_40,local_80);
      FUN_0043eb50(&local_88,local_38);
      FUN_00414b50(&local_38,local_88);
      cVar3 = FUN_00879090(local_38,&DAT_00cfcd08);
      if (cVar3 == '\0') {
        local_108 = CONCAT71(local_108._1_7_,1);
        FUN_00874ee0(&local_98,&local_38,&DAT_00cfcd18,1);
        FUN_0043ea00(&local_48,local_98);
      }
      else {
        FUN_00cfc580(&local_48,&local_38);
        local_108 = CONCAT71(local_108._1_7_,1);
        FUN_00874ee0(&local_90,&local_38,&DAT_00cfcd18,1);
      }
      local_108 = local_48;
      FUN_00416cd0(&local_a0,3,local_40,&DAT_00cfccf8);
      (**(code **)(*local_28 + 0x78))(local_28,local_a0);
      FUN_0043eb50(&local_a8,local_38);
      FUN_00414b50(&local_38,local_a8);
    }
    FUN_004b4060(local_28,&local_b0,L"realm");
    FUN_00414ad0(param_1 + 0x28,local_b0);
    FUN_004b4060(local_28,&local_50,L"nonce");
    iVar5 = FUN_00416db0(*(undefined8 *)(param_1 + 0x48),local_50);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0x50) = 1;
      FUN_00414ad0(param_1 + 0x48,local_50);
    }
    FUN_004b4060(local_28,&local_38,L"domain");
    while( true ) {
      local_58 = 0;
      if (local_38 != 0) {
        local_58 = *(int *)(local_38 + -4);
      }
      if (local_58 < 1) break;
      local_108 = CONCAT71(local_108._1_7_,1);
      FUN_00874ee0(&local_b8,&local_38,&DAT_00cfcce8,1);
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))(*(longlong **)(param_1 + 0x40),local_b8)
      ;
    }
    FUN_004b4060(local_28,&local_c0,L"opaque");
    FUN_00414ad0(param_1 + 0x38,local_c0);
    FUN_004b4060(local_28,&local_c8,L"stale");
    uVar4 = FUN_00879070(local_c8,L"True");
    *(undefined1 *)(param_1 + 0x30) = uVar4;
    FUN_004b4060(local_28,&local_d0,L"algorithm");
    FUN_00414ad0(param_1 + 0x58,local_d0);
    FUN_004b4060(local_28,&local_d8,&DAT_00cfcde0);
    FUN_004b4b10(*(undefined8 *)(param_1 + 0x78),local_d8);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      FUN_00414ad0(param_1 + 0x58,&DAT_00cfcdf4);
    }
    else {
      local_e8 = &DAT_00cfcdf4;
      local_e0 = L"MD5-sess";
      iVar5 = FUN_00874bb0(*(undefined8 *)(param_1 + 0x58),&local_e8,1,0);
      if (iVar5 == -1) {
        FUN_0041ddd0(&local_f0,PTR_PTR_02003e98);
        uVar6 = FUN_0086dfd0(&PTR_FUN_00cfb470,1,local_f0);
        FUN_004134c0(uVar6);
      }
    }
    plVar1 = local_28;
    local_20 = local_28;
    local_28 = (longlong *)0x0;
    FUN_00410f20(plVar1);
    FUN_00cddbf0(param_1,&local_f8);
    local_60 = local_f8;
    local_64 = 0;
    if (local_f8 != 0) {
      local_64 = *(int *)(local_f8 + -4);
    }
    puVar2 = local_70;
    if (local_64 < 1) {
      local_29 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 1;
      local_29 = 1;
    }
  }
  local_70 = puVar2;
  FUN_00414560(&local_f8,2);
  FUN_00414560(&local_d8,0xd);
  FUN_00414560(&local_50,4);
  return local_29;
}

