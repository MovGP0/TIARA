/* Ghidra address: 014e45d0 */
/* Ghidra symbol: FUN_014e45d0 */


void FUN_014e45d0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,char param_5,
                 longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  
  lVar1 = FUN_016b9cb0(param_6);
  *(undefined8 *)(lVar1 + 0x2b8) = param_1;
  *(undefined8 *)(lVar1 + 0x2b0) = param_2;
  if (param_3 <= 0.0) {
    *(undefined8 *)(lVar1 + 0x178) = *(undefined8 *)(PTR_DAT_02001120 + 0x178);
  }
  else {
    *(double *)(lVar1 + 0x178) = param_3;
  }
  if (param_4 <= 0.0) {
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
  }
  else {
    dVar3 = (double)FUN_01d0e4e0(lVar1);
    lVar2 = FUN_0040c770(dVar3 / param_4);
    *(double *)(lVar1 + 0x1b8) = (double)lVar2;
  }
  *(double *)(param_6 + 0xda8) = param_4;
  *(undefined8 *)(param_6 + 0xdb0) = param_1;
  *(char *)(lVar1 + 0x2ad) = param_5 + '\x01';
  *(undefined8 *)(lVar1 + 0x2c0) = param_1;
  *(undefined1 *)(lVar1 + 0x8ef) = *(undefined1 *)(lVar1 + 0x2ad);
  return;
}

