/* Ghidra address: 00616e60 */
/* Ghidra symbol: FUN_00616e60 */


longlong FUN_00616e60(void)

{
  uint uVar1;
  longlong local_10 [2];
  
  if (DAT_02012078 == '\0') {
    uVar1 = FUN_00427dd0();
    local_10[0] = (ulonglong)uVar1 * 10000;
  }
  else {
    thunk_FUN_04115c23(local_10);
  }
  return local_10[0];
}

