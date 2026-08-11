/* Ghidra address: 00427d50 */
/* Ghidra symbol: KERNEL32.DLL::GetSystemTimes */


BOOL __stdcall GetSystemTimes(LPFILETIME lpIdleTime,LPFILETIME lpKernelTime,LPFILETIME lpUserTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00427d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetSystemTimes(lpIdleTime,lpKernelTime,lpUserTime);
  return BVar1;
}

