/* Ghidra address: 01a27710 */
/* Ghidra symbol: FUN_01a27710 */


undefined1 FUN_01a27710(undefined8 param_1,double *param_2)

{
  char cVar1;
  double dVar2;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b0;
  int local_a4;
  undefined8 local_a0;
  int local_94;
  undefined8 local_90;
  int local_84;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  int local_64;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  longlong local_18;
  undefined1 local_9;
  
  local_c0 = auStack_138;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_0043ea00(&local_c8,param_1);
  FUN_0043e1a0(&local_18,local_c8);
  local_9 = 0;
  *param_2 = -1.0;
  cVar1 = FUN_004563e0(&local_18,&PTR_DAT_01a27dc0,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_004563e0(&local_18,&PTR_LAB_01a27dd4,0);
    if (cVar1 == '\0') {
      cVar1 = FUN_004563e0(&local_18,&PTR_DAT_01a27de8,0);
      if (cVar1 == '\0') {
        cVar1 = FUN_004563e0(&local_18,&PTR_DAT_01a27dfc,0);
        if (cVar1 == '\0') {
          cVar1 = FUN_004563e0(&local_18,&DAT_01a27e10,0);
          if (cVar1 == '\0') {
            cVar1 = FUN_004563e0(&local_18,&DAT_01a27e20,0);
            if (cVar1 == '\0') {
              cVar1 = FUN_004563e0(&local_18,&DAT_01a27e30,0);
              if (cVar1 == '\0') {
                cVar1 = FUN_004563e0(&local_18,&DAT_01a27e40,0);
                if (cVar1 == '\0') {
                  cVar1 = FUN_004563e0(&local_18,&DAT_01a27e50,0);
                  if (cVar1 == '\0') {
                    dVar2 = (double)FUN_00448650(local_18,PTR_DAT_02004830);
                    *param_2 = dVar2;
                  }
                  else {
                    local_a4 = 0;
                    if (local_18 != 0) {
                      local_a4 = *(int *)(local_18 + -4);
                    }
                    FUN_00416dc0(&local_110,local_18,1,local_a4 + -1);
                    local_b0 = local_110;
                    dVar2 = (double)FUN_00448650(local_110,PTR_DAT_02004830);
                    *param_2 = dVar2 / 1000000000000.0;
                  }
                }
                else {
                  local_94 = 0;
                  if (local_18 != 0) {
                    local_94 = *(int *)(local_18 + -4);
                  }
                  FUN_00416dc0(&local_108,local_18,1,local_94 + -1);
                  local_a0 = local_108;
                  dVar2 = (double)FUN_00448650(local_108,PTR_DAT_02004830);
                  *param_2 = dVar2 / 1000000000.0;
                }
              }
              else {
                local_84 = 0;
                if (local_18 != 0) {
                  local_84 = *(int *)(local_18 + -4);
                }
                FUN_00416dc0(&local_100,local_18,1,local_84 + -1);
                local_90 = local_100;
                dVar2 = (double)FUN_00448650(local_100,PTR_DAT_02004830);
                *param_2 = dVar2 / 1000000.0;
              }
            }
            else {
              local_74 = 0;
              if (local_18 != 0) {
                local_74 = *(int *)(local_18 + -4);
              }
              FUN_00416dc0(&local_f8,local_18,1,local_74 + -1);
              local_80 = local_f8;
              dVar2 = (double)FUN_00448650(local_f8,PTR_DAT_02004830);
              *param_2 = dVar2 / 1000.0;
            }
          }
          else {
            local_64 = 0;
            if (local_18 != 0) {
              local_64 = *(int *)(local_18 + -4);
            }
            FUN_00416dc0(&local_f0,local_18,1,local_64 + -1);
            local_70 = local_f0;
            dVar2 = (double)FUN_00448650(local_f0,PTR_DAT_02004830);
            *param_2 = dVar2;
          }
        }
        else {
          local_54 = 0;
          if (local_18 != 0) {
            local_54 = *(int *)(local_18 + -4);
          }
          FUN_00416dc0(&local_e8,local_18,1,local_54 + -2);
          local_60 = local_e8;
          dVar2 = (double)FUN_00448650(local_e8,PTR_DAT_02004830);
          *param_2 = dVar2 / 1000000000000.0;
        }
      }
      else {
        local_44 = 0;
        if (local_18 != 0) {
          local_44 = *(int *)(local_18 + -4);
        }
        FUN_00416dc0(&local_e0,local_18,1,local_44 + -2);
        local_50 = local_e0;
        dVar2 = (double)FUN_00448650(local_e0,PTR_DAT_02004830);
        *param_2 = dVar2 / 1000000000.0;
      }
    }
    else {
      local_34 = 0;
      if (local_18 != 0) {
        local_34 = *(int *)(local_18 + -4);
      }
      FUN_00416dc0(&local_d8,local_18,1,local_34 + -2);
      local_40 = local_d8;
      dVar2 = (double)FUN_00448650(local_d8,PTR_DAT_02004830);
      *param_2 = dVar2 / 1000000.0;
    }
  }
  else {
    local_24 = 0;
    if (local_18 != 0) {
      local_24 = *(int *)(local_18 + -4);
    }
    FUN_00416dc0(&local_d0,local_18,1,local_24 + -2);
    local_30 = local_d0;
    dVar2 = (double)FUN_00448650(local_d0,PTR_DAT_02004830);
    *param_2 = dVar2 / 1000.0;
  }
  local_9 = 1;
  FUN_00414560(&local_110,10);
  FUN_00414560(&local_20,2);
  return local_9;
}

