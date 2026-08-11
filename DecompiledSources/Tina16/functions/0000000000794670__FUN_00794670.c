/* Ghidra address: 00794670 */
/* Ghidra symbol: FUN_00794670 */


void FUN_00794670(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + -0x20))(*(undefined8 *)(param_2 + 0x58),1);
  }
  return;
}

