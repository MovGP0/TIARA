/* Ghidra address: 00b0ae40 */
/* Ghidra symbol: FUN_00b0ae40 */


void FUN_00b0ae40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x618),0);
  *(undefined4 *)(param_1 + 0x63c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x640) = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0x4c0);
  iVar4 = *(int *)(param_1 + 0x4e0) + -1;
  if (iVar2 <= iVar4) {
    iVar4 = (iVar4 - iVar2) + 1;
    do {
      iVar3 = 0;
      iVar5 = *(int *)(param_1 + 0x4a4);
      if (-1 < iVar5 + -1) {
        do {
          FUN_0084e470(param_1,iVar3,iVar2,0);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x4a4);
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = (longlong *)FUN_0084e370(param_1,iVar4);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x4c0);
  return;
}

