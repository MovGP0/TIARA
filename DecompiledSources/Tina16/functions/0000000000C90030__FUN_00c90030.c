/* Ghidra address: 00c90030 */
/* Ghidra symbol: FUN_00c90030 */


void FUN_00c90030(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x55) == '\0') {
    FUN_00c8f050(param_1,0,4,param_2);
  }
  else {
    FUN_00c8f050(param_1,0x29,4,param_2);
  }
  return;
}

