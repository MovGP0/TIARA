/* Ghidra address: 0065ef00 */
/* Ghidra symbol: FUN_0065ef00 */


void FUN_0065ef00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x388) != 0) {
    if (*(char *)(param_1 + 0x368) == '\x01') {
      FUN_0065eec0(param_1,1);
    }
    else if (*(char *)(param_1 + 0x368) == '\0') {
      FUN_0065eec0(param_1,0);
    }
  }
  return;
}

