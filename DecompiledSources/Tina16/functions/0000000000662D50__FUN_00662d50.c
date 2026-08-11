/* Ghidra address: 00662d50 */
/* Ghidra symbol: FUN_00662d50 */


void FUN_00662d50(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_00662d50(param_1,*(longlong *)(param_2 + 0x18));
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_00662d50(param_1,*(longlong *)(param_2 + 0x10));
  }
  FUN_00410f20(param_2);
  return;
}

