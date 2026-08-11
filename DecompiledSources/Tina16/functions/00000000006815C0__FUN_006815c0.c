/* Ghidra address: 006815c0 */
/* Ghidra symbol: FUN_006815c0 */


void FUN_006815c0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"EDIT");
  pcVar1 = (code *)FUN_00411550(param_1,0xffc5);
  uVar2 = (*pcVar1)(param_1);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | 0xc0 |
       *(uint *)(&DAT_01df9b18 + (ulonglong)*(byte *)(param_1 + 0x490) * 4 + (uVar2 & 0xff) * 0xc) |
       *(uint *)(&DAT_01df9554 + (ulonglong)*(byte *)(param_1 + 0x498) * 4) |
       *(uint *)(&DAT_01df9b30 + (ulonglong)(*(short *)(param_1 + 0x49a) != 0) * 4) |
       *(uint *)(&DAT_01df9b5c + (ulonglong)*(byte *)(param_1 + 0x4c0) * 4) |
       *(uint *)(&DAT_01df9b38 + (ulonglong)*(byte *)(param_1 + 0x49c) * 4) |
       *(uint *)(&DAT_01df9b40 + (ulonglong)*(byte *)(param_1 + 0x4a1) * 4) |
       *(uint *)(&DAT_01df9b4c + (ulonglong)*(byte *)(param_1 + 0x49f) * 4) |
       *(uint *)(&DAT_01df9b54 + (ulonglong)*(byte *)(param_1 + 0x4a0) * 4);
  if (((*PTR_DAT_02003210 != '\0') && (*(char *)(param_1 + 0x390) != '\0')) &&
     (*(char *)(param_1 + 0x498) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  return;
}

