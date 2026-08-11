/* Ghidra address: 0065a1e0 */
/* Ghidra symbol: FUN_0065a1e0 */


void FUN_0065a1e0(longlong param_1)

{
  if ((*(char *)(param_1 + 0xa9) == '\0') && (*(longlong *)(param_1 + 0x78) != 0)) {
    FUN_00654870(param_1,0);
  }
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || ((*(uint *)(param_1 + 0xa0) & 0x400) != 0)) {
    FUN_00655e40(param_1);
  }
  return;
}

