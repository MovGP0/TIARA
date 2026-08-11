/* Ghidra address: 0044fcb0 */
/* Ghidra symbol: FUN_0044fcb0 */


void FUN_0044fcb0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0044f0c0(6,0);
  if (cVar1 == '\0') {
    uVar2 = FUN_00427be0(L"NTDLL.DLL");
    DAT_0200c8b8 = FUN_00427c10(uVar2,L"RtlCompareUnicodeString");
    DAT_0200c8b0 = FUN_0044fb90;
  }
  else {
    uVar2 = FUN_00427be0(L"kernel32.dll");
    DAT_0200c8b0 = (code *)FUN_00427c10(uVar2,L"CompareStringOrdinal");
  }
  return;
}

