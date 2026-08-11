/* Ghidra address: 00ee1b20 */
/* Ghidra symbol: FUN_00ee1b20 */


void FUN_00ee1b20(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xbd0) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xbd0) + -0x20))(*(undefined8 *)(param_2 + 0xbd0),1);
  }
  return;
}

