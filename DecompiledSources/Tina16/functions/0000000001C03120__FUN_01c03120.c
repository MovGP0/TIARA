/* Ghidra address: 01c03120 */
/* Ghidra symbol: FUN_01c03120 */


void FUN_01c03120(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStackY_c8 [32];
  undefined1 local_90 [16];
  undefined1 *local_80;
  HDC local_78;
  HDC local_70;
  undefined1 local_68 [12];
  RECT local_5c [3];
  HPAINTBUFFER local_20;
  
  local_80 = auStackY_c8;
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    if ((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) && ((char)param_1[0x8f] != '\0')) &&
       ((*(uint *)((longlong)param_1 + 0xa4) & 0x8000) != 0)) {
      uVar2 = FUN_0065b870(param_1);
      local_70 = (HDC)thunk_FUN_041804fe(uVar2,local_68);
      local_20 = BeginBufferedPaint(local_70,local_5c,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,
                                    &local_78);
      if (local_20 != (HPAINTBUFFER)0x0) {
        (**(code **)(*param_1 + 0xe0))(param_1,local_90);
        uVar2 = thunk_FUN_041715dd(4);
        thunk_FUN_03984819(local_78,local_90,uVar2);
        FUN_0064fca0(param_1,0x318,local_78,4);
        EndBufferedPaint(local_20,-1);
      }
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_0416269d(uVar2,local_68);
    }
    else if ((*(uint *)((longlong)param_1 + 0xa4) & 0x100) == 0) {
      *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x100;
      FUN_00657db0(param_1,param_2);
      *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffeff;
    }
  }
  else {
    FUN_00657db0(param_1,param_2);
  }
  return;
}

