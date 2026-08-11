/* Ghidra address: 00c3f140 */
/* Ghidra symbol: FUN_00c3f140 */


void FUN_00c3f140(longlong param_1)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  sVar2 = 0;
  if (-1 < (short)(sVar3 + -1)) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar2);
      FUN_00410f20(uVar1);
      FUN_004aedb0(*(undefined8 *)(param_1 + 0x38),(int)sVar2,0);
      sVar2 = sVar2 + 1;
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  FUN_004aee80(*(undefined8 *)(param_1 + 0x38));
  return;
}

