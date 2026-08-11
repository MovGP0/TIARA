/* Ghidra address: 009a8070 */
/* Ghidra symbol: FUN_009a8070 */


void FUN_009a8070(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + -0x20))(*(undefined8 *)(param_2 + 0x58),1);
  }
  return;
}

