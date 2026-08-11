/* Ghidra address: 00f03270 */
/* Ghidra symbol: FUN_00f03270 */


undefined8 FUN_00f03270(longlong param_1)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x4f) & 1) != 0) &&
     (iVar1 = FUN_00f02ee0(param_1), *(int *)(param_1 + 0x18) != iVar1)) {
    return 1;
  }
  return 0;
}

