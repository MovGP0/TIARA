/* Ghidra address: 00c7ad10 */
/* Ghidra symbol: FUN_00c7ad10 */


void FUN_00c7ad10(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined8 local_40 [2];
  
  FUN_00723d80(param_1);
  *(undefined1 *)(param_1 + 0x3db) = 1;
  cVar1 = FUN_00c76df0(param_1);
  if (cVar1 == '\x01') {
    iVar9 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x20) + 0x10) +
                    0x10);
    iVar3 = iVar9;
    iVar4 = -1;
    iVar8 = 0;
    if (-1 < iVar9 + -1) {
      do {
        iVar4 = iVar8;
        lVar5 = FUN_006fca20(*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x6d8),iVar4);
        if (*(char *)(lVar5 + 0x31a) != '\0') break;
        iVar8 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        iVar4 = -1;
      } while (iVar3 != 0);
    }
    if (-1 < iVar4) {
      uVar6 = FUN_00c6fe60(*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x20),iVar4);
      FUN_00c6fac0(uVar6,local_40,*(undefined8 *)(param_1 + 0x3a8));
      lVar5 = FUN_00c6fe60(*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x20),iVar4);
      cVar1 = *(char *)(lVar5 + 0x40);
      cVar2 = FUN_00c7a110(param_1);
      if ((cVar1 != cVar2) && (cVar2 != '\0')) {
        uVar6 = FUN_00c7afb0(param_1);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x38))
                          (*(longlong **)(param_1 + 0x3a8),0,uVar6,local_40[0]);
        if (iVar3 != 0) {
          uVar6 = FUN_006fca20(*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x6d8),iVar4);
          FUN_006fa3b0(uVar6,0);
          plVar7 = (longlong *)
                   FUN_006fca20(*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x6d8),iVar4);
          (**(code **)(*plVar7 + 0x1c0))(plVar7);
        }
        thunk_FUN_0398fb79(local_40[0]);
      }
    }
    iVar3 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar6 = FUN_00c6fe60(*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x20),iVar3);
        FUN_00c6fac0(uVar6,local_40,*(undefined8 *)(param_1 + 0x3a8));
        uVar6 = FUN_00c7afb0(param_1);
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x38))
                          (*(longlong **)(param_1 + 0x3a8),0,uVar6,local_40[0]);
        if (iVar4 == 0) {
          thunk_FUN_0398fb79(local_40[0]);
          uVar6 = FUN_006fca20(*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x6d8),iVar3);
          FUN_006fa3b0(uVar6,1);
          break;
        }
        thunk_FUN_0398fb79(local_40[0]);
        iVar3 = iVar3 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  if (*(char *)(param_1 + 0x3e9) != '\0') {
    *(undefined1 *)(param_1 + 0x3e9) = 0;
    if (*(char *)(param_1 + 0x3dc) != '\x06') {
      FUN_00c7b2b0(param_1,*(char *)(param_1 + 0x3dc));
    }
  }
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x3d0),1);
  return;
}

