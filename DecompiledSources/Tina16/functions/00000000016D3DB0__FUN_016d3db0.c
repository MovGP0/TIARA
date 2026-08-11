/* Ghidra address: 016d3db0 */
/* Ghidra symbol: FUN_016d3db0 */


ulonglong FUN_016d3db0(longlong param_1)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = (*(ushort *)(param_1 + 0x4b4) / 8) * *(short *)(param_1 + 0x4a8);
  *(ushort *)(param_1 + 0x4b2) = uVar2;
  *(uint *)(param_1 + 0x4ae) = *(int *)(param_1 + 0x4aa) * (uint)uVar2;
  iVar1 = *(int *)(param_1 + 0x49c);
  *(int *)(param_1 + 0x498) = iVar1 - iVar1 % (int)(uint)*(ushort *)(param_1 + 0x4b2);
  return (longlong)iVar1 / (longlong)(int)(uint)*(ushort *)(param_1 + 0x4b2) & 0xffffffff;
}

