/* Ghidra address: 016e4970 */
/* Ghidra symbol: FUN_016e4970 */


void FUN_016e4970(longlong param_1,undefined4 param_2)

{
  double dVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  double extraout_XMM0_Qa;
  double dVar5;
  
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xd0);
  bVar3 = (byte)param_2;
  if ((byte)(bVar3 - 8) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0xd0) >> 8),1) <<
             (bVar3 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    dVar5 = *(double *)(param_1 + 0x128) / 6.283185307179586;
    if (*(char *)(param_1 + 0x138) == '\0') {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xf0);
      *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0xf0) ^ 0x8000000000000000;
      *(double *)(param_1 + 0x80) =
           *(double *)(param_1 + 0x100) * 1.0 -
           ((*(double *)(param_1 + 0x108) + *(double *)(param_1 + 0x110)) / 2.0) *
           *(double *)(param_1 + 0x130);
      *(double *)(param_1 + 0x98) =
           1.0 - (*(double *)(param_1 + 0x80) +
                 (*(double *)(param_1 + 0x108) + *(double *)(param_1 + 0x110)) *
                 *(double *)(param_1 + 0x130));
    }
    else {
      *(ulonglong *)(param_1 + 0x68) = *(ulonglong *)(param_1 + 0xf0) ^ 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xf0);
      *(double *)(param_1 + 0x80) =
           (1.0 - *(double *)(param_1 + 0x100)) * 1.0 -
           ((*(double *)(param_1 + 0x108) + *(double *)(param_1 + 0x110)) / 2.0) *
           *(double *)(param_1 + 0x130);
      *(double *)(param_1 + 0x98) =
           1.0 - (*(double *)(param_1 + 0x80) +
                 (*(double *)(param_1 + 0x108) + *(double *)(param_1 + 0x110)) *
                 *(double *)(param_1 + 0x130));
    }
    *(double *)(param_1 + 0x78) =
         (*(double *)(param_1 + 0x108) / 2.0) * *(double *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x78);
    *(double *)(param_1 + 0x88) =
         (*(double *)(param_1 + 0x110) / 2.0) * *(double *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    uVar2 = (**(code **)(PTR_PTR_02002658 + 0x20))
                      (*(undefined8 *)(param_1 + 0x58),param_2,dVar5,param_1 + 0x68,0);
    *(double *)(param_1 + 200) = extraout_XMM0_Qa + *(double *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (bVar3 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (bVar3 & 0x1f) & 0x40U) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (1e-30 < *(double *)(param_1 + 0x130))) {
      dVar1 = *(double *)(*(longlong *)(param_1 + 0x58) + 0x760);
      uVar2 = (**(code **)(PTR_PTR_02002658 + 0x28))
                        (*(longlong *)(param_1 + 0x58),param_2,dVar5,param_1 + 0x68);
      dVar5 = (double)FUN_00b90620(uVar2,1.0 / (dVar1 * 60.0));
      FUN_016ed960(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                   dVar5 / *(double *)(param_1 + 0x130),0);
    }
  }
  return;
}

