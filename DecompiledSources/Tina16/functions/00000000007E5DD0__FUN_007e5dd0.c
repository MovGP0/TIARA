/* Ghidra address: 007e5dd0 */
/* Ghidra symbol: FUN_007e5dd0 */


BOOL FUN_007e5dd0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  HANDLE hProcess;
  BOOL local_c;
  
  local_c = 0;
  uVar1 = FUN_00427be0(L"kernel32.dll");
  lVar2 = FUN_00427c10(uVar1,L"IsWow64Process");
  if (lVar2 != 0) {
    hProcess = (HANDLE)thunk_FUN_04149b47();
    IsWow64Process(hProcess,&local_c);
  }
  return local_c;
}

