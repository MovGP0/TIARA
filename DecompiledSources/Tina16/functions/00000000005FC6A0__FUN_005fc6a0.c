/* Ghidra address: 005fc6a0 */
/* Ghidra symbol: FUN_005fc6a0 */


void FUN_005fc6a0(longlong param_1)

{
  FUN_005fbfb0(param_1);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30));
  }
  return;
}

