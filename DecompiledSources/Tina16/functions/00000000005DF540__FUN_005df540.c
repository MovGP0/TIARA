/* Ghidra address: 005df540 */
/* Ghidra symbol: FUN_005df540 */


void FUN_005df540(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x88) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x88) + -0x20))(*(undefined8 *)(param_2 + 0x88),1);
  }
  return;
}

