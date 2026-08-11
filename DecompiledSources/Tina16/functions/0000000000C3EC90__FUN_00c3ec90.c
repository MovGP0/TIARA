/* Ghidra address: 00c3ec90 */
/* Ghidra symbol: FUN_00c3ec90 */


int FUN_00c3ec90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  short sVar4;
  short sVar5;
  
  iVar1 = FUN_01d31350(*(undefined8 *)(param_1 + 0x10));
  iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0x18));
  iVar1 = iVar1 + iVar2 + (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) + 1) * 4 + 0xc;
  sVar4 = 0;
  sVar5 = *(short *)(*(longlong *)(param_1 + 0x38) + 0x10);
  if (-1 < (short)(sVar5 + -1)) {
    do {
      plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),(longlong)sVar4);
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      iVar1 = iVar1 + iVar2;
      sVar4 = sVar4 + 1;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  return iVar1;
}

