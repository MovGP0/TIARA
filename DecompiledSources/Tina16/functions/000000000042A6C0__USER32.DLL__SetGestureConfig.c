/* Ghidra address: 0042a6c0 */
/* Ghidra symbol: USER32.DLL::SetGestureConfig */


BOOL __stdcall
SetGestureConfig(HWND hwnd,DWORD dwReserved,UINT cIDs,PGESTURECONFIG pGestureConfig,UINT cbSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetGestureConfig(hwnd,dwReserved,cIDs,pGestureConfig,cbSize);
  return BVar1;
}

