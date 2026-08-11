/* Ghidra address: 01b99f70 */
/* Ghidra symbol: FUN_01b99f70 */


void FUN_01b99f70(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  if (lVar5 != 0) {
    cVar2 = FUN_004113d0(*(undefined8 *)(param_2 + 0x18),&PTR_FUN_006b5a58);
    if (cVar2 == '\0') {
      FUN_00414b50(&local_30,*(undefined8 *)(*(longlong *)(param_2 + 200) + 0x78));
      FUN_00416e20(&local_30,1,3);
      FUN_00414b50(&local_38,*(undefined8 *)(param_2 + 0x78));
      FUN_00416e20(&local_38,1,3);
      sVar3 = thunk_FUN_03cbc5c8(0x10);
      uVar8 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
      FUN_01b98d50(param_1,uVar8,local_30,local_38,((longlong)sVar3 & 0xfffeU) != 0);
    }
    else {
      plVar6 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      uVar4 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
      (**(code **)(*plVar6 + 0x48))(plVar6,uVar4,1);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      sVar3 = thunk_FUN_03cbc5c8(0x10);
      if (((longlong)sVar3 & 0xfffeU) == 0) {
        uVar7 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
        FUN_01b98c30(param_1,uVar7,uVar8,1);
      }
      else {
        uVar7 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
        FUN_01b96a50(param_1,uVar7);
        lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
        FUN_00414b50(&local_20,**(undefined8 **)(lVar5 + 0x18));
        lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
        FUN_00414b50(&local_28,*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 8));
        lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
        uVar1 = *(undefined1 *)(*(longlong *)(lVar5 + 0x18) + 0x10);
        FUN_01b1cbc0(&local_40,local_20,1);
        uVar7 = FUN_01b95080(local_20,local_28,uVar1);
        lVar5 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),uVar8,local_40,
                             uVar7);
        FUN_01b1cbc0(&local_48,local_20,5);
        uVar4 = FUN_00c85dd0(*(undefined8 *)PTR_DAT_02002c40,local_48,*PTR_DAT_02002480,0);
        FUN_006dcbd0(lVar5,uVar4);
        if (-1 < *(int *)(lVar5 + 0x28)) {
          FUN_006dcca0(lVar5,*(int *)(lVar5 + 0x28));
        }
        uVar4 = FUN_006dd6f0(lVar5);
        FUN_01b97960(param_1,uVar4);
      }
    }
  }
  FUN_00414560(&local_48,6);
  return;
}

