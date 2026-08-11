/* Ghidra address: 00f03370 */
/* Ghidra symbol: FUN_00f03370 */


undefined8 FUN_00f03370(longlong param_1)

{
  char cVar1;
  
  if (((*(ushort *)(param_1 + 0x4f) & 0x10) != 0) &&
     (cVar1 = FUN_00f02fa0(param_1), *(char *)(param_1 + 0x4e) != cVar1)) {
    return 1;
  }
  return 0;
}

