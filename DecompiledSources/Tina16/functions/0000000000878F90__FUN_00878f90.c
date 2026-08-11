/* Ghidra address: 00878f90 */
/* Ghidra symbol: FUN_00878f90 */


void FUN_00878f90(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + -8);
  }
  if (lVar1 - param_3 <= (longlong)param_2) {
    param_2 = (int)(lVar1 - param_3);
  }
  if (0 < param_2) {
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + -8);
    }
    if (param_3 + param_2 < lVar1) {
      iVar3 = 0;
      if (lVar2 != 0) {
        iVar3 = (int)*(undefined8 *)(lVar2 + -8);
      }
      iVar3 = (iVar3 - param_2) + -1;
      if (param_3 <= iVar3) {
        iVar3 = (iVar3 - param_3) + 1;
        do {
          *(undefined1 *)(*param_1 + (longlong)param_3) =
               *(undefined1 *)(*param_1 + (longlong)(param_3 + param_2));
          param_3 = param_3 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    lVar2 = 0;
    if (*param_1 != 0) {
      lVar2 = *(longlong *)(*param_1 + -8);
    }
    FUN_00419260(param_1,&DAT_0086e978,1,lVar2 - param_2);
  }
  return;
}

