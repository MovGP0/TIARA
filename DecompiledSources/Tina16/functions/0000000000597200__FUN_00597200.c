/* Ghidra address: 00597200 */
/* Ghidra symbol: FUN_00597200 */


int FUN_00597200(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    do {
      iVar1 = (*(code *)param_1[5])
                        (param_1[3],
                         *param_1 +
                         (longlong)iVar2 *
                         (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1)),
                         param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return -1;
}

