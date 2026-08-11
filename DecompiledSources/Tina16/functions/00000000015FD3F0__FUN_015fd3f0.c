/* Ghidra address: 015fd3f0 */
/* Ghidra symbol: FUN_015fd3f0 */


undefined4 FUN_015fd3f0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_020038b0);
  if (iVar1 == 0) {
    local_c = 1;
  }
  else {
    iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_02003248);
    if (iVar1 == 0) {
      local_c = 8;
    }
    else {
      iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_02003b58);
      if (iVar1 == 0) {
        local_c = 0x200;
      }
      else {
        iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_02004d88);
        if (iVar1 == 0) {
          local_c = 0x400;
        }
        else {
          iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_020021c8);
          if (iVar1 == 0) {
            local_c = 4;
          }
          else {
            iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_02003ba8);
            if (iVar1 == 0) {
              local_c = 2;
            }
            else {
              iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_02001da8);
              if (iVar1 == 0) {
                local_c = 0x100;
              }
              else {
                iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_020039a0);
                if (iVar1 == 0) {
                  local_c = 0x2000;
                }
                else {
                  iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_02005740);
                  if (iVar1 == 0) {
                    local_c = 0x4000;
                  }
                  else {
                    iVar1 = FUN_00416db0(local_res8[0],*(undefined8 *)PTR_PTR_02003c10);
                    if (iVar1 == 0) {
                      local_c = 0x800;
                    }
                    else {
                      local_c = 0;
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
  FUN_00414480(local_res8);
  return local_c;
}

