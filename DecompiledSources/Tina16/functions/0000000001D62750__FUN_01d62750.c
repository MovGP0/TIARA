/* Ghidra address: 01d62750 */
/* Ghidra symbol: FUN_01d62750 */


/* WARNING: Removing unreachable block (ram,0x01d62e6b) */
/* WARNING: Removing unreachable block (ram,0x01d62e85) */

undefined1 FUN_01d62750(longlong param_1,undefined8 param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 local_99;
  
  iVar10 = 0;
  if ((*(char *)(param_1 + 299) == '\x01') || (*(char *)(param_1 + 299) == '\x04')) {
    if (*(char *)(param_1 + 0x12a) == '\x01') {
      dVar13 = (double)FUN_00b90650(*param_4,*(undefined8 *)(param_1 + 0x40));
      *param_4 = dVar13;
    }
    else {
      dVar14 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                    *(undefined1 *)(param_1 + 3),*(undefined1 *)(param_1 + 4),0);
      dVar15 = (double)FUN_016ee570(param_2,*(undefined8 *)(param_3 + 0x118),
                                    *(undefined1 *)(param_1 + 6));
      dVar13 = *(double *)(param_1 + 0x50);
      dVar20 = *(double *)(param_1 + 0x68);
      iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      iVar8 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar24 = (*(double *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar9 * 8) *
                *(double *)(param_1 + 0x50) +
               *(double *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar8 * 8)) *
               *(double *)(param_1 + 0x68);
      iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      iVar8 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar22 = *(double *)(*(longlong *)(param_1 + 0x158) + (longlong)(iVar9 + -1) * 8);
      dVar23 = *(double *)(param_1 + 0x50);
      dVar25 = *(double *)(*(longlong *)(param_1 + 0x160) + (longlong)(iVar8 + -1) * 8);
      dVar1 = *(double *)(param_1 + 0x68);
      dVar16 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                    *(undefined1 *)(param_1 + 1),*(undefined1 *)(param_1 + 2),0);
      dVar17 = (double)FUN_016ee570(param_2,*(undefined8 *)(param_3 + 0x118),
                                    *(undefined1 *)(param_1 + 5));
      dVar2 = *(double *)(param_1 + 0x50);
      dVar3 = *(double *)(param_1 + 0x68);
      iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      iVar8 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar26 = (*(double *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar9 * 8) *
                *(double *)(param_1 + 0x50) +
               *(double *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 8)) *
               *(double *)(param_1 + 0x68);
      iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      iVar8 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar4 = *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)(iVar9 + -1) * 8);
      dVar5 = *(double *)(param_1 + 0x50);
      dVar6 = *(double *)(*(longlong *)(param_1 + 0x150) + (longlong)(iVar8 + -1) * 8);
      dVar7 = *(double *)(param_1 + 0x68);
      dVar18 = (double)FUN_016ed780(param_3,6);
      lVar12 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar20 = ((dVar14 * dVar13 + dVar15) * dVar20 - dVar24) /
               (dVar18 - *(double *)(lVar12 + (longlong)iVar9 * 8));
      lVar12 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      lVar11 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      iVar8 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar22 = (dVar24 - (dVar22 * dVar23 + dVar25) * dVar1) /
               (*(double *)(lVar12 + (longlong)iVar9 * 8) -
               *(double *)(lVar11 + (longlong)(iVar8 + -1) * 8));
      dVar13 = (double)FUN_016ed780(param_3,6);
      lVar12 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar23 = ((dVar16 * dVar2 + dVar17) * dVar3 - dVar26) /
               (dVar13 - *(double *)(lVar12 + (longlong)iVar9 * 8));
      lVar12 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      lVar11 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      iVar8 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar25 = (dVar26 - (dVar4 * dVar5 + dVar6) * dVar7) /
               (*(double *)(lVar12 + (longlong)iVar9 * 8) -
               *(double *)(lVar11 + (longlong)(iVar8 + -1) * 8));
      dVar13 = (double)FUN_0040c850(dVar20 - dVar22);
      uVar21 = FUN_0040c850(dVar20);
      uVar19 = FUN_0040c850(dVar22);
      dVar20 = (double)FUN_00b90620(uVar21,uVar19);
      if (dVar13 < *(double *)(param_1 + 0xa8) * dVar20 + *(double *)(param_1 + 0xb0)) {
        dVar13 = (double)FUN_0040c850(dVar23 - dVar25);
        uVar21 = FUN_0040c850(dVar23);
        uVar19 = FUN_0040c850(dVar25);
        dVar20 = (double)FUN_00b90620(uVar21,uVar19);
        if (dVar13 < *(double *)(param_1 + 0xa8) * dVar20 + *(double *)(param_1 + 0xb0))
        goto LAB_01d62cd1;
      }
      dVar13 = (double)FUN_00b90650(*param_4,*(undefined8 *)(param_1 + 0x40));
      *param_4 = dVar13;
    }
  }
LAB_01d62cd1:
  if ((*(char *)(param_1 + 299) == '\x01') && (*(char *)(param_1 + 0x174) == '\0')) {
    dVar13 = (double)FUN_00b90650(*param_4,*(undefined8 *)(param_1 + 0xd0));
    *param_4 = dVar13;
  }
  if ((*(char *)(param_1 + 0x129) != '\x03') && ((byte)(*(char *)(param_1 + 299) - 1U) < 2)) {
    dVar13 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x98));
    dVar20 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0xa0));
    dVar20 = *(double *)(param_3 + 0x738) *
             (*(double *)(param_3 + 0x6c0) * (dVar13 + dVar20) + *(double *)(param_3 + 0x6b0));
    uVar21 = FUN_016ed780(param_3,6);
    dVar13 = (double)FUN_01d60a30(param_1,param_2,param_3,uVar21);
    if (dVar20 <= dVar13) {
      if (*(char *)(param_1 + 0x175) == '\0') {
        *param_4 = *param_4 * 0.5;
      }
      else {
        dVar22 = (double)FUN_016ed780(param_3,6);
        while( true ) {
          lVar12 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
          iVar9 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
          dVar25 = (dVar22 - *(double *)(lVar12 + (longlong)iVar9 * 8)) * 0.01;
          dVar23 = (double)FUN_01d60a30(param_1,param_2,param_3,dVar22 + dVar25);
          dVar22 = dVar22 + (dVar20 - dVar13) / ((dVar23 - dVar13) / dVar25);
          iVar10 = iVar10 + 1;
          if (1 < iVar10) break;
          dVar13 = (double)FUN_01d60a30(param_1,param_2,param_3,dVar22);
        }
        lVar12 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
        iVar10 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
        dVar13 = (double)FUN_00b90650(*param_4,dVar22 - *(double *)(lVar12 + (longlong)iVar10 * 8));
        *param_4 = dVar13;
      }
    }
  }
  return local_99;
}

