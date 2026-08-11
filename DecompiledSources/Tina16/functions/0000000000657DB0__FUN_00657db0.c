/* Ghidra address: 00657db0 */
/* Ghidra symbol: FUN_00657db0 */


void FUN_00657db0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  HDC hdcTarget;
  undefined8 uVar4;
  undefined8 uVar5;
  HDC local_70;
  undefined1 local_68 [12];
  RECT local_5c [3];
  HPAINTBUFFER local_20;
  
  if (((char)param_1[0x8f] == '\0') || (*(longlong *)(param_2 + 8) != 0)) {
    if (((*(uint *)((longlong)param_1 + 0xa4) & 0x100) == 0) &&
       (iVar2 = FUN_00654c00(param_1), iVar2 == 0)) {
      (**(code **)(*param_1 + -0x38))(param_1,param_2);
      return;
    }
    FUN_006570a0(param_1,param_2);
  }
  else {
    cVar1 = FUN_006265e0();
    if (cVar1 == '\0') {
      uVar3 = FUN_0065b870(param_1);
      uVar3 = thunk_FUN_041804fe(uVar3,local_68);
      uVar4 = thunk_FUN_04181813(uVar3,local_5c[0].right - local_5c[0].left,
                                 local_5c[0].bottom - local_5c[0].top);
      local_70 = (HDC)thunk_FUN_04137b5f(uVar3);
      uVar5 = thunk_FUN_041a19a1(local_70,uVar4);
      thunk_FUN_0418c361(local_70,local_5c[0].left,local_5c[0].top,0);
      FUN_0064fca0(param_1,0x14,local_70,local_70);
      *(HDC *)(param_2 + 8) = local_70;
      cVar1 = FUN_00781870();
      if (cVar1 == '\0') {
        FUN_00657db0(param_1,param_2);
      }
      else {
        (**(code **)(*param_1 + 0x150))(param_1,param_2);
      }
      *(undefined8 *)(param_2 + 8) = 0;
      thunk_FUN_0415fcd2(uVar3,local_5c[0].left,local_5c[0].top,local_5c[0].right - local_5c[0].left
                        );
      thunk_FUN_041a19a1(local_70,uVar5);
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_0416269d(uVar3,local_68);
      thunk_FUN_041a2fd8(local_70);
      thunk_FUN_0416f828(uVar4);
    }
    else {
      uVar3 = FUN_0065b870(param_1);
      hdcTarget = (HDC)thunk_FUN_041804fe(uVar3,local_68);
      local_20 = BeginBufferedPaint(hdcTarget,local_5c,BPBF_TOPDOWNDIB,(BP_PAINTPARAMS *)0x0,
                                    &local_70);
      if (local_20 != (HPAINTBUFFER)0x0) {
        FUN_0064fca0(param_1,0x14,local_70,local_70);
        FUN_0064fca0(param_1,0x318,local_70,4);
        if ((*(uint *)(param_1 + 0x14) & 0x400000) == 0) {
          BufferedPaintSetAlpha(local_20,local_5c,0xff);
        }
        EndBufferedPaint(local_20,-1);
      }
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_0416269d(uVar3,local_68);
    }
  }
  return;
}

