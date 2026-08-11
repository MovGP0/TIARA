/* Ghidra address: 00bfce40 */
/* Ghidra symbol: FUN_00bfce40 */


int * FUN_00bfce40(longlong param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  FUN_00498350(param_2,0,0,0,0);
  if (*(char *)(param_1 + 0x498) != '\0') {
    if (param_4 < 0) {
      param_4 = FUN_00c11080(param_1,param_3);
    }
    cVar1 = FUN_00bdfa80(*(undefined8 *)(param_1 + 0x4a8),param_4);
    if (cVar1 != '\0') {
      iVar2 = (param_3 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c) + 1;
      param_2[1] = iVar2;
      param_2[3] = iVar2 + *(int *)(param_1 + 0x52c) + -2;
      iVar2 = FUN_00bcf960(*(undefined8 *)(param_1 + 0x4e8),param_4 + -1);
      *param_2 = *(int *)(param_1 + 0x530) + (iVar2 + 1) * *(int *)(param_1 + 0x4d4);
      if ((*(uint *)(param_1 + 0x63a) & 0x100000) != 0) {
        *param_2 = *param_2 + *(int *)(param_1 + 0x4d4);
      }
      iVar2 = *(int *)(param_1 + 0x910) + *(int *)(param_1 + 0x4d4);
      if (iVar2 < *param_2) {
        iVar2 = *param_2;
      }
      *param_2 = iVar2;
      param_2[2] = iVar2 + *(int *)(param_1 + 0x4d4) * 3 + (*(int *)(param_1 + 0x4d4) / 7) * 4;
    }
  }
  return param_2;
}

