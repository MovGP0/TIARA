/* Ghidra address: 0146b080 */
/* Ghidra symbol: FUN_0146b080 */


void FUN_0146b080(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_e8;
  local_98 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = (wchar_t *)0x0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = (longlong *)FUN_007fc180(&PTR_FUN_01465710,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01466720(local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90));
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_c8 = L"TINA.INI";
  FUN_00416cd0(&local_68,3,*(undefined8 *)PTR_DAT_02005010,&DAT_0146b760);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_68);
  local_c8 = L"1";
  (**(code **)(*local_20 + 0x10))(local_20,&local_70,L"Main",&PTR_DAT_0146b7a8);
  uVar5 = FUN_00416db0(local_70,&DAT_0146b7bc);
  (**(code **)(*(longlong *)local_48[0xf2] + 0x268))
            ((longlong *)local_48[0xf2],
             CONCAT71((int7)((ulonglong)uVar5 >> 8),(int)uVar5 == 0) & 0xffffffff);
  (**(code **)(*local_20 + 0x90))(local_20,L"Equation Editor Autoformat",local_28);
  iVar3 = (**(code **)(*local_28 + 0x28))(local_28);
  uVar4 = FUN_00b905e0(6,iVar3 + *(int *)(local_48[0xf1] + 0x4c0) + 1);
  FUN_00848a70(local_48[0xf1],uVar4);
  iVar3 = (**(code **)(*local_28 + 0x28))(local_28);
  local_30 = 1;
  if (0 < iVar3) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_80,local_30 + -1);
      local_c8 = (wchar_t *)0x0;
      (**(code **)(*local_20 + 0x10))(local_20,&local_78,L"Equation Editor Autoformat",local_80);
      FUN_019b6ae0(local_78,L"XXTOXX",&local_38,&local_40);
      FUN_0084e3e0(local_48[0xf1],0,local_30,local_38);
      FUN_0084e3e0(local_48[0xf1],1,local_30,local_40);
      local_30 = local_30 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  local_2c = (**(code **)(*local_48 + 0x2d0))(local_48);
  if (local_2c == 2) {
    FUN_00410f20(local_48);
  }
  else {
    local_c8 = L"TINA.INI";
    FUN_00416cd0(&local_88,3,*(undefined8 *)PTR_DAT_02005010,&DAT_0146b760);
    local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_88);
    (**(code **)(*local_20 + 0xb8))(local_20,L"Equation Editor Autoformat");
    cVar2 = (**(code **)(*(longlong *)local_48[0xf2] + 0x260))((longlong *)local_48[0xf2]);
    if (cVar2 == '\0') {
      (**(code **)(*local_20 + 0x18))(local_20,L"Main",&PTR_DAT_0146b7a8,&DAT_0146b82c);
    }
    else {
      (**(code **)(*local_20 + 0x18))(local_20,L"Main",&PTR_DAT_0146b7a8,&DAT_0146b7bc);
    }
    iVar3 = *(int *)(local_48[0xf1] + 0x4e0);
    local_30 = 1;
    if (0 < iVar3) {
      do {
        FUN_0084e320(local_48[0xf1],&local_90,0,local_30);
        if (local_90 != 0) {
          uVar4 = FUN_00409e80(0x10000);
          FUN_0043f750(&local_a0,uVar4);
          FUN_00416ba0(&local_98,&DAT_0146b83c,local_a0);
          FUN_0084e320(local_48[0xf1],&local_b0,0,local_30);
          FUN_0084e320(local_48[0xf1],&local_b8,1,local_30);
          local_c8 = local_b8;
          FUN_00416cd0(&local_a8,3,local_b0,L"XXTOXX");
          (**(code **)(*local_20 + 0x18))(local_20,L"Equation Editor Autoformat",local_98,local_a8);
        }
        local_30 = local_30 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(local_20);
    FUN_00410f20(*(undefined8 *)PTR_DAT_020017b8);
    *(undefined8 *)PTR_DAT_020017b8 = 0;
    FUN_01d11f10(*(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + 0x90),local_48[0xf3]);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x8e0) + 0x90) + 0x80);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(local_48[0xf3] + 0x80));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0xb8);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(local_48[0xf3] + 0x80));
    FUN_00410f20(local_48);
  }
  FUN_00414560(&local_b8,0xb);
  FUN_00414560(&local_40,2);
  return;
}

