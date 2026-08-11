/* Ghidra address: 0115f0a0 */
/* Ghidra symbol: FUN_0115f0a0 */


undefined8 FUN_0115f0a0(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 local_88;
  undefined4 local_84;
  
  iVar5 = *(int *)(*param_2 + 0xcc);
  local_88 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = (longlong)local_88;
      *(undefined8 *)(*(longlong *)(*param_2 + 8) + lVar3 * 8) = *(undefined8 *)(*param_1 + 0x48);
      *(undefined8 *)(*(longlong *)(*param_2 + 0x10) + lVar3 * 8) = 0;
      dVar10 = (*(double *)(*(longlong *)*param_2 + lVar3 * 8) * 6.2831853071796) /
               *(double *)(*param_1 + 0x40);
      dVar11 = dVar10 * 2.0;
      iVar6 = (*(int *)(*param_1 + 0x1fa0) + 1) / 2;
      local_84 = 0;
      if (-1 < iVar6 + -1) {
        do {
          iVar2 = local_84 * 3;
          lVar3 = (longlong)(iVar2 + 1);
          dVar8 = (double)FUN_0040bcd0(dVar10);
          lVar4 = (longlong)(iVar2 + 2);
          dVar9 = (double)FUN_0040bcd0(dVar11);
          dVar12 = *(double *)(*param_1 + 0x50 + (longlong)iVar2 * 8) +
                   *(double *)(*param_1 + 0x50 + lVar3 * 8) * dVar8 +
                   *(double *)(*param_1 + 0x50 + lVar4 * 8) * dVar9;
          dVar8 = (double)FUN_0040bdd0(dVar10);
          dVar9 = (double)FUN_0040bdd0(dVar11);
          dVar9 = -*(double *)(*param_1 + 0x50 + lVar3 * 8) * dVar8 -
                  *(double *)(*param_1 + 0x50 + lVar4 * 8) * dVar9;
          dVar8 = (double)FUN_0040c760(dVar12 * dVar12 + dVar9 * dVar9);
          lVar7 = (longlong)local_88;
          *(double *)(*(longlong *)(*param_2 + 8) + lVar7 * 8) =
               *(double *)(*(longlong *)(*param_2 + 8) + lVar7 * 8) * dVar8;
          if (0.0 < dVar8) {
            dVar8 = (double)FUN_00525d90(dVar9,dVar12);
            *(double *)(*(longlong *)(*param_2 + 0x10) + lVar7 * 8) =
                 *(double *)(*(longlong *)(*param_2 + 0x10) + lVar7 * 8) + dVar8;
          }
          dVar8 = (double)FUN_0040bcd0(dVar10);
          dVar9 = (double)FUN_0040bcd0(dVar11);
          dVar12 = *(double *)(*param_1 + 0xff8 + (longlong)iVar2 * 8) +
                   *(double *)(*param_1 + 0xff8 + lVar3 * 8) * dVar8 +
                   *(double *)(*param_1 + 0xff8 + lVar4 * 8) * dVar9;
          dVar8 = (double)FUN_0040bdd0(dVar10);
          dVar9 = (double)FUN_0040bdd0(dVar11);
          dVar9 = -*(double *)(*param_1 + 0xff8 + lVar3 * 8) * dVar8 -
                  *(double *)(*param_1 + 0xff8 + lVar4 * 8) * dVar9;
          dVar8 = (double)FUN_0040c760(dVar12 * dVar12 + dVar9 * dVar9);
          *(double *)(*(longlong *)(*param_2 + 8) + lVar7 * 8) =
               *(double *)(*(longlong *)(*param_2 + 8) + lVar7 * 8) / dVar8;
          if (0.0 < dVar8) {
            dVar8 = (double)FUN_00525d90(dVar9,dVar12);
            *(double *)(*(longlong *)(*param_2 + 0x10) + lVar7 * 8) =
                 *(double *)(*(longlong *)(*param_2 + 0x10) + lVar7 * 8) - dVar8;
          }
          local_84 = local_84 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(double *)(*(longlong *)(*param_2 + 0x10) + (longlong)local_88 * 8) =
           *(double *)(*(longlong *)(*param_2 + 0x10) + (longlong)local_88 * 8) * 57.295779513082195
      ;
      local_88 = local_88 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(*param_2 + 0xd4) == 0) {
    iVar5 = *(int *)(*param_2 + 0xcc);
    local_88 = 0;
    if (iVar5 - 1U < 0x80000000) {
      do {
        lVar3 = (longlong)local_88;
        pdVar1 = (double *)(*(longlong *)(*param_2 + 8) + lVar3 * 8);
        if (*pdVar1 <= 1e-30 && *pdVar1 != 1e-30) {
          *(undefined8 *)(*(longlong *)(*param_2 + 8) + lVar3 * 8) = 0x39b4484bfeebc2a0;
        }
        dVar10 = (double)FUN_00526490(*(undefined8 *)(*(longlong *)(*param_2 + 8) + lVar3 * 8));
        *(double *)(*(longlong *)(*param_2 + 8) + lVar3 * 8) = dVar10 * 20.0;
        local_88 = local_88 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

