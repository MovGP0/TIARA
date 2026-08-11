/* Ghidra address: 01d11900 */
/* Ghidra symbol: FUN_01d11900 */


void FUN_01d11900(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_01d11780(*param_1);
    if (param_3 == iVar1) {
      FUN_00442c30(*param_1);
      *param_1 = 0;
    }
  }
  iVar1 = FUN_01d11780();
  iVar1 = iVar1 - (param_2 + param_3);
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    do {
      *(undefined2 *)(*param_1 + (longlong)(param_2 + iVar2) * 2) =
           *(undefined2 *)(*param_1 + (longlong)(param_2 + param_3 + iVar2) * 2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

