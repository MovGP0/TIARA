/* Ghidra address: 00427e30 */
/* Ghidra symbol: KERNEL32.DLL::LocaleNameToLCID */


LCID __stdcall LocaleNameToLCID(LPCWSTR lpName,DWORD dwFlags)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00427e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = LocaleNameToLCID(lpName,dwFlags);
  return LVar1;
}

