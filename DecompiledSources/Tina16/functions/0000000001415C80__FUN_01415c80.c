/* Ghidra address: 01415c80 */
/* Ghidra symbol: FUN_01415c80 */


undefined1 FUN_01415c80(longlong param_1)

{
  char cVar1;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined8 local_e0;
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
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  longlong *local_40;
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20;
  
  local_70 = auStack_118;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_29 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0xd8))(local_20,*(undefined8 *)(param_1 + 0x7a8));
  (**(code **)(*local_28 + 0xd8))(local_28,*(undefined8 *)(param_1 + 0x7b0));
  local_50 = FUN_01415920(auStack_118,L"FLASH_MEM_BASE");
  local_54 = FUN_01415920(auStack_118,L"FLASH_SIZE");
  FUN_01415600(auStack_118,L".text",&local_44,&local_4c);
  FUN_01415600(auStack_118,L".init",&local_44,&local_48);
  FUN_0043fbc0(&local_80,local_44,8);
  FUN_0043fbc0(&local_88,local_44 + local_48 + local_4c,8);
  local_f8 = (wchar_t *)local_88;
  FUN_00416cd0(&local_78,3,local_80,&DAT_0141628c);
  (**(code **)(*local_40 + 0x78))(local_40,local_78);
  FUN_01415600(auStack_118,L".data",&local_44,&local_48);
  FUN_0043fbc0(&local_98,local_44,8);
  FUN_0043fbc0(&local_a0,local_44 + local_48,8);
  local_f8 = (wchar_t *)local_a0;
  FUN_00416cd0(&local_90,3,local_98,&DAT_0141628c);
  (**(code **)(*local_40 + 0x78))(local_40,local_90);
  local_44 = local_50;
  FUN_0043fbc0(&local_b0,local_50,8);
  FUN_0043fbc0(&local_b8,local_44 + local_54,8);
  local_f8 = (wchar_t *)local_b8;
  FUN_00416cd0(&local_a8,3,local_b0,&DAT_0141628c);
  (**(code **)(*local_40 + 0x78))(local_40,local_a8);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  if (cVar1 == '\0') {
    local_58 = 0;
    local_5c = 0;
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_c0);
    local_58 = FUN_0043fc00(local_c0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x760),&local_c8);
    local_5c = FUN_0043fc00(local_c8);
  }
  FUN_0043fbc0(&local_d8,local_58,8);
  FUN_0043fbc0(&local_e0,local_5c,8);
  local_f8 = (wchar_t *)local_e0;
  FUN_00416cd0(&local_d0,3,local_d8,&DAT_0141628c);
  (**(code **)(*local_40 + 0x78))(local_40,local_d0);
  local_f8 = L"config.txt";
  FUN_00416cd0(param_1 + 0x7a8,3,*(undefined8 *)PTR_DAT_020052a8,&DAT_014162b4);
  (**(code **)(*local_40 + 0x100))(local_40,*(undefined8 *)(param_1 + 0x7a8));
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_40);
  FUN_00414560(&local_e0,3);
  FUN_00414560(&local_c8,2);
  FUN_00414560(&local_b8,9);
  return local_29;
}

