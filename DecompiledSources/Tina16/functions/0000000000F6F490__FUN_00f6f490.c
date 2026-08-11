/* Ghidra address: 00f6f490 */
/* Ghidra symbol: FUN_00f6f490 */


undefined8 FUN_00f6f490(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  iVar3 = *(int *)(param_1 + 0x94);
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      if (*(int *)(param_1 + 0x44 + (longlong)iVar2 * 8) < 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((*(char *)(param_1 + 0x30) != '\t') && (*(int *)(param_1 + 0x94) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

