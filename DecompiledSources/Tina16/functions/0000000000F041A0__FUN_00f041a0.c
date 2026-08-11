/* Ghidra address: 00f041a0 */
/* Ghidra symbol: FUN_00f041a0 */


undefined8 FUN_00f041a0(longlong param_1)

{
  char cVar1;
  
  if (((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x80) != 0) &&
     (cVar1 = FUN_00f03fb0(param_1), *(char *)(param_1 + 0x24) != cVar1)) {
    return 1;
  }
  return 0;
}

