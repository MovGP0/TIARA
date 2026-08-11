/* Ghidra address: 01481230 */
/* Ghidra symbol: FUN_01481230 */


void FUN_01481230(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 200) != 0) {
    (**(code **)(**(longlong **)(param_2 + 200) + -0x20))(*(undefined8 *)(param_2 + 200),1);
  }
  return;
}

