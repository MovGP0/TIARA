/* Ghidra address: 004f5a30 */
/* Ghidra symbol: FUN_004f5a30 */


void FUN_004f5a30(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

