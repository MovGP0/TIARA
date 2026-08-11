/* Ghidra address: 0042a750 */
/* Ghidra symbol: KERNEL32.DLL::IsWow64Process */


BOOL __stdcall IsWow64Process(HANDLE hProcess,PBOOL Wow64Process)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWow64Process(hProcess,Wow64Process);
  return BVar1;
}

