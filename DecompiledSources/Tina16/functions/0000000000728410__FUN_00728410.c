/* Ghidra address: 00728410 */
/* Ghidra symbol: FUN_00728410 */


void FUN_00728410(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xd8) + -0x20))(*(undefined8 *)(param_2 + 0xd8),1);
  }
  return;
}

