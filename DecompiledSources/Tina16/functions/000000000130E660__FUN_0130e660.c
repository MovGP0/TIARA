/* Ghidra address: 0130e660 */
/* Ghidra symbol: FUN_0130e660 */


undefined8 FUN_0130e660(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(*(longlong *)(param_1 + 0x988) + (longlong)iVar1 * 4) == param_2) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x33);
  return 0;
}

