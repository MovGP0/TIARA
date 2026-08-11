/* Ghidra address: 005a2a00 */
/* Ghidra symbol: FUN_005a2a00 */


void FUN_005a2a00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x98) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x98) + -0x20))(*(undefined8 *)(param_2 + 0x98),1);
  }
  return;
}

