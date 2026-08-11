/* Ghidra address: 005b4090 */
/* Ghidra symbol: FUN_005b4090 */


void FUN_005b4090(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x98) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x98) + -0x20))(*(undefined8 *)(param_2 + 0x98),1);
  }
  return;
}

