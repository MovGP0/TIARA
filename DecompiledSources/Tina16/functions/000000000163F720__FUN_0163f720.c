/* Ghidra address: 0163f720 */
/* Ghidra symbol: FUN_0163f720 */


void FUN_0163f720(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_2,iVar2);
      if (*(int *)(lVar1 + 0x58) == *(int *)(param_1 + 0x54)) {
        FUN_004ae7e0(*(undefined8 *)(lVar1 + 0x80),param_1);
        *(longlong *)(param_1 + 0x88) = lVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

