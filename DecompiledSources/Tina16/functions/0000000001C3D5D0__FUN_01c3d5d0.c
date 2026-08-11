/* Ghidra address: 01c3d5d0 */
/* Ghidra symbol: FUN_01c3d5d0 */


void FUN_01c3d5d0(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x268))(*(longlong **)(param_1 + 0x8a0));
  }
  else {
    *(undefined1 *)(param_1 + 0x938) = param_2;
  }
  return;
}

