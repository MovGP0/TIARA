/* Ghidra address: 00f032b0 */
/* Ghidra symbol: FUN_00f032b0 */


undefined8 FUN_00f032b0(longlong param_1)

{
  char cVar1;
  
  if (((*(ushort *)(param_1 + 0x4f) & 0x200) != 0) &&
     (cVar1 = FUN_00f02f30(param_1), *(char *)(param_1 + 0x30) != cVar1)) {
    return 1;
  }
  return 0;
}

