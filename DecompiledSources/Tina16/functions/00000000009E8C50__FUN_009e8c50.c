/* Ghidra address: 009e8c50 */
/* Ghidra symbol: FUN_009e8c50 */


void FUN_009e8c50(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))(*(longlong **)(param_1 + 0x28));
  }
  FUN_0041b840(param_1 + 0x28,param_2);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(*(longlong **)(param_1 + 0x28),param_1);
  }
  return;
}

