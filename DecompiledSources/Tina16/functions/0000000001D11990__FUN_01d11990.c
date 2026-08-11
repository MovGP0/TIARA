/* Ghidra address: 01d11990 */
/* Ghidra symbol: FUN_01d11990 */


void FUN_01d11990(longlong param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*param_2 != 0) {
    uVar1 = FUN_00442b70(*param_2);
    iVar2 = FUN_01d11780(*param_2);
    iVar3 = FUN_01d11780(param_1);
    if ((longlong)(iVar2 + iVar3 + 1) <= (longlong)(ulonglong)uVar1) goto LAB_01d11a16;
  }
  iVar2 = FUN_01d11780(*param_2);
  iVar3 = FUN_01d11780(param_1);
  uVar4 = FUN_00442b60(iVar2 + iVar3 + 1);
  lVar5 = FUN_004424b0(uVar4,*param_2);
  FUN_00442c30(*param_2);
  *param_2 = lVar5;
LAB_01d11a16:
  iVar2 = FUN_01d11780(*param_2);
  iVar2 = iVar2 - param_3;
  if (-1 < iVar2) {
    do {
      iVar3 = FUN_01d11780(param_1);
      *(undefined2 *)(*param_2 + (longlong)(param_3 + iVar3 + iVar2) * 2) =
           *(undefined2 *)(*param_2 + (longlong)(param_3 + iVar2) * 2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  iVar2 = FUN_01d11780();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      *(undefined2 *)(*param_2 + (longlong)(param_3 + iVar3) * 2) =
           *(undefined2 *)(param_1 + (longlong)iVar3 * 2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

