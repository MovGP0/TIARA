/* Ghidra address: 00cfbc50 */
/* Ghidra symbol: FUN_00cfbc50 */


undefined8 * FUN_00cfbc50(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_148 [32];
  undefined *local_128;
  wchar_t *local_120;
  undefined *local_118;
  undefined *local_110;
  wchar_t *local_108;
  wchar_t *local_100;
  undefined *local_f8;
  wchar_t *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = auStack_148;
  local_b0 = (undefined *)0x0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_78 = (undefined *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_68 = (undefined *)0x0;
  local_58 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = (undefined *)0x0;
  local_30 = 0;
  local_38 = (undefined *)0x0;
  local_10 = 0;
  FUN_00414480(param_2);
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00414ad0(param_2,L"Digest");
  }
  else if (*(int *)(param_1 + 8) == 1) {
    FUN_00414480(&local_10);
    local_40 = FUN_00448ed0();
    FUN_0044a350(&local_10,local_40,PTR_DAT_02004830);
    FUN_00cfbb90(auStack_148,&local_58,local_10);
    FUN_00414b50(&local_28,local_58);
    FUN_00414480(&local_10);
    FUN_00cddbf0(param_1,&local_60);
    FUN_00cddba0(param_1,&local_68);
    local_128 = *(undefined **)(param_1 + 0x28);
    local_120 = L":";
    local_118 = local_68;
    FUN_00416cd0(&local_18,5,local_60,&DAT_00cfc3b0);
    cVar1 = FUN_00879070(*(undefined8 *)(param_1 + 0x58),L"MD5-sess");
    if (cVar1 != '\0') {
      FUN_00cfbb90(auStack_148,&local_70,local_18);
      local_128 = *(undefined **)(param_1 + 0x48);
      local_120 = L":";
      local_118 = local_28;
      FUN_00416cd0(&local_18,5,local_70,&DAT_00cfc3b0);
    }
    local_128 = *(undefined **)(param_1 + 0x68);
    FUN_00416cd0(&local_20,3,*(undefined8 *)(param_1 + 0x60),&DAT_00cfc3b0);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb0))
                      (*(longlong **)(param_1 + 0x78),L"auth-int");
    if (iVar2 < 0) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xb0))
                        (*(longlong **)(param_1 + 0x78),L"auth");
      if (-1 < iVar2) {
        FUN_00414b50(&local_38,L"auth");
      }
    }
    else {
      FUN_00414b50(&local_38,L"auth-int");
      FUN_00cfbb90(auStack_148,&local_78,*(undefined8 *)(param_1 + 0x70));
      local_128 = local_78;
      FUN_00416cd0(&local_20,3,local_20,&DAT_00cfc3b0);
    }
    if (local_38 != (undefined *)0x0) {
      FUN_0043fba0(&local_80,*(undefined4 *)(param_1 + 0x50),8);
      local_128 = local_28;
      local_120 = L":";
      local_118 = local_38;
      local_110 = &DAT_00cfc3b0;
      FUN_00416cd0(&local_30,6,local_80,&DAT_00cfc3b0);
    }
    FUN_00cfbb90(auStack_148,&local_98,local_18);
    FUN_00cfbb90(auStack_148,&local_a0,local_20);
    local_128 = *(undefined **)(param_1 + 0x48);
    local_120 = L":";
    local_118 = (undefined *)local_30;
    local_110 = (undefined *)local_a0;
    FUN_00416cd0(&local_90,6,local_98,&DAT_00cfc3b0);
    FUN_00cfbb90(auStack_148,&local_88,local_90);
    FUN_00414b50(&local_30,local_88);
    FUN_00cddbf0(param_1,&local_a8);
    local_128 = &DAT_00cfc448;
    local_120 = L"realm=\"";
    local_118 = *(undefined **)(param_1 + 0x28);
    local_110 = &DAT_00cfc448;
    local_108 = L"nonce=\"";
    local_100 = *(wchar_t **)(param_1 + 0x48);
    local_f8 = &DAT_00cfc448;
    local_f0 = L"algorithm=\"";
    local_e8 = *(undefined8 *)(param_1 + 0x58);
    local_e0 = &DAT_00cfc448;
    local_d8 = L"uri=\"";
    local_d0 = *(undefined8 *)(param_1 + 0x68);
    local_c8 = &DAT_00cfc448;
    FUN_00416cd0(param_2,0xf,L"Digest username=\"",local_a8);
    if (local_38 != (undefined *)0x0) {
      FUN_0043fba0(&local_b0,*(undefined4 *)(param_1 + 0x50),8);
      local_128 = local_38;
      local_120 = L"\", ";
      local_118 = &DAT_00cfc4e8;
      local_110 = local_b0;
      local_108 = L", ";
      local_100 = L"cnonce=\"";
      local_f8 = local_28;
      local_f0 = L"\", ";
      FUN_00416cd0(param_2,10,*param_2,L"qop=\"");
    }
    local_128 = (undefined *)local_30;
    local_120 = L"\"";
    FUN_00416cd0(param_2,4,*param_2,L"response=\"");
    if (*(longlong *)(param_1 + 0x38) != 0) {
      local_128 = *(undefined **)(param_1 + 0x38);
      local_120 = L"\"";
      FUN_00416cd0(param_2,4,*param_2,L", opaque=\"");
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00414560(&local_b0,0xc);
  FUN_00414560(&local_38,6);
  return param_2;
}

