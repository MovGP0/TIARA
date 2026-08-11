/* Ghidra address: 01665920 */
/* Ghidra symbol: FUN_01665920 */


void FUN_01665920(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double unaff_XMM6_Qa;
  double dVar10;
  
  cVar2 = (char)param_4;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x596));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x597));
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x598));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x599));
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x59a));
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x59b));
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(param_1 + 0x59c));
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  iVar4 = FUN_016eebb0(param_2,*(undefined2 *)(param_1 + 0x592),0);
  *(int *)(param_1 + 0x18) = iVar4 + 1;
  if ((byte)(cVar2 - 8U) < 8) {
    bVar5 = ((int)CONCAT71((uint7)(uint3)((uint)(iVar4 + 1) >> 8),1) << (cVar2 - 8U & 0x1f) & 0x11U)
            != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
      (*DAT_0210f8a8)(param_1,*(longlong *)(param_3 + 0x1378) + 8);
      return;
    }
    iVar4 = *(int *)(*(longlong *)(param_3 + 0x1378) + 0x2d8);
    (*DAT_0210f898)(param_1 + 0x5a8,param_1,*(longlong *)(param_3 + 0x1378) + 8);
    if (*(int *)(*(longlong *)(param_3 + 0x1378) + 0x2d8) == iVar4) {
      return;
    }
    FUN_016e9f80(param_2,param_3,1,0);
    return;
  }
  if (cVar2 == '\b') {
    (*DAT_0210f8a0)(param_1 + 0x5a8,param_1,*(longlong *)(param_3 + 0x1378) + 8);
    return;
  }
  if (cVar2 != '\f') {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x5e4);
  if (iVar4 == 1) {
LAB_01665b3d:
    dVar6 = (double)FUN_0040c850(*(double *)(param_1 + 0x170) + *(double *)(param_1 + 0x178) +
                                 *(double *)(param_1 + 0x180));
    unaff_XMM6_Qa = (*(double *)(param_1 + 0x5a0) * 1.10449808e-22 * dVar6) / 3.0;
  }
  else if (iVar4 == 2) {
LAB_01665b82:
    dVar6 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x148));
    unaff_XMM6_Qa =
         (*(double *)(param_1 + 0x5a0) * 5.5224904e-23 * *(double *)(param_1 + 0x40) * dVar6) /
         (*(double *)(*(longlong *)(param_1 + 0x290) + 0x2e0) *
         *(double *)(*(longlong *)(param_1 + 0x290) + 0x2e0));
  }
  else {
    if (iVar4 == 3) goto LAB_01665b3d;
    if (iVar4 == 4) goto LAB_01665b82;
  }
  if (iVar4 != 1) {
    if (iVar4 - 2U < 2) {
      dVar6 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x592) + 3,0);
      dVar8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x592) + 4,0);
      if (dVar8 < 0.0) {
        dVar8 = -dVar8;
        dVar6 = dVar6 + dVar8;
      }
      if (dVar6 < *(double *)(param_1 + 0x50) + 0.1) {
        dVar6 = *(double *)(param_1 + 0x12f0);
        dVar10 = *(double *)(param_1 + 0x5a0);
        lVar1 = *(longlong *)(param_1 + 0x290);
        uVar7 = FUN_016ed7f0(param_3,param_4);
        dVar9 = (double)FUN_00c42670(uVar7,*(undefined8 *)(param_1 + 0x1310));
        dVar10 = ((dVar6 * 8.62e-05 * dVar10) /
                 (*(double *)(lVar1 + 0x2e8) * *(double *)(lVar1 + 0x2e0) * dVar9 * 4e+36)) *
                 *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x150);
        uVar7 = FUN_016ed7f0(param_3,param_4);
        dVar6 = (double)FUN_01665540(*(double *)(param_1 + 0x50) + 0.1,dVar8,uVar7,
                                     *(undefined8 *)(param_1 + 0x5a0),param_1);
        dVar8 = dVar10 + dVar6;
        if (0.0 < dVar8) {
          unaff_XMM6_Qa = unaff_XMM6_Qa + (dVar6 * dVar10) / dVar8;
        }
      }
      else {
        uVar7 = FUN_016ed7f0(param_3,param_4);
        dVar6 = (double)FUN_01665540(dVar6,dVar8,uVar7,*(undefined8 *)(param_1 + 0x5a0),param_1);
        unaff_XMM6_Qa = unaff_XMM6_Qa + dVar6;
      }
      goto LAB_01665e73;
    }
    if (iVar4 != 4) goto LAB_01665e73;
  }
  uVar7 = FUN_0040c850(*(undefined8 *)(param_1 + 0x150));
  FUN_00b90620(uVar7,0x380b38fb9daa78e4);
  dVar6 = (double)FUN_0040c2f0();
  dVar6 = (double)FUN_0040af80(*(double *)(param_1 + 0x1318) * dVar6);
  uVar7 = FUN_016ed7f0(param_3,param_4);
  dVar8 = (double)FUN_00c42670(uVar7,*(undefined8 *)(param_1 + 0x1310));
  unaff_XMM6_Qa =
       unaff_XMM6_Qa +
       (*(double *)(param_1 + 0x1320) * dVar6) /
       (dVar8 * *(double *)(*(longlong *)(param_1 + 0x290) + 0x2e0) *
        *(double *)(*(longlong *)(param_1 + 0x290) + 0x2e0) * *(double *)(param_1 + 0x1278));
LAB_01665e73:
  dVar6 = (double)FUN_0040c760(unaff_XMM6_Qa);
  FUN_016ed220(param_2,*(char *)(param_1 + 0x590) + '\x02',dVar6 * *(double *)(param_1 + 0xa0),0);
  return;
}

