/* Ghidra address: 01464600 */
/* Ghidra symbol: FUN_01464600 */


void FUN_01464600(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_e8;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = (wchar_t *)0x0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_01aee720(&local_58,0x406,*(undefined4 *)(param_1 + 0x6b8),L"EESettingsMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_58);
  uVar5 = FUN_007fc180(&PTR_FUN_01465710,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02002280 = uVar5;
  FUN_01466720(*(undefined8 *)PTR_DAT_02002280,*(undefined8 *)(param_1 + 0x860));
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_c8 = L"TINA.INI";
  FUN_00416cd0(&local_60,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01464d38);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_60);
  local_c8 = L"1";
  (**(code **)(*local_20 + 0x10))(local_20,&local_68,L"Main",&PTR_DAT_01464d80);
  uVar5 = FUN_00416db0(local_68,&DAT_01464d94);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02002280 + 0x790) + 0x268))
            (*(longlong **)(*(longlong *)PTR_DAT_02002280 + 0x790),
             CONCAT71((int7)((ulonglong)uVar5 >> 8),(int)uVar5 == 0) & 0xffffffff);
  (**(code **)(*local_20 + 0x90))(local_20,L"Equation Editor Autoformat",local_28);
  iVar3 = (**(code **)(*local_28 + 0x28))(local_28);
  uVar4 = FUN_00b905e0(6,iVar3 + *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02002280 + 0x788) +
                                         0x4c0) + 1);
  FUN_00848a70(*(undefined8 *)(*(longlong *)PTR_DAT_02002280 + 0x788),uVar4);
  iVar3 = (**(code **)(*local_28 + 0x28))(local_28);
  local_2c = 1;
  if (0 < iVar3) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_78,local_2c + -1);
      local_c8 = (wchar_t *)0x0;
      (**(code **)(*local_20 + 0x10))(local_20,&local_70,L"Equation Editor Autoformat",local_78);
      FUN_019b6ae0(local_70,L"XXTOXX",&local_38,&local_40);
      FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02002280 + 0x788),0,local_2c,local_38);
      FUN_0084e3e0(*(undefined8 *)(*(longlong *)PTR_DAT_02002280 + 0x788),1,local_2c,local_40);
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  (**(code **)(**(longlong **)PTR_DAT_02002280 + 0x2d0))(*(longlong **)PTR_DAT_02002280);
  if (*(int *)(*(longlong *)PTR_DAT_02002280 + 0x508) == 1) {
    local_c8 = L"TINA.INI";
    FUN_00416cd0(&local_80,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01464d38);
    local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_80);
    (**(code **)(*local_20 + 0xb8))(local_20,L"Equation Editor Autoformat");
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02002280 + 0x790) + 0x260))
                      (*(longlong **)(*(longlong *)PTR_DAT_02002280 + 0x790));
    if (cVar2 == '\0') {
      (**(code **)(*local_20 + 0x18))(local_20,L"Main",&PTR_DAT_01464d80,&DAT_01464e04);
    }
    else {
      (**(code **)(*local_20 + 0x18))(local_20,L"Main",&PTR_DAT_01464d80,&DAT_01464d94);
    }
    iVar3 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02002280 + 0x788) + 0x4e0);
    local_2c = 1;
    if (0 < iVar3) {
      do {
        FUN_0084e320(*(undefined8 *)(*(longlong *)PTR_DAT_02002280 + 0x788),&local_88,0,local_2c);
        if (local_88 != 0) {
          uVar4 = FUN_00409e80(0x10000);
          FUN_0043f750(&local_98,uVar4);
          FUN_00416ba0(&local_90,&LAB_01464e14,local_98);
          FUN_0084e320(*(undefined8 *)(*(longlong *)PTR_DAT_02002280 + 0x788),&local_a8,0,local_2c);
          FUN_0084e320(*(undefined8 *)(*(longlong *)PTR_DAT_02002280 + 0x788),&local_b0,1,local_2c);
          local_c8 = local_b0;
          FUN_00416cd0(&local_a0,3,local_a8,L"XXTOXX");
          (**(code **)(*local_20 + 0x18))(local_20,L"Equation Editor Autoformat",local_90,local_a0);
        }
        local_2c = local_2c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(local_20);
    FUN_00410f20(*(undefined8 *)PTR_DAT_020017b8);
    *(undefined8 *)PTR_DAT_020017b8 = 0;
    FUN_01d11f10(*(undefined8 *)(param_1 + 0x860),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02002280 + 0x798));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x860) + 0x80);
    (**(code **)(*plVar1 + 0x10))
              (plVar1,*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02002280 + 0x798) + 0x80));
    FUN_01463140(param_1,1);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02002280);
  FUN_00414560(&local_b0,0xc);
  FUN_00414560(&local_40,2);
  return;
}

