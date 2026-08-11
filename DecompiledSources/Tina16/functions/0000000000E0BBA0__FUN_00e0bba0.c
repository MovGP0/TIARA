/* Ghidra address: 00e0bba0 */
/* Ghidra symbol: FUN_00e0bba0 */


void FUN_00e0bba0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  if (*PTR_DAT_02003778 == '\0') {
    FUN_00416cd0(local_40,3,*(undefined8 *)PTR_DAT_02005010,&DAT_00e0beb8,
                 *(undefined8 *)PTR_PTR_020049d8);
    cVar2 = FUN_00440a20(local_40[0],1);
    if (cVar2 != '\0') {
      uVar3 = FUN_00e0ac40(*(undefined8 *)PTR_DAT_02005010,local_30,PTR_DAT_02001470);
      *PTR_DAT_02003778 = uVar3;
    }
  }
  if (*PTR_DAT_02003778 == '\0') {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_50,PTR_PTR_02001d38);
    FUN_00b8e650(uVar5,&local_48,L"HDLStrings.Msg_Vhdl_PackDataErr",local_50);
    FUN_016fd940(local_48);
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_0413e052(uVar5,0x10,0,0);
  }
  else {
    iVar7 = *(int *)(*(longlong *)PTR_DAT_02001470 + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar4 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02001470,iVar6);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar4 + 8));
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(param_1 + 0x710);
    if (*(int *)(*(longlong *)PTR_DAT_02001470 + 0x10) <= *(int *)(param_1 + 0x710)) {
      iVar7 = *(int *)(*(longlong *)PTR_DAT_02001470 + 0x10);
    }
    lVar4 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02001470,iVar7);
    *(longlong *)(param_1 + 0x728) = lVar4;
    iVar7 = *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x10),iVar6);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar4 + 8));
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(param_1 + 0x710);
    if (*(int *)(*(longlong *)PTR_DAT_02001470 + 0x10) <= *(int *)(param_1 + 0x710)) {
      iVar7 = *(int *)(*(longlong *)PTR_DAT_02001470 + 0x10);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),iVar7);
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x10) + 0x10);
    iVar6 = *(int *)(param_1 + 0x714);
    if (iVar7 <= *(int *)(param_1 + 0x714)) {
      iVar6 = iVar7;
    }
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),iVar6);
    FUN_00e0bf30(param_1);
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x18) + 0x10);
    iVar6 = *(int *)(param_1 + 0x718);
    if (iVar7 <= *(int *)(param_1 + 0x718)) {
      iVar6 = iVar7;
    }
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),iVar6);
  }
  FUN_00414560(&local_50,3);
  FUN_00414480(local_30);
  return;
}

