/* Ghidra address: 00a61c40 */
/* Ghidra symbol: FUN_00a61c40 */


int FUN_00a61c40(longlong param_1,char param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_30;
  int local_2c;
  longlong local_28;
  double local_20;
  
  local_48 = 0;
  local_40[0] = 0;
  local_28 = 0;
  FUN_00414480(&local_28);
  local_20 = (double)FUN_00410100(param_1,&local_2c);
  bVar2 = local_2c == 1;
  if (!bVar2) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + -4);
    }
    if (local_2c == 0) {
      local_2c = iVar1 + 1;
    }
    local_30 = FUN_004170c0(&DAT_00a62008,param_1,1);
    if ((0 < local_30) && (local_30 < local_2c)) {
      local_2c = local_30;
    }
    if (local_2c <= iVar1) {
      FUN_00416dc0(local_40,param_1,1,local_2c + -1);
      local_20 = (double)FUN_00410100(local_40[0],&local_30);
      FUN_00416dc0(&local_48,param_1,local_2c,(iVar1 - local_2c) + 1);
      FUN_0043ea00(&local_28,local_48);
    }
  }
  if (bVar2) {
    local_4c = param_6;
  }
  else {
    if (local_28 == 0) {
      if (param_2 != '\0') {
        local_20 = local_20 * (double)param_3;
      }
    }
    else {
      iVar1 = FUN_00416db0(local_28,&DAT_00a62018);
      if (iVar1 == 0) {
        local_20 = local_20 * (double)param_3 * 0.01;
      }
      else {
        iVar1 = FUN_00416db0(local_28,&PTR_DAT_00a62028);
        if (iVar1 == 0) {
          local_20 = local_20 * (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98);
        }
        else {
          iVar1 = FUN_00416db0(local_28,&PTR_DAT_00a6203c);
          if (iVar1 == 0) {
            local_20 = local_20 * (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) *
                       0.3937007874015748;
          }
          else {
            iVar1 = FUN_00416db0(local_28,&PTR_DAT_00a62050);
            if (iVar1 == 0) {
              local_20 = local_20 * (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) *
                         0.03937007874015748;
            }
            else {
              iVar1 = FUN_00416db0(local_28,&PTR_DAT_00a62064);
              if (iVar1 == 0) {
                local_20 = local_20 * (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) *
                           0.013888888888888888;
              }
              else {
                iVar1 = FUN_00416db0(local_28,&PTR_DAT_00a62078);
                if (iVar1 != 0) {
                  iVar1 = FUN_00416db0(local_28,&DAT_00a6208c);
                  if (iVar1 == 0) {
                    local_20 = local_20 * (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) *
                               0.16666666666666666;
                  }
                  else {
                    iVar1 = FUN_00416db0(local_28,&PTR_DAT_00a620a0);
                    if (iVar1 == 0) {
                      local_20 = local_20 * (double)param_4;
                    }
                    else {
                      iVar1 = FUN_00416db0(local_28,&LAB_00a620b4);
                      if (iVar1 == 0) {
                        local_20 = local_20 * (double)param_5;
                      }
                      else {
                        local_20 = (double)param_6;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_4c = FUN_0040c840(local_20);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_28);
  return local_4c;
}

