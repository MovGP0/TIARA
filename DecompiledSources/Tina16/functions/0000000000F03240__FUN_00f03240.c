/* Ghidra address: 00f03240 */
/* Ghidra symbol: FUN_00f03240 */


undefined8 FUN_00f03240(longlong param_1)

{
  char cVar1;
  
  if (((*(ushort *)(param_1 + 0x4f) & 8) != 0) &&
     (cVar1 = FUN_00f02ed0(param_1), *(char *)(param_1 + 0x4d) != cVar1)) {
    return 1;
  }
  return 0;
}

