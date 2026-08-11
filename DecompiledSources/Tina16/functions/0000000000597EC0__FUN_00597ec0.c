/* Ghidra address: 00597ec0 */
/* Ghidra symbol: FUN_00597ec0 */


int FUN_00597ec0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  lVar2 = 0;
  if (*param_1 != 0) {
    lVar2 = *(longlong *)(*param_1 + -8);
  }
  if (iVar1 == lVar2) {
    FUN_00595060(param_1,iVar1 + 1);
  }
  lVar2 = param_1[2] + (ulonglong)*(byte *)(param_1[2] + 1);
  FUN_004185b0(*param_1 + (longlong)iVar1 * (longlong)*(int *)(lVar2 + 2),param_2,
               **(undefined8 **)(lVar2 + 6),1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],param_2,1);
  }
  return iVar1;
}

