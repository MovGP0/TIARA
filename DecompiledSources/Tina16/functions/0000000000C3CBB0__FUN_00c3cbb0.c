/* Ghidra address: 00c3cbb0 */
/* Ghidra symbol: FUN_00c3cbb0 */


void FUN_00c3cbb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined2 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  
  FUN_00c3cb40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  sVar4 = 0;
  sVar5 = *(short *)(*(longlong *)(param_1 + 0x30) + 0x10);
  if (-1 < (short)(sVar5 + -1)) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(int)sVar4);
      uVar1 = *(undefined1 *)(lVar2 + 0x1d);
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(int)sVar4);
      *(undefined1 *)(lVar2 + 0x1d) = 0;
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(int)sVar4);
      FUN_01a9ac70(param_2,uVar3);
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(int)sVar4);
      *(undefined1 *)(lVar2 + 0x1d) = uVar1;
      sVar4 = sVar4 + 1;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  sVar4 = 0;
  sVar5 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (-1 < (short)(sVar5 + -1)) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar4);
      FUN_01a9ac70(param_2,uVar3);
      sVar4 = sVar4 + 1;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  sVar5 = *(short *)(*(longlong *)(param_1 + 0x30) + 0x10);
  sVar4 = 0;
  if (-1 < (short)(sVar5 + -1)) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(int)sVar4);
      uVar1 = *(undefined1 *)(lVar2 + 0x1f);
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(int)sVar4);
      *(byte *)(lVar2 + 0x1f) = *(byte *)(lVar2 + 0x1f) | 8;
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(int)sVar4);
      FUN_01a9ac70(param_2,uVar3);
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(int)sVar4);
      *(undefined1 *)(lVar2 + 0x1f) = uVar1;
      sVar4 = sVar4 + 1;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  return;
}

