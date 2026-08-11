/* Ghidra address: 0083fd00 */
/* Ghidra symbol: FUN_0083fd00 */


void FUN_0083fd00(longlong param_1,int param_2,int param_3)

{
  code *pcVar1;
  
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FUN_0083da90(param_1 + 0x530,param_2 + 1,param_3 + 1);
  }
  FUN_00844a80(param_1,param_1 + 0x4ac,param_2,param_3);
  FUN_00844a80(param_1,param_1 + 0x49c,param_2,param_3);
  FUN_00844a80(param_1,param_1 + 0x51c,param_2,param_3);
  pcVar1 = (code *)FUN_00411550(param_1,0xffa1);
  (*pcVar1)(param_1,param_2,param_3);
  if (*(longlong *)(param_1 + 0x530) != 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xff9c);
    (*pcVar1)(param_1);
  }
  FUN_00848f80(param_1);
  return;
}

