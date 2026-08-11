/* Ghidra address: 005a1f70 */
/* Ghidra symbol: FUN_005a1f70 */


void FUN_005a1f70(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + -0x20))(*(undefined8 *)(param_2 + 0x58),1);
  }
  return;
}

