/* Ghidra address: 006857d0 */
/* Ghidra symbol: FUN_006857d0 */


void FUN_006857d0(longlong param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"COMBOBOX");
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | 0x200240 |
       *(uint *)(&DAT_01df9b7c + (ulonglong)*(byte *)(param_1 + 0x54a) * 4) |
       *(uint *)(&DAT_01df9b9c + (ulonglong)*(byte *)(param_1 + 0x549) * 4) |
       *(uint *)(&DAT_01df9b90 + (ulonglong)*(byte *)(param_1 + 0x548) * 4);
  return;
}

