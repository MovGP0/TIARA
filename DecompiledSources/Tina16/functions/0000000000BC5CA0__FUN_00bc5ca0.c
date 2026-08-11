/* Ghidra address: 00bc5ca0 */
/* Ghidra symbol: FUN_00bc5ca0 */


void FUN_00bc5ca0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  return;
}

