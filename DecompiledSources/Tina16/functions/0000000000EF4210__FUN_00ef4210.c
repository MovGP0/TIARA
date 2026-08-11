/* Ghidra address: 00ef4210 */
/* Ghidra symbol: FUN_00ef4210 */


void FUN_00ef4210(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_004095f0(*param_1,*(ushort *)(*param_1 + 10) + 0x1d);
    *param_1 = 0;
  }
  return;
}

