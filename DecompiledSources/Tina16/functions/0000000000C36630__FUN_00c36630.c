/* Ghidra address: 00c36630 */
/* Ghidra symbol: FUN_00c36630 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c36630(void)

{
  undefined8 uVar1;
  
  if (DAT_02019b58 == 0) {
    DAT_02019b58 = FUN_00427be0(L"kernel32.dll");
    if (DAT_02019b58 != 0) {
      DAT_02019b60 = FUN_00427c10(DAT_02019b58,L"CreateToolhelp32Snapshot");
      _DAT_02019b68 = FUN_00427c10(DAT_02019b58,L"Heap32ListFirst");
      _DAT_02019b70 = FUN_00427c10(DAT_02019b58,L"Heap32ListNext");
      _DAT_02019b78 = FUN_00427c10(DAT_02019b58,L"Heap32First");
      _DAT_02019b80 = FUN_00427c10(DAT_02019b58,L"Heap32Next");
      _DAT_02019b88 = FUN_00427c10(DAT_02019b58,L"Toolhelp32ReadProcessMemory");
      _DAT_02019ba0 = FUN_00427c10(DAT_02019b58,L"Process32First");
      _DAT_02019ba8 = FUN_00427c10(DAT_02019b58,L"Process32Next");
      _DAT_02019bb0 = FUN_00427c10(DAT_02019b58,L"Process32FirstW");
      _DAT_02019bb8 = FUN_00427c10(DAT_02019b58,L"Process32NextW");
      DAT_02019b90 = FUN_00427c10(DAT_02019b58,L"Process32FirstW");
      DAT_02019b98 = FUN_00427c10(DAT_02019b58,L"Process32NextW");
      _DAT_02019bc0 = FUN_00427c10(DAT_02019b58,L"Thread32First");
      _DAT_02019bc8 = FUN_00427c10(DAT_02019b58,L"Thread32Next");
      _DAT_02019be0 = FUN_00427c10(DAT_02019b58,L"Module32First");
      _DAT_02019be8 = FUN_00427c10(DAT_02019b58,L"Module32Next");
      _DAT_02019bf0 = FUN_00427c10(DAT_02019b58,L"Module32FirstW");
      _DAT_02019bf8 = FUN_00427c10(DAT_02019b58,L"Module32NextW");
      _DAT_02019bd0 = FUN_00427c10(DAT_02019b58,L"Module32FirstW");
      _DAT_02019bd8 = FUN_00427c10(DAT_02019b58,L"Module32NextW");
    }
  }
  if ((DAT_02019b58 == 0) || (DAT_02019b60 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

