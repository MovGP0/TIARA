/* Ghidra address: 00cc1b60 */
/* Ghidra symbol: FUN_00cc1b60 */


void FUN_00cc1b60(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x50);
  (**(code **)(**(longlong **)(param_2 + 0x48) + 8))(*(undefined8 *)(param_2 + 0x48));
  return;
}

