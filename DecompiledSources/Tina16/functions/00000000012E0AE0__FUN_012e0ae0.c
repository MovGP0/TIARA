/* Ghidra address: 012e0ae0 */
/* Ghidra symbol: FUN_012e0ae0 */


undefined8 FUN_012e0ae0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  bool local_2d;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_20 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(&local_20);
  local_24 = 0;
  if (local_res10[0] != 0) {
    local_24 = *(int *)(local_res10[0] + -4);
  }
  if (local_24 != 1) {
    cVar1 = FUN_012e2780(param_1,local_res10[0]);
    if (cVar1 == '\0') {
      local_28 = 0;
      if (local_res10[0] != 0) {
        local_28 = *(int *)(local_res10[0] + -4);
      }
      if (local_28 < 2) {
        local_2d = false;
      }
      else {
        local_2c = 0;
        if (local_res10[0] != 0) {
          local_2c = *(int *)(local_res10[0] + -4);
        }
        local_2d = local_2c < 8;
      }
      if (local_2d == false) {
        local_18 = 0x3ff0000000000000;
      }
      else {
        FUN_00414480(&local_10);
        FUN_00416dc0(&local_10,local_res10[0],1,1);
        FUN_00414b50(&local_20,local_10);
        FUN_00414480(&local_10);
        iVar2 = FUN_00416db0(local_20,&DAT_012e0d9c);
        if (iVar2 == 0) {
          local_18 = 0x3cd203af9ee75616;
        }
        else {
          iVar2 = FUN_00416db0(local_20,&DAT_012e0dac);
          if (iVar2 == 0) {
            local_18 = 0x3d719799812dea11;
          }
          else {
            iVar2 = FUN_00416db0(local_20,&DAT_012e0dbc);
            if (iVar2 == 0) {
              local_18 = 0x3e112e0be826d695;
            }
            else {
              iVar2 = FUN_00416db0(local_20,&DAT_012e0dcc);
              if (iVar2 == 0) {
                local_18 = 0x3eb0c6f7a0b5ed8d;
              }
              else {
                iVar2 = FUN_00416db0(local_20,&DAT_012e0ddc);
                if (iVar2 == 0) {
                  local_18 = 0x3f50624dd2f1a9fc;
                }
                else {
                  iVar2 = FUN_00416db0(local_20,&DAT_012e0dec);
                  if (iVar2 == 0) {
                    local_18 = 0x408f400000000000;
                  }
                  else {
                    iVar2 = FUN_00416db0(local_20,&DAT_012e0dfc);
                    if (iVar2 == 0) {
                      local_18 = 0x412e848000000000;
                    }
                    else {
                      iVar2 = FUN_00416db0(local_20,&LAB_012e0e10);
                      if (iVar2 == 0) {
                        local_18 = 0x41cdcd6500000000;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_r0x012e0d14;
    }
  }
  local_18 = 0x3ff0000000000000;
code_r0x012e0d14:
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return local_18;
}

