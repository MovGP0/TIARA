/* Ghidra address: 01d11790 */
/* Ghidra symbol: FUN_01d11790 */


void FUN_01d11790(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*param_1 == 0) ||
     (uVar1 = FUN_00442b70(*param_1), (longlong)(ulonglong)uVar1 < (longlong)(param_4 + 1))) {
    FUN_00442c30(*param_1);
    lVar3 = FUN_00442b60();
    *param_1 = lVar3;
  }
  iVar2 = 0;
  iVar4 = param_4;
  if (-1 < param_4 + -1) {
    do {
      *(undefined2 *)(*param_1 + (longlong)iVar2 * 2) =
           *(undefined2 *)(*param_2 + (longlong)(param_3 + iVar2) * 2);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined2 *)(*param_1 + (longlong)param_4 * 2) = 0;
  return;
}

