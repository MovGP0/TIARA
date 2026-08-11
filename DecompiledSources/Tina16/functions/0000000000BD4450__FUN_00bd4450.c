/* Ghidra address: 00bd4450 */
/* Ghidra symbol: FUN_00bd4450 */


void FUN_00bd4450(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

