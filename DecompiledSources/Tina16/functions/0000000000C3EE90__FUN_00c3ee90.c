/* Ghidra address: 00c3ee90 */
/* Ghidra symbol: FUN_00c3ee90 */


void FUN_00c3ee90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  FUN_01d311c0(param_2,param_1 + 8,4);
  FUN_01d311c0(param_2,param_1 + 0xc,1);
  FUN_01d311c0(param_2,param_1 + 0xe,1);
  FUN_01d313e0(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_01d313e0(param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_01d311c0(param_2,param_1 + 0x28,2);
  FUN_01d31740(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10));
  sVar5 = 0;
  sVar6 = *(short *)(*(longlong *)(param_1 + 0x30) + 0x10);
  if (-1 < (short)(sVar6 + -1)) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),(longlong)sVar5);
      FUN_01d31740(param_2,uVar2);
      sVar5 = sVar5 + 1;
      sVar6 = sVar6 + -1;
    } while (sVar6 != 0);
  }
  iVar7 = 0;
  sVar6 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  sVar5 = 0;
  if (-1 < (short)(sVar6 + -1)) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar5);
      cVar1 = FUN_00c3cb20(uVar3);
      if (cVar1 == '\0') {
        iVar7 = iVar7 + 1;
      }
      sVar5 = sVar5 + 1;
      sVar6 = sVar6 + -1;
    } while (sVar6 != 0);
  }
  FUN_01d31740(param_2,iVar7);
  sVar6 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  sVar5 = 0;
  if (-1 < (short)(sVar6 + -1)) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar5);
      cVar1 = FUN_00c3cb20(uVar3);
      if (cVar1 == '\0') {
        plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(int)sVar5);
        (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
      }
      sVar5 = sVar5 + 1;
      sVar6 = sVar6 + -1;
    } while (sVar6 != 0);
  }
  return;
}

