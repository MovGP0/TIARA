/* Ghidra address: 016cb2b0 */
/* Ghidra symbol: FUN_016cb2b0 */


void FUN_016cb2b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 undefined1 param_5,undefined8 param_6,undefined8 param_7,char param_8,char param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 *local_70;
  longlong local_60;
  longlong local_58;
  int local_4c;
  char local_45;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  longlong local_28;
  undefined8 local_20;
  
  local_70 = auStack_b8;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(local_20,1);
  local_38 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_016c9c10(auStack_b8);
  FUN_016cafa0(auStack_b8,*(undefined8 *)(param_1 + 0x9b8));
  FUN_00410f20(local_38);
  FUN_00410f20(local_20);
  if (param_8 != '\0') {
    FUN_016c52d0(param_1,*(undefined8 *)(param_1 + 0x9e8),*(undefined8 *)(param_1 + 0x9f8),0);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    if ((local_res20 == 0) || (*(longlong *)(local_res20 + 0x488) == 0)) {
      local_29 = FUN_015fc1d0(PTR_DAT_02004010 + 0x8a9);
    }
    else {
      local_29 = FUN_015fc1d0(*(longlong *)(local_res20 + 0x488) + 0xe81);
    }
    local_44 = 0;
    while (local_44 <= *(int *)(*(longlong *)(param_1 + 0x9b8) + 0x10) + -1) {
      lVar1 = FUN_01d347d0(*(longlong *)(param_1 + 0x9b8),local_44);
      local_45 = *(char *)(lVar1 + 0x28);
      uVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x9b8),local_44);
      local_98 = CONCAT71(local_98._1_7_,param_5);
      FUN_016c8c50(param_1,uVar2,local_res18,local_res20);
      if (local_45 != 'X') {
        local_44 = local_44 + 1;
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') {
      local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      iVar3 = *(int *)(*(longlong *)(param_1 + 0xa70) + 0x10);
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa70),local_44);
          FUN_016c9e10(auStack_b8,uVar2);
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = *(int *)(local_28 + 0x10);
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar2 = FUN_004aeac0(local_28,local_44);
          FUN_01d34d10(*(undefined8 *)(param_1 + 0x9b8),uVar2);
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_00410f20(local_28);
      if (param_9 != '\0') {
        local_90 = param_5;
        local_88 = local_29;
        local_98 = param_1;
        FUN_014e5930(local_res18,local_res20,param_6,*(undefined8 *)(param_1 + 0xa38));
        if (*(char *)(param_1 + 0x9aa) == '\0') {
          local_58 = *(longlong *)(param_1 + 0xa08);
          iVar3 = *(int *)(local_58 + 0x10);
          local_4c = 0;
          if (-1 < iVar3 + -1) {
            do {
              uVar2 = FUN_01d347d0(local_58,local_4c);
              FUN_016cab70(auStack_b8,uVar2);
              local_4c = local_4c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
      if (local_res20 == 0) {
        local_40 = 0;
      }
      else {
        local_40 = *(undefined8 *)(local_res20 + 0x488);
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0xa78) + 0x10);
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa78),local_44);
          FUN_016c9620(param_1,uVar2,local_40);
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (param_9 != '\0') {
        local_60 = *(longlong *)(param_1 + 0x9b8);
        iVar3 = *(int *)(local_60 + 0x10);
        local_4c = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar2 = FUN_01d347d0(local_60,local_4c);
            FUN_016ca260(auStack_b8,uVar2);
            local_4c = local_4c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        FUN_016c8a40(param_1,local_res18,local_res20);
        if (*(char *)(param_1 + 0x9aa) == '\0') {
          FUN_016c8870(param_1);
        }
      }
    }
  }
  FUN_00414480(&local_res10);
  return;
}

