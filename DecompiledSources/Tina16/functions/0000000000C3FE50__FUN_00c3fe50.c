/* Ghidra address: 00c3fe50 */
/* Ghidra symbol: FUN_00c3fe50 */


void FUN_00c3fe50(longlong param_1)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = *(short *)(param_1 + 0x10);
  sVar2 = 0;
  if (-1 < (short)(sVar3 + -1)) {
    do {
      uVar1 = FUN_004aeac0(param_1,(int)sVar2);
      FUN_00410f20(uVar1);
      FUN_004aedb0(param_1,(int)sVar2,0);
      sVar2 = sVar2 + 1;
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  FUN_004aee80(param_1);
  return;
}

