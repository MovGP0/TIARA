/* Ghidra address: 00b07b60 */
/* Ghidra symbol: FUN_00b07b60 */


void FUN_00b07b60(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(*(longlong *)(param_1 + 0x4c0) + 0xa9)) {
    FUN_0064dbe0(*(longlong *)(param_1 + 0x4c0));
    FUN_00b07930(param_1);
  }
  return;
}

