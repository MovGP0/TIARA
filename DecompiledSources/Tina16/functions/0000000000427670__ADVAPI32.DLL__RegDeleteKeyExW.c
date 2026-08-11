/* Ghidra address: 00427670 */
/* Ghidra symbol: ADVAPI32.DLL::RegDeleteKeyExW */


LSTATUS __stdcall RegDeleteKeyExW(HKEY hKey,LPCWSTR lpSubKey,REGSAM samDesired,DWORD Reserved)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00427670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegDeleteKeyExW(hKey,lpSubKey,samDesired,Reserved);
  return LVar1;
}

