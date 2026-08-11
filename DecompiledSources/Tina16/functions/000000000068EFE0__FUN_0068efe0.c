/* Ghidra address: 0068efe0 */
/* Ghidra symbol: FUN_0068efe0 */


void FUN_0068efe0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"STATIC");
  pcVar1 = (code *)FUN_00411550(param_1,0xffc5);
  uVar2 = (*pcVar1)(param_1);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | 0x100 |
       *(uint *)(&DAT_01dfac9c + (ulonglong)*(byte *)(param_1 + 0x490) * 4 + (uVar2 & 0xff) * 0xc) |
       *(uint *)(&DAT_01dfacb4 + (ulonglong)*(byte *)(param_1 + 0x492) * 4);
  if (*(char *)(param_1 + 0x4a0) == '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
  }
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
  return;
}

