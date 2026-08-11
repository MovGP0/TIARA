/* Ghidra address: 0119aff0 */
/* Ghidra symbol: FUN_0119aff0 */


void FUN_0119aff0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_0064dd90(param_2,local_40);
  iVar5 = 0;
  if (local_40[0] != 0) {
    iVar5 = *(int *)(local_40[0] + -4);
  }
  local_80 = 1;
  local_84 = 0;
  if (-1 < iVar5 + -1) {
    do {
      if (*(short *)(local_40[0] + -2 + (longlong)local_84 * 2) == 10) {
        local_80 = local_80 + 1;
      }
      local_84 = local_84 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_84 = 0;
  if (-1 < local_80 + -2) {
    iVar5 = local_80 + -1;
    do {
      local_78 = FUN_0119ae70(local_40[0],local_84);
      local_7c = local_84 + 1;
      local_74 = FUN_0119ae70(local_40[0],local_7c);
      iVar6 = local_78 + 1;
      FUN_00416dc0(&local_50,local_40[0],iVar6,(local_74 - iVar6) + 1);
      (**(code **)(*param_2 + 0x290))(param_2,iVar6);
      (**(code **)(*param_2 + 0x288))(param_2,local_74 - local_78);
      if (local_7c <= local_80 + -1) {
        iVar6 = ((local_80 + -1) - local_7c) + 1;
        do {
          iVar1 = FUN_0119ae70(local_40[0],local_7c);
          iVar2 = FUN_0119ae70(local_40[0],local_7c + 1);
          FUN_00416dc0(&local_58,local_40[0],iVar1 + 1,(iVar2 - (iVar1 + 1)) + 1);
          iVar3 = FUN_00416d10(local_50,local_58);
          if (0 < iVar3) {
            FUN_00414b50(&local_48,local_40[0]);
            iVar3 = 0;
            if (local_40[0] != 0) {
              iVar3 = *(int *)(local_40[0] + -4);
            }
            iVar7 = 0;
            if (-1 < iVar3) {
              iVar3 = iVar3 + 1;
              do {
                if (*(short *)(local_40[0] + -2 + (longlong)iVar7 * 2) == 10) {
                  lVar4 = FUN_00414de0(&local_48);
                  *(undefined2 *)(lVar4 + -2 + (longlong)iVar7 * 2) = 0x2d;
                }
                iVar7 = iVar7 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            (**(code **)(*param_2 + 0x290))(param_2,iVar1 + 1);
            (**(code **)(*param_2 + 0x288))(param_2,iVar2 - iVar1);
            FUN_00681590(param_2,local_50);
            (**(code **)(*param_2 + 0x290))(param_2,local_78 + 1);
            (**(code **)(*param_2 + 0x288))(param_2,local_74 - local_78);
            FUN_00681590(param_2,local_58);
            FUN_0064dd90(param_2,local_40);
            FUN_00414b50(&local_48,local_40[0]);
            iVar1 = 0;
            if (local_40[0] != 0) {
              iVar1 = *(int *)(local_40[0] + -4);
            }
            iVar2 = 0;
            if (-1 < iVar1) {
              iVar1 = iVar1 + 1;
              do {
                if (*(short *)(local_40[0] + -2 + (longlong)iVar2 * 2) == 10) {
                  lVar4 = FUN_00414de0(&local_48);
                  *(undefined2 *)(lVar4 + -2 + (longlong)iVar2 * 2) = 0x2d;
                }
                iVar2 = iVar2 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
            local_78 = FUN_0119ae70(local_40[0],local_84);
            local_74 = FUN_0119ae70(local_40[0],local_84 + 1);
            FUN_00416dc0(&local_50,local_40[0],local_78 + 1,(local_74 - (local_78 + 1)) + 1);
          }
          local_7c = local_7c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_84 = local_84 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_58,4);
  return;
}

