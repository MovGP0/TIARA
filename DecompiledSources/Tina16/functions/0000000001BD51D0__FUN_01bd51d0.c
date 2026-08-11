/* Ghidra address: 01bd51d0 */
/* Ghidra symbol: FUN_01bd51d0 */


void FUN_01bd51d0(longlong *param_1)

{
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
    (**(code **)(*param_1 + 600))(param_1,1);
  }
  FUN_01c045f0(param_1);
  return;
}

