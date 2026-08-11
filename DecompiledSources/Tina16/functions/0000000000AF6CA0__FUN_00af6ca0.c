/* Ghidra address: 00af6ca0 */
/* Ghidra symbol: FUN_00af6ca0 */


void FUN_00af6ca0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0) {
    (**(code **)(*param_1 + 0x430))(param_1,0);
  }
  else if (param_2 != *(int *)((longlong)param_1 + 0x4cc)) {
    FUN_00a77da0(param_1);
    plVar1 = (longlong *)param_1[0xee];
    if (plVar1 != (longlong *)0x0) {
      if (*(int *)((longlong)param_1 + 0x4cc) == 0) {
        (**(code **)(*plVar1 + 0x90))(plVar1);
        iVar4 = *(int *)(*(longlong *)(param_1[0x116] + 600) + 0x10);
        iVar3 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar2 = FUN_00af6c00(param_1);
            uVar2 = FUN_00a94970(uVar2,iVar3);
            FUN_00a945d0(uVar2,0);
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        (**(code **)(*param_1 + 0x180))(param_1);
      }
      else {
        iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
        iVar4 = iVar4 + -1;
        if (*(int *)((longlong)param_1 + 0x4cc) <= iVar4) {
          iVar3 = (*(int *)((longlong)param_1 + 0x4cc) - iVar4) + -1;
          do {
            (**(code **)(*(longlong *)param_1[0xee] + 0x98))((longlong *)param_1[0xee],iVar4);
            iVar4 = iVar4 + -1;
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0);
        }
      }
    }
  }
  return;
}

