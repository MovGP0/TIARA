/* Ghidra address: 0160e940 */
/* Ghidra symbol: FUN_0160e940 */


undefined8 FUN_0160e940(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = *(int *)(param_1 + (longlong)iVar2 * 4), iVar1 != 0x2000 && (iVar1 != 0x4000))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x20) {
      return 0;
    }
  }
  return 1;
}

