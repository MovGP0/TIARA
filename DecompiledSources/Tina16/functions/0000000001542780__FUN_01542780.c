/* Ghidra address: 01542780 */
/* Ghidra symbol: FUN_01542780 */


undefined8 FUN_01542780(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01d347d0(param_1,iVar4);
      uVar3 = *(undefined8 *)(lVar2 + 8);
      FUN_01d03160(uVar3);
      cVar1 = FUN_015426e0(uVar3);
      if (cVar1 != '\0') {
        uVar3 = FUN_01d347d0(param_1,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

