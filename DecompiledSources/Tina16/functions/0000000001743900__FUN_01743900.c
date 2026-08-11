/* Ghidra address: 01743900 */
/* Ghidra symbol: FUN_01743900 */


void FUN_01743900(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x108) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x108) + -0x20))(*(undefined8 *)(param_2 + 0x108),1);
  }
  return;
}

