/* Ghidra address: 00b00cc0 */
/* Ghidra symbol: FUN_00b00cc0 */


void FUN_00b00cc0(longlong param_1)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x18) == 0) {
    FUN_0064de00(*(longlong *)(param_1 + 0x6e8),0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x18) = 1;
  }
  return;
}

