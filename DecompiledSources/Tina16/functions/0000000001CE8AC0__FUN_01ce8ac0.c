/* Ghidra address: 01ce8ac0 */
/* Ghidra symbol: FUN_01ce8ac0 */


undefined8 FUN_01ce8ac0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))();
      iVar5 = 0;
      if (iVar2 + -1 < 0) {
        return 0;
      }
      do {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        if (*(longlong *)(lVar3 + 0x98) == param_2) {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                            (*(longlong **)(param_1 + 0x80),iVar5);
          return uVar4;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
    if (5 < (byte)(cVar1 - 2U)) {
      return 0;
    }
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar5);
      if (*(longlong *)(lVar3 + 0xe0) == param_2) {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

