/* Ghidra address: 00f35be0 */
/* Ghidra symbol: FUN_00f35be0 */


void FUN_00f35be0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

