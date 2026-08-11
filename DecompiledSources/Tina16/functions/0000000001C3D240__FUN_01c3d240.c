/* Ghidra address: 01c3d240 */
/* Ghidra symbol: FUN_01c3d240 */


void FUN_01c3d240(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))(*(longlong **)(param_1 + 0x700));
  }
  else {
    *(undefined4 *)(param_1 + 0x92c) = param_2;
  }
  return;
}

