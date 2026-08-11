/* Ghidra address: 012e5de0 */
/* Ghidra symbol: FUN_012e5de0 */


undefined4 FUN_012e5de0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x40) + 1;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10) + -1;
  if (iVar2 <= iVar4) {
    iVar4 = (iVar4 - iVar2) + 1;
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar2);
      cVar1 = FUN_012e5260(uVar3);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0x40) = iVar2;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return *(undefined4 *)(param_1 + 0x40);
}

