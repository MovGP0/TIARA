/* Ghidra address: 00f041e0 */
/* Ghidra symbol: FUN_00f041e0 */


undefined8 FUN_00f041e0(longlong param_1)

{
  int iVar1;
  
  if (((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x20) != 0) &&
     (iVar1 = FUN_00f03fc0(param_1), *(int *)(param_1 + 0x20) != iVar1)) {
    return 1;
  }
  return 0;
}

