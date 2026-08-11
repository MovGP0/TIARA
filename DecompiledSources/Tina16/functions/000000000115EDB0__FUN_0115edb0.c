/* Ghidra address: 0115edb0 */
/* Ghidra symbol: FUN_0115edb0 */


undefined8 FUN_0115edb0(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar6 = *(int *)(*param_2 + 0xcc);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = (longlong)iVar4;
      *(undefined8 *)(*(longlong *)(*param_2 + 8) + lVar3 * 8) = *(undefined8 *)(*param_1 + 0x48);
      *(undefined8 *)(*(longlong *)(*param_2 + 0x10) + lVar3 * 8) = 0;
      dVar9 = *(double *)(*(longlong *)*param_2 + lVar3 * 8);
      dVar2 = *(double *)(*param_1 + 0x40);
      dVar11 = 0.0;
      dVar12 = 0.0;
      iVar7 = *(int *)(*param_1 + 0x1fa0);
      iVar5 = 0;
      if (-1 < iVar7 + -1) {
        do {
          dVar10 = (double)iVar5 * ((dVar9 * 6.2831853071796) / dVar2);
          dVar8 = (double)FUN_0040bcd0(dVar10);
          dVar11 = dVar11 + *(double *)(*param_1 + 0x50 + (longlong)iVar5 * 8) * dVar8;
          dVar8 = (double)FUN_0040bdd0(dVar10);
          dVar12 = dVar12 + *(double *)(*param_1 + 0x50 + (longlong)iVar5 * 8) * dVar8;
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      dVar9 = (double)FUN_0040c760(dVar11 * dVar11 + dVar12 * dVar12);
      lVar3 = (longlong)iVar4;
      *(double *)(*(longlong *)(*param_2 + 8) + lVar3 * 8) =
           *(double *)(*(longlong *)(*param_2 + 8) + lVar3 * 8) * dVar9;
      if (0.0 < dVar9) {
        dVar9 = (double)FUN_00525d90(dVar12,dVar11);
        *(double *)(*(longlong *)(*param_2 + 0x10) + lVar3 * 8) =
             *(double *)(*(longlong *)(*param_2 + 0x10) + lVar3 * 8) + dVar9;
      }
      *(double *)(*(longlong *)(*param_2 + 0x10) + lVar3 * 8) =
           *(double *)(*(longlong *)(*param_2 + 0x10) + lVar3 * 8) * 57.295779513082195;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(int *)(*param_2 + 0xd4) == 0) {
    iVar6 = *(int *)(*param_2 + 0xcc);
    iVar4 = 0;
    if (iVar6 - 1U < 0x80000000) {
      do {
        lVar3 = (longlong)iVar4;
        pdVar1 = (double *)(*(longlong *)(*param_2 + 8) + lVar3 * 8);
        if (*pdVar1 <= 1e-30 && *pdVar1 != 1e-30) {
          *(undefined8 *)(*(longlong *)(*param_2 + 8) + lVar3 * 8) = 0x39b4484bfeebc2a0;
        }
        dVar9 = (double)FUN_00526490(*(undefined8 *)(*(longlong *)(*param_2 + 8) + lVar3 * 8));
        *(double *)(*(longlong *)(*param_2 + 8) + lVar3 * 8) = dVar9 * 20.0;
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return 0;
}

