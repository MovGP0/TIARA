/* Ghidra address: 00c3ca20 */
/* Ghidra symbol: FUN_00c3ca20 */


longlong FUN_00c3ca20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  
  lVar1 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(lVar1 + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(lVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  sVar3 = 0;
  sVar4 = *(short *)(*(longlong *)(param_1 + 0x30) + 0x10);
  if (-1 < (short)(sVar4 + -1)) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(longlong)sVar3);
      uVar2 = FUN_00c3bef0(uVar2);
      FUN_004ae7e0(*(undefined8 *)(lVar1 + 0x30),uVar2);
      sVar3 = sVar3 + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  sVar4 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  sVar3 = 0;
  if (-1 < (short)(sVar4 + -1)) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar3);
      uVar2 = FUN_00c3bef0(uVar2);
      FUN_004ae7e0(*(undefined8 *)(lVar1 + 0x38),uVar2);
      sVar3 = sVar3 + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  return lVar1;
}

