/* Ghidra address: 00595d40 */
/* Ghidra symbol: FUN_00595d40 */


int FUN_00595d40(longlong *param_1,undefined8 *param_2)

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
  FUN_0041b840(*param_1 + (longlong)iVar1 * 8,*param_2);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],param_2,1);
  }
  return iVar1;
}

