/* Ghidra address: 016e4260 */
/* Ghidra symbol: FUN_016e4260 */


void FUN_016e4260(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  double extraout_XMM0_Qa;
  
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xd0);
  if ((byte)(param_2 - 8) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0xd0) >> 8),1) <<
             (param_2 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    if (*(char *)(param_1 + 0x138) == '\x01') {
      dVar3 = -1.5707963267948966;
    }
    else {
      dVar3 = 0.0;
    }
    uVar1 = FUN_0040bdd0(*(double *)(param_1 + 0x128) + dVar3);
    *(double *)(param_1 + 0xb8) =
         *(double *)(param_1 + 0xf0) * extraout_XMM0_Qa + *(double *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_2 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (param_2 & 0x1f) & 0x40U) != 0;
    }
    else {
      bVar2 = false;
    }
    if ((bVar2) && (1e-30 < *(double *)(param_1 + 0x130))) {
      FUN_016ed960(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58),
                   1.0 / (*(double *)(param_1 + 0x130) * 20.0),0);
    }
  }
  return;
}

