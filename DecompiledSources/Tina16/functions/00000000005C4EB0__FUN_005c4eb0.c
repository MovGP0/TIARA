/* Ghidra address: 005c4eb0 */
/* Ghidra symbol: FUN_005c4eb0 */


void FUN_005c4eb0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xa8) + -0x20))(*(undefined8 *)(param_2 + 0xa8),1);
  }
  return;
}

