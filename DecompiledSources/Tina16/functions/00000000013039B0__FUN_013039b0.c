/* Ghidra address: 013039b0 */
/* Ghidra symbol: FUN_013039b0 */


void FUN_013039b0(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0) {
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0xaf8) = uVar2;
  }
  else if (param_2 == 1) {
    plVar4 = (longlong *)(param_1 + 0xaf8);
    if (*plVar4 != 0) {
      iVar6 = *(int *)(*plVar4 + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          plVar3 = (longlong *)FUN_004aeac0(*plVar4,iVar5);
          (**(code **)(*plVar3 + -0x20))(plVar3,1);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      (**(code **)(*(longlong *)*plVar4 + 0x10))((longlong *)*plVar4);
      FUN_00410f20(*plVar4);
      *plVar4 = 0;
    }
  }
  else if (param_2 == 2) {
    lVar1 = *(longlong *)(param_1 + 0xaf8);
    if (lVar1 != 0) {
      FUN_004aef40(lVar1,*(undefined4 *)(lVar1 + 0x10));
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0xaf8),param_3);
    }
  }
  else if (param_2 == 3) {
    lVar1 = *(longlong *)(param_1 + 0xaf8);
    if ((lVar1 != 0) && (param_4 <= *(int *)(lVar1 + 0x10) + -1)) {
      FUN_004aec30(lVar1,param_4,param_3);
    }
  }
  else if ((param_2 == 4) && (*(longlong *)(param_1 + 0xaf8) != 0)) {
    plVar4 = (longlong *)FUN_004aeac0(*(longlong *)(param_1 + 0xaf8),param_4);
    (**(code **)(*plVar4 + -0x20))(plVar4,1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0xaf8),param_4);
  }
  return;
}

