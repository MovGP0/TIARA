/* Ghidra address: 01238fc0 */
/* Ghidra symbol: FUN_01238fc0 */


undefined8 FUN_01238fc0(longlong *param_1,longlong *param_2,double param_3,double param_4)

{
  double dVar1;
  short sVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar15 = 1.0;
  dVar9 = (double)FUN_0040c760(0x4000000000000000);
  uVar3 = (longlong)*(int *)(*param_1 + 0x1fa0) / 2;
  bVar8 = (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) % 2)
          == 1;
  if (bVar8) {
    dVar15 = *(double *)(*param_1 + 0x58);
    dVar11 = *(double *)(*param_1 + 0x1000);
    dVar10 = (double)FUN_0040c760(*(undefined8 *)(*param_1 + 0x1008));
    *(double *)(*param_2 + 0x978) = param_3;
    *(double *)(*param_2 + 0x12e0) = param_4;
    *(double *)(*param_2 + 0x10) = dVar9 / (param_3 * dVar10);
    dVar11 = 4.0 - (dVar9 * dVar11) / dVar10;
    dVar15 = (dVar11 / (dVar15 * *(double *)(*param_2 + 0x978) * *(double *)(*param_2 + 0x10))) *
             1.0;
    *(double *)(*param_2 + 0x1c48) = param_4 * (dVar11 - 1.0);
  }
  uVar4 = (uint)bVar8;
  iVar6 = *(int *)(*param_2 + 0x3880) + -1;
  if ((int)uVar4 <= iVar6) {
    iVar6 = (iVar6 - uVar4) + 1;
    do {
      lVar5 = (longlong)(int)(uVar4 * 3 + 1);
      dVar11 = *(double *)(*param_1 + 0x50 + lVar5 * 8);
      lVar7 = (longlong)(int)(uVar4 * 3 + 2);
      dVar10 = *(double *)(*param_1 + 0x50 + lVar7 * 8);
      dVar12 = (double)FUN_0040c760(dVar10);
      dVar14 = *(double *)(*param_1 + 0xff8 + lVar5 * 8);
      dVar1 = *(double *)(*param_1 + 0xff8 + lVar7 * 8);
      dVar13 = (double)FUN_0040c760(dVar1);
      lVar5 = (longlong)(int)uVar4;
      *(double *)(*param_2 + 0x978 + lVar5 * 8) = param_3;
      *(double *)(*param_2 + 0x12e0 + lVar5 * 8) = param_4;
      sVar2 = *(short *)(*param_1 + 0x1fa6);
      if ((ushort)(sVar2 - 0x42U) < 2) {
        *(double *)(*param_2 + 0x10 + lVar5 * 8) = dVar9 / (param_3 * dVar13);
        dVar14 = 4.0 - (dVar9 * dVar14) / dVar13;
        dVar11 = dVar14 / (dVar11 * *(double *)(*param_2 + 0x978 + (longlong)(int)uVar4 * 8) *
                          *(double *)(*param_2 + 0x10 + (longlong)(int)uVar4 * 8));
      }
      else {
        if ((sVar2 != 0x45) && (sVar2 != 0x49)) {
          return 3;
        }
        *(double *)(*param_2 + 0x10 + lVar5 * 8) = 1.0 / (param_3 * dVar12);
        if (dVar10 <= dVar1) {
          if (dVar1 <= dVar10) {
            dVar14 = 2.0 - dVar14 / (dVar12 * 2.0);
          }
          else {
            dVar14 = ((dVar1 - dVar10) - dVar14 * dVar12) / (dVar10 * 2.0) + 2.0;
            *(double *)(*param_2 + 0x25b0 + lVar5 * 8) =
                 (*(double *)(*param_2 + 0x10 + (longlong)(int)uVar4 * 8) * 2.0) /
                 (dVar1 / dVar10 - 1.0);
          }
        }
        else {
          dVar14 = ((dVar10 - dVar1) - dVar14 * dVar12) / (dVar1 * 2.0) + 2.0;
          *(double *)(*param_2 + 0x2f18 + lVar5 * 8) = ((dVar10 / dVar1 - 1.0) * param_3) / 2.0;
        }
        dVar11 = (dVar14 * param_3) / (param_3 + *(double *)(*param_2 + 0x2f18 + lVar5 * 8) * 2.0);
      }
      dVar15 = dVar15 * dVar11;
      *(double *)(*param_2 + 0x1c48 + lVar5 * 8) = param_4 * (dVar14 - 1.0);
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  dVar15 = dVar15 / *(double *)(*param_1 + 0x48);
  if (dVar15 != 1.0) {
    *(double *)*param_2 = dVar15 * 10000.0;
    *(double *)(*param_2 + 8) = (dVar15 * 10000.0) / (dVar15 - 1.0);
  }
  return 0;
}

