/* Ghidra address: 00781460 */
/* Ghidra symbol: FUN_00781460 */


void FUN_00781460(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xa0) + -0x20))(*(undefined8 *)(param_2 + 0xa0),1);
  }
  return;
}

