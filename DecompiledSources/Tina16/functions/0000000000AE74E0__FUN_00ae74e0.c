/* Ghidra address: 00ae74e0 */
/* Ghidra symbol: FUN_00ae74e0 */


void FUN_00ae74e0(longlong param_1)

{
  if (*(ulonglong *)(param_1 + 0x40) < *(ulonglong *)(param_1 + 0x48)) {
    *(undefined2 *)(param_1 + 0x3e) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x3e) = **(undefined2 **)(param_1 + 0x48);
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
  }
  return;
}

