/* Ghidra address: 01566b60 */
/* Ghidra symbol: FUN_01566b60 */


void FUN_01566b60(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x10);
  *param_3 = iVar3;
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x8f0),iVar2);
      *param_2 = *param_2 + *(int *)(*(longlong *)(lVar1 + 0x28) + 0x10);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

