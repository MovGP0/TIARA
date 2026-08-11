/* Ghidra address: 00bc3b20 */
/* Ghidra symbol: FUN_00bc3b20 */


longlong FUN_00bc3b20(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  iVar1 = 1;
  iVar3 = iVar2;
  if (0 < iVar2) {
    do {
      *(undefined2 *)(param_1 + (longlong)(iVar1 + -1) * 2) =
           *(undefined2 *)(param_2 + -2 + (longlong)iVar1 * 2);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined2 *)(param_1 + (longlong)iVar2 * 2) = 0;
  return param_1;
}

