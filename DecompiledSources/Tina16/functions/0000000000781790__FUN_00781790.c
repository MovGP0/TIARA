/* Ghidra address: 00781790 */
/* Ghidra symbol: FUN_00781790 */


void FUN_00781790(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x128) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x128) + -0x20))(*(undefined8 *)(param_2 + 0x128),1);
  }
  return;
}

