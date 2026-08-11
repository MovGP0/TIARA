/* Ghidra address: 00a44730 */
/* Ghidra symbol: FUN_00a44730 */


longlong FUN_00a44730(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_38 [40];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((byte)*PTR_DAT_020026b8 < 9) {
    cVar2 = FUN_00609ee0(param_1);
    if (cVar2 == '\0') {
      lVar3 = FUN_00a41fa0(param_1);
      FUN_00410f20(param_1);
      param_1 = lVar3;
    }
    else {
      param_1 = FUN_00a445e0(auStack_38);
    }
  }
  else {
    bVar1 = FUN_00609f90(param_1);
    if (bVar1 < 4) {
      param_1 = FUN_00a445e0(auStack_38);
    }
  }
  return param_1;
}

