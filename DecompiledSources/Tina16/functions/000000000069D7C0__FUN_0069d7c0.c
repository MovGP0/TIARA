/* Ghidra address: 0069d7c0 */
/* Ghidra symbol: FUN_0069d7c0 */


void FUN_0069d7c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  FUN_0069d4b0(param_1,0);
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (param_5 != lVar4) {
    if (lVar4 != 0) {
      thunk_FUN_04172795(lVar4);
      thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    *(longlong *)(param_1 + 0x58) = param_5;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar4 = thunk_FUN_0416a623(*(longlong *)(param_1 + 0x58));
    *(longlong *)(param_1 + 0x50) = lVar4;
    FUN_0069d770(param_1,*(undefined4 *)(lVar4 + 0x48));
  }
  FUN_0069e870(param_1);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_040c3345(*(longlong *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_0069d2f0(param_1,0);
  plVar5 = (longlong *)FUN_0069e100(param_1);
  iVar2 = (**(code **)(*plVar5 + 0x28))();
  iVar7 = 0;
  iVar3 = -1;
  if (-1 < iVar2 + -1) {
    do {
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar7);
      cVar1 = FUN_0069cb50(uVar6,param_3,param_2,param_4);
      if (cVar1 != '\0') {
        lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar7);
        FUN_004167d0(lVar4 + 0x18,param_4);
        iVar3 = iVar7;
        break;
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
      iVar3 = -1;
    } while (iVar2 != 0);
  }
  if (iVar3 == -1) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
    FUN_0041ddd0(&local_38,PTR_PTR_02001d88);
    local_50 = 10;
    local_40 = 10;
    local_58 = param_2;
    local_48 = param_4;
    FUN_00442f70(&local_30,local_38,&local_58,1);
    uVar6 = FUN_0069ca70(&DAT_0069c990,1,param_3,param_2,param_4);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x80))
              (*(longlong **)(param_1 + 0x20),local_30,uVar6);
  }
  *(int *)(param_1 + 0x28) = iVar3;
  iVar3 = thunk_FUN_041ce06f(param_2,param_1 + 0x48,0);
  if (iVar3 != 0) {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      iVar3 = thunk_FUN_03c8dec4(0,*(undefined8 *)(param_1 + 0x48),param_2,0,0,0);
      uVar6 = thunk_FUN_0412a7bb(0x42,(longlong)iVar3);
      *(undefined8 *)(param_1 + 0x58) = uVar6;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        uVar6 = thunk_FUN_0416a623(*(longlong *)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x50) = uVar6;
        iVar3 = thunk_FUN_03c8dec4(0,*(undefined8 *)(param_1 + 0x48),param_2,uVar6,0,2);
        if (iVar3 < 0) {
          thunk_FUN_04172795(*(undefined8 *)(param_1 + 0x58));
          thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 0x58));
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_0069d770(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x48));
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

