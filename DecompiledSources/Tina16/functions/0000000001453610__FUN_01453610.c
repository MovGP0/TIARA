/* Ghidra address: 01453610 */
/* Ghidra symbol: FUN_01453610 */


void FUN_01453610(longlong param_1,longlong param_2)

{
  double *pdVar1;
  int iVar2;
  undefined *puVar3;
  double dVar4;
  double local_58;
  double local_50;
  
  dVar4 = *(double *)(param_1 + 0x3660) + *(double *)(param_1 + 0x3668) +
          *(double *)(param_1 + 0x3670) + *(double *)(param_1 + 0x3678) +
          *(double *)(param_1 + 0x3680) + *(double *)(param_1 + 0x3688);
  iVar2 = FUN_0040c770(*(undefined8 *)(param_2 + 0xd8));
  if (0 < iVar2) {
    param_1 = param_1 + 0x3390;
    puVar3 = PTR_DAT_02005970;
    pdVar1 = (double *)PTR_DAT_020053f0;
    do {
      local_58 = pdVar1[2] * dVar4;
      local_50 = pdVar1[3] * dVar4;
      FUN_014494b0(&local_58,&local_58,param_2);
      local_58 = local_58 - 1.0;
      FUN_01449410(puVar3,&local_58,param_1,param_2);
      param_1 = param_1 + 0x10;
      puVar3 = puVar3 + 0x10;
      iVar2 = iVar2 + -1;
      pdVar1 = pdVar1 + 2;
    } while (iVar2 != 0);
  }
  return;
}

