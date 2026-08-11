/* Ghidra address: 01522550 */
/* Ghidra symbol: FUN_01522550 */


void FUN_01522550(longlong param_1,undefined8 param_2,double *param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  double local_48;
  double local_40 [3];
  
  *param_3 = -*(double *)PTR_DAT_020011b0;
  *param_4 = *(double *)PTR_DAT_020011b0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_01cc5870(param_1,iVar1,param_2,local_40,&local_48);
      if (*param_3 <= local_40[0] && local_40[0] != *param_3) {
        *param_3 = local_40[0];
      }
      if (local_48 < *param_4) {
        *param_4 = local_48;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

