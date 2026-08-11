/* Ghidra address: 019c2270 */
/* Ghidra symbol: FUN_019c2270 */


int FUN_019c2270(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + -8);
  }
  iVar4 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      iVar3 = 0;
      if (param_2 != 0) {
        iVar3 = (int)*(undefined8 *)(param_2 + -8);
      }
      iVar5 = 0;
      if (iVar3 - 1U < 0x80000000) {
        do {
          if ((*(int *)(param_1 + (longlong)iVar4 * 8) == *(int *)(param_2 + (longlong)iVar5 * 8))
             && (*(int *)(param_1 + 4 + (longlong)iVar4 * 8) ==
                 *(int *)(param_2 + 4 + (longlong)iVar5 * 8))) {
            iVar1 = iVar1 + 1;
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

