/* Ghidra address: 01a0f070 */
/* Ghidra symbol: FUN_01a0f070 */


void FUN_01a0f070(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x70) + -0x20))(*(undefined8 *)(param_2 + 0x70),1);
  }
  return;
}

