/* Ghidra address: 00428480 */
/* Ghidra symbol: MSIMG32.DLL::AlphaBlend */


BOOL __stdcall
AlphaBlend(HDC hdcDest,int xoriginDest,int yoriginDest,int wDest,int hDest,HDC hdcSrc,int xoriginSrc
          ,int yoriginSrc,int wSrc,int hSrc,BLENDFUNCTION ftn)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00428480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AlphaBlend(hdcDest,xoriginDest,yoriginDest,wDest,hDest,hdcSrc,xoriginSrc,yoriginSrc,wSrc,
                     hSrc,ftn);
  return BVar1;
}

