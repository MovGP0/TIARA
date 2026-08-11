/* Ghidra address: 00c3c990 */
/* Ghidra symbol: FUN_00c3c990 */


void FUN_00c3c990(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  sVar3 = 0;
  if (-1 < (short)(sVar4 + -1)) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar3);
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar3);
      FUN_004095f0(uVar1,(longlong)(*(int *)(lVar2 + 8) + 0xc));
      FUN_004aedb0(*(undefined8 *)(param_1 + 0x38),(int)sVar3,0);
      sVar3 = sVar3 + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  FUN_004aee80(*(undefined8 *)(param_1 + 0x38));
  return;
}

