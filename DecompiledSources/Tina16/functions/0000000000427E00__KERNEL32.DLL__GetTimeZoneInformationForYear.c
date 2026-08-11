/* Ghidra address: 00427e00 */
/* Ghidra symbol: KERNEL32.DLL::GetTimeZoneInformationForYear */


BOOL __stdcall
GetTimeZoneInformationForYear
          (USHORT wYear,PDYNAMIC_TIME_ZONE_INFORMATION pdtzi,LPTIME_ZONE_INFORMATION ptzi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00427e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTimeZoneInformationForYear(wYear,pdtzi,ptzi);
  return BVar1;
}

