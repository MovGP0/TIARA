/* Ghidra address: 013fae20 */
/* Ghidra symbol: FUN_013fae20 */


void FUN_013fae20(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x6b0),iVar3);
      if (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),1 < iVar4)
  ;
  return;
}

