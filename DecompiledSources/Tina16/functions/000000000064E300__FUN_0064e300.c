/* Ghidra address: 0064e300 */
/* Ghidra symbol: FUN_0064e300 */


void FUN_0064e300(longlong param_1,char param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    if (param_2 == '\0') {
      FUN_0064e230(param_1,0);
    }
    else {
      FUN_0064e230(param_1,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x370) + 0x10) +
                           -1);
    }
  }
  return;
}

