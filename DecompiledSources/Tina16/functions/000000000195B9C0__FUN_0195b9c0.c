/* Ghidra address: 0195b9c0 */
/* Ghidra symbol: FUN_0195b9c0 */


undefined8 FUN_0195b9c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x290);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 8) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

