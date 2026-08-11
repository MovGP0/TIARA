/* Ghidra address: 01af23d0 */
/* Ghidra symbol: FUN_01af23d0 */


void FUN_01af23d0(longlong param_1,char param_2)

{
  code *local_18;
  longlong local_10;
  
  if (*(char *)(param_1 + 0x7e0) != param_2) {
    *(char *)(param_1 + 0x7e0) = param_2;
    local_10 = param_1;
    if (param_2 == '\0') {
      local_18 = FUN_01af1a30;
      FUN_00f834f0(&local_18);
    }
    else {
      local_18 = FUN_01af1a30;
      FUN_00f833f0(&local_18,100);
    }
  }
  return;
}

