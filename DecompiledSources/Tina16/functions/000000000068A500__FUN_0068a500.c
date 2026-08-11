/* Ghidra address: 0068a500 */
/* Ghidra symbol: FUN_0068a500 */


void FUN_0068a500(longlong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  FUN_00687a80(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"BUTTON");
  pcVar1 = (code *)FUN_00411550(param_1,0xffc5);
  uVar2 = (*pcVar1)(param_1);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | 4 |
       *(uint *)(&DAT_01dfac30 + (ulonglong)*(byte *)(param_1 + 0x498) * 4 + (uVar2 & 0xff) * 8);
  return;
}

