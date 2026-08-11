/* Ghidra address: 006192a0 */
/* Ghidra symbol: FUN_006192a0 */


void FUN_006192a0(byte *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00619270(param_1);
  if (cVar1 == '\0') {
    FUN_004d1e00(4 << (*param_1 & 0x1f));
  }
  else {
    iVar2 = *(int *)param_1;
    if (9 < iVar2) {
      iVar2 = iVar2 + -10;
    }
    if (iVar2 % 0x14 == 0x13) {
      FUN_004d1e10(1);
    }
    else if (iVar2 % 5 == 4) {
      FUN_004d1e10(0);
    }
    else {
      FUN_004d1e20();
    }
  }
  *(int *)param_1 = *(int *)param_1 + 1;
  if (*(int *)param_1 < 0) {
    param_1[0] = 0xb;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

