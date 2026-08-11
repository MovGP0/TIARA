/* Ghidra address: 01d1af70 */
/* Ghidra symbol: FUN_01d1af70 */


void FUN_01d1af70(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  ulonglong local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  int local_3c;
  longlong *local_38;
  longlong *local_30;
  
  local_90 = auStack_108;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  if (DAT_03567a20 == (longlong *)0x0) {
    uVar1 = FUN_00414d00(*param_1);
    FUN_00414740(&local_48,*param_1,uVar1);
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_e8 = L"TINA.INI";
    FUN_00416cd0(&local_a0,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01d1b5bc);
    local_30 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_a0);
    local_e8 = L"1";
    (**(code **)(*local_30 + 0x10))(local_30,&local_a8,L"Main",&PTR_DAT_01d1b604);
    iVar2 = FUN_00416db0(local_a8,&DAT_01d1b618);
    DAT_03567a28 = iVar2 == 0;
    DAT_03567a20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_e8 = L"1";
    (**(code **)(*local_30 + 0x10))(local_30,&local_b0,L"Main",&PTR_DAT_01d1b604);
    iVar2 = FUN_00416db0(local_b0,&DAT_01d1b618);
    if (iVar2 == 0) {
      (**(code **)(*local_30 + 0x90))(local_30,L"Equation Editor Autoformat",local_38);
      iVar2 = (**(code **)(*local_38 + 0x28))(local_38);
      local_3c = 1;
      if (0 < iVar2) {
        do {
          iVar6 = local_3c + -1;
          (**(code **)(*local_38 + 0x18))(local_38,&local_c0,iVar6);
          local_e8 = (wchar_t *)0x0;
          (**(code **)(*local_30 + 0x10))(local_30,&local_b8,L"Equation Editor Autoformat",local_c0)
          ;
          (**(code **)(*DAT_03567a20 + 0x78))(DAT_03567a20,local_b8);
          (**(code **)(*local_38 + 0x18))(local_38,&local_d0,iVar6);
          local_e8 = (wchar_t *)0x0;
          (**(code **)(*local_30 + 0x10))(local_30,&local_c8,L"Equation Editor Autoformat",local_d0)
          ;
          FUN_019b6ae0(local_c8,L"XXTOXX",&local_50,&local_58);
          local_64 = 0;
          if (local_48 != 0) {
            local_64 = *(int *)(local_48 + -4);
          }
          if (0 < local_64) {
            FUN_019b6be0(&local_48,local_50,local_58,1);
          }
          local_3c = local_3c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    FUN_00410f20(local_30);
    FUN_00410f20(local_38);
  }
  else {
    local_90 = auStack_108;
    uVar1 = FUN_00414d00(*param_1);
    FUN_00414740(&local_48,*param_1,uVar1);
    if (DAT_03567a28 != '\0') {
      iVar2 = (**(code **)(*DAT_03567a20 + 0x28))(DAT_03567a20);
      local_3c = 1;
      if (0 < iVar2) {
        do {
          (**(code **)(*DAT_03567a20 + 0x18))(DAT_03567a20,&local_98,local_3c + -1);
          FUN_019b6ae0(local_98,L"XXTOXX",&local_50,&local_58);
          local_60 = 0;
          if (local_48 != 0) {
            local_60 = *(int *)(local_48 + -4);
          }
          if (0 < local_60) {
            FUN_019b6be0(&local_48,local_50,local_58,1);
          }
          local_3c = local_3c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  uVar3 = FUN_00442b70(*param_1);
  local_70 = (ulonglong)uVar3;
  local_68 = 0;
  if (local_48 != 0) {
    local_68 = *(int *)(local_48 + -4);
  }
  if ((longlong)local_70 < (longlong)(local_68 + 1)) {
    FUN_00442c30(*param_1);
    local_74 = 0;
    if (local_48 != 0) {
      local_74 = *(int *)(local_48 + -4);
    }
    local_78 = local_74 + 10;
    if (local_78 < 0x100) {
      local_78 = 0x100;
    }
    lVar4 = FUN_00442b60(local_78);
    *param_1 = lVar4;
  }
  local_7c = 0;
  if (local_48 != 0) {
    local_7c = *(undefined4 *)(local_48 + -4);
  }
  uVar5 = FUN_00416740(local_48);
  lVar4 = FUN_00442580(*param_1,uVar5,local_7c);
  *param_1 = lVar4;
  local_80 = 0;
  if (local_48 != 0) {
    local_80 = *(int *)(local_48 + -4);
  }
  *(undefined2 *)(*param_1 + (longlong)local_80 * 2) = 0;
  FUN_00414560(&local_d0,8);
  FUN_00414560(&local_58,3);
  return;
}

