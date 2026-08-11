/* Ghidra address: 005b31c0 */
/* Ghidra symbol: FUN_005b31c0 */


undefined8 FUN_005b31c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0xb0) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

