/* Ghidra address: 004aa880 */
/* Ghidra symbol: FUN_004aa880 */


void FUN_004aa880(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x98) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x98) + -0x20))(*(undefined8 *)(param_2 + 0x98),1);
  }
  return;
}

