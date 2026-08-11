/* Ghidra address: 00d996c0 */
/* Ghidra symbol: FUN_00d996c0 */


void FUN_00d996c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

