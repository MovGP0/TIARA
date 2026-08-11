/* Ghidra address: 00681eb0 */
/* Ghidra symbol: FUN_00681eb0 */


void FUN_00681eb0(longlong param_1)

{
  FUN_0065a330(param_1);
  if (((*(uint *)(param_1 + 0xa0) & 0x200) != 0) &&
     (((*(ushort *)(param_1 + 0x34) & 0x10) == 0 || ((*(ushort *)(param_1 + 0x34) & 1) == 0)))) {
    FUN_00681990(param_1);
  }
  return;
}

