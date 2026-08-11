/* Ghidra address: 00b9bbd0 */
/* Ghidra symbol: FUN_00b9bbd0 */


longlong * FUN_00b9bbd0(longlong param_1,longlong *param_2,int param_3,char param_4)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 < 1) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) - iVar3,iVar3);
    if (param_4 != '\0') {
      iVar3 = 0;
      if (*param_2 != 0) {
        iVar3 = *(int *)(*param_2 + -4);
      }
      if (0 < iVar3) {
        do {
          sVar1 = *(short *)(*param_2 + -2 + (longlong)iVar3 * 2);
          if ((sVar1 == 10) || (sVar1 == 0xd)) {
            iVar4 = 0;
            lVar2 = *param_2;
            if (lVar2 != 0) {
              iVar4 = *(int *)(lVar2 + -4);
            }
            if (iVar3 == iVar4) {
              FUN_00414480(param_2);
              return param_2;
            }
            iVar4 = 0;
            if (lVar2 != 0) {
              iVar4 = *(int *)(lVar2 + -4);
            }
            FUN_00416dc0(param_2,*param_2,iVar3 + 1,iVar4 - iVar3);
            return param_2;
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return param_2;
}

