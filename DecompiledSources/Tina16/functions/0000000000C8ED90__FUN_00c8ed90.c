/* Ghidra address: 00c8ed90 */
/* Ghidra symbol: FUN_00c8ed90 */


void FUN_00c8ed90(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x58);
  (**(code **)(**(longlong **)(param_2 + 0x38) + 8))(*(undefined8 *)(param_2 + 0x38));
  return;
}

