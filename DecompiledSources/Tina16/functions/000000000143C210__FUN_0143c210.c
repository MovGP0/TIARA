/* Ghidra address: 0143c210 */
/* Ghidra symbol: FUN_0143c210 */


void FUN_0143c210(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [256];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_5c;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_28;
  longlong *local_20;
  
  local_80 = auStack_228;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  cVar1 = FUN_0143ca80(param_1);
  if (cVar1 != '\0') {
    FUN_01d34d40(*(undefined8 *)(param_1 + 0x720));
    local_5c = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4c0);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + -1;
    if (local_5c <= iVar4) {
      iVar4 = (iVar4 - local_5c) + 1;
      do {
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_90,0,local_5c);
        FUN_0043e130(&local_88,local_90);
        FUN_00416910(local_190,local_88,0xff);
        local_48 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_190,0);
        FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_1a0,1,local_5c);
        FUN_0043e130(&local_68,local_1a0);
        local_208 = (longlong *)CONCAT71(local_208._1_7_,1);
        FUN_00456a50(&local_68,&local_198,&DAT_0143ca78,0);
        FUN_00415dd0(local_48 + 0x10,local_198);
        *(undefined8 *)(local_48 + 0x28) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x720) + 0x50))
                  (*(longlong **)(param_1 + 0x720),local_48);
        local_5c = local_5c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_40 = FUN_004b6930(&PTR_FUN_00478280,1);
    local_38 = (longlong *)0x0;
    lVar2 = FUN_01c8a330(*(undefined8 *)PTR_DAT_02004e40,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    if (*(char *)(lVar2 + 0x978) == '\0') {
      local_38 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x28))();
      local_5c = 0;
      if (-1 < iVar4 + -1) {
        do {
          FUN_004b3cf0(*(undefined8 *)(param_1 + 0x710),&local_1b0,local_5c);
          FUN_0043e130(&local_1a8,local_1b0);
          FUN_00416910(local_190,local_1a8,0xff);
          local_48 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_190,0);
          FUN_004b5390(*(undefined8 *)(param_1 + 0x710),&local_1c0,local_5c);
          FUN_0043e130(&local_70,local_1c0);
          local_208 = (longlong *)CONCAT71(local_208._1_7_,1);
          FUN_00456a50(&local_70,&local_1b8,&DAT_0143ca78);
          FUN_00415dd0(local_48 + 0x10,local_1b8,0);
          *(undefined8 *)(local_48 + 0x28) = 0;
          (**(code **)(*local_38 + 0x50))(local_38,local_48);
          local_5c = local_5c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    local_50 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2770);
    FUN_013fd880(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),local_50,local_38,local_40)
    ;
    if ((local_50 != 0) && (cVar1 = FUN_01d04d50(local_50), cVar1 != '\0')) {
      local_78 = *(undefined8 *)(*(longlong *)(local_50 + 0x1a8) + 0xc0);
      uVar3 = FUN_0177aa70(local_78);
      local_20 = (longlong *)FUN_0177ae90(uVar3);
      while (cVar1 = thunk_FUN_0177b033(local_20), cVar1 != '\0') {
        FUN_0177aee0(local_20,&local_1c8);
        FUN_00416880(&local_58,local_1c8);
        FUN_0043e130(&local_1d0,local_58);
        FUN_00416910(local_190,local_1d0,0xff);
        local_48 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_190,0);
        FUN_004144d0(local_48 + 0x10);
        FUN_00415dd0(&local_1d8,local_58,0);
        uVar3 = FUN_01779a20(local_78,local_1d8);
        *(undefined8 *)(local_48 + 0x28) = uVar3;
        (**(code **)(**(longlong **)(param_1 + 0x720) + 0x50))
                  (*(longlong **)(param_1 + 0x720),local_48);
      }
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
    }
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x720) + 0x10);
    local_1dc = iVar4 + -1;
    local_5c = 0;
    if (-1 < local_1dc) {
      do {
        local_1dc = iVar4;
        lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x720),local_5c);
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x720),local_5c);
          local_208 = local_38;
          local_200 = 0;
          local_1f8 = local_40;
          local_28 = FUN_016a6a40(&DAT_016a2760,1,*(undefined8 *)(lVar2 + 0x10),
                                  *(undefined8 *)(param_1 + 0x720));
          lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x720),local_5c);
          uVar3 = FUN_016a9290(local_28);
          *(undefined8 *)(lVar2 + 0x28) = uVar3;
          FUN_00410f20(local_28);
        }
        local_5c = local_5c + 1;
        local_1dc = local_1dc + -1;
        iVar4 = local_1dc;
      } while (local_1dc != 0);
    }
    FUN_00410f20(local_38);
    FUN_00410f20(local_40);
  }
  FUN_004144d0(&local_1d8);
  FUN_00414480(&local_1d0);
  FUN_004144d0(&local_1c8);
  FUN_00414560(&local_1c0,6);
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_70,2);
  FUN_00414480(&local_58);
  return;
}

