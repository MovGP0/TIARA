/* Ghidra address: 004d1350 */
/* Ghidra symbol: FUN_004d1350 */


void FUN_004d1350(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_039b5f0d(*(undefined8 *)(param_1 + 0x10),(&DAT_01dcb64c)[param_2 & 0xff]);
  FUN_004d10c0(param_1,iVar1 != 0);
  return;
}

