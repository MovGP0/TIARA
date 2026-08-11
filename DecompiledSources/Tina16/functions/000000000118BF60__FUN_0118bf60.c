/* Ghidra address: 0118bf60 */
/* Ghidra symbol: FUN_0118bf60 */


void FUN_0118bf60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar3 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      uVar6 = FUN_0040bcd0(*(double *)
                            (param_1 + 0x4b48 +
                            (longlong)*(int *)(param_1 + 0x4c8 + (longlong)iVar3 * 4) * 8) *
                           6.2831853071796);
      *(undefined8 *)(param_1 + 0x3ba0 + (longlong)iVar3 * 8) = uVar6;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar3 = 0;
  iVar5 = *(int *)(param_1 + 4);
  if (-1 < iVar5 + -1) {
    do {
      dVar7 = 1.0;
      dVar8 = *(double *)(param_1 + 0x3ba0 + (longlong)iVar3 * 8);
      iVar4 = *(int *)(param_1 + 4);
      iVar1 = 0;
      if (-1 < iVar4 + -1) {
        do {
          if (dVar8 != *(double *)(param_1 + 0x3ba0 + (longlong)iVar1 * 8)) {
            dVar7 = dVar7 * (dVar8 - *(double *)(param_1 + 0x3ba0 + (longlong)iVar1 * 8));
          }
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (dVar7 == 0.0) {
        *(undefined8 *)(param_1 + 0xca8 + (longlong)iVar3 * 8) = 0x7e37e43c8800759c;
      }
      else {
        *(double *)(param_1 + 0xca8 + (longlong)iVar3 * 8) = 1.0 / dVar7;
      }
      *(double *)(param_1 + 0x1c50 + (longlong)iVar3 * 8) =
           *(double *)(param_1 + 0xca8 + (longlong)iVar3 * 8) *
           (dVar8 - *(double *)(param_1 + 0x3ba0 + (longlong)(*(int *)(param_1 + 4) + -1) * 8));
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  dVar7 = 0.0;
  dVar9 = 0.0;
  dVar8 = 1.0;
  iVar3 = 0;
  iVar5 = *(int *)(param_1 + 4);
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = (longlong)*(int *)(param_1 + 0x4c8 + (longlong)iVar3 * 4);
      dVar7 = dVar7 + *(double *)(param_1 + 0xca8 + (longlong)iVar3 * 8) *
                      *(double *)(param_1 + 0x14550 + lVar2 * 8);
      dVar9 = dVar9 + (dVar8 * *(double *)(param_1 + 0xca8 + (longlong)iVar3 * 8)) /
                      *(double *)(param_1 + 0x23f58 + lVar2 * 8);
      dVar8 = -dVar8;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (dVar9 == 0.0) {
    *(undefined8 *)(param_1 + 0xca0) = 0x7e37e43c8800759c;
  }
  else {
    *(double *)(param_1 + 0xca0) = dVar7 / dVar9;
  }
  dVar8 = 1.0;
  iVar5 = *(int *)(param_1 + 4);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = (longlong)*(int *)(param_1 + 0x4c8 + (longlong)iVar3 * 4);
      *(double *)(param_1 + 0x2bf8 + (longlong)iVar3 * 8) =
           *(double *)(param_1 + 0x14550 + lVar2 * 8) -
           (dVar8 * *(double *)(param_1 + 0xca0)) / *(double *)(param_1 + 0x23f58 + lVar2 * 8);
      dVar8 = -dVar8;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

