/* Ghidra address: 01586290 */
/* Ghidra symbol: FUN_01586290 */


void FUN_01586290(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xb8) + -0x20))(*(undefined8 *)(param_2 + 0xb8),1);
  }
  return;
}

