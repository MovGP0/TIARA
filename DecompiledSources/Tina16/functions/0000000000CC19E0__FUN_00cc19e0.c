/* Ghidra address: 00cc19e0 */
/* Ghidra symbol: FUN_00cc19e0 */


void FUN_00cc19e0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x50);
  (**(code **)(**(longlong **)(param_2 + 0x38) + 8))(*(undefined8 *)(param_2 + 0x38));
  return;
}

