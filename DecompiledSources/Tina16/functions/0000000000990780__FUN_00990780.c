/* Ghidra address: 00990780 */
/* Ghidra symbol: FUN_00990780 */


bool FUN_00990780(longlong *param_1)

{
  uint uVar1;
  longlong local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x108))(param_1,local_20);
  uVar1 = 0;
  if (local_20[0] != 0) {
    uVar1 = *(uint *)(local_20[0] + -4) >> 1;
  }
  FUN_00414520(local_20);
  return uVar1 != 0;
}

