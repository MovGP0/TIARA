/* Ghidra address: 004aa800 */
/* Ghidra symbol: FUN_004aa800 */


void FUN_004aa800(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xa8) + -0x20))(*(undefined8 *)(param_2 + 0xa8),1);
  }
  return;
}

