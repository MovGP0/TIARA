/* Ghidra address: 01189130 */
/* Ghidra symbol: FUN_01189130 */


void FUN_01189130(double param_1,double param_2,double *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  double local_cf8 [101];
  double local_9d0 [101];
  double local_6a8 [101];
  double local_380 [106];
  
  param_2 = param_2 * param_2;
  local_380[0] = 1.0;
  local_6a8[0] = (double)FUN_0040c760(1.0 - param_2);
  local_9d0[0] = (double)FUN_0040c760(param_2);
  iVar1 = 1;
  pdVar4 = local_380;
  pdVar3 = local_6a8;
  pdVar5 = local_9d0;
  do {
    pdVar5 = pdVar5 + 1;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
    iVar2 = iVar1 + -1;
    *pdVar4 = (local_380[iVar2] + local_6a8[iVar2]) / 2.0;
    dVar7 = (double)FUN_0040c760(local_380[iVar2] * local_6a8[iVar1 + -1]);
    *pdVar3 = dVar7;
    *pdVar5 = (local_380[iVar2] - local_6a8[iVar2]) / 2.0;
    if (*pdVar5 <= 1e-15 && *pdVar5 != 1e-15) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 100);
  if (iVar1 == 100) {
    iVar1 = 99;
  }
  fVar6 = (float)FUN_00526700(0x40000000,(float)iVar1);
  local_cf8[iVar1] = (double)fVar6 * local_380[iVar1] * param_1;
  if (0 < iVar1) {
    pdVar3 = local_9d0 + iVar1;
    pdVar4 = local_cf8 + iVar1;
    pdVar5 = local_380 + iVar1;
    do {
      dVar7 = (double)FUN_0040bdd0(*pdVar4);
      dVar7 = (double)FUN_00525bd0((*pdVar3 * dVar7) / *pdVar5);
      local_cf8[iVar1 + -1] = (dVar7 + *pdVar4) / 2.0;
      iVar1 = iVar1 + -1;
      pdVar5 = pdVar5 + -1;
      pdVar4 = pdVar4 + -1;
      pdVar3 = pdVar3 + -1;
    } while (iVar1 != 0);
  }
  dVar7 = (double)FUN_0040bdd0(local_cf8[0]);
  *param_3 = dVar7;
  uVar8 = FUN_0040bcd0(local_cf8[0]);
  *param_4 = uVar8;
  uVar8 = FUN_0040c760(1.0 - param_2 * *param_3 * *param_3);
  *param_5 = uVar8;
  return;
}

