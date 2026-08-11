/* Ghidra address: 00cc1c70 */
/* Ghidra symbol: FUN_00cc1c70 */


void FUN_00cc1c70(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x50);
  (**(code **)(**(longlong **)(param_2 + 0x38) + 8))(*(undefined8 *)(param_2 + 0x38));
  return;
}

