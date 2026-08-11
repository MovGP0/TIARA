/* Ghidra address: 013650a0 */
/* Ghidra symbol: FUN_013650a0 */


uint FUN_013650a0(longlong param_1)

{
  longlong lVar1;
  uint unaff_EBX;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa10);
    unaff_EBX = (uint)*(ushort *)(lVar1 + 0xe0);
    FUN_0064e140(lVar1);
  }
  return unaff_EBX;
}

