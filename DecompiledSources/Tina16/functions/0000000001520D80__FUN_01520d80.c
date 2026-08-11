/* Ghidra address: 01520d80 */
/* Ghidra symbol: FUN_01520d80 */


void FUN_01520d80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [264];
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40 [2];
  
  local_168 = 0;
  local_160 = 0;
  local_40[0] = 0;
  local_48 = (undefined2 *)0x0;
  local_50 = 0;
  plVar1 = *(longlong **)(param_1 + 0xd70);
  iVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (-1 < iVar3) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xd70) + 0x4f0);
    iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar3 < 0x10) {
      iVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      FUN_0040e840(local_158,iVar3 + 1);
      FUN_004169a0(local_40,local_158);
      FUN_00416ad0(local_40,&DAT_01521070);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0xc00) + 0x260))
                        (*(longlong **)(param_1 + 0xc00));
      if (iVar4 != -1) {
        plVar2 = *(longlong **)(param_1 + 0xc00);
        uVar5 = (**(code **)(*plVar2 + 0x260))(plVar2);
        uVar6 = (**(code **)(*(longlong *)plVar2[0x9e] + 0x30))((longlong *)plVar2[0x9e],uVar5);
        lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01106460);
        if (*(int *)(lVar7 + 0x3c) <= *(int *)(lVar7 + 0x40)) {
          iVar4 = (*(int *)(lVar7 + 0x40) - *(int *)(lVar7 + 0x3c)) + 1;
          do {
            FUN_00416780(&local_160,*(undefined2 *)(PTR_DAT_020025a0 + 4));
            uVar5 = FUN_004170c0(&LAB_01521084,local_40[0],1);
            FUN_00416ea0(local_160,local_40,uVar5);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))();
        iVar9 = 0;
        if (-1 < iVar4 + -2) {
          iVar4 = iVar4 + -1;
          do {
            if (iVar3 <= iVar9) {
              FUN_0040e840(local_158,iVar9 + 2);
              FUN_004169a0(&local_48,local_158);
              (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))
                        ((longlong *)plVar1[0x9e],&local_50,iVar9);
              puVar8 = (undefined2 *)FUN_00414de0(&local_50);
              *puVar8 = *local_48;
              (**(code **)(*(longlong *)plVar1[0x9e] + 0x40))
                        ((longlong *)plVar1[0x9e],iVar9,local_50);
            }
            iVar9 = iVar9 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        (**(code **)(*(longlong *)plVar1[0x9e] + 200))((longlong *)plVar1[0x9e],iVar3,local_40[0]);
        (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_168,iVar3);
        FUN_0064de00(*(undefined8 *)(param_1 + 0xe38),local_168);
      }
    }
  }
  FUN_00414560(&local_168,2);
  FUN_00414560(&local_50,3);
  return;
}

