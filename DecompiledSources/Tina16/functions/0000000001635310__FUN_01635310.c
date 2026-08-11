/* Ghidra address: 01635310 */
/* Ghidra symbol: FUN_01635310 */


undefined8 FUN_01635310(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
  bVar5 = iVar1 != 0;
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                        (*(longlong **)(param_1 + 0x68),iVar4);
      if ((bVar5) && (*(char *)(lVar2 + 0x50) != '\0')) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((bVar5) || (*(char *)(param_1 + 0x90) != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

