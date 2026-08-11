/* Ghidra address: 00f35a50 */
/* Ghidra symbol: FUN_00f35a50 */


void FUN_00f35a50(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

