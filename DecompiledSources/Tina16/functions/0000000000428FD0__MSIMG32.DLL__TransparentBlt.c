/* Ghidra address: 00428fd0 */
/* Ghidra symbol: MSIMG32.DLL::TransparentBlt */


BOOL __stdcall
TransparentBlt(HDC hdcDest,int xoriginDest,int yoriginDest,int wDest,int hDest,HDC hdcSrc,
              int xoriginSrc,int yoriginSrc,int wSrc,int hSrc,UINT crTransparent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00428fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TransparentBlt(hdcDest,xoriginDest,yoriginDest,wDest,hDest,hdcSrc,xoriginSrc,yoriginSrc,
                         wSrc,hSrc,crTransparent);
  return BVar1;
}

