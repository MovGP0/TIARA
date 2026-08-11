/* Ghidra address: 006ea4a0 */
/* Ghidra symbol: FUN_006ea4a0 */


void FUN_006ea4a0(longlong param_1,longlong param_2)

{
  if (DAT_02012470 == 0) {
    DAT_02012470 = thunk_FUN_04163be6(L"RICHED20.DLL");
    if (DAT_02012470 < 0x21) {
      DAT_02012470 = 0;
    }
  }
  FUN_00682ae0(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"RICHEDIT20W");
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01e00548 + (ulonglong)*(byte *)(param_1 + 0x4e8) * 4)
       | *(uint *)(&DAT_01e00550 + (ulonglong)*(byte *)(param_1 + 0x530) * 4);
  return;
}

