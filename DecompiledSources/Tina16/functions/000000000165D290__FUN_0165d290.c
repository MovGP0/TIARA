/* Ghidra address: 0165d290 */
/* Ghidra symbol: FUN_0165d290 */


void FUN_0165d290(longlong param_1)

{
  longlong local_20 [2];
  
  FUN_00409a70(param_1 + 0x10,local_20,8);
  if (local_20[0] != 0) {
    thunk_FUN_04184b1a(local_20[0],0,0x8000);
  }
  FUN_00419430(param_1,&DAT_0165ae18);
  return;
}

