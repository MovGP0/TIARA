/* Ghidra address: 00c68700 */
/* Ghidra symbol: FUN_00c68700 */


void FUN_00c68700(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x778) == 0) {
    FUN_0064de00(param_1,L"New Places Bar item");
  }
  else {
    FUN_0064de00(param_1,L"Places Bar item");
  }
  return;
}

