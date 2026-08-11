/* Ghidra address: 01bd5f20 */
/* Ghidra symbol: FUN_01bd5f20 */


undefined8 FUN_01bd5f20(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0x560) == 0) || (*(longlong *)(param_1 + 0x568) == 0)) ||
     ((lVar2 = *(longlong *)(param_1 + 0x560), *(char *)(lVar2 + 0xa9) == '\0' &&
      (lVar2 = *(longlong *)(param_1 + 0x568), *(char *)(lVar2 + 0xa9) == '\0')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar1;
}

