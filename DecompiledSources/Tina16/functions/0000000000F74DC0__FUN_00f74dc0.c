/* Ghidra address: 00f74dc0 */
/* Ghidra symbol: FUN_00f74dc0 */


void FUN_00f74dc0(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1,iVar2);
      FUN_00f6eb60(uVar1,&local_2c,&local_30,&local_34,&local_38);
      if (iVar2 == 0) {
        *param_2 = local_2c;
        *param_3 = local_30;
        *param_4 = local_34;
        *param_5 = local_38;
      }
      else {
        if (local_2c < *param_2) {
          *param_2 = local_2c;
        }
        if (local_30 < *param_3) {
          *param_3 = local_30;
        }
        if (*param_4 < local_34) {
          *param_4 = local_34;
        }
        if (*param_5 < local_38) {
          *param_5 = local_38;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

