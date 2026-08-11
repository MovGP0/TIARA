/* Ghidra address: 00800690 */
/* Ghidra symbol: FUN_00800690 */


void FUN_00800690(longlong param_1)

{
  FUN_0065a330(param_1);
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_005ff880(*(longlong *)(param_1 + 0x4e0),*(undefined8 *)(param_1 + 0xb8));
  }
  return;
}

