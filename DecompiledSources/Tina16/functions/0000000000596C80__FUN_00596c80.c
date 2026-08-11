/* Ghidra address: 00596c80 */
/* Ghidra symbol: FUN_00596c80 */


int FUN_00596c80(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)param_1[1];
  if (-1 < iVar3 + -1) {
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
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

