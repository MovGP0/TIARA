/* Ghidra address: 00f753d0 */
/* Ghidra symbol: FUN_00f753d0 */


longlong FUN_00f753d0(longlong param_1,char param_2,int param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (param_3 <= iVar4) {
    iVar4 = (iVar4 - param_3) + 1;
    do {
      lVar1 = FUN_004aeac0(param_1,param_3);
      *param_4 = param_3;
      if (((*(char *)(lVar1 + 0x30) == '\b') &&
          (lVar2 = FUN_004113f0(lVar1,&PTR_FUN_00f6bf08), *(char *)(lVar2 + 0x110) == param_2)) &&
         (lVar3 = lVar1, param_2 != '\0')) {
        return lVar1;
      }
      param_3 = param_3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return lVar3;
}

