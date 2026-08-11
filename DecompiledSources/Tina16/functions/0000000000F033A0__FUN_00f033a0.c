/* Ghidra address: 00f033a0 */
/* Ghidra symbol: FUN_00f033a0 */


undefined8 FUN_00f033a0(longlong param_1)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x4f) & 2) != 0) &&
     (iVar1 = FUN_00f02fb0(param_1), *(int *)(param_1 + 0x1c) != iVar1)) {
    return 1;
  }
  return 0;
}

