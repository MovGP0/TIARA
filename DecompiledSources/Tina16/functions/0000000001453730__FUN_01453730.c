/* Ghidra address: 01453730 */
/* Ghidra symbol: FUN_01453730 */


void FUN_01453730(longlong param_1,longlong param_2)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  int iVar5;
  double *local_80;
  double local_78 [4];
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  
  local_78[0] = *(double *)(param_1 + 0x3660);
  local_78[1] = *(double *)(param_1 + 0x3668);
  local_78[2] = *(double *)(param_1 + 0x3670);
  local_78[3] = *(double *)(param_1 + 0x3678);
  local_58 = *(undefined8 *)(param_1 + 0x3680);
  local_50 = *(undefined8 *)(param_1 + 0x3688);
  iVar2 = FUN_0040c770(*(undefined8 *)(param_2 + 0xd8));
  if (0 < iVar2) {
    param_1 = param_1 + 0x2490;
    pdVar1 = (double *)PTR_DAT_020053f0;
    do {
      local_80 = pdVar1 + 2;
      iVar5 = 6;
      pdVar3 = local_78;
      lVar4 = param_1;
      do {
        local_48 = *local_80;
        local_40 = pdVar1[3];
        local_48 = *local_80 * *pdVar3;
        local_40 = pdVar1[3] * *pdVar3;
        FUN_014494b0(&local_48,lVar4,param_2);
        lVar4 = lVar4 + 0x10;
        pdVar3 = pdVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      param_1 = param_1 + 0x60;
      iVar2 = iVar2 + -1;
      pdVar1 = local_80;
    } while (iVar2 != 0);
  }
  return;
}

