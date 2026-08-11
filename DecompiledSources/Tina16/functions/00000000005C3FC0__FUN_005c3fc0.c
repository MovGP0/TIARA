/* Ghidra address: 005c3fc0 */
/* Ghidra symbol: FUN_005c3fc0 */


void FUN_005c3fc0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x68) + -0x20))(*(undefined8 *)(param_2 + 0x68),1);
  }
  return;
}

