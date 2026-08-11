/* Ghidra address: 0061a360 */
/* Ghidra symbol: UXTHEME.DLL::BeginBufferedPaint */


HPAINTBUFFER __stdcall
BeginBufferedPaint(HDC hdcTarget,RECT *prcTarget,BP_BUFFERFORMAT dwFormat,
                  BP_PAINTPARAMS *pPaintParams,HDC *phdc)

{
  HPAINTBUFFER pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0061a360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = BeginBufferedPaint(hdcTarget,prcTarget,dwFormat,pPaintParams,phdc);
  return pvVar1;
}

