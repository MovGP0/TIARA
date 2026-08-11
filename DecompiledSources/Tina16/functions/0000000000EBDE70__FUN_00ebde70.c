/* Ghidra address: 00ebde70 */
/* Ghidra symbol: FUN_00ebde70 */


void FUN_00ebde70(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x6d0);
      cVar2 = FUN_0068bca0(uVar1,iVar4);
      FUN_0068bd10(uVar1,iVar4,cVar2 == '\0');
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

