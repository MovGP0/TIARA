/* Ghidra address: 00b883e0 */
/* Ghidra symbol: FUN_00b883e0 */


undefined8 FUN_00b883e0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414630(param_1);
  FUN_00416880(&local_10,local_res8[0]);
  iVar1 = FUN_0043e6d0(local_10,&DAT_00b8895c);
  if (iVar1 == 0) {
    local_98 = FUN_00b6ca10(&PTR_FUN_00b86690,1,0);
  }
  else {
    FUN_00416880(&local_18,local_res8[0]);
    iVar1 = FUN_0043e6d0(local_18,L"blowfish");
    if (iVar1 == 0) {
      local_98 = FUN_00b6cfe0(&PTR_FUN_00b70868,1,0);
    }
    else {
      FUN_00416880(&local_20,local_res8[0]);
      iVar1 = FUN_0043e6d0(local_20,L"cast128");
      if (iVar1 == 0) {
        local_98 = FUN_00b6cfe0(&PTR_FUN_00b721c8,1,0);
      }
      else {
        FUN_00416880(&local_28,local_res8[0]);
        iVar1 = FUN_0043e6d0(local_28,L"cast256");
        if (iVar1 == 0) {
          local_98 = FUN_00b6cfe0(&PTR_FUN_00b74688,1,0);
        }
        else {
          FUN_00416880(&local_30,local_res8[0]);
          iVar1 = FUN_0043e6d0(local_30,&DAT_00b889c8);
          if (iVar1 == 0) {
            local_98 = FUN_00b6cfe0(&PTR_FUN_00b75f18,1,0);
          }
          else {
            FUN_00416880(&local_38,local_res8[0]);
            iVar1 = FUN_0043e6d0(local_38,L"gost");
            if (iVar1 == 0) {
              local_98 = FUN_00b6cfe0(&PTR_FUN_00b761c8,1,0);
            }
            else {
              FUN_00416880(&local_40,local_res8[0]);
              iVar1 = FUN_0043e6d0(local_40,&DAT_00b889f4);
              if (iVar1 == 0) {
                local_98 = FUN_00b78030(&PTR_FUN_00b777e8,1,0);
              }
              else {
                FUN_00416880(&local_48,local_res8[0]);
                iVar1 = FUN_0043e6d0(local_48,L"idea");
                if (iVar1 == 0) {
                  local_98 = FUN_00b6cfe0(&PTR_FUN_00b781e0,1,0);
                }
                else {
                  FUN_00416880(&local_50,local_res8[0]);
                  iVar1 = FUN_0043e6d0(local_50,L"mars");
                  if (iVar1 == 0) {
                    local_98 = FUN_00b6cfe0(&PTR_FUN_00b793c8,1,0);
                  }
                  else {
                    FUN_00416880(&local_58,local_res8[0]);
                    iVar1 = FUN_0043e6d0(local_58,L"misty1");
                    if (iVar1 == 0) {
                      local_98 = FUN_00b6cfe0(&PTR_FUN_00b7c768,1,0);
                    }
                    else {
                      FUN_00416880(&local_60,local_res8[0]);
                      iVar1 = FUN_0043e6d0(local_60,&DAT_00b88a54);
                      if (iVar1 == 0) {
                        local_98 = FUN_00b6cfe0(&PTR_FUN_00b7d528,1,0);
                      }
                      else {
                        FUN_00416880(&local_68,local_res8[0]);
                        iVar1 = FUN_0043e6d0(local_68,&DAT_00b88a68);
                        if (iVar1 == 0) {
                          local_98 = FUN_00b6cfe0(&PTR_FUN_00b7e178,1,0);
                        }
                        else {
                          FUN_00416880(&local_70,local_res8[0]);
                          iVar1 = FUN_0043e6d0(local_70,&DAT_00b88a7c);
                          if (iVar1 == 0) {
                            local_98 = FUN_00b6cfe0(&PTR_FUN_00b7ebf8,1,0);
                          }
                          else {
                            FUN_00416880(&local_78,local_res8[0]);
                            iVar1 = FUN_0043e6d0(local_78,L"rijndael");
                            if (iVar1 == 0) {
                              local_98 = FUN_00b6cfe0(&PTR_FUN_00b7f7c8,1,0);
                            }
                            else {
                              FUN_00416880(&local_80,local_res8[0]);
                              iVar1 = FUN_0043e6d0(local_80,L"serpent");
                              if (iVar1 == 0) {
                                local_98 = FUN_00b6cfe0(&PTR_FUN_00b80bd8,1,0);
                              }
                              else {
                                FUN_00416880(&local_88,local_res8[0]);
                                iVar1 = FUN_0043e6d0(local_88,&DAT_00b88acc);
                                if (iVar1 == 0) {
                                  local_98 = FUN_00b6cfe0(&PTR_FUN_00b83998,1,0);
                                }
                                else {
                                  FUN_00416880(&local_90,local_res8[0]);
                                  iVar1 = FUN_0043e6d0(local_90,L"twofish");
                                  if (iVar1 == 0) {
                                    local_98 = FUN_00b864e0(&PTR_FUN_00b84328,1,0);
                                  }
                                  else {
                                    local_98 = FUN_00b6cfe0(&PTR_FUN_00b70868,1,0);
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
    }
  }
  FUN_00414560(&local_90,0x11);
  FUN_004144d0(local_res8);
  return local_98;
}

