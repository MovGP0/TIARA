/* Ghidra address: 016e46c0 */
/* Ghidra symbol: FUN_016e46c0 */


void FUN_016e46c0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar4;
  double dVar5;
  
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xd0);
  if ((byte)(param_2 - 8) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0xd0) >> 8),1) <<
             (param_2 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    dVar3 = *(double *)(param_1 + 0x128) / 6.283185307179586;
    if (*(double *)(param_1 + 0x100) <= 0.0) {
      if (*(double *)(param_1 + 0x110) <= 0.0) {
        if (*(double *)(param_1 + 0x108) <= 0.0) {
          dVar4 = 0.5;
          dVar5 = 0.5;
        }
        else {
          dVar4 = *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x130);
          dVar5 = 1.0 - dVar4;
        }
      }
      else {
        dVar4 = 1.0 - *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x130);
        dVar5 = 1.0 - dVar4;
      }
    }
    else {
      dVar4 = (1.0 - *(double *)(param_1 + 0x100)) * 1.0;
      dVar5 = 1.0 - dVar4;
    }
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x760);
    if (dVar4 < dVar3) {
      *(double *)(param_1 + 0xc0) =
           (*(double *)(param_1 + 0xf0) * 2.0 * (dVar3 - 1.0)) / dVar5 + *(double *)(param_1 + 0xf0)
      ;
      uVar1 = FUN_016da930(*(undefined8 *)(param_1 + 0x58),dVar5,0x3ff0000000000000,dVar4,dVar3,
                           uVar1);
      dVar3 = extraout_XMM0_Qa_00;
    }
    else {
      *(double *)(param_1 + 0xc0) =
           (*(double *)(param_1 + 0xf0) * -2.0 * (dVar3 - dVar4)) / dVar4 -
           *(double *)(param_1 + 0xf0);
      uVar1 = FUN_016da930(*(undefined8 *)(param_1 + 0x58),dVar4,dVar4,dVar5,dVar3,uVar1);
      dVar3 = extraout_XMM0_Qa;
    }
    *(double *)(param_1 + 0xc0) = -*(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_2 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (param_2 & 0x1f) & 0x40U) != 0;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (1e-30 < *(double *)(param_1 + 0x130))) {
      FUN_016ed960(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                   dVar3 / *(double *)(param_1 + 0x130),0);
    }
  }
  return;
}

