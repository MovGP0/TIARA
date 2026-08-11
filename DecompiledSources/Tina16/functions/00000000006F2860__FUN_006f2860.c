/* Ghidra address: 006f2860 */
/* Ghidra symbol: FUN_006f2860 */


void FUN_006f2860(longlong param_1,HDC param_2,undefined8 *param_3)

{
  HDC local_38;
  RECT local_30;
  HPAINTBUFFER local_20;
  
  local_30._0_8_ = *param_3;
  local_30._8_8_ = param_3[1];
  local_20 = BeginBufferedPaint(param_2,&local_30,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,&local_38);
  thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x540),0x318,local_38,4);
  BufferedPaintSetAlpha(local_20,&local_30,0xff);
  EndBufferedPaint(local_20,-1);
  return;
}

