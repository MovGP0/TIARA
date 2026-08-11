/* Ghidra address: 00565e50 */
/* Ghidra symbol: FUN_00565e50 */


longlong * FUN_00565e50(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar2 = 0;
  if (-1 < param_3) {
    iVar4 = param_3 + 1;
    plVar3 = param_2;
    do {
      iVar1 = 0;
      if (*plVar3 != 0) {
        iVar1 = (int)*(undefined8 *)(*plVar3 + -8);
      }
      iVar2 = iVar2 + iVar1;
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00419260(param_1,&DAT_0052f750,1,(longlong)iVar2);
  iVar2 = 0;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      iVar4 = 0;
      if (*param_2 != 0) {
        iVar4 = (int)*(undefined8 *)(*param_2 + -8);
      }
      iVar1 = 0;
      if (-1 < iVar4 + -1) {
        do {
          *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) =
               *(undefined8 *)(*param_2 + (longlong)iVar1 * 8);
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_1;
}

