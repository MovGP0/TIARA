/* Ghidra address: 0042b020 */
/* Ghidra symbol: FUN_0042b020 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0042b020(void)

{
  if (DAT_0200c310 == 0) {
    DAT_0200c310 = thunk_FUN_04163be6(L"PSAPI.dll");
    if (DAT_0200c310 == 0) {
      return 0;
    }
    _DAT_0200c318 = FUN_00427c10(DAT_0200c310,L"EnumProcesses");
    _DAT_0200c320 = FUN_00427c10(DAT_0200c310,L"EnumProcessModules");
    _DAT_0200c328 = FUN_00427c10(DAT_0200c310,L"GetModuleBaseNameW");
    _DAT_0200c330 = FUN_00427c10(DAT_0200c310,L"GetModuleFileNameExW");
    _DAT_0200c338 = FUN_00427c10(DAT_0200c310,L"GetModuleBaseNameA");
    _DAT_0200c340 = FUN_00427c10(DAT_0200c310,L"GetModuleFileNameExA");
    _DAT_0200c348 = FUN_00427c10(DAT_0200c310,L"GetModuleBaseNameW");
    _DAT_0200c350 = FUN_00427c10(DAT_0200c310,L"GetModuleFileNameExW");
    _DAT_0200c358 = FUN_00427c10(DAT_0200c310,L"GetModuleInformation");
    _DAT_0200c360 = FUN_00427c10(DAT_0200c310,L"EmptyWorkingSet");
    _DAT_0200c368 = FUN_00427c10(DAT_0200c310,L"QueryWorkingSet");
    _DAT_0200c370 = FUN_00427c10(DAT_0200c310,L"InitializeProcessForWsWatch");
    DAT_0200c378 = FUN_00427c10(DAT_0200c310,L"GetMappedFileNameW");
    _DAT_0200c380 = FUN_00427c10(DAT_0200c310,L"GetDeviceDriverBaseNameW");
    _DAT_0200c388 = FUN_00427c10(DAT_0200c310,L"GetDeviceDriverFileNameW");
    _DAT_0200c390 = FUN_00427c10(DAT_0200c310,L"GetMappedFileNameA");
    _DAT_0200c398 = FUN_00427c10(DAT_0200c310,L"GetDeviceDriverBaseNameA");
    _DAT_0200c3a0 = FUN_00427c10(DAT_0200c310,L"GetDeviceDriverFileNameA");
    _DAT_0200c3a8 = FUN_00427c10(DAT_0200c310,L"GetMappedFileNameW");
    _DAT_0200c3b0 = FUN_00427c10(DAT_0200c310,L"GetDeviceDriverBaseNameW");
    _DAT_0200c3b8 = FUN_00427c10(DAT_0200c310,L"GetDeviceDriverFileNameW");
    _DAT_0200c3c0 = FUN_00427c10(DAT_0200c310,L"EnumDeviceDrivers");
    _DAT_0200c3c8 = FUN_00427c10(DAT_0200c310,L"GetProcessMemoryInfo");
  }
  return 1;
}

