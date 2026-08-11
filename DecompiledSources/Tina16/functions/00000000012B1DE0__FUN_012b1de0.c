/* Ghidra address: 012b1de0 */
/* Ghidra symbol: FUN_012b1de0 */


void FUN_012b1de0(longlong param_1)

{
  *(bool *)(param_1 + 0xde9) = *(char *)(*(longlong *)(param_1 + 0xd60) + 0x328) == '\0';
  FUN_012b0230(param_1,2);
  return;
}

