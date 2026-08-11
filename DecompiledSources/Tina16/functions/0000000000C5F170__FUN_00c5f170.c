/* Ghidra address: 00c5f170 */
/* Ghidra symbol: FUN_00c5f170 */


uint FUN_00c5f170(longlong param_1)

{
  longlong lVar1;
  uint unaff_EBX;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x948);
    unaff_EBX = (uint)*(ushort *)(lVar1 + 0xe0);
    FUN_0064e140(lVar1);
  }
  return unaff_EBX;
}

