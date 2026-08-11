/* Ghidra address: 01715d20 */
/* Ghidra symbol: FUN_01715d20 */


undefined4 FUN_01715d20(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_00416db0(local_res8[0],L"[NPN]");
  if (iVar1 == 0) {
    local_c = 0xfd;
  }
  else {
    iVar1 = FUN_00416db0(local_res8[0],L"[PNP]");
    if (iVar1 == 0) {
      local_c = 0xfe;
    }
    else {
      iVar1 = FUN_00416db0(local_res8[0],&DAT_01715ee4);
      if (iVar1 == 0) {
        local_c = 0xff;
      }
      else {
        iVar1 = FUN_00416db0(local_res8[0],&DAT_01715ef8);
        if (iVar1 == 0) {
          local_c = 0x100;
        }
        else {
          iVar1 = FUN_00416db0(local_res8[0],L"[SNMOS]");
          if (iVar1 == 0) {
            local_c = 0x102;
          }
          else {
            iVar1 = FUN_00416db0(local_res8[0],L"[SPMOS]");
            if (iVar1 == 0) {
              local_c = 0x103;
            }
            else {
              iVar1 = FUN_00416db0(local_res8[0],L"[SNFET]");
              if (iVar1 == 0) {
                local_c = 0x104;
              }
              else {
                iVar1 = FUN_00416db0(local_res8[0],L"[SPFET]");
                if (iVar1 == 0) {
                  local_c = 0x105;
                }
                else {
                  iVar1 = FUN_00416db0(local_res8[0],L"[GaAsFET]");
                  if (iVar1 == 0) {
                    local_c = 0x106;
                  }
                  else {
                    iVar1 = FUN_00416db0(local_res8[0],L"[DP]");
                    if (iVar1 == 0) {
                      local_c = 0x108;
                    }
                    else {
                      local_c = 0xffffffff;
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

