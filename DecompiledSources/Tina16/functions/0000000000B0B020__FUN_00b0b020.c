/* Ghidra address: 00b0b020 */
/* Ghidra symbol: FUN_00b0b020 */


void FUN_00b0b020(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x618),0);
  *(undefined4 *)(param_1 + 0x63c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x640) = 0xffffffff;
  iVar3 = *(int *)(param_1 + 0x4c0);
  iVar4 = *(int *)(param_1 + 0x4e0) + -1;
  if (iVar3 <= iVar4) {
    iVar4 = (iVar4 - iVar3) + 1;
    do {
      iVar5 = *(int *)(param_1 + 0x4a4) + -1;
      if (param_2 <= iVar5) {
        iVar6 = (iVar5 - param_2) + 1;
        iVar5 = param_2;
        do {
          uVar1 = FUN_0084e390(param_1,iVar5,iVar3);
          FUN_00410f20(uVar1);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x4a4) + -1;
  if (param_2 <= iVar3) {
    iVar3 = (iVar3 - param_2) + 1;
    do {
      plVar2 = (longlong *)FUN_0084e370(param_1,param_2);
      (**(code **)(*plVar2 + 0x90))(plVar2);
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x4c0);
  return;
}

