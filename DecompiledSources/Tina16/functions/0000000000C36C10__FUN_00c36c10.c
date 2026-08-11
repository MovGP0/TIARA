/* Ghidra address: 00c36c10 */
/* Ghidra symbol: FUN_00c36c10 */


undefined8 FUN_00c36c10(undefined8 param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  FUN_00414480(param_2);
  bVar1 = false;
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + -4);
  }
  if (*param_4 < 1) {
    *param_4 = 1;
  }
  while ((*param_4 <= iVar2 && (*(short *)(param_3 + -2 + (longlong)*param_4 * 2) == 0x20))) {
    *param_4 = *param_4 + 1;
  }
  iVar3 = *param_4;
  if (*param_4 <= iVar2) {
    if (*(short *)(param_3 + -2 + (longlong)*param_4 * 2) == 0x2d) {
      bVar1 = true;
      *param_4 = *param_4 + 1;
      iVar3 = *param_4;
      if (iVar2 < *param_4) {
        return param_2;
      }
    }
    if (bVar1) {
      while ((*param_4 <= iVar2 && (*(short *)(param_3 + -2 + (longlong)*param_4 * 2) != 0x20))) {
        *param_4 = *param_4 + 1;
      }
      if (iVar3 < *param_4) {
        FUN_00416dc0(param_2,param_3,iVar3,*param_4 - iVar3);
      }
    }
  }
  return param_2;
}

