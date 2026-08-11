/* Ghidra address: 01744630 */
/* Ghidra symbol: FUN_01744630 */


void FUN_01744630(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char local_5d;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  
  puVar3 = &local_38;
  FUN_01d04970(param_1[5],param_3,param_4,&local_34,puVar3,1);
  uVar2 = CONCAT71((int7)((ulonglong)puVar3 >> 8),*PTR_DAT_02001560);
  (**(code **)(*param_1 + 0x10))(param_1,local_58,param_2,*PTR_DAT_02002480,uVar2);
  uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar2 = FUN_00498310(local_34,local_38);
  iVar1 = thunk_FUN_03f16006(local_58,uVar2);
  if (iVar1 != 0) {
    uVar2 = CONCAT44(uVar4,0x20);
    FUN_00498350(local_48,8,8,0x20,uVar2);
    uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar2 = FUN_00498310(local_34,local_38);
    iVar1 = thunk_FUN_03f16006(local_48,uVar2);
    if (iVar1 == 0) {
      uVar2 = CONCAT44(uVar4,0x20);
      FUN_00498350(local_48,0x28,8,0x40,uVar2);
      uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uVar2 = FUN_00498310(local_34,local_38);
      iVar1 = thunk_FUN_03f16006(local_48,uVar2);
      if (iVar1 == 0) {
        uVar2 = CONCAT44(uVar4,0x20);
        FUN_00498350(local_48,0x48,8,0x60,uVar2);
        uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
        uVar2 = FUN_00498310(local_34,local_38);
        iVar1 = thunk_FUN_03f16006(local_48,uVar2);
        if (iVar1 == 0) {
          uVar2 = CONCAT44(uVar4,0x20);
          FUN_00498350(local_48,0x68,8,0x80,uVar2);
          uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
          uVar2 = FUN_00498310(local_34,local_38);
          iVar1 = thunk_FUN_03f16006(local_48,uVar2);
          if (iVar1 == 0) {
            uVar2 = CONCAT44(uVar4,0x40);
            FUN_00498350(local_48,8,0x28,0x20,uVar2);
            uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
            uVar2 = FUN_00498310(local_34,local_38);
            iVar1 = thunk_FUN_03f16006(local_48,uVar2);
            if (iVar1 == 0) {
              uVar2 = CONCAT44(uVar4,0x40);
              FUN_00498350(local_48,0x28,0x28,0x40,uVar2);
              uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
              uVar2 = FUN_00498310(local_34,local_38);
              iVar1 = thunk_FUN_03f16006(local_48,uVar2);
              if (iVar1 == 0) {
                uVar2 = CONCAT44(uVar4,0x40);
                FUN_00498350(local_48,0x48,0x28,0x60,uVar2);
                uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                uVar2 = FUN_00498310(local_34,local_38);
                iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                if (iVar1 == 0) {
                  uVar2 = CONCAT44(uVar4,0x60);
                  FUN_00498350(local_48,0x68,0x28,0x80,uVar2);
                  uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                  uVar2 = FUN_00498310(local_34,local_38);
                  iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                  if (iVar1 == 0) {
                    uVar2 = CONCAT44(uVar4,0x60);
                    FUN_00498350(local_48,8,0x48,0x20,uVar2);
                    uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                    uVar2 = FUN_00498310(local_34,local_38);
                    iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                    if (iVar1 == 0) {
                      uVar2 = CONCAT44(uVar4,0x60);
                      FUN_00498350(local_48,0x28,0x48,0x40,uVar2);
                      uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                      uVar2 = FUN_00498310(local_34,local_38);
                      iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                      if (iVar1 == 0) {
                        uVar2 = CONCAT44(uVar4,0x60);
                        FUN_00498350(local_48,0x48,0x48,0x60,uVar2);
                        uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                        uVar2 = FUN_00498310(local_34,local_38);
                        iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                        if (iVar1 == 0) {
                          uVar2 = CONCAT44(uVar4,0x80);
                          FUN_00498350(local_48,8,0x68,0x20,uVar2);
                          uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                          uVar2 = FUN_00498310(local_34,local_38);
                          iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                          if (iVar1 == 0) {
                            uVar2 = CONCAT44(uVar4,0x80);
                            FUN_00498350(local_48,0x28,0x68,0x40,uVar2);
                            uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                            uVar2 = FUN_00498310(local_34,local_38);
                            iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                            if (iVar1 == 0) {
                              uVar2 = CONCAT44(uVar4,0x80);
                              FUN_00498350(local_48,0x48,0x68,0x60,uVar2);
                              uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                              uVar2 = FUN_00498310(local_34,local_38);
                              iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                              if (iVar1 == 0) {
                                uVar2 = CONCAT44(uVar4,0xa0);
                                FUN_00498350(local_48,0x68,0x68,0x80,uVar2);
                                uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                                uVar2 = FUN_00498310(local_34,local_38);
                                iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                                if (iVar1 == 0) {
                                  uVar2 = CONCAT44(uVar4,0xa0);
                                  FUN_00498350(local_48,8,0x88,0x40,uVar2);
                                  uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
                                  uVar2 = FUN_00498310(local_34,local_38);
                                  iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                                  if (iVar1 == 0) {
                                    FUN_00498350(local_48,0x48,0x88,0x60,CONCAT44(uVar4,0xa0));
                                    uVar2 = FUN_00498310(local_34,local_38);
                                    iVar1 = thunk_FUN_03f16006(local_48,uVar2);
                                    if (iVar1 != 0) {
                                      local_5d = '\v';
                                    }
                                  }
                                  else {
                                    local_5d = '\0';
                                  }
                                }
                                else {
                                  local_5d = -0x30;
                                }
                              }
                              else {
                                local_5d = '\x03';
                              }
                            }
                            else {
                              local_5d = '\x02';
                            }
                          }
                          else {
                            local_5d = '\x01';
                          }
                        }
                        else {
                          local_5d = '\x06';
                        }
                      }
                      else {
                        local_5d = '\x05';
                      }
                    }
                    else {
                      local_5d = '\x04';
                    }
                  }
                  else {
                    local_5d = '\x10';
                  }
                }
                else {
                  local_5d = '\t';
                }
              }
              else {
                local_5d = '\b';
              }
            }
            else {
              local_5d = '\a';
            }
          }
          else {
            local_5d = '0';
          }
        }
        else {
          local_5d = 'P';
        }
      }
      else {
        local_5d = -0x70;
      }
    }
    else {
      local_5d = '\n';
    }
    (**(code **)(*(longlong *)param_1[5] + 0x2d0))((longlong *)param_1[5],0,&local_30);
    if (local_5d != *local_30) {
      *local_30 = local_5d;
      FUN_0173cbf0(1);
      if (param_1[6] != 0) {
        FUN_019af200(param_1[6],param_1[5]);
      }
      uVar2 = FUN_019a45d0();
      uVar2 = FUN_0198d430(uVar2);
      (**(code **)(*param_1 + 0x48))(param_1,uVar2);
      uVar2 = FUN_019a45d0();
      FUN_0199e310(uVar2,1,1,0);
      if (local_5d == '\0') {
        (**(code **)(*(longlong *)param_1[5] + 0xa0))((longlong *)param_1[5],param_2);
      }
    }
  }
  return;
}

