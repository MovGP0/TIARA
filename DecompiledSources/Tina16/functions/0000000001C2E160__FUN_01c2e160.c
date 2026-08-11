/* Ghidra address: 01c2e160 */
/* Ghidra symbol: FUN_01c2e160 */


undefined8 FUN_01c2e160(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (*(char *)(**(longlong **)(param_1 + 8) + 0x4c) !=
          *(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8) + 0x4c)) {
        uVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

