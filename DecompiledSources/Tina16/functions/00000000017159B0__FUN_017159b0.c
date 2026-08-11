/* Ghidra address: 017159b0 */
/* Ghidra symbol: FUN_017159b0 */


undefined4 FUN_017159b0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_00416db0(local_res8[0],&DAT_01715bc4);
  if (iVar1 == 0) {
    local_c = 0x17;
  }
  else {
    iVar1 = FUN_00416db0(local_res8[0],L"[DZ]");
    if (iVar1 == 0) {
      local_c = 0x2b;
    }
    else {
      iVar1 = FUN_00416db0(local_res8[0],L"[DL]");
      if (iVar1 == 0) {
        local_c = 0x2c;
      }
      else {
        iVar1 = FUN_00416db0(local_res8[0],L"[DV]");
        if (iVar1 == 0) {
          local_c = 0x35;
        }
        else {
          iVar1 = FUN_00416db0(local_res8[0],L"[DS]");
          if (iVar1 == 0) {
            local_c = 0x40;
          }
          else {
            iVar1 = FUN_00416db0(local_res8[0],L"[NPN]");
            if (iVar1 == 0) {
              local_c = 0x57;
            }
            else {
              iVar1 = FUN_00416db0(local_res8[0],L"[PNP]");
              if (iVar1 == 0) {
                local_c = 0x58;
              }
              else {
                iVar1 = FUN_00416db0(local_res8[0],L"[NMOSE]");
                if (iVar1 == 0) {
                  local_c = 0x59;
                }
                else {
                  iVar1 = FUN_00416db0(local_res8[0],L"[PMOSE]");
                  if (iVar1 == 0) {
                    local_c = 0x5a;
                  }
                  else {
                    iVar1 = FUN_00416db0(local_res8[0],L"[NMOSD]");
                    if (iVar1 == 0) {
                      local_c = 0x5b;
                    }
                    else {
                      iVar1 = FUN_00416db0(local_res8[0],L"[PMOSD]");
                      if (iVar1 == 0) {
                        local_c = 0x5c;
                      }
                      else {
                        iVar1 = FUN_00416db0(local_res8[0],L"[NJF]");
                        if (iVar1 == 0) {
                          local_c = 0x5d;
                        }
                        else {
                          iVar1 = FUN_00416db0(local_res8[0],L"[PJF]");
                          if (iVar1 == 0) {
                            local_c = 0x5e;
                          }
                          else {
                            iVar1 = FUN_00416db0(local_res8[0],L"[MESN]");
                            if (iVar1 == 0) {
                              local_c = 0xb1;
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
        }
      }
    }
  }
  FUN_00414480(local_res8);
  return local_c;
}

