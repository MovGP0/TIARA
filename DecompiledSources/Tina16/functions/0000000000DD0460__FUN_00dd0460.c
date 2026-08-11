/* Ghidra address: 00dd0460 */
/* Ghidra symbol: FUN_00dd0460 */


undefined2 FUN_00dd0460(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined2 local_1a;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(&local_10,local_res8[0]);
  iVar1 = FUN_00416db0(local_10,&DAT_00dd06c4);
  if (iVar1 == 0) {
    local_1a = 0;
  }
  else {
    iVar1 = FUN_00416db0(local_10,&DAT_00dd06d4);
    if (iVar1 == 0) {
      local_1a = 1;
    }
    else {
      iVar1 = FUN_00416db0(local_10,&DAT_00dd06e4);
      if (iVar1 == 0) {
        local_1a = 0;
      }
      else {
        iVar1 = FUN_00416db0(local_10,&DAT_00dd06f4);
        if (iVar1 == 0) {
          local_1a = 1;
        }
        else {
          iVar1 = FUN_00416db0(local_10,&DAT_00dd0704);
          if (iVar1 == 0) {
            local_1a = 2;
          }
          else {
            iVar1 = FUN_00416db0(local_10,&DAT_00dd0714);
            if (iVar1 == 0) {
              local_1a = 3;
            }
            else {
              iVar1 = FUN_00416db0(local_10,&DAT_00dd0724);
              if (iVar1 == 0) {
                local_1a = 4;
              }
              else {
                iVar1 = FUN_00416db0(local_10,&DAT_00dd0734);
                if (iVar1 == 0) {
                  local_1a = 5;
                }
                else {
                  iVar1 = FUN_00416db0(local_10,&DAT_00dd0744);
                  if (iVar1 == 0) {
                    local_1a = 6;
                  }
                  else {
                    iVar1 = FUN_00416db0(local_10,&DAT_00dd0754);
                    if (iVar1 == 0) {
                      local_1a = 7;
                    }
                    else {
                      iVar1 = FUN_00416db0(local_10,&DAT_00dd0764);
                      if (iVar1 == 0) {
                        local_1a = 8;
                      }
                      else {
                        iVar1 = FUN_00416db0(local_10,&DAT_00dd0774);
                        if (iVar1 == 0) {
                          local_1a = 9;
                        }
                        else {
                          iVar1 = FUN_00416db0(local_10,&DAT_00dd0784);
                          if (iVar1 == 0) {
                            local_1a = 10;
                          }
                          else {
                            iVar1 = FUN_00416db0(local_10,&DAT_00dd0794);
                            if (iVar1 == 0) {
                              local_1a = 0xb;
                            }
                            else {
                              iVar1 = FUN_00416db0(local_10,&LAB_00dd07a4);
                              if (iVar1 == 0) {
                                local_1a = 0xc;
                              }
                              else {
                                local_1a = 0xc;
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
          }
        }
      }
    }
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return local_1a;
}

