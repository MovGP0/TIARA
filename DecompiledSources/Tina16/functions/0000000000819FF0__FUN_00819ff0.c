/* Ghidra address: 00819ff0 */
/* Ghidra symbol: FUN_00819ff0 */


undefined8 FUN_00819ff0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_007e2f10(*(undefined8 *)(param_2 + 0x80),iVar4);
      cVar1 = FUN_007f9a80(*(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38) + 8),
                           *(undefined8 *)(lVar3 + 0x78));
      if (cVar1 != '\0') {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

