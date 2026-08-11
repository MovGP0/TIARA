/* Ghidra address: 00802e90 */
/* Ghidra symbol: FUN_00802e90 */


void FUN_00802e90(longlong param_1)

{
  FUN_0065d730(param_1);
  if ((*(longlong *)(param_1 + 0x510) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x60))(*(longlong **)(param_1 + 0x510));
  }
  return;
}

