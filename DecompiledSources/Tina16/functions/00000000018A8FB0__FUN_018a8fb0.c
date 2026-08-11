/* Ghidra address: 018a8fb0 */
/* Ghidra symbol: FUN_018a8fb0 */


void FUN_018a8fb0(longlong param_1,undefined4 param_2)

{
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x500),param_2);
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x540),param_2);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x508),param_2);
  }
  return;
}

