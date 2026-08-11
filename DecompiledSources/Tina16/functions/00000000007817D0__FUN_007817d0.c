/* Ghidra address: 007817d0 */
/* Ghidra symbol: FUN_007817d0 */


void FUN_007817d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x120) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x120) + -0x20))(*(undefined8 *)(param_2 + 0x120),1);
  }
  return;
}

