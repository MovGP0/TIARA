/* Ghidra address: 016c66a0 */
/* Ghidra symbol: FUN_016c66a0 */


void FUN_016c66a0(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined *puVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined *local_2c8;
  uint local_2c0;
  int local_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_260 [256];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150 [3];
  undefined *local_138;
  undefined1 local_12c;
  char local_12b;
  int local_2c [3];
  
  local_2b8 = 0;
  local_298 = 0;
  local_2b0 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = (undefined *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_150[0] = 0;
  local_158 = 0;
  local_160 = 0;
  local_2c8 = (undefined *)(**(code **)(*param_2 + 8))(*param_2,1,param_2);
  if (local_2c8 == (undefined *)0x0) goto code_r0x016c72b8;
  uVar7 = FUN_016a47d0(&PTR_FUN_016a0250,1,*(undefined8 *)(param_1 + 0x2b8));
  *(undefined8 *)(local_2c8 + 0x38) = uVar7;
  puVar10 = *(undefined **)(local_2c8 + 8);
  FUN_004154b0(&local_158,param_1 + 0x168,0);
  FUN_004154b0(&local_160,puVar10,0);
  local_2e8 = local_160;
  FUN_00415980(local_150,3,local_158,&DAT_016c7394);
  FUN_00415560(local_260,local_150[0],0xff);
  uVar7 = FUN_016bbb50(*(undefined8 *)(param_1 + 0x2a0),puVar10,local_260);
  *(undefined8 *)(local_2c8 + 8) = uVar7;
  if ((byte)(local_2c8[0x28] - 0x40) < 0x20) {
    uVar9 = 1 << (local_2c8[0x28] - 0x40 & 0x1f);
    puVar10 = (undefined *)(ulonglong)uVar9;
    bVar11 = (uVar9 & 0x2befc18) != 0;
  }
  else {
    bVar11 = false;
  }
  if (((bVar11) && (*(longlong *)(local_2c8 + 0x10) != 0)) ||
     (cVar4 = FUN_016b97d0(local_2c8), cVar4 != '\0')) {
    uVar7 = 0;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x268) + 0x28);
    if (lVar8 != 0) {
      uVar5 = FUN_01d350f0(lVar8,*(undefined8 *)(local_2c8 + 0x10),local_2c);
      *(undefined1 *)(param_1 + 0x167) = uVar5;
      if (*(char *)(param_1 + 0x167) != '\0') {
        uVar7 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x28),local_2c[0]);
      }
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x268) + 0x28) == 0) ||
       (*(char *)(param_1 + 0x167) == '\0')) {
      uVar5 = FUN_01d350f0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x9c8),
                           *(undefined8 *)(local_2c8 + 0x10),local_2c);
      *(undefined1 *)(param_1 + 0x167) = uVar5;
      if (*(char *)(param_1 + 0x167) == '\0') {
        local_2e8 = 0;
        cVar4 = FUN_00ee3970(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 8),0,
                             *(undefined8 *)(local_2c8 + 0x10),0);
        if (cVar4 != '\0') {
          uVar5 = FUN_01d350f0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x9c8),
                               *(undefined8 *)(local_2c8 + 0x10),local_2c);
          *(undefined1 *)(param_1 + 0x167) = uVar5;
        }
      }
      if (*(char *)(param_1 + 0x167) != '\0') {
        uVar7 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x9c8),local_2c[0]);
      }
    }
    FUN_004169a0(&local_268,*(undefined8 *)(local_2c8 + 0x10));
    local_2e8 = local_268;
    puVar10 = local_2c8;
    FUN_016c4eb0(*(undefined8 *)(param_1 + 0x2a0),local_2c8,uVar7,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x28));
  }
  if ((byte)(local_2c8[0x28] + 0xb8) < 0x10) {
    uVar9 = (int)CONCAT62((int6)((ulonglong)puVar10 >> 0x10),1) << (local_2c8[0x28] + 0xb8 & 0x1f);
    puVar10 = (undefined *)(ulonglong)uVar9;
    bVar11 = (uVar9 & 0x20c0) != 0;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    pbVar1 = *(byte **)(local_2c8 + 0x58);
    if (pbVar1 != (byte *)0x0) {
      puVar10 = &DAT_016c739c;
      iVar6 = FUN_00414f50(pbVar1,&DAT_016c739c,(ulonglong)*pbVar1 + 1);
      if (iVar6 == 0) goto LAB_016c6c74;
    }
    if (*(longlong *)(local_2c8 + 0x60) != 0) {
      uVar7 = 0;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x268) + 0x28);
      if (lVar8 != 0) {
        uVar5 = FUN_01d350f0(lVar8,*(undefined8 *)(local_2c8 + 0x60),local_2c);
        *(undefined1 *)(param_1 + 0x167) = uVar5;
        if (*(char *)(param_1 + 0x167) != '\0') {
          uVar7 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x28),local_2c[0]);
        }
      }
      if ((*(longlong *)(*(longlong *)(param_1 + 0x268) + 0x28) == 0) ||
         (*(char *)(param_1 + 0x167) == '\0')) {
        uVar5 = FUN_01d350f0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x9c8),
                             *(undefined8 *)(local_2c8 + 0x60),local_2c);
        *(undefined1 *)(param_1 + 0x167) = uVar5;
        if (*(char *)(param_1 + 0x167) == '\0') {
          local_2e8 = 0;
          cVar4 = FUN_00ee3970(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 8),0,
                               *(undefined8 *)(local_2c8 + 0x60),0);
          if (cVar4 != '\0') {
            uVar5 = FUN_01d350f0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x9c8),
                                 *(undefined8 *)(local_2c8 + 0x60),local_2c);
            *(undefined1 *)(param_1 + 0x167) = uVar5;
          }
        }
        if (*(char *)(param_1 + 0x167) != '\0') {
          uVar7 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x9c8),local_2c[0]);
        }
      }
      puVar10 = local_2c8;
      FUN_004169a0(&local_270,*(undefined8 *)(local_2c8 + 0x60));
      local_2e8 = local_270;
      FUN_016c4eb0(*(undefined8 *)(param_1 + 0x2a0),puVar10,uVar7,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x28));
    }
  }
LAB_016c6c74:
  if ((byte)(local_2c8[0x28] - 0x40) < 0x20) {
    uVar9 = 1 << (local_2c8[0x28] - 0x40 & 0x1f);
    puVar10 = (undefined *)(ulonglong)uVar9;
    bVar11 = (uVar9 & 0x8009e0) != 0;
  }
  else {
    bVar11 = false;
  }
  if ((bVar11) || (cVar4 = FUN_016b9760(local_2c8), cVar4 != '\0')) {
    iVar6 = (**(code **)(**(longlong **)(local_2c8 + 0x58) + 0x28))();
    local_2c0 = 0;
    if (-1 < iVar6 + -1) {
      do {
        puVar3 = local_2c8;
        (**(code **)(**(longlong **)(local_2c8 + 0x58) + 0x18))
                  (*(longlong **)(local_2c8 + 0x58),&local_278,local_2c0);
        puVar10 = local_278;
        FUN_00416910(&local_12c,local_278,0xff);
        if ((byte)(local_2c8[0x28] - 0x40) < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)local_2c8 >> 8),1) <<
                    (local_2c8[0x28] - 0x40 & 0x1f) & 0xa4U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          if (local_12b == 'I') {
            FUN_004169a0(&local_280,&local_12c);
            local_2c[0] = FUN_004170c0(&DAT_016c73b4,local_280,4);
            FUN_004151b0(local_260,&local_12c,local_2c[0] + 1,local_12c);
            puVar10 = local_260;
            lVar8 = FUN_016c4bb0(*(undefined8 *)(param_1 + 0x2a0),puVar10,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x18));
            if (lVar8 != 0) {
              FUN_004154b0(&local_288,param_1 + 0x168,0);
              FUN_004155b0(&local_288,&DAT_016c7394);
              FUN_00415560(local_260,local_288,0xff);
              FUN_004152c0(local_260,&local_12c,0xff,local_2c[0] + 1);
              FUN_004169a0(&local_290,&local_12c);
              plVar2 = *(longlong **)(puVar3 + 0x58);
              puVar10 = (undefined *)(ulonglong)local_2c0;
              (**(code **)(*plVar2 + 0x40))(plVar2,puVar10,local_290);
            }
          }
        }
        else {
          puVar10 = &local_12c;
          lVar8 = FUN_016c4bb0(*(undefined8 *)(param_1 + 0x2a0),puVar10,
                               *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x18));
          if (lVar8 != 0) {
            FUN_004154b0(&local_2a0,param_1 + 0x168,0);
            FUN_004154b0(&local_2a8,&local_12c,0);
            local_2e8 = local_2a8;
            FUN_00415980(&local_298,3,local_2a0,&DAT_016c7394);
            FUN_00416880(&local_2b0,local_298);
            plVar2 = *(longlong **)(puVar3 + 0x58);
            puVar10 = (undefined *)(ulonglong)local_2c0;
            (**(code **)(*plVar2 + 0x40))(plVar2,puVar10,local_2b0);
          }
        }
        local_2c0 = local_2c0 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x2a0) + 0x9a9) == '\0') || (local_2c8[0x28] != 'U')) {
LAB_016c6f6f:
    iVar6 = *(int *)(*(longlong *)(local_2c8 + 0x30) + 0x10);
    local_2c0 = 0;
    if (-1 < iVar6 + -1) {
      do {
        puVar10 = (undefined *)FUN_01d347d0(*(undefined8 *)(local_2c8 + 0x30),local_2c0);
        FUN_016c5fe0(auStack_308,puVar10);
        local_2c0 = local_2c0 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    puVar10 = &DAT_016c739c;
    iVar6 = FUN_00414f50(*(undefined8 *)(local_2c8 + 0x58),&DAT_016c739c,
                         (ulonglong)**(byte **)(local_2c8 + 0x58) + 1);
    if (iVar6 == 0) goto LAB_016c6f6f;
  }
  if ((byte)(local_2c8[0x28] - 0x40) < 8) {
    bVar11 = ((int)CONCAT71((int7)((ulonglong)local_2c8 >> 8),1) << (local_2c8[0x28] - 0x40 & 0x1f)
             & 0xa0U) != 0;
  }
  else {
    bVar11 = false;
  }
  if ((bVar11) || (cVar4 = FUN_016b9760(local_2c8), cVar4 != '\0')) {
    iVar6 = (**(code **)(**(longlong **)(local_2c8 + 0x60) + 0x28))();
    local_2c0 = 0;
    if (-1 < iVar6 + -1) {
      do {
        puVar10 = local_2c8;
        uVar7 = (**(code **)(**(longlong **)(local_2c8 + 0x60) + 0x30))
                          (*(longlong **)(local_2c8 + 0x60),local_2c0);
        FUN_016c5fe0(auStack_308,uVar7);
        plVar2 = *(longlong **)(puVar10 + 0x60);
        lVar8 = (**(code **)(*plVar2 + 0x30))(plVar2,local_2c0);
        FUN_004169a0(&local_2b8,*(undefined8 *)(lVar8 + 8));
        puVar10 = (undefined *)(ulonglong)local_2c0;
        (**(code **)(*plVar2 + 0x40))(plVar2,puVar10,local_2b8);
        local_2c0 = local_2c0 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if ((byte)(local_2c8[0x28] - 0x40) < 8) {
    bVar11 = ((int)CONCAT71((int7)((ulonglong)local_2c8 >> 8),1) << (local_2c8[0x28] - 0x40 & 0x1f)
             & 0xa0U) != 0;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    uVar5 = 0;
  }
  else if ((local_2c8[0x28] == 'B') && (*(longlong *)(local_2c8 + 0x10) == 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
  if (*(byte *)(param_1 + 0x2d8) < 0x10) {
    bVar11 = ((int)CONCAT62((int6)((ulonglong)puVar10 >> 0x10),1) <<
              (*(byte *)(param_1 + 0x2d8) & 0x1f) & 0x8001U) != 0;
  }
  else {
    bVar11 = false;
  }
  if ((!bVar11) && (*(longlong *)(local_2c8 + 0x40) != 0)) {
    lVar8 = *(longlong *)(local_2c8 + 0x40);
    iVar6 = *(int *)(lVar8 + 0x10);
    local_2bc = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar7 = FUN_01d347d0(lVar8,local_2bc);
        local_2e8 = *(undefined8 *)(param_1 + 0x2c0);
        local_2e0 = *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x30);
        local_2d8 = *(undefined8 *)(local_2c8 + 0x58);
        local_2d0 = uVar5;
        FUN_016c5f10(*(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(param_1 + 0x2d0),uVar7,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x268) + 0x20));
        local_2bc = local_2bc + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if ((*(longlong *)(local_2c8 + 0x40) != 0) && (local_2c8[0x28] == 'M')) {
    lVar8 = *(longlong *)(local_2c8 + 0x40);
    iVar6 = *(int *)(lVar8 + 0x10);
    local_2bc = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar7 = FUN_01d347d0(lVar8,local_2bc);
        FUN_016c64f0(auStack_308,uVar7);
        local_2bc = local_2bc + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if ((*(char *)(param_1 + 0x2e0) == '\0') || (local_2c8[0x28] != 'X')) {
    FUN_016bd1e0(*(undefined8 *)(param_1 + 0x2a0),local_2c8);
    FUN_016bd0d0(*(undefined8 *)(param_1 + 0x2a0),local_2c8);
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      local_138 = local_2c8;
      FUN_00597e50(*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x50) + 8,&local_138);
    }
  }
  else {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x158),local_2c8);
  }
code_r0x016c72b8:
  FUN_00414560(&local_2b8,2);
  FUN_00414590(&local_2a8,3);
  FUN_00414480(&local_290);
  FUN_004144d0(&local_288);
  FUN_00414560(&local_280,4);
  FUN_00414590(&local_160,3);
  return;
}

