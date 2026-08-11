/* Ghidra address: 006d7380 */
/* Ghidra symbol: FUN_006d7380 */


void FUN_006d7380(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x540) != 0) && ((*(ushort *)(param_1 + 0x34) & 8) == 0)) {
    FUN_006d7820(param_1,1,1);
    FUN_00410f20(*(undefined8 *)(param_1 + 0x540));
    *(undefined8 *)(param_1 + 0x540) = 0;
  }
  return;
}

