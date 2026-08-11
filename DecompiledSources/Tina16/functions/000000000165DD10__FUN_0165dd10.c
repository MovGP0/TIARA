/* Ghidra address: 0165dd10 */
/* Ghidra symbol: FUN_0165dd10 */


undefined8 FUN_0165dd10(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x228);
  uVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x220) + (longlong)(int)uVar1 * 8) == param_2) {
        return CONCAT71((int7)(uVar1 >> 8),1);
      }
      uVar1 = (ulonglong)((int)uVar1 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

