/* Ghidra address: 016c8c50 */
/* Ghidra symbol: FUN_016c8c50 */


void FUN_016c8c50(longlong param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  byte local_c0;
  undefined1 local_b8;
  undefined *local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  char local_8a;
  byte local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50 [3];
  undefined *local_38;
  undefined4 local_2c [3];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (undefined *)0x0;
  local_58 = 0;
  local_50[0] = (undefined *)0x0;
  if ((byte)(param_2[0x28] - 0x40) < 0x20) {
    uVar6 = 1 << (param_2[0x28] - 0x40 & 0x1f);
    bVar9 = (uVar6 & 0x2befc18) != 0;
    puVar7 = (undefined *)(ulonglong)uVar6;
  }
  else {
    bVar9 = false;
    puVar7 = param_2;
  }
  local_a0 = param_3;
  local_98 = param_4;
  if (((bVar9) && (*(longlong *)(param_2 + 0x10) != 0)) ||
     (cVar3 = FUN_016b97d0(param_2), cVar3 != '\0')) {
    FUN_004169a0(local_50,*(undefined8 *)(param_2 + 8));
    puVar7 = local_50[0];
    iVar4 = FUN_004170c0(&DAT_016c942c,local_50[0],1);
    if (iVar4 == 0) {
      uVar5 = 0;
      if ((*(longlong *)(param_1 + 0x9d0) != 0) &&
         (local_8a = FUN_01d350f0(*(longlong *)(param_1 + 0x9d0),*(undefined8 *)(param_2 + 0x10),
                                  local_2c), local_8a != '\0')) {
        uVar5 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x9d0),local_2c[0]);
      }
      if ((*(longlong *)(param_1 + 0x9d0) == 0) || (local_8a == '\0')) {
        local_8a = FUN_01d350f0(*(undefined8 *)(param_1 + 0x9c8),*(undefined8 *)(param_2 + 0x10),
                                local_2c);
        if (local_8a == '\0') {
          local_d8 = 0;
          cVar3 = FUN_00ee3970(*(undefined8 *)(param_1 + 8),0,*(undefined8 *)(param_2 + 0x10),0);
          if (cVar3 != '\0') {
            local_8a = FUN_01d350f0(*(undefined8 *)(param_1 + 0x9c8),*(undefined8 *)(param_2 + 0x10)
                                    ,local_2c);
          }
        }
        if (local_8a != '\0') {
          uVar5 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x9c8),local_2c[0]);
        }
      }
      FUN_004169a0(&local_58,*(undefined8 *)(param_2 + 0x10));
      local_d8 = local_58;
      puVar7 = param_2;
      FUN_016c4eb0(param_1,param_2,uVar5,*(undefined8 *)(param_1 + 0x9d0));
    }
  }
  if ((byte)(param_2[0x28] + 0xb8) < 0x10) {
    uVar6 = (int)CONCAT62((int6)((ulonglong)puVar7 >> 0x10),1) << (param_2[0x28] + 0xb8 & 0x1f);
    puVar7 = (undefined *)(ulonglong)uVar6;
    bVar9 = (uVar6 & 0x20c0) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    pbVar1 = *(byte **)(param_2 + 0x58);
    if (pbVar1 != (byte *)0x0) {
      puVar7 = &DAT_016c9432;
      iVar4 = FUN_00414f50(pbVar1,&DAT_016c9432,(ulonglong)*pbVar1 + 1);
      if (iVar4 == 0) goto LAB_016c90d5;
    }
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FUN_004169a0(&local_60,*(undefined8 *)(param_2 + 8));
      puVar7 = local_60;
      iVar4 = FUN_004170c0(&DAT_016c942c,local_60,1);
      if (iVar4 == 0) {
        uVar5 = 0;
        if ((*(longlong *)(param_1 + 0x9d0) != 0) &&
           (local_8a = FUN_01d350f0(*(longlong *)(param_1 + 0x9d0),*(undefined8 *)(param_2 + 0x60),
                                    local_2c), local_8a != '\0')) {
          uVar5 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x9d0),local_2c[0]);
        }
        if ((*(longlong *)(param_1 + 0x9d0) == 0) || (local_8a == '\0')) {
          local_8a = FUN_01d350f0(*(undefined8 *)(param_1 + 0x9c8),*(undefined8 *)(param_2 + 0x60),
                                  local_2c);
          if (local_8a == '\0') {
            local_d8 = 0;
            cVar3 = FUN_00ee3970(*(undefined8 *)(param_1 + 8),0,*(undefined8 *)(param_2 + 0x60),0);
            if (cVar3 != '\0') {
              local_8a = FUN_01d350f0(*(undefined8 *)(param_1 + 0x9c8),
                                      *(undefined8 *)(param_2 + 0x60),local_2c);
            }
          }
          if (local_8a != '\0') {
            uVar5 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x9c8),local_2c[0]);
          }
        }
        FUN_004169a0(&local_68,*(undefined8 *)(param_2 + 0x60));
        local_d8 = local_68;
        puVar7 = param_2;
        FUN_016c4eb0(param_1,param_2,uVar5,*(undefined8 *)(param_1 + 0x9d0));
      }
    }
  }
LAB_016c90d5:
  if ((byte)(param_2[0x28] - 0x40) < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (param_2[0x28] - 0x40 & 0x1f) &
            0xa0U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    local_89 = 0;
  }
  else if ((param_2[0x28] == 'B') && (*(longlong *)(param_2 + 0x10) == 0)) {
    local_89 = 1;
  }
  else {
    local_89 = 2;
  }
  if (param_5 < 0x10) {
    bVar9 = ((int)CONCAT62((int6)((ulonglong)puVar7 >> 0x10),1) << (param_5 & 0x1f) & 0x8001U) != 0;
  }
  else {
    bVar9 = false;
  }
  if ((!bVar9) && (*(longlong *)(param_2 + 0x40) != 0)) {
    FUN_004169a0(&local_70,*(undefined8 *)(param_2 + 8));
    iVar4 = FUN_004170c0(&DAT_016c942c,local_70,1);
    if (iVar4 == 0) {
      lVar2 = *(longlong *)(param_2 + 0x40);
      iVar4 = *(int *)(lVar2 + 0x10);
      iVar8 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar5 = FUN_01d347d0(lVar2,iVar8);
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = *(undefined8 *)(param_2 + 0x58);
          local_c0 = local_89;
          FUN_016c5f10(param_1,local_98,uVar5,*(undefined8 *)(param_1 + 0x9e8));
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_004169a0(&local_78,*(undefined8 *)(param_2 + 8));
    iVar4 = FUN_004170c0(&DAT_016c942c,local_78,1);
    if ((iVar4 == 0) && (param_2[0x28] == 'M')) {
      lVar2 = *(longlong *)(param_2 + 0x40);
      iVar4 = *(int *)(lVar2 + 0x10);
      iVar8 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar5 = FUN_01d347d0(lVar2,iVar8);
          FUN_016c8aa0(auStack_f8,uVar5);
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  FUN_004169a0(&local_80,*(undefined8 *)(param_2 + 8));
  iVar4 = FUN_004170c0(&DAT_016c942c,local_80,1);
  if (iVar4 == 0) {
    local_38 = param_2;
    FUN_00597e50(*(longlong *)(param_1 + 0xdb8) + 8,&local_38);
  }
  if (param_2[0x28] == 'X') {
    local_d8 = *(undefined8 *)(param_2 + 0x40);
    local_d0 = local_a0;
    local_c8 = local_98;
    local_c0 = param_5;
    local_b8 = 0;
    local_b0 = param_2;
    FUN_016c7790(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                 *(undefined8 *)(param_2 + 0x30));
    FUN_016bca60(param_2,&local_88);
    (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x80))
              (*(longlong **)(param_1 + 0xa58),local_88,param_2);
    FUN_01d34a40(*(undefined8 *)(param_1 + 0x9b8),param_2);
  }
  FUN_00414560(&local_88,8);
  return;
}

