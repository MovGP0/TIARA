/* Ghidra address: 01b8cda0 */
/* Ghidra symbol: FUN_01b8cda0 */


void FUN_01b8cda0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + -0x20))(*(undefined8 *)(param_2 + 0x58),1);
  }
  return;
}

