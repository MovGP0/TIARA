/* Ghidra address: 01557b20 */
/* Ghidra symbol: FUN_01557b20 */


longlong * FUN_01557b20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res10 [3];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (param_3 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x980);
    iVar6 = *(int *)(lVar1 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar4 = FUN_004aeac0(lVar1,iVar5);
        if (*(int *)(lVar4 + 0x18) == 0) {
          iVar2 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x10),L"real");
          if (iVar2 == 0) {
            FUN_00414b50(&local_48,L" := 0.0");
          }
          else {
            FUN_00414b50(&local_48,L" := \'0\'");
          }
          if (*(int *)(lVar4 + 0x1c) == 2) {
            FUN_00414480(&local_48);
          }
        }
        else {
          FUN_00414480(&local_48);
        }
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          FUN_00414b50(local_40,*(undefined8 *)PTR_PTR_02001278);
        }
        else {
          FUN_00414b50(local_40,*(undefined8 *)(lVar4 + 0x10));
        }
        if (local_48 == 0) {
          FUN_0043e1a0(local_60,local_res10[0]);
          FUN_0043e1a0(&local_68,local_40[0]);
          iVar2 = FUN_00416db0(local_60[0],local_68);
          if (iVar2 == 0) {
            (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(lVar4 + 8));
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (param_3 == 1) {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                  (*(longlong **)(param_1 + 0x40),&local_50,iVar5);
        FUN_0043e1a0(&local_70,local_50);
        iVar2 = FUN_00416db0(local_70,local_res10[0]);
        if (iVar2 == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                    (*(longlong **)(param_1 + 0x38),&local_78,iVar5);
          (**(code **)(*plVar3 + 0x78))(plVar3,local_78);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (param_3 == 2) {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))
                  (*(longlong **)(param_1 + 0x68),&local_50,iVar5);
        FUN_0043e1a0(&local_80,local_50);
        iVar2 = FUN_00416db0(local_80,local_res10[0]);
        if (iVar2 == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))
                    (*(longlong **)(param_1 + 0x60),&local_88,iVar5);
          (**(code **)(*plVar3 + 0x78))(plVar3,local_88);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414560(&local_88,6);
  FUN_00414560(&local_50,3);
  FUN_00414480(local_res10);
  return plVar3;
}

