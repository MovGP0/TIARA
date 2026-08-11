/* Ghidra address: 00806af0 */
/* Ghidra symbol: FUN_00806af0 */


void FUN_00806af0(longlong param_1,int param_2)

{
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || (*(longlong *)(param_1 + 0x78) == 0)) {
    FUN_0064cb30();
  }
  else {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffff | param_2 << 0x10;
    if (((*(ushort *)(param_1 + 0x34) & 1) == 0) && (*(char *)(param_1 + 0x4d7) != '\x03')) {
      FUN_00800470(param_1,0);
    }
  }
  return;
}

