/* Ghidra address: 00f18d90 */
/* Ghidra symbol: FUN_00f18d90 */


void FUN_00f18d90(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                 longlong *param_9,undefined8 param_10,longlong param_11)

{
  double *pdVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 local_res8 [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90[0] = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00414610(param_5);
  uVar6 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,10,0,0);
  uVar7 = FUN_01cc9f30(&PTR_FUN_01cbae98,1,uVar6);
  dVar14 = 0.0;
  dVar16 = 0.0;
  dVar15 = 0.0;
  dVar17 = 0.0;
  iVar2 = FUN_0040c770(*(undefined8 *)(param_11 + 0xd8));
  iVar12 = 1;
  if (0 < iVar2) {
    do {
      lVar8 = (longlong)iVar12;
      pdVar1 = (double *)(param_11 + 0xd8 + lVar8 * 8);
      if (*pdVar1 <= dVar14 && dVar14 != *pdVar1) {
        dVar14 = *(double *)(param_11 + 0xd8 + lVar8 * 8);
      }
      if (dVar15 < *(double *)(param_11 + 0xd8 + (longlong)iVar12 * 8)) {
        dVar15 = *(double *)(param_11 + 0xd8 + lVar8 * 8);
      }
      pdVar1 = (double *)(param_11 + 0x220 + lVar8 * 8);
      if (*pdVar1 <= dVar16 && dVar16 != *pdVar1) {
        dVar16 = *(double *)(param_11 + 0x220 + lVar8 * 8);
      }
      if (dVar17 < *(double *)(param_11 + 0x220 + (longlong)iVar12 * 8)) {
        dVar17 = *(double *)(param_11 + 0x220 + lVar8 * 8);
      }
      iVar12 = iVar12 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar3 = FUN_0040c770(*(undefined8 *)(param_11 + 0x368));
  uVar11 = (ulonglong)uVar3;
  iVar2 = 1;
  if (0 < (int)uVar3) {
    uVar11 = (ulonglong)uVar3;
    do {
      lVar8 = (longlong)iVar2;
      pdVar1 = (double *)(param_11 + 0x368 + lVar8 * 8);
      if (*pdVar1 <= dVar14 && dVar14 != *pdVar1) {
        dVar14 = *(double *)(param_11 + 0x368 + lVar8 * 8);
      }
      if (dVar15 < *(double *)(param_11 + 0x368 + (longlong)iVar2 * 8)) {
        dVar15 = *(double *)(param_11 + 0x368 + lVar8 * 8);
      }
      pdVar1 = (double *)(param_11 + 0x4b0 + lVar8 * 8);
      if (*pdVar1 <= dVar16 && dVar16 != *pdVar1) {
        dVar16 = *(double *)(param_11 + 0x4b0 + lVar8 * 8);
      }
      if (dVar17 < *(double *)(param_11 + 0x4b0 + (longlong)iVar2 * 8)) {
        dVar17 = *(double *)(param_11 + 0x4b0 + lVar8 * 8);
      }
      iVar2 = iVar2 + 1;
      uVar3 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar3;
    } while (uVar3 != 0);
  }
  if (*param_9 == 0) {
    lVar8 = FUN_01cdf400(&DAT_01cdd500,CONCAT71((int7)(uVar11 >> 8),1));
    uVar10 = param_10;
    *param_9 = lVar8;
    *(undefined1 *)(*param_9 + 0x58) = 3;
    *(undefined8 *)(*param_9 + 0x50) = param_10;
    *(undefined1 *)(*param_9 + 0x59) = 0;
    lVar8 = FUN_01ccd700(&DAT_01ccbf00,1);
    *(undefined8 *)(lVar8 + 0x60) = uVar10;
    *(longlong *)(lVar8 + 0x68) = *param_9;
    *(undefined1 *)(lVar8 + 0xf0) = 0;
    *(undefined1 *)(lVar8 + 0x70) = param_2;
    FUN_01cd64a0(lVar8,local_res8[0]);
    *(undefined1 *)(lVar8 + 0x80) = param_3;
    *(undefined4 *)(lVar8 + 0x90) = param_4;
    (**(code **)(**(longlong **)(*param_9 + 0x70) + 0x80))
              (*(longlong **)(*param_9 + 0x70),&DAT_00f19bd8,lVar8);
    lVar8 = FUN_01ccd700(&DAT_01ccbf00,1);
    *(undefined8 *)(lVar8 + 0x60) = uVar10;
    *(longlong *)(lVar8 + 0x68) = *param_9;
    *(undefined1 *)(lVar8 + 0xf0) = 1;
    *(undefined1 *)(lVar8 + 0x70) = param_6;
    FUN_01cd64a0(lVar8,param_5);
    *(undefined1 *)(lVar8 + 0x80) = param_7;
    *(undefined4 *)(lVar8 + 0x90) = param_8;
    (**(code **)(**(longlong **)(*param_9 + 0x78) + 0x80))
              (*(longlong **)(*param_9 + 0x78),&DAT_00f19be8,lVar8);
    iVar2 = FUN_0040c770(*(undefined8 *)(param_11 + 0xd8));
    iVar12 = 1;
    if (0 < iVar2) {
      do {
        lVar8 = FUN_01ab6b60(&PTR_FUN_01ab13d0,1);
        FUN_01ab6ed0(lVar8,param_10);
        *(longlong *)(lVar8 + 0x70) = *param_9;
        FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x78),*(undefined4 *)(PTR_DAT_02003c00 + 4));
        *(undefined8 *)(lVar8 + 0x80) = uVar7;
        *(undefined8 *)(lVar8 + 0x88) = uVar6;
        lVar9 = (longlong)iVar12;
        *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(param_11 + 0xd8 + lVar9 * 8);
        *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(param_11 + 0xd8 + lVar9 * 8);
        *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(param_11 + 0x220 + lVar9 * 8);
        *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(param_11 + 0x220 + lVar9 * 8);
        if ((*(double *)(lVar8 + 0xb8) == 0.0) && (*(double *)(lVar8 + 200) != 0.0)) {
          FUN_00f054d0(local_90,*(undefined8 *)(lVar8 + 200));
          FUN_00416ba0(&local_80,local_90[0],&DAT_00f19bf8);
        }
        else if (*(double *)(lVar8 + 200) == 0.0) {
          FUN_00f054d0(&local_80,*(undefined8 *)(lVar8 + 0xb8));
        }
        else if (*(double *)(lVar8 + 200) <= 0.0) {
          FUN_00f054d0(&local_a8,*(undefined8 *)(lVar8 + 0xb8));
          FUN_00f054d0(&local_b0,*(undefined8 *)(lVar8 + 200));
          FUN_00416cd0(&local_80,4,local_a8,&DAT_00f19c20,local_b0,&DAT_00f19bf8);
        }
        else {
          FUN_00f054d0(&local_98,*(undefined8 *)(lVar8 + 0xb8));
          FUN_00f054d0(&local_a0,*(undefined8 *)(lVar8 + 200));
          FUN_00416cd0(&local_80,4,local_98,&DAT_00f19c0c,local_a0,&DAT_00f19bf8);
        }
        uVar10 = FUN_01cc34d0(*(undefined8 *)(*(longlong *)(lVar8 + 0x88) + 8),local_80,0,0);
        *(undefined8 *)(lVar8 + 0x98) = uVar10;
        uVar10 = (**(code **)(**(longlong **)(*param_9 + 0x70) + 0x30))
                           (*(longlong **)(*param_9 + 0x70),0);
        uVar10 = FUN_004113f0(uVar10,&DAT_01ccbf00);
        *(undefined8 *)(lVar8 + 0xe8) = uVar10;
        uVar10 = (**(code **)(**(longlong **)(*param_9 + 0x78) + 0x30))
                           (*(longlong **)(*param_9 + 0x78),0);
        uVar10 = FUN_004113f0(uVar10,&DAT_01ccbf00);
        *(undefined8 *)(lVar8 + 0xf0) = uVar10;
        (**(code **)(**(longlong **)(*param_9 + 0x80) + 0x80))
                  (*(longlong **)(*param_9 + 0x80),L"Pole");
        iVar12 = iVar12 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = FUN_0040c770(*(undefined8 *)(param_11 + 0x368));
    iVar12 = 1;
    if (0 < iVar2) {
      do {
        lVar8 = FUN_01ab6b60(&PTR_FUN_01ab19e8,1);
        FUN_01ab6ed0(lVar8,param_10);
        *(longlong *)(lVar8 + 0x70) = *param_9;
        FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x78),*(undefined4 *)(PTR_DAT_02003c00 + 8));
        *(undefined8 *)(lVar8 + 0x80) = uVar7;
        *(undefined8 *)(lVar8 + 0x88) = uVar6;
        lVar9 = (longlong)iVar12;
        *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(param_11 + 0x368 + lVar9 * 8);
        *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(param_11 + 0x368 + lVar9 * 8);
        *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(param_11 + 0x4b0 + lVar9 * 8);
        *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(param_11 + 0x4b0 + lVar9 * 8);
        if ((*(double *)(lVar8 + 0xb8) == 0.0) && (*(double *)(lVar8 + 200) != 0.0)) {
          FUN_00f054d0(&local_b8,*(undefined8 *)(lVar8 + 200));
          FUN_00416ba0(&local_80,local_b8,&DAT_00f19bf8);
        }
        else if (*(double *)(lVar8 + 200) == 0.0) {
          FUN_00f054d0(&local_80,*(undefined8 *)(lVar8 + 0xb8));
        }
        else if (*(double *)(lVar8 + 200) <= 0.0) {
          FUN_00f054d0(&local_d0,*(undefined8 *)(lVar8 + 0xb8));
          FUN_00f054d0(&local_d8,*(undefined8 *)(lVar8 + 200));
          FUN_00416cd0(&local_80,4,local_d0,&DAT_00f19c20,local_d8,&DAT_00f19bf8);
        }
        else {
          FUN_00f054d0(&local_c0,*(undefined8 *)(lVar8 + 0xb8));
          FUN_00f054d0(&local_c8,*(undefined8 *)(lVar8 + 200));
          FUN_00416cd0(&local_80,4,local_c0,&DAT_00f19c0c,local_c8,&DAT_00f19bf8);
        }
        uVar10 = FUN_01cc34d0(*(undefined8 *)(*(longlong *)(lVar8 + 0x88) + 8),local_80,0,0);
        *(undefined8 *)(lVar8 + 0x98) = uVar10;
        uVar10 = (**(code **)(**(longlong **)(*param_9 + 0x70) + 0x30))
                           (*(longlong **)(*param_9 + 0x70),0);
        uVar10 = FUN_004113f0(uVar10,&DAT_01ccbf00);
        *(undefined8 *)(lVar8 + 0xe8) = uVar10;
        uVar10 = (**(code **)(**(longlong **)(*param_9 + 0x78) + 0x30))
                           (*(longlong **)(*param_9 + 0x78),0);
        uVar10 = FUN_004113f0(uVar10,&DAT_01ccbf00);
        *(undefined8 *)(lVar8 + 0xf0) = uVar10;
        (**(code **)(**(longlong **)(*param_9 + 0x80) + 0x80))
                  (*(longlong **)(*param_9 + 0x80),L"Zero");
        iVar12 = iVar12 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar6 = (**(code **)(**(longlong **)(*param_9 + 0x70) + 0x30))
                      (*(longlong **)(*param_9 + 0x70),0);
    lVar8 = FUN_004113f0(uVar6,&DAT_01ccbf00);
    dVar13 = (double)FUN_00b90620(0x3e112e0be826d695,(dVar15 - dVar14) * 0.1);
    *(double *)(lVar8 + 0xb8) = dVar14 - dVar13;
    *(double *)(lVar8 + 0xc0) = dVar15 + dVar13;
    *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar8 + 0xb8);
    *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar8 + 0xc0);
    uVar4 = FUN_01ccdde0(lVar8);
    uVar5 = FUN_01ccde00(lVar8);
    FUN_01cd43b0(lVar8,uVar4,uVar5);
    *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar8 + 0xb8);
    *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar8 + 0xc0);
    uVar6 = (**(code **)(**(longlong **)(*param_9 + 0x78) + 0x30))
                      (*(longlong **)(*param_9 + 0x78),0);
    lVar8 = FUN_004113f0(uVar6,&DAT_01ccbf00);
    dVar14 = (double)FUN_00b90620(0x3e112e0be826d695,(dVar17 - dVar16) * 0.1);
    *(double *)(lVar8 + 0xb8) = dVar16 - dVar14;
    *(double *)(lVar8 + 0xc0) = dVar17 + dVar14;
    *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar8 + 0xb8);
    *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar8 + 0xc0);
    uVar4 = FUN_01ccddc0(lVar8);
    uVar5 = FUN_01ccddd0(lVar8);
    FUN_01cd43b0(lVar8,uVar4,uVar5);
    *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar8 + 0xb8);
    *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar8 + 0xc0);
    uVar6 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
    (**(code **)(**(longlong **)(*param_9 + 0x88) + 0x80))
              (*(longlong **)(*param_9 + 0x88),L"Grid",uVar6);
    lVar8 = (**(code **)(**(longlong **)(*param_9 + 0x88) + 0x30))
                      (*(longlong **)(*param_9 + 0x88),0);
    *(longlong *)(lVar8 + 0x78) = *param_9;
    uVar6 = (**(code **)(**(longlong **)(*param_9 + 0x88) + 0x30))
                      (*(longlong **)(*param_9 + 0x88),0);
    uVar7 = (**(code **)(**(longlong **)(*param_9 + 0x70) + 0x30))
                      (*(longlong **)(*param_9 + 0x70),0);
    uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
    FUN_01cd9880(uVar6,uVar7);
    uVar6 = (**(code **)(**(longlong **)(*param_9 + 0x88) + 0x30))
                      (*(longlong **)(*param_9 + 0x88),0);
    uVar7 = (**(code **)(**(longlong **)(*param_9 + 0x78) + 0x30))
                      (*(longlong **)(*param_9 + 0x78),0);
    uVar7 = FUN_004113f0(uVar7,&DAT_01ccbf00);
    FUN_01cd98a0(uVar6,uVar7);
    iVar2 = (**(code **)(**(longlong **)(*param_9 + 0x80) + 0x28))(*(longlong **)(*param_9 + 0x80));
    iVar12 = 1;
    if (0 < iVar2) {
      do {
        uVar6 = (**(code **)(**(longlong **)(*param_9 + 0x70) + 0x30))
                          (*(longlong **)(*param_9 + 0x70),0);
        lVar8 = FUN_004113f0(uVar6,&DAT_01ccbf00);
        uVar6 = (**(code **)(**(longlong **)(*param_9 + 0x80) + 0x30))
                          (*(longlong **)(*param_9 + 0x80),iVar12 + -1);
        FUN_004ae7e0(*(undefined8 *)(lVar8 + 0xf8),uVar6);
        uVar6 = (**(code **)(**(longlong **)(*param_9 + 0x78) + 0x30))
                          (*(longlong **)(*param_9 + 0x78),0);
        lVar8 = FUN_004113f0(uVar6,&DAT_01ccbf00);
        (**(code **)(**(longlong **)(*param_9 + 0x80) + 0x30))
                  (*(longlong **)(*param_9 + 0x80),iVar12 + -1);
        FUN_004ae7e0(*(undefined8 *)(lVar8 + 0xf8));
        iVar12 = iVar12 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414560(&local_d8,10);
  FUN_00414560(&local_80,3);
  FUN_00414480(local_res8);
  FUN_00414480(&param_5);
  return;
}

