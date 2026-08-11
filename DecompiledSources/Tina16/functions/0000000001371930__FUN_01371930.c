/* Ghidra address: 01371930 */
/* Ghidra symbol: FUN_01371930 */


ulonglong FUN_01371930(longlong param_1,double *param_2,undefined1 *param_3,double *param_4)

{
  double dVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_b8 [17];
  
  pdVar5 = local_b8;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar5 = *param_2;
    param_2 = param_2 + 1;
    pdVar5 = pdVar5 + 1;
  }
  if (*(char *)(param_1 + 0x1438) == '\0') {
    uVar3 = 0;
    *param_3 = 0;
    pdVar5 = local_b8;
    pdVar6 = (double *)(param_1 + 0x13e8);
    for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pdVar6 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      pdVar6 = pdVar6 + 1;
    }
    *(undefined1 *)(param_1 + 0x1438) = 1;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    dVar1 = *(double *)(param_1 + 0x770);
    dVar12 = *(double *)(param_1 + 0x778);
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x468) + 0x10);
    iVar4 = 1;
    if (0 < iVar7) {
      pdVar5 = local_b8;
      do {
        uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0x13e0 + (longlong)iVar4 * 8));
        uVar9 = FUN_0040c850(*pdVar5);
        dVar10 = (double)FUN_00b90620(uVar8,uVar9);
        dVar11 = (double)FUN_0040c850(*pdVar5 - *(double *)(param_1 + 0x13e0 + (longlong)iVar4 * 8))
        ;
        if (dVar12 * dVar10 + dVar1 < dVar11) {
          dVar12 = (double)FUN_0040c850(*pdVar5 - *(double *)
                                                   (param_1 + 0x13e0 + (longlong)iVar4 * 8));
          uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0x13e0 + (longlong)iVar4 * 8));
          uVar9 = FUN_0040c850(*pdVar5);
          dVar10 = (double)FUN_00b90620(uVar8,uVar9);
          *param_4 = dVar12 / (dVar10 + dVar1);
          uVar3 = 0;
          break;
        }
        iVar4 = iVar4 + 1;
        pdVar5 = pdVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    pdVar5 = local_b8;
    pdVar6 = (double *)(param_1 + 0x13e8);
    for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pdVar6 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      pdVar6 = pdVar6 + 1;
    }
    *param_3 = (char)uVar3;
  }
  return uVar3 & 0xffffffff;
}

