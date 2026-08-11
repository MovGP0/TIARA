/* Ghidra address: 01b4a790 */
/* Ghidra symbol: FUN_01b4a790 */


undefined8 FUN_01b4a790(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = FUN_015452e0(*(undefined8 *)(param_1 + 8));
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),iVar5);
      uVar4 = *(undefined8 *)(lVar3 + 8);
      FUN_01d03160(uVar4);
      cVar1 = FUN_01542620(uVar4);
      if (cVar1 != '\0') {
        uVar4 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),iVar5);
        cVar1 = FUN_015450b0(uVar2,uVar4);
        if (cVar1 == '\0') {
          return 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

