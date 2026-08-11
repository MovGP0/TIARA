/* Ghidra address: 005a77f0 */
/* Ghidra symbol: FUN_005a77f0 */


void FUN_005a77f0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

