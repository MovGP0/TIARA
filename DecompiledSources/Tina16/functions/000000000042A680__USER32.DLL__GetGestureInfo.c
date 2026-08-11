/* Ghidra address: 0042a680 */
/* Ghidra symbol: USER32.DLL::GetGestureInfo */


BOOL __stdcall GetGestureInfo(HGESTUREINFO hGestureInfo,PGESTUREINFO pGestureInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042a680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetGestureInfo(hGestureInfo,pGestureInfo);
  return BVar1;
}

