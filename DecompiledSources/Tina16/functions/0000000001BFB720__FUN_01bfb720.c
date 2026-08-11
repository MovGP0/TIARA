/* Ghidra address: 01bfb720 */
/* Ghidra symbol: FUN_01bfb720 */


void FUN_01bfb720(longlong param_1,char param_2)

{
  code *local_18;
  longlong local_10;
  
  if (param_2 != *(char *)(param_1 + 0x4c)) {
    *(char *)(param_1 + 0x4c) = param_2;
    local_18 = FUN_01bfb5b0;
    local_10 = param_1;
    FUN_01bfa3f0(param_1,param_1,&local_18);
  }
  return;
}

