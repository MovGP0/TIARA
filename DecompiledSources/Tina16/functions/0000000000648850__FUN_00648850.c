/* Ghidra address: 00648850 */
/* Ghidra symbol: FUN_00648850 */


void FUN_00648850(undefined8 param_1,RECT *param_2)

{
  HDC local_20;
  HDC local_18;
  HPAINTBUFFER local_10;
  
  local_18 = (HDC)thunk_FUN_040ef593(param_1);
  local_10 = BeginBufferedPaint(local_18,param_2,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,&local_20);
  thunk_FUN_041b2403(param_1,0x318,local_20,4);
  BufferedPaintSetAlpha(local_10,param_2,0xff);
  EndBufferedPaint(local_10,-1);
  thunk_FUN_041a9b5c(param_1,local_18);
  return;
}

