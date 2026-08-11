/* Ghidra address: 0068c370 */
/* Ghidra symbol: FUN_0068c370 */


void FUN_0068c370(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  bool bVar6;
  
  FUN_00654e40(param_1,param_2);
  pwVar5 = L"LISTBOX";
  FUN_00654d20(param_1,param_2,L"LISTBOX");
  if (*(char *)(param_1 + 0x4cf) == '\0') {
    uVar2 = *(uint *)(&DAT_01dfac5c + (ulonglong)*(byte *)(param_1 + 0x490) * 4);
  }
  else {
    uVar2 = *(uint *)(&DAT_01dfac64 + (ulonglong)*(byte *)(param_1 + 0x490) * 4);
  }
  bVar1 = *(byte *)(param_1 + 0x4cc);
  if (bVar1 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)pwVar5 >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar6 = false;
  }
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | (&DAT_01dfac8c)[bVar6] | 0x300001 |
       *(uint *)(&DAT_01dfac40 + (ulonglong)bVar1 * 4) |
       *(uint *)(&DAT_01dfac54 + (ulonglong)*(byte *)(param_1 + 0x4ce) * 4) | uVar2 |
       *(uint *)(&DAT_01dfac6c + (ulonglong)*(byte *)(param_1 + 0x4cd) * 4) |
       *(uint *)(&DAT_01dfac74 + (ulonglong)(*(int *)(param_1 + 0x4c0) != 0) * 4) |
       *(uint *)(&DAT_01df9554 + (ulonglong)*(byte *)(param_1 + 0x4b4) * 4) |
       *(uint *)(&DAT_01dfac7c + (ulonglong)(*(int *)(param_1 + 0x4d0) != 0) * 4);
  if (((*PTR_DAT_02003210 != '\0') && (*(char *)(param_1 + 0x390) != '\0')) &&
     (*(char *)(param_1 + 0x4b4) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  uVar4 = (*pcVar3)(param_1);
  *(uint *)(param_2 + 0x30) =
       *(uint *)(param_2 + 0x30) & ~(*(uint *)(&DAT_01dfac84 + (uVar4 & 0xff) * 4) | 1);
  return;
}

