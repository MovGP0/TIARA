/* Ghidra address: 00dbca90 */
/* Ghidra symbol: FUN_00dbca90 */


ulonglong FUN_00dbca90(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  undefined8 unaff_R13;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 local_80 [11];
  
  uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x128) + 1,0);
  dVar5 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x128) + 2,0);
  uVar6 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x128) + 1,0);
  dVar7 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x128) + 2,0);
  uVar8 = FUN_0040c850(dVar5);
  uVar9 = FUN_0040c850(dVar7);
  dVar10 = (double)FUN_00b90620(uVar8,uVar9);
  dVar13 = *(double *)(param_3 + 0x3d0);
  uVar4 = FUN_0040c850(uVar4);
  uVar6 = FUN_0040c850(uVar6);
  uVar4 = FUN_00b90620(uVar4,uVar6);
  dVar11 = (double)FUN_00b90620(uVar4,*(undefined8 *)(param_3 + 1000));
  dVar12 = (double)FUN_01b08a30(param_3,0);
  dVar13 = (double)FUN_00b90620(dVar10 + dVar13,(*(double *)(param_3 + 0x3c8) * dVar11) / dVar12);
  dVar5 = (double)FUN_0040c850(dVar5 - dVar7);
  uVar3 = (undefined7)((ulonglong)unaff_R13 >> 8);
  local_80[0] = *(undefined8 *)(param_3 + 0x890);
  FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0x128) + 1,*(ushort *)(param_1 + 0x128) + 2,
               local_80,1);
  if (*(double *)(param_3 + 0x360) <= 0.0) {
    *(undefined8 *)(param_3 + 0x360) = local_80[0];
  }
  else {
    uVar4 = FUN_00b90650(local_80[0],*(undefined8 *)(param_3 + 0x360));
    *(undefined8 *)(param_3 + 0x360) = uVar4;
  }
  uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x128) + 3,0);
  dVar10 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x128) + 4,0);
  uVar6 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x128) + 3,0);
  dVar11 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x128) + 4,0);
  uVar8 = FUN_0040c850(dVar10);
  uVar9 = FUN_0040c850(dVar11);
  dVar12 = (double)FUN_00b90620(uVar8,uVar9);
  dVar7 = *(double *)(param_3 + 0x3d0);
  uVar4 = FUN_0040c850(uVar4);
  uVar6 = FUN_0040c850(uVar6);
  uVar4 = FUN_00b90620(uVar4,uVar6);
  dVar14 = (double)FUN_00b90620(uVar4,*(undefined8 *)(param_3 + 1000));
  dVar15 = (double)FUN_01b08a30(param_3,0);
  dVar7 = (double)FUN_00b90620(dVar12 + dVar7,(*(double *)(param_3 + 0x3c8) * dVar14) / dVar15);
  if (dVar13 < dVar5) {
LAB_00dbce0c:
    bVar1 = true;
  }
  else {
    dVar13 = (double)FUN_0040c850(dVar10 - dVar11);
    if (dVar7 < dVar13) goto LAB_00dbce0c;
    bVar1 = false;
    uVar3 = 0;
  }
  local_80[0] = *(undefined8 *)(param_3 + 0x890);
  FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0x128) + 3,*(ushort *)(param_1 + 0x128) + 4,
               local_80,1);
  if (*(double *)(param_3 + 0x360) <= 0.0) {
    *(undefined8 *)(param_3 + 0x360) = local_80[0];
  }
  else {
    uVar4 = FUN_00b90650(local_80[0],*(undefined8 *)(param_3 + 0x360));
    *(undefined8 *)(param_3 + 0x360) = uVar4;
  }
  uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x128) + 5,0);
  dVar5 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,*(short *)(param_1 + 0x128) + 6,0);
  uVar6 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x128) + 5,0);
  dVar7 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,*(short *)(param_1 + 0x128) + 6,0);
  uVar8 = FUN_0040c850(dVar5);
  uVar9 = FUN_0040c850(dVar7);
  dVar10 = (double)FUN_00b90620(uVar8,uVar9);
  dVar13 = *(double *)(param_3 + 0x3d0);
  uVar4 = FUN_0040c850(uVar4);
  uVar6 = FUN_0040c850(uVar6);
  uVar4 = FUN_00b90620(uVar4,uVar6);
  dVar11 = (double)FUN_00b90620(uVar4,*(undefined8 *)(param_3 + 1000));
  dVar12 = (double)FUN_01b08a30(param_3,0);
  dVar13 = (double)FUN_00b90620(dVar10 + dVar13,(*(double *)(param_3 + 0x3c8) * dVar11) / dVar12);
  if (!bVar1) {
    dVar5 = (double)FUN_0040c850(dVar5 - dVar7);
    if (dVar5 <= dVar13) {
      uVar2 = 0;
      goto LAB_00dbcff1;
    }
  }
  uVar2 = CONCAT71(uVar3,1);
LAB_00dbcff1:
  local_80[0] = *(undefined8 *)(param_3 + 0x890);
  FUN_016ddcd0(param_2,param_3,*(ushort *)(param_1 + 0x128) + 5,*(ushort *)(param_1 + 0x128) + 6,
               local_80,1);
  if (*(double *)(param_3 + 0x360) <= 0.0) {
    *(undefined8 *)(param_3 + 0x360) = local_80[0];
  }
  else {
    uVar4 = FUN_00b90650(local_80[0],*(undefined8 *)(param_3 + 0x360));
    *(undefined8 *)(param_3 + 0x360) = uVar4;
  }
  return uVar2 & 0xffffffff;
}

