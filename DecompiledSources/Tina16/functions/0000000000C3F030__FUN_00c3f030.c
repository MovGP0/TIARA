/* Ghidra address: 00c3f030 */
/* Ghidra symbol: FUN_00c3f030 */


void FUN_00c3f030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  sVar3 = 0;
  if (-1 < (short)(sVar4 + -1)) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar3);
      if (*(int *)(lVar1 + 8) == *(int *)(param_2 + 8)) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar3);
        FUN_00410f20(uVar2);
        FUN_004aedb0(*(undefined8 *)(param_1 + 0x38),(int)sVar3,0);
      }
      sVar3 = sVar3 + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),param_2);
  FUN_004aee80(*(undefined8 *)(param_1 + 0x38));
  return;
}

