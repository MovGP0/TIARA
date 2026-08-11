/* Ghidra address: 016372d0 */
/* Ghidra symbol: FUN_016372d0 */


undefined8 FUN_016372d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x628) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),iVar3);
      cVar1 = FUN_01628c30(uVar2);
      if (cVar1 != '\0') {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

