/* Ghidra address: 01bb2d60 */
/* Ghidra symbol: FUN_01bb2d60 */


void FUN_01bb2d60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined *local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined2 local_3a;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  wchar_t *local_20 [2];
  
  local_50 = auStack_d8;
  local_78 = 0;
  local_80 = (undefined *)0x0;
  local_60 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_28 = 0;
  local_20[0] = (wchar_t *)0x0;
  FUN_01bb3cc0(param_1);
  cVar2 = FUN_01bb3d90(param_1);
  if (cVar2 == '\0') goto code_r0x01bb34b8;
  local_b8 = L"TINA.INI";
  FUN_00416cd0(&local_58,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01bb358c);
  local_48 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_58);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  (**(code **)(*local_48 + 0x38))(local_48,L"PCB Setup",L"Auto placement",uVar3);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8));
  (**(code **)(*local_48 + 0x38))(local_48,L"PCB Setup",L"Auto route",uVar3);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  (**(code **)(*local_48 + 0x38))(local_48,L"PCB Setup",L"Use template",uVar3);
  FUN_004168e0(&local_68,*(undefined8 *)(param_1 + 0x780));
  FUN_00b0cea0(&local_60,local_68,0xfde9);
  FUN_00416880(&local_70,local_60);
  (**(code **)(*local_48 + 0x18))(local_48,L"PCB Setup",L"Template",local_70);
  local_30 = FUN_00b90090(*(undefined8 *)(param_1 + 0x738));
  local_38 = FUN_00b90090(*(undefined8 *)(param_1 + 0x740));
  FUN_01bb3de0(param_1,&local_30,&local_38);
  local_3a = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  (**(code **)(*local_48 + 0x80))(local_48,L"PCB Setup",L"Board width",local_30);
  (**(code **)(*local_48 + 0x80))(local_48,L"PCB Setup",L"Board height",local_38);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_3a;
  FUN_00410f20(local_48);
  FUN_00414ad0(param_1 + 0x778,&DAT_01bb36c0);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if (cVar2 != '\0') {
    FUN_00441640(&local_78,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    plVar1 = *(longlong **)(param_1 + 0x6e0);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_80,uVar3);
    local_b8 = (wchar_t *)local_78;
    local_b0 = local_80;
    local_a8 = L"\" /S\"";
    local_a0 = *(undefined8 *)(PTR_DAT_02004010 + 0xb1);
    local_98 = &DAT_01bb36fc;
    FUN_00416cd0(param_1 + 0x778,7,*(undefined8 *)(param_1 + 0x778),&DAT_01bb36d0);
    if (*PTR_DAT_020033c0 == '\x01') {
      FUN_00416ad0(param_1 + 0x778,L" /Umil");
    }
    else {
      FUN_00416ad0(param_1 + 0x778,L" /Umm");
    }
    goto code_r0x01bb34b8;
  }
  local_b8 = *(wchar_t **)(PTR_DAT_02004010 + 0xb1);
  local_b0 = &DAT_01bb3754;
  FUN_00416cd0(param_1 + 0x778,4,*(undefined8 *)(param_1 + 0x778),&DAT_01bb3740);
  FUN_00416ad0(param_1 + 0x778,&DAT_01bb3768);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0xf0))(*(longlong **)(param_1 + 0x6f0));
  if (cVar2 == '\0') {
LAB_01bb323d:
    FUN_00416ad0(param_1 + 0x778,&DAT_01bb3790);
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    if (cVar2 == '\0') goto LAB_01bb323d;
    FUN_00416ad0(param_1 + 0x778,&DAT_01bb377c);
  }
  FUN_00416ad0(param_1 + 0x778,&DAT_01bb37a4);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xf0))(*(longlong **)(param_1 + 0x6f8));
  if (cVar2 == '\0') {
LAB_01bb32c9:
    FUN_00416ad0(param_1 + 0x778,&DAT_01bb3790);
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    if (cVar2 == '\0') goto LAB_01bb32c9;
    FUN_00416ad0(param_1 + 0x778,&DAT_01bb377c);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  if (cVar2 != '\0') {
    cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 0x780),1);
    if (cVar2 != '\0') {
      local_b8 = *(wchar_t **)(param_1 + 0x780);
      local_b0 = &DAT_01bb3754;
      FUN_00416cd0(param_1 + 0x778,4,*(undefined8 *)(param_1 + 0x778),&DAT_01bb37b8);
    }
  }
  FUN_01bb3de0(param_1,&local_30,&local_38);
  local_3a = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_00414480(&local_28);
  FUN_00448450(&local_28,local_30,PTR_DAT_02004830);
  FUN_00414480(local_20);
  FUN_00448450(local_20,local_38,PTR_DAT_02004830);
  local_b8 = (wchar_t *)local_28;
  local_b0 = &DAT_01bb37e0;
  local_a8 = local_20[0];
  FUN_00416cd0(param_1 + 0x778,5,*(undefined8 *)(param_1 + 0x778),&PTR_LAB_01bb37cc);
  FUN_00414480(local_20);
  FUN_00414480(&local_28);
  if (*PTR_DAT_020033c0 == '\x01') {
    FUN_00416ad0(param_1 + 0x778,L" /Umil");
  }
  else {
    FUN_00416ad0(param_1 + 0x778,L" /Umm");
  }
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_3a;
code_r0x01bb34b8:
  FUN_00414560(&local_80,3);
  FUN_00414520(&local_68);
  FUN_004144d0(&local_60);
  FUN_00414480(&local_58);
  FUN_00414560(&local_28,2);
  return;
}

