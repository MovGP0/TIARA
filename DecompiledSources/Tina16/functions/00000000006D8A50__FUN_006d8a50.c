/* Ghidra address: 006d8a50 */
/* Ghidra symbol: FUN_006d8a50 */


void FUN_006d8a50(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_006d3e20(4);
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"msctls_statusbar32");
  if ((*(char *)(param_1 + 0x4a9) == '\0') || (*(char *)(param_1 + 0x4aa) == '\0')) {
    lVar2 = 0;
  }
  else {
    lVar2 = 1;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | (&DAT_01dfdc20)[lVar2];
  plVar3 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if (cVar1 == '\0') {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  }
  else {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 3;
  }
  return;
}

