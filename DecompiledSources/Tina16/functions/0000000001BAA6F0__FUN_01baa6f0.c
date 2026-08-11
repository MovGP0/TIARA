/* Ghidra address: 01baa6f0 */
/* Ghidra symbol: FUN_01baa6f0 */


void FUN_01baa6f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*param_2 != 0) {
    iVar3 = *(int *)(*param_2 + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (*(short *)(*param_2 + -2 + (longlong)iVar2 * 2) == 9) {
        lVar1 = FUN_00414de0(param_2);
        *(undefined2 *)(lVar1 + -2 + (longlong)iVar2 * 2) = 0x20;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

