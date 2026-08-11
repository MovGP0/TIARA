/* Ghidra address: 012e14b0 */
/* Ghidra symbol: FUN_012e14b0 */


undefined8 FUN_012e14b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong local_res18 [2];
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_4c;
  bool local_45;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_60 = auStack_88;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(&local_38);
  local_3c = 0;
  if (local_res18[0] != 0) {
    local_3c = *(int *)(local_res18[0] + -4);
  }
  if (local_3c == 1) {
    FUN_00414ad0(param_2,local_res18[0]);
  }
  else {
    local_40 = 0;
    if (local_res18[0] != 0) {
      local_40 = *(int *)(local_res18[0] + -4);
    }
    if (local_40 < 2) {
      local_45 = false;
    }
    else {
      local_44 = 0;
      if (local_res18[0] != 0) {
        local_44 = *(int *)(local_res18[0] + -4);
      }
      local_45 = local_44 < 8;
    }
    if (local_45 == false) {
      FUN_00414480(param_2);
    }
    else {
      FUN_00414480(&local_10);
      FUN_00416dc0(&local_10,local_res18[0],1,1);
      FUN_00414b50(&local_38,local_10);
      FUN_00414480(&local_10);
      iVar1 = FUN_00416db0(local_38,&DAT_012e18fc);
      if (iVar1 != 0) {
        iVar1 = FUN_00416db0(local_38,&DAT_012e190c);
        if (iVar1 != 0) {
          iVar1 = FUN_00416db0(local_38,&DAT_012e191c);
          if (iVar1 != 0) {
            iVar1 = FUN_00416db0(local_38,&DAT_012e192c);
            if (iVar1 != 0) {
              iVar1 = FUN_00416db0(local_38,&DAT_012e193c);
              if (iVar1 != 0) {
                iVar1 = FUN_00416db0(local_38,&DAT_012e194c);
                if (iVar1 != 0) {
                  iVar1 = FUN_00416db0(local_38,&DAT_012e1960);
                  if (iVar1 != 0) {
                    FUN_00414480(&local_20);
                    FUN_00416dc0(&local_20,local_res18[0],1,3);
                    FUN_00414b50(&local_38,local_20);
                    FUN_00414480(&local_20);
                    iVar1 = FUN_00416db0(local_38,&DAT_012e1970);
                    if (iVar1 == 0) {
                      FUN_00414ad0(param_2,local_38);
                    }
                    FUN_00414480(&local_28);
                    FUN_00416dc0(&local_28,local_res18[0],1,7);
                    FUN_00414b50(&local_38,local_28);
                    FUN_00414480(&local_28);
                    iVar1 = FUN_00416db0(local_38,L"Celsius");
                    if (iVar1 == 0) {
                      FUN_00414ad0(param_2,local_38);
                    }
                    FUN_00414480(&local_30);
                    FUN_00416dc0(&local_30,local_res18[0],1,2);
                    FUN_00414b50(&local_38,local_30);
                    FUN_00414480(&local_30);
                    iVar1 = FUN_00416db0(local_38,&LAB_012e19a0);
                    if (iVar1 == 0) {
                      FUN_00414ad0(param_2,local_38);
                    }
                    goto LAB_012e17ed;
                  }
                }
              }
            }
          }
        }
      }
      local_4c = 0;
      if (local_res18[0] != 0) {
        local_4c = *(int *)(local_res18[0] + -4);
      }
      FUN_00414480(&local_18);
      FUN_00416dc0(&local_18,local_res18[0],2,local_4c + -1);
      FUN_00414ad0(param_2,local_18);
      FUN_00414480(&local_18);
    }
  }
LAB_012e17ed:
  FUN_00414560(&local_38,6);
  FUN_00414480(local_res18);
  return param_2;
}

