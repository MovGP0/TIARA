/* Ghidra address: 00cc16e0 */
/* Ghidra symbol: FUN_00cc16e0 */


void FUN_00cc16e0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x50);
  (**(code **)(**(longlong **)(param_2 + 0x40) + 8))(*(undefined8 *)(param_2 + 0x40));
  return;
}

