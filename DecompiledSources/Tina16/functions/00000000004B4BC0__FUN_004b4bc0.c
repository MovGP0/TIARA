/* Ghidra address: 004b4bc0 */
/* Ghidra symbol: FUN_004b4bc0 */


void FUN_004b4bc0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(*(longlong **)(param_1 + 0x20));
  }
  FUN_0041b840(param_1 + 0x20,param_2);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(*(longlong **)(param_1 + 0x20),param_1);
  }
  return;
}

