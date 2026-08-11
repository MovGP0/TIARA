/* Ghidra address: 005c2eb0 */
/* Ghidra symbol: FUN_005c2eb0 */


void FUN_005c2eb0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x68) + -0x20))(*(undefined8 *)(param_2 + 0x68),1);
  }
  return;
}

