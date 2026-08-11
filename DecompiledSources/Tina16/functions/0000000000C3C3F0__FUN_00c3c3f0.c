/* Ghidra address: 00c3c3f0 */
/* Ghidra symbol: FUN_00c3c3f0 */


void FUN_00c3c3f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = *(short *)(param_1 + 0x10);
  sVar3 = 0;
  if (-1 < (short)(sVar4 + -1)) {
    do {
      uVar1 = FUN_004aeac0(param_1,(int)sVar3);
      lVar2 = FUN_004aeac0(param_1,(int)sVar3);
      FUN_004095f0(uVar1,(longlong)(*(int *)(lVar2 + 8) + 0xc));
      FUN_004aedb0(param_1,(int)sVar3,0);
      sVar3 = sVar3 + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  FUN_004aee80(param_1);
  return;
}

