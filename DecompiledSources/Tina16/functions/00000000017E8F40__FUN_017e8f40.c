/* Ghidra address: 017e8f40 */
/* Ghidra symbol: FUN_017e8f40 */


void FUN_017e8f40(longlong param_1,int param_2,double *param_3)

{
  longlong lVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_d0 [6];
  undefined1 local_a0 [8];
  double local_98;
  double local_70 [8];
  
  uVar5 = *(uint *)(param_1 + 0x638);
  dVar6 = 4.0;
  local_70[0] = (param_3[1] - 0.0) / (double)(int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 + 1;
  }
  FUN_010c7a40(local_a0,0);
  pdVar3 = param_3;
  pdVar4 = local_d0;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  FUN_017e8660(param_1,param_2,local_a0);
  FUN_017e8660(param_1,param_2,local_d0);
  dVar8 = local_98 + local_d0[1];
  dVar7 = local_70[0] + 0.0;
  iVar2 = uVar5 - 1;
  if (0 < iVar2) {
    do {
      local_98 = dVar7;
      FUN_017e8660(param_1,param_2,local_a0);
      dVar8 = dVar8 + dVar6 * local_98;
      dVar7 = dVar7 + local_70[0];
      dVar6 = 6.0 - dVar6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (((0x127 < param_2) && (param_2 < 299)) && (*(char *)(param_1 + 0x629) == '\0')) {
    FUN_010c8690(local_70);
  }
  param_3[1] = (dVar8 * local_70[0]) / 3.0;
  return;
}

