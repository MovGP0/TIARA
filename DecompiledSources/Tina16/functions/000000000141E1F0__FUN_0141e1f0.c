/* Ghidra address: 0141e1f0 */
/* Ghidra symbol: FUN_0141e1f0 */


void FUN_0141e1f0(longlong param_1,longlong param_2,undefined8 param_3,byte param_4,double param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  double *pdVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  if ((byte)(param_4 - 8) < 8) {
    uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8 & 0x1f);
    bVar5 = (uVar2 & 0x11) != 0;
    uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar5);
  }
  else {
    uVar3 = 0;
    bVar5 = false;
  }
  if (bVar5) {
    dVar6 = (double)FUN_0040bcd0(-param_5 * *(double *)(lVar1 + 0x10));
    dVar7 = (double)FUN_0040bdd0(-param_5 * *(double *)(lVar1 + 0x10));
    pdVar4 = *(double **)(lVar1 + 0x98);
    *pdVar4 = *pdVar4 + dVar6;
    pdVar4 = (double *)FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),pdVar4,8);
    *pdVar4 = *pdVar4 + dVar7;
    pdVar4 = *(double **)(lVar1 + 0xa0);
    *pdVar4 = *pdVar4 - dVar6;
    pdVar4 = (double *)FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),pdVar4,8);
    *pdVar4 = *pdVar4 - dVar7;
    pdVar4 = *(double **)(lVar1 + 0xa8);
    *pdVar4 = *pdVar4 + dVar6 * *(double *)(lVar1 + 8);
    pdVar4 = (double *)FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),pdVar4,8);
    *pdVar4 = *pdVar4 + dVar7 * *(double *)(lVar1 + 8);
    pdVar4 = *(double **)(lVar1 + 0xb0);
    *pdVar4 = *pdVar4 + dVar6;
    pdVar4 = (double *)FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),pdVar4,8);
    *pdVar4 = *pdVar4 + dVar7;
    pdVar4 = *(double **)(lVar1 + 0xb8);
    *pdVar4 = *pdVar4 - dVar6;
    pdVar4 = (double *)FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),pdVar4,8);
    *pdVar4 = *pdVar4 - dVar7;
    pdVar4 = *(double **)(lVar1 + 0xc0);
    *pdVar4 = *pdVar4 + dVar6 * *(double *)(lVar1 + 8);
    pdVar4 = (double *)FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),pdVar4,8);
    *pdVar4 = *pdVar4 + dVar7 * *(double *)(lVar1 + 8);
  }
  else {
    if (param_4 < 8) {
      bVar5 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << (param_4 & 0x1f) & 0xa2U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      **(double **)(lVar1 + 0x98) = **(double **)(lVar1 + 0x98) + 1.0;
      **(double **)(lVar1 + 0xa0) = **(double **)(lVar1 + 0xa0) - 1.0;
      **(double **)(lVar1 + 0xa8) =
           **(double **)(lVar1 + 0xa8) +
           (1.0 - *(double *)(param_1 + 0x430)) * *(double *)(lVar1 + 8);
      **(double **)(lVar1 + 0xb0) = **(double **)(lVar1 + 0xb0) + 1.0;
      **(double **)(lVar1 + 0xb8) = **(double **)(lVar1 + 0xb8) - 1.0;
      **(double **)(lVar1 + 0xc0) =
           **(double **)(lVar1 + 0xc0) +
           (1.0 - *(double *)(param_1 + 0x430)) * *(double *)(lVar1 + 8);
    }
  }
  return;
}

