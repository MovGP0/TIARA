/* Ghidra address: 0067f2c0 */
/* Ghidra symbol: FUN_0067f2c0 */


void FUN_0067f2c0(longlong param_1,undefined8 *param_2)

{
  HDC hdcTarget;
  undefined8 uVar1;
  HDC local_38;
  RECT local_30;
  HPAINTBUFFER local_20;
  
  local_30._0_8_ = *param_2;
  local_30._8_8_ = param_2[1];
  hdcTarget = (HDC)FUN_005ffa40(param_1);
  local_20 = BeginBufferedPaint(hdcTarget,&local_30,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,&local_38)
  ;
  uVar1 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x80));
  thunk_FUN_03984819(local_38,&local_30,uVar1);
  BufferedPaintSetAlpha(local_20,&local_30,0xff);
  EndBufferedPaint(local_20,-1);
  return;
}

