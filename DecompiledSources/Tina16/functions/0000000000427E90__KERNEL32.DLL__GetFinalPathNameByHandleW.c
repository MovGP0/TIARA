/* Ghidra address: 00427e90 */
/* Ghidra symbol: KERNEL32.DLL::GetFinalPathNameByHandleW */


DWORD __stdcall
GetFinalPathNameByHandleW(HANDLE hFile,LPWSTR lpszFilePath,DWORD cchFilePath,DWORD dwFlags)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00427e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFinalPathNameByHandleW(hFile,lpszFilePath,cchFilePath,dwFlags);
  return DVar1;
}

