/* Ghidra address: 00f36cc0 */
/* Ghidra symbol: FUN_00f36cc0 */


void FUN_00f36cc0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

