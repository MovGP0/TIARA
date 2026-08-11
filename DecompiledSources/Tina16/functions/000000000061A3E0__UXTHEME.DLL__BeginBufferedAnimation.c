/* Ghidra address: 0061a3e0 */
/* Ghidra symbol: UXTHEME.DLL::BeginBufferedAnimation */


HANIMATIONBUFFER __stdcall
BeginBufferedAnimation
          (HWND hwnd,HDC hdcTarget,RECT *prcTarget,BP_BUFFERFORMAT dwFormat,
          BP_PAINTPARAMS *pPaintParams,BP_ANIMATIONPARAMS *pAnimationParams,HDC *phdcFrom,
          HDC *phdcTo)

{
  HANIMATIONBUFFER pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0061a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = BeginBufferedAnimation
                     (hwnd,hdcTarget,prcTarget,dwFormat,pPaintParams,pAnimationParams,phdcFrom,
                      phdcTo);
  return pvVar1;
}

