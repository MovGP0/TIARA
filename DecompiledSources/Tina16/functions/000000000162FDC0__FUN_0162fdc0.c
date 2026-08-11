/* Ghidra address: 0162fdc0 */
/* Ghidra symbol: FUN_0162fdc0 */


void FUN_0162fdc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                        (*(longlong **)(param_1 + 0x68),iVar3);
      if (*(char *)(*(longlong *)(lVar2 + 0x20) + 0x49) != '\0') {
        FUN_016265f0(*(undefined8 *)(*(longlong *)(lVar2 + 0x58) + 0x80),param_2);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

