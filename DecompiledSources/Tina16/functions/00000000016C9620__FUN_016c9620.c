/* Ghidra address: 016c9620 */
/* Ghidra symbol: FUN_016c9620 */


void FUN_016c9620(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined8 unaff_XMM6_Qa;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  bVar4 = *(char *)(param_2 + 0x28) + 0xb8;
  if (bVar4 < 0x10) {
    bVar11 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar4 & 0x1f) & 0x4002U) != 0;
  }
  else {
    bVar11 = false;
  }
  local_90 = param_1;
  local_88 = param_2;
  if (((bVar11) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (iVar6 = FUN_00414f50(*(undefined8 *)(param_2 + 0x18),&DAT_016c9bfa,
                           (ulonglong)**(byte **)(param_2 + 0x18) + 1), iVar6 == 0)) {
    local_40 = 0x3ff0000000000000;
    local_58 = 0x3ff0000000000000;
    lVar8 = *(longlong *)(*(longlong *)(local_88 + 0x40) + 0x20);
    if (lVar8 != 0) {
      if (*(longlong *)(lVar8 + 0x10) == 0) {
        local_40 = *(undefined8 *)(lVar8 + 0x28);
      }
      else {
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 2;
        local_a0 = param_3;
        local_40 = FUN_016c5420(local_90,lVar8,*(undefined8 *)(local_90 + 0x9e8),0);
      }
    }
    lVar8 = *(longlong *)(*(longlong *)(local_88 + 0x40) + 0x28);
    if (lVar8 != 0) {
      if (*(longlong *)(lVar8 + 0x10) == 0) {
        local_58 = *(undefined8 *)(lVar8 + 0x28);
      }
      else {
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 2;
        local_a0 = param_3;
        local_58 = FUN_016c5420(local_90,lVar8,*(undefined8 *)(local_90 + 0x9e8),0);
      }
    }
    local_48 = 0;
    local_5c = 0;
    lVar8 = *(longlong *)(local_88 + 0x40);
    iVar10 = 0;
    iVar6 = *(int *)(lVar8 + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar7 = FUN_01d347d0(lVar8,iVar10);
        FUN_016c9440(auStack_d8,uVar7);
        iVar10 = iVar10 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    bVar11 = true;
    for (local_7c = 0; local_7c <= *(int *)(*(longlong *)(local_88 + 0x40) + 0x10) + -2;
        local_7c = local_7c + 1) {
      uVar7 = FUN_01d347d0(*(longlong *)(local_88 + 0x40),local_7c);
      cVar5 = FUN_004113d0(uVar7,&PTR_FUN_016a1500);
      if (cVar5 != '\0') {
        if (bVar11) {
          bVar11 = false;
          local_80 = local_7c;
          lVar8 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c);
          if (*(double *)(*(longlong *)(lVar8 + 0x18) + 0x28) != 0.0) {
            local_70[0] = 0;
            local_78[0] = 0;
            local_b8 = 0;
            local_b0 = *(undefined8 *)(local_90 + 0x10);
            uVar7 = FUN_016a5390(&PTR_FUN_016a0e58,1,local_78,0);
            local_78[0] = 0;
            local_b8 = 0;
            local_b0 = *(ulonglong *)(local_90 + 0x10);
            local_b8 = FUN_016a5390(&PTR_FUN_016a0e58,1,local_78,unaff_XMM6_Qa);
            local_b0 = local_b0 & 0xffffffffffffff00;
            uVar7 = FUN_016a58c0(&PTR_FUN_016a1500,1,local_70,uVar7);
            FUN_01d348b0(*(undefined8 *)(local_88 + 0x40),local_7c,uVar7);
            if (0 < *(int *)(*(longlong *)(local_88 + 0x40) + 0x30)) {
              piVar1 = (int *)(*(longlong *)(local_88 + 0x40) + 0x30);
              *piVar1 = *piVar1 + 1;
            }
            local_5c = local_5c + 1;
          }
        }
        lVar8 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c);
        iVar6 = local_7c + 1;
        lVar9 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),iVar6);
        dVar3 = *(double *)(*(longlong *)(lVar8 + 0x18) + 0x28);
        pdVar2 = (double *)(*(longlong *)(lVar9 + 0x18) + 0x28);
        if (dVar3 < *pdVar2 || dVar3 == *pdVar2) {
          lVar8 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c);
          lVar9 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),iVar6);
          if (*(double *)(*(longlong *)(lVar8 + 0x18) + 0x28) ==
              *(double *)(*(longlong *)(lVar9 + 0x18) + 0x28)) {
            lVar8 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c);
            lVar9 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),iVar6);
            if (*(double *)(*(longlong *)(lVar8 + 0x20) + 0x28) ==
                *(double *)(*(longlong *)(lVar9 + 0x20) + 0x28)) {
              FUN_01d34870(*(undefined8 *)(local_88 + 0x40),iVar6);
              if (iVar6 < *(int *)(*(longlong *)(local_88 + 0x40) + 0x30) + local_80) {
                piVar1 = (int *)(*(longlong *)(local_88 + 0x40) + 0x30);
                *piVar1 = *piVar1 + -1;
              }
              local_5c = local_5c + -1;
            }
          }
        }
        else {
          FUN_016a4020(*(undefined8 *)(local_90 + 0x10),0x14,*(undefined8 *)(local_88 + 8),
                       0xffffffff);
        }
      }
      uVar7 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c);
      cVar5 = FUN_004113d0(uVar7,&PTR_FUN_016a0e58);
      if (cVar5 != '\0') {
        lVar8 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c);
        iVar6 = FUN_00414f50(*(undefined8 *)(lVar8 + 8),&DAT_016c9bff,
                             (ulonglong)**(byte **)(lVar8 + 8) + 1);
        if (iVar6 == 0) {
          lVar8 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c);
          unaff_XMM6_Qa = *(undefined8 *)(lVar8 + 0x28);
        }
      }
    }
    *(int *)(*(longlong *)(local_88 + 0x40) + 0x34) = local_5c;
  }
  if ((*(char *)(local_88 + 0x28) == 'U') &&
     (iVar6 = FUN_00414f50(*(undefined8 *)(local_88 + 0x58),&DAT_016c9c02,
                           (ulonglong)**(byte **)(local_88 + 0x58) + 1), iVar6 == 0)) {
    local_48 = 0;
    local_50 = 0;
    local_68 = 0;
    lVar8 = *(longlong *)(local_88 + 0x40);
    iVar10 = 0;
    iVar6 = *(int *)(lVar8 + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar7 = FUN_01d347d0(lVar8,iVar10);
        FUN_016c9550(auStack_d8,uVar7);
        iVar10 = iVar10 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    for (local_7c = 0; local_7c <= *(int *)(*(longlong *)(local_88 + 0x40) + 0x10) + -2;
        local_7c = local_7c + 1) {
      uVar7 = FUN_01d347d0(*(longlong *)(local_88 + 0x40),local_7c);
      cVar5 = FUN_004113d0(uVar7,&PTR_FUN_016a1760);
      if (cVar5 != '\0') {
        lVar8 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c);
        lVar9 = FUN_01d347d0(*(undefined8 *)(local_88 + 0x40),local_7c + 1);
        if (*(double *)(lVar9 + 0x18) <= *(double *)(lVar8 + 0x18) &&
            *(double *)(lVar8 + 0x18) != *(double *)(lVar9 + 0x18)) {
          FUN_016a4020(*(undefined8 *)(local_90 + 0x10),0x14,*(undefined8 *)(local_88 + 8),
                       0xffffffff);
        }
      }
    }
  }
  return;
}

