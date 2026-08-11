/* Ghidra address: 0117ae30 */
/* Ghidra symbol: FUN_0117ae30 */


undefined8 FUN_0117ae30(longlong *param_1,longlong *param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar11 = 1.0;
  bVar7 = *(int *)(*param_1 + 0x1fa0) % 2 == 1;
  if (bVar7) {
    *(double *)(*param_2 + 0x978) = param_3;
    *(double *)(*param_2 + 0x10) = 1.0 / (param_3 * *(double *)(*param_1 + 0x1008));
    *(double *)(*param_2 + 0x12e0) = param_4;
  }
  uVar4 = (uint)bVar7;
  iVar6 = *(int *)(*param_2 + 0x3880) + -1;
  if ((int)(uint)bVar7 <= iVar6) {
    iVar6 = (iVar6 - (uint)bVar7) + 1;
    do {
      lVar5 = (longlong)(int)(uVar4 * 3 + 2);
      dVar1 = *(double *)(*param_1 + 0x50 + lVar5 * 8);
      dVar8 = (double)FUN_0040c760(dVar1);
      dVar10 = *(double *)(*param_1 + 0xff8 + (longlong)(int)(uVar4 * 3 + 1) * 8);
      dVar2 = *(double *)(*param_1 + 0xff8 + lVar5 * 8);
      dVar9 = (double)FUN_0040c760(dVar2);
      lVar5 = (longlong)(int)uVar4;
      *(double *)(*param_2 + 0x978 + lVar5 * 8) = param_3;
      *(double *)(*param_2 + 0x12e0 + lVar5 * 8) = param_4;
      sVar3 = *(short *)(*param_1 + 0x1fa6);
      if ((ushort)(sVar3 - 0x42U) < 2) {
        *(double *)(*param_2 + 0x10 + lVar5 * 8) = 1.0 / (param_3 * dVar9);
        dVar10 = 3.0 - dVar10 / dVar9;
      }
      else {
        if ((sVar3 != 0x45) && (sVar3 != 0x49)) {
          return 3;
        }
        *(double *)(*param_2 + 0x10 + lVar5 * 8) = 1.0 / (param_3 * dVar8);
        if (dVar1 <= dVar2) {
          if (dVar2 <= dVar1) {
            dVar10 = 2.0 - dVar10 / (dVar8 * 2.0);
          }
          else {
            dVar10 = ((dVar2 - dVar1) - dVar10 * dVar8) / (dVar1 * 2.0) + 2.0;
            *(double *)(*param_2 + 0x25b0 + lVar5 * 8) =
                 (*(double *)(*param_2 + 0x10 + (longlong)(int)uVar4 * 8) * 2.0) /
                 (dVar2 / dVar1 - 1.0);
          }
        }
        else {
          dVar10 = ((dVar1 - dVar2) - dVar10 * dVar8) / (dVar2 * 2.0) + 2.0;
          *(double *)(*param_2 + 0x2f18 + lVar5 * 8) = ((dVar1 / dVar2 - 1.0) * param_3) / 2.0;
        }
      }
      dVar11 = dVar11 * ((dVar10 * param_3) /
                        (param_3 + *(double *)(*param_2 + 0x2f18 + lVar5 * 8) * 2.0));
      *(double *)(*param_2 + 0x1c48 + lVar5 * 8) = param_4 * (dVar10 - 1.0);
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  dVar11 = dVar11 / *(double *)(*param_1 + 0x48);
  if (dVar11 != 1.0) {
    *(double *)*param_2 = dVar11 * 10000.0;
    *(double *)(*param_2 + 8) = (dVar11 * 10000.0) / (dVar11 - 1.0);
  }
  return 0;
}

