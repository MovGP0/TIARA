/* Ghidra address: 007fb2d0 */
/* Ghidra symbol: FUN_007fb2d0 */


void FUN_007fb2d0(longlong param_1,longlong param_2)

{
  if ((((param_2 != 0) && ((*(ushort *)(param_2 + 0x34) & 1) == 0)) &&
      ((*(ushort *)(param_1 + 0x34) & 1) == 0)) && ((*(ushort *)(param_1 + 0x34) & 8) == 0)) {
    FUN_007fb3d0();
  }
  return;
}

