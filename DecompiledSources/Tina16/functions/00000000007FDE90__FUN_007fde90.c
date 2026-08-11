/* Ghidra address: 007fde90 */
/* Ghidra symbol: FUN_007fde90 */


void FUN_007fde90(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xb2) != param_2) {
    FUN_0064e100(param_1);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      FUN_0064fca0(param_1,0xb03d,0,0);
    }
  }
  return;
}

