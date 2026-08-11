/* Ghidra address: 01a2a720 */
/* Ghidra symbol: FUN_01a2a720 */


void FUN_01a2a720(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  FUN_00414480(param_1 + 0x720);
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x738) = uVar2;
  *(undefined1 *)(param_1 + 0x748) = 0;
  *(undefined1 *)(param_1 + 0x708) = 0;
  FUN_007ffc60(param_1,0);
  cVar1 = FUN_01b256f0(L"ScaleComps",L"LLMLocalv3",&local_10);
  if (cVar1 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),&DAT_01a2a86c);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_10);
  }
  FUN_00414480(&local_10);
  return;
}

