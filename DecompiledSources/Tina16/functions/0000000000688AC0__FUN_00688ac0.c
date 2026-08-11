/* Ghidra address: 00688ac0 */
/* Ghidra symbol: FUN_00688ac0 */


void FUN_00688ac0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FUN_00687a80(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"BUTTON");
  iVar1 = FUN_0044f080();
  if (iVar1 < 6) {
    *(uint *)(param_2 + 8) =
         *(uint *)(param_2 + 8) |
         *(uint *)(&DAT_01df9c14 + (ulonglong)*(byte *)(param_1 + 0x4a8) * 4);
  }
  else if (*(char *)(param_1 + 0x4fc) == '\x01') {
    *(uint *)(param_2 + 8) =
         *(uint *)(param_2 + 8) |
         *(uint *)(&DAT_01df9c1c + (ulonglong)*(byte *)(param_1 + 0x4a8) * 4);
  }
  else if (*(char *)(param_1 + 0x4fc) == '\x02') {
    *(uint *)(param_2 + 8) =
         *(uint *)(param_2 + 8) |
         *(uint *)(&DAT_01df9c24 + (ulonglong)*(byte *)(param_1 + 0x4a8) * 4);
  }
  else {
    *(uint *)(param_2 + 8) =
         *(uint *)(param_2 + 8) |
         *(uint *)(&DAT_01df9c14 + (ulonglong)*(byte *)(param_1 + 0x4a8) * 4);
  }
  return;
}

