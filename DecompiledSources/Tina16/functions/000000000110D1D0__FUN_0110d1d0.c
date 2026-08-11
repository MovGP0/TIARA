/* Ghidra address: 0110d1d0 */
/* Ghidra symbol: FUN_0110d1d0 */


void FUN_0110d1d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  uint local_94;
  double local_80;
  byte *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [6];
  
  local_60[0] = 0;
  local_68 = 0;
  local_70 = 0;
  lVar4 = FUN_004113f0(param_2,&PTR_FUN_01105d80);
  plVar1 = *(longlong **)(lVar4 + 0x20);
  if (plVar1 == (longlong *)0x0) goto LAB_0110d630;
  (**(code **)(*plVar1 + 0x2d0))(plVar1,1,&local_78);
  pbVar2 = local_78;
  FUN_00e18670(&local_80);
  dVar13 = 1.0 / local_80;
  local_94 = 0x400;
  uVar5 = (ulonglong)*pbVar2;
  if (uVar5 < 6) {
    if (uVar5 == 5) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      dVar13 = 1.0 / *(double *)(*(longlong *)(pbVar2 + 1) + 8);
    }
    else if (uVar5 == 1) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      dVar13 = *(double *)(*(longlong *)(pbVar2 + 1) + 8) * 10.0;
    }
    else if (uVar5 == 2) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      if (*(double *)(*(longlong *)(pbVar2 + 1) + 8) == 0.0) {
        dVar13 = 1.0 / local_80;
      }
      else {
        dVar13 = *(double *)(*(longlong *)(pbVar2 + 1) + 8) * 10.0;
      }
    }
    else {
      if (uVar5 != 3) {
        if (uVar5 != 4) goto LAB_0110d3e2;
        goto LAB_0110d376;
      }
      *(undefined1 *)(param_1 + 0x58) = 0;
      lVar7 = *(longlong *)(pbVar2 + 1);
      dVar13 = *(double *)(lVar7 + 0x40) + *(double *)(lVar7 + 0x10) + *(double *)(lVar7 + 0x18) +
               *(double *)(lVar7 + 0x20) + *(double *)(lVar7 + 0x28) + *(double *)(lVar7 + 0x30) +
               *(double *)(lVar7 + 0x38);
    }
  }
  else if (uVar5 == 6) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    dVar13 = 1.0 / *(double *)(*(longlong *)(pbVar2 + 1) + 8);
  }
  else if (uVar5 == 7) {
LAB_0110d376:
    *(undefined1 *)(param_1 + 0x58) = 0;
    dVar13 = 1.0 / *(double *)(*(longlong *)(pbVar2 + 1) + 8);
  }
  else if (uVar5 - 8 < 4) {
    if (pbVar2[0x1d] == 0) {
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
  }
  else {
LAB_0110d3e2:
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if (*pbVar2 == 8) {
    if (*(longlong *)(pbVar2 + 9) == 0) goto LAB_0110d630;
    uVar6 = FUN_019a45d0();
    FUN_010d75a0(uVar6,0,*(undefined8 *)(pbVar2 + 9),pbVar2 + 1,&local_70,0);
    lVar7 = *(longlong *)(pbVar2 + 1);
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x64c) = pbVar2[0x1d];
      *(undefined8 *)(lVar7 + 0x640) = *(undefined8 *)(pbVar2 + 0x11);
    }
    local_94 = *(uint *)(pbVar2 + 0x19);
    dVar13 = *(double *)(pbVar2 + 0x11);
  }
  FUN_00e184b0(*(undefined1 *)(param_1 + 0x58),1);
  if (local_94 < 3) {
    local_94 = 2;
  }
  fVar10 = (float)FUN_005264d0((float)local_94);
  uVar3 = FUN_0040c770((double)fVar10);
  if (uVar3 < 0x20) {
    FUN_00c42670(0x4000000000000000,(double)uVar3);
    local_94 = FUN_0040c770();
  }
  else {
    FUN_00c42670(0x4000000000000000,0x403f000000000000);
    local_94 = FUN_0040c770();
  }
  dVar12 = dVar13;
  if (1 < local_94) {
    dVar12 = (1.0 / (double)(local_94 - 1)) * dVar13;
  }
  uVar6 = thunk_FUN_0412a7bb(0x40,local_94 * 8);
  lVar7 = thunk_FUN_0416a623(uVar6);
  iVar8 = 0;
  uVar9 = local_94;
  if (-1 < (int)(local_94 - 1)) {
    do {
      uVar11 = FUN_0110d010(local_78,dVar12 * (double)iVar8 - 1e-15);
      *(undefined8 *)(lVar7 + (longlong)iVar8 * 8) = uVar11;
      iVar8 = iVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (1e-12 < dVar13) {
    local_80 = 1.0 / dVar13;
  }
  FUN_00e18ad0(&local_80);
  FUN_00e18600(local_80);
  FUN_00e19250(local_94,lVar7);
  FUN_00e18670(&local_80);
  *(double *)(lVar4 + 0x118) = local_80;
  FUN_00e18750(lVar4 + 0x120);
  FUN_00e186e0(*(undefined8 *)(lVar4 + 0x120));
  FUN_00e18830(lVar4 + 0x128);
  FUN_00e187c0(*(undefined8 *)(lVar4 + 0x128));
  if ((*pbVar2 == 8) && (*(longlong *)(pbVar2 + 1) != 0)) {
    FUN_00410f20(*(undefined8 *)(pbVar2 + 1));
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    pbVar2[8] = 0;
  }
  if ((lVar7 != 0) && (iVar8 = thunk_FUN_04172795(uVar6), iVar8 != 0)) {
    thunk_FUN_03d5bf3d(uVar6);
  }
LAB_0110d630:
  FUN_00414560(&local_70,2);
  FUN_00414520(local_60);
  return;
}

