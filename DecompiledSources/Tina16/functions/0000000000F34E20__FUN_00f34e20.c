/* Ghidra address: 00f34e20 */
/* Ghidra symbol: FUN_00f34e20 */


void FUN_00f34e20(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

