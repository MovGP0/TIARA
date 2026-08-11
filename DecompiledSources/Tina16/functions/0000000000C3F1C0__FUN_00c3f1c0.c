/* Ghidra address: 00c3f1c0 */
/* Ghidra symbol: FUN_00c3f1c0 */


void FUN_00c3f1c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  sVar3 = 0;
  if (-1 < (short)(sVar4 + -1)) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar3);
      cVar1 = FUN_00c3cb20(uVar2);
      if (cVar1 != '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar3);
        FUN_00410f20(uVar2);
        FUN_004aedb0(*(undefined8 *)(param_1 + 0x38),(int)sVar3,0);
      }
      sVar3 = sVar3 + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  FUN_004aee80(*(undefined8 *)(param_1 + 0x38));
  return;
}

