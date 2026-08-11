/* Ghidra address: 00f74fd0 */
/* Ghidra symbol: FUN_00f74fd0 */


void FUN_00f74fd0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar3 < *(int *)(param_1 + 0x10)) {
    uVar1 = FUN_004aeac0(param_1,iVar3);
    cVar2 = FUN_00f6f970(uVar1);
    if (cVar2 == '\0') {
      iVar3 = iVar3 + 1;
    }
    else {
      FUN_004ae870(param_1,iVar3);
    }
  }
  return;
}

