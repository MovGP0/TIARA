/* Ghidra address: 010e3df0 */
/* Ghidra symbol: FUN_010e3df0 */


void FUN_010e3df0(longlong param_1,undefined8 param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  
  bVar1 = (*(int *)(param_1 + 0x80c) - *(int *)(param_1 + 0x814)) * 2 <= *param_4;
  if ((*param_3 != *(int *)(param_1 + 0x98)) || (bVar1)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *param_5 = uVar3;
  iVar2 = *(int *)(param_1 + 0x810);
  if (((iVar2 != 0) && (*(int *)(param_1 + 0x818) != 0)) && (bVar1)) {
    if ((double)*param_3 / (double)iVar2 < 0.6666666666666666) {
      iVar2 = FUN_0040c770((double)(iVar2 * 2) / 3.0);
      *param_3 = iVar2;
    }
    iVar2 = FUN_0040c770((((double)*(int *)(param_1 + 0x814) / (double)*(int *)(param_1 + 0x810)) *
                          (double)*param_3 + (double)*(int *)(param_1 + 0x80c)) -
                         (double)*(int *)(param_1 + 0x814));
    *param_4 = iVar2;
    iVar2 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
    if (iVar2 < *param_4) {
      iVar2 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
      iVar2 = FUN_0040c840((double)(*param_3 * (iVar2 + -0x28)) / (double)*param_4);
      *param_3 = iVar2;
      iVar2 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
      *param_4 = iVar2 + -0x28;
    }
  }
  return;
}

