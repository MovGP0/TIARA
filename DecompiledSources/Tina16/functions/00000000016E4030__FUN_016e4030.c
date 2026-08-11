/* Ghidra address: 016e4030 */
/* Ghidra symbol: FUN_016e4030 */


void FUN_016e4030(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 local_48 [8];
  double local_40 [5];
  
  bVar2 = (char)param_2 - 8;
  if (bVar2 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar2 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    FUN_00da9f70(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xd8),
                 *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x60),local_40,local_48);
    uVar4 = FUN_00b90620(*(double *)(param_1 + 0xe8) + *(double *)(param_1 + 0xf8) * local_40[0],
                         0x39b4484bfeebc2a0);
    *(undefined8 *)(param_1 + 0x130) = uVar4;
    lVar1 = *(longlong *)(param_1 + 0xb0);
    *(double *)(lVar1 + 0x10) = local_40[0];
    *(undefined8 *)(lVar1 + 0x80) = 0;
    FUN_016e31e0(lVar1,param_2);
    dVar5 = (double)FUN_016ed780(*(undefined8 *)(param_1 + 0x58),param_2);
    *(double *)(param_1 + 0x120) =
         *(double *)(param_1 + 0xe8) * dVar5 +
         *(double *)(param_1 + 0xf8) * *(double *)(*(longlong *)(param_1 + 0xb0) + 8);
    dVar5 = *(double *)(param_1 + 0x120) * 6.283185307179586 + *(double *)(param_1 + 0x118);
    uVar4 = FUN_0040bdd0(dVar5);
    dVar5 = (double)FUN_0040bcd0(dVar5);
    uVar4 = FUN_00c43d50(uVar4);
    *(undefined8 *)(param_1 + 0x128) = uVar4;
    if ((0.0 < *(double *)(param_1 + 0x128)) && (dVar5 < 0.0)) {
      *(double *)(param_1 + 0x128) = 3.141592653589793 - *(double *)(param_1 + 0x128);
    }
    if ((*(double *)(param_1 + 0x128) <= 0.0 && *(double *)(param_1 + 0x128) != 0.0) &&
       (dVar5 < 0.0)) {
      *(double *)(param_1 + 0x128) = 3.141592653589793 - *(double *)(param_1 + 0x128);
    }
    if ((*(double *)(param_1 + 0x128) <= 0.0) && (0.0 <= dVar5)) {
      *(double *)(param_1 + 0x128) = *(double *)(param_1 + 0x128) + 6.283185307179586;
    }
  }
  return;
}

