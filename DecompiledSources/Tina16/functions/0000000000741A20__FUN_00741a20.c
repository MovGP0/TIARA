/* Ghidra address: 00741a20 */
/* Ghidra symbol: FUN_00741a20 */


void FUN_00741a20(longlong param_1,longlong *param_2)

{
  HDC hdcTarget;
  undefined1 auStackY_98 [32];
  undefined1 local_60 [16];
  undefined1 *local_50;
  RECT *local_40;
  RECT local_38;
  HDC local_28;
  HPAINTBUFFER local_20;
  
  local_50 = auStackY_98;
  FUN_007418a0(*(undefined8 *)(param_1 + 0x90),&local_38);
  hdcTarget = (HDC)FUN_005ffa40(param_2);
  local_20 = BeginBufferedPaint(hdcTarget,&local_38,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,&local_28)
  ;
  FUN_005ffb10(param_2,local_28);
  FUN_007418a0(*(undefined8 *)(param_1 + 0x90),local_60);
  (**(code **)(*param_2 + 0x110))
            (param_2,local_60,
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x318) + 0x18));
  local_40 = &local_38;
  BufferedPaintSetAlpha(local_20,local_40,0xff);
  EndBufferedPaint(local_20,-1);
  return;
}

