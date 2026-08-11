/* Ghidra address: 007951a0 */
/* Ghidra symbol: FUN_007951a0 */


void FUN_007951a0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + -0x20))(*(undefined8 *)(param_2 + 0x58),1);
  }
  return;
}

