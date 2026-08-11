/* Ghidra address: 004aa840 */
/* Ghidra symbol: FUN_004aa840 */


void FUN_004aa840(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xa0) + -0x20))(*(undefined8 *)(param_2 + 0xa0),1);
  }
  return;
}

