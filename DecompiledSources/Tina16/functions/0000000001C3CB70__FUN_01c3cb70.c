/* Ghidra address: 01c3cb70 */
/* Ghidra symbol: FUN_01c3cb70 */


void FUN_01c3cb70(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6c8)) {
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))(*(longlong **)(param_1 + 0x7a8));
  }
  else {
    *(undefined4 *)(param_1 + 0x928) = param_2;
  }
  return;
}

