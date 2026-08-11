/* Ghidra address: 01716120 */
/* Ghidra symbol: FUN_01716120 */


undefined8 FUN_01716120(longlong param_1)

{
  bool bVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x78) == '\0') {
    bVar1 = *(int *)(param_1 + 0x4c) < 0;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x4c) < 1;
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x80) >> 8),bVar1);
}

