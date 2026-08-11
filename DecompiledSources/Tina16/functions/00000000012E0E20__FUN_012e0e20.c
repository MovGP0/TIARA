/* Ghidra address: 012e0e20 */
/* Ghidra symbol: FUN_012e0e20 */


double FUN_012e0e20(undefined8 param_1,double param_2,longlong param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong local_res18 [2];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  bool local_2e;
  bool local_2d;
  int local_2c;
  int local_28;
  int local_24;
  undefined *local_20;
  double local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_20 = (undefined *)0x0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_24 = 0;
  if (local_res18[0] != 0) {
    local_24 = *(int *)(local_res18[0] + -4);
  }
  dVar1 = param_2;
  if ((local_24 != 1) &&
     (local_18 = param_2, cVar2 = FUN_012e2780(param_1,local_res18[0]), dVar1 = param_2,
     cVar2 == '\0')) {
    local_28 = 0;
    if (local_res18[0] != 0) {
      local_28 = *(int *)(local_res18[0] + -4);
    }
    if (local_28 < 2) {
      local_2d = false;
    }
    else {
      local_2c = 0;
      if (local_res18[0] != 0) {
        local_2c = *(int *)(local_res18[0] + -4);
      }
      local_2d = local_2c < 8;
    }
    dVar1 = param_2;
    if (local_2d != false) {
      FUN_00414480(&local_10);
      FUN_00416dc0(&local_10,local_res18[0],1,1);
      FUN_00414b50(&local_20,local_10);
      FUN_00414480(&local_10);
      iVar3 = FUN_00416db0(local_20,&DAT_012e1190);
      if (iVar3 == 0) {
        dVar1 = param_2 * 1e-15;
      }
      else {
        iVar3 = FUN_00416db0(local_20,&DAT_012e11a0);
        if (iVar3 == 0) {
          dVar1 = param_2 * 1e-12;
        }
        else {
          iVar3 = FUN_00416db0(local_20,&DAT_012e11b0);
          if (iVar3 == 0) {
            dVar1 = param_2 * 1e-09;
          }
          else {
            iVar3 = FUN_00416db0(local_20,&DAT_012e11c0);
            if (iVar3 == 0) {
              dVar1 = param_2 * 1e-06;
            }
            else {
              iVar3 = FUN_00416db0(local_20,&DAT_012e11d0);
              if (iVar3 == 0) {
                dVar1 = param_2 * 0.001;
              }
              else {
                if (local_20 == &DAT_012e11e0) {
                  local_2e = true;
                }
                else if (local_20 == (undefined *)0x0) {
                  local_2e = false;
                }
                else {
                  iVar3 = FUN_0043e420(local_20,&DAT_012e11e0);
                  local_2e = iVar3 == 0;
                }
                if (local_2e == false) {
                  iVar3 = FUN_00416db0(local_20,&DAT_012e11f0);
                  if (iVar3 == 0) {
                    dVar1 = param_2 * 1000000.0;
                  }
                  else {
                    iVar3 = FUN_00416db0(local_20,&LAB_012e1204);
                    dVar1 = local_18;
                    if (iVar3 == 0) {
                      dVar1 = param_2 * 1000000000.0;
                    }
                  }
                }
                else {
                  dVar1 = param_2 * 1000.0;
                }
              }
            }
          }
        }
      }
    }
  }
  local_18 = dVar1;
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return local_18;
}

