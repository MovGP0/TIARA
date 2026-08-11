/* Ghidra address: 01b4a850 */
/* Ghidra symbol: FUN_01b4a850 */


undefined8 FUN_01b4a850(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),iVar4);
      uVar1 = *(undefined8 *)(lVar3 + 8);
      FUN_01d03160(uVar1);
      cVar2 = FUN_01542670(uVar1);
      if ((cVar2 != '\0') &&
         (lVar3 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),iVar4),
         *(char *)(lVar3 + 0x18) == '\0')) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

