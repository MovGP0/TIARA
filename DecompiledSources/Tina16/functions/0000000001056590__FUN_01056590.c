/* Ghidra address: 01056590 */
/* Ghidra symbol: FUN_01056590 */


undefined8 FUN_01056590(void)

{
  undefined8 uVar1;
  
  if ((*(longlong *)PTR_DAT_02003fc0 == 0) ||
     (*(char *)(*(longlong *)PTR_DAT_02003fc0 + 0x6c9) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)PTR_DAT_02003fc0 >> 8),1);
  }
  return uVar1;
}

