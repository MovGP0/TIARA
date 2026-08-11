/* Ghidra address: 00797bc0 */
/* Ghidra symbol: FUN_00797bc0 */


void FUN_00797bc0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + -0x20))(*(undefined8 *)(param_2 + 0x58),1);
  }
  return;
}

