/* Ghidra address: 01b82500 */
/* Ghidra symbol: FUN_01b82500 */


void FUN_01b82500(longlong param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
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
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
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
  local_30[0] = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0xc);
    local_20._4_2_ = (short)((ulonglong)uVar3 >> 0x20);
    local_20._0_2_ = (short)uVar3;
    local_20._6_2_ = (short)((ulonglong)uVar3 >> 0x30);
    local_20._2_2_ = (short)((ulonglong)uVar3 >> 0x10);
    iVar2 = (int)local_20._2_2_;
    iVar4 = (int)local_20._6_2_;
    lVar1 = (longlong)
            (((int)local_20._4_2_ - (int)(short)local_20) - (int)*(short *)(param_3 + 0x24));
    local_20 = uVar3;
    local_c0 = FUN_01b7fce0(lVar1 / 2 & 0xffffffff,lVar1 % 2 & 0xffffffff);
    lVar1 = (longlong)((iVar4 - iVar2) - (int)*(short *)(param_3 + 0x26));
    local_bc = FUN_01b7fce0(lVar1 / 2 & 0xffffffff,lVar1 % 2 & 0xffffffff);
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_0043e1a0(local_30,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
  iVar2 = FUN_00416db0(local_30[0],&DAT_01b82cd8);
  if (iVar2 == 0) {
    uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0,0x10);
    *(undefined8 *)param_2 = uVar3;
    lVar1 = *(longlong *)(param_1 + 8);
    iVar2 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x18),L"M270");
    if (iVar2 == 0) {
      uVar3 = FUN_01b80b10(lVar1,0xffffffa0,0x20);
      *(undefined8 *)param_2 = uVar3;
    }
  }
  else {
    FUN_0043e1a0(&local_38,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
    iVar2 = FUN_00416db0(local_38,&DAT_01b82d04);
    if (iVar2 == 0) {
      uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0x10,0x10);
      *(undefined8 *)param_2 = uVar3;
    }
    else {
      FUN_0043e1a0(&local_40,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
      iVar2 = FUN_00416db0(local_40,&DAT_01b82d18);
      if (iVar2 == 0) {
        uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0,0);
        *(undefined8 *)param_2 = uVar3;
      }
      else {
        FUN_0043e1a0(&local_48,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
        iVar2 = FUN_00416db0(local_48,&DAT_01b82d2c);
        if (iVar2 == 0) {
          uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xffffffd0,0x10);
          *(undefined8 *)param_2 = uVar3;
        }
        else {
          FUN_0043e1a0(&local_50,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
          iVar2 = FUN_00416db0(local_50,L"diode");
          if (iVar2 == 0) {
            uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0,0);
            *(undefined8 *)param_2 = uVar3;
          }
          else {
            FUN_0043e1a0(&local_58,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
            iVar2 = FUN_00416db0(local_58,L"zener");
            if (iVar2 == 0) {
              uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xfffffff8,0);
              *(undefined8 *)param_2 = uVar3;
            }
            else {
              FUN_0043e1a0(&local_60,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
              iVar2 = FUN_00416db0(local_60,&DAT_01b82d6c);
              if (iVar2 == 0) {
                uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0,0);
                *(undefined8 *)param_2 = uVar3;
              }
              else {
                FUN_0043e1a0(&local_68,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                iVar2 = FUN_00416db0(local_68,&PTR_s_leManager_TSourceInfo_01b82d80);
                if (iVar2 == 0) {
                  uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xffffffd0,0x10);
                  *(undefined8 *)param_2 = uVar3;
                }
                else {
                  FUN_0043e1a0(&local_70,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                  iVar2 = FUN_00416db0(local_70,L"opamp");
                  if (iVar2 == 0) {
                    uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xffffffe0,0x20);
                    *(undefined8 *)param_2 = uVar3;
                  }
                  else {
                    FUN_0043e1a0(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                    iVar2 = FUN_00416db0(local_78,&DAT_01b82dac);
                    if (iVar2 == 0) {
                      uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0,0);
                      *(undefined8 *)param_2 = uVar3;
                    }
                    else {
                      FUN_0043e1a0(&local_80,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                      iVar2 = FUN_00416db0(local_80,L"nmos");
                      if (iVar2 != 0) {
                        FUN_0043e1a0(&local_88,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                        iVar2 = FUN_00416db0(local_88,L"pmos");
                        if (iVar2 != 0) {
                          FUN_0043e1a0(&local_90,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10))
                          ;
                          iVar2 = FUN_00416db0(local_90,L"voltage");
                          if (iVar2 == 0) {
                            uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xffffffe0,0x10);
                            *(undefined8 *)param_2 = uVar3;
                          }
                          else {
                            FUN_0043e1a0(&local_98,
                                         *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                            iVar2 = FUN_00416db0(local_98,L"current");
                            if (iVar2 == 0) {
                              uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xffffffe0,0);
                              *(undefined8 *)param_2 = uVar3;
                            }
                            else {
                              FUN_0043e1a0(&local_a0,
                                           *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                              iVar2 = FUN_00416db0(local_a0,&DAT_01b82e28);
                              if (iVar2 == 0) {
                                uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xffffffe0,0x20);
                                *(undefined8 *)param_2 = uVar3;
                              }
                              else {
                                FUN_0043e1a0(&local_a8,
                                             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                                iVar2 = FUN_00416db0(local_a8,&PTR_s_B_01b82e3c);
                                if (iVar2 == 0) {
                                  uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xffffffe0,0x20)
                                  ;
                                  *(undefined8 *)param_2 = uVar3;
                                }
                                else {
                                  FUN_0043e1a0(&local_b0,
                                               *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
                                  iVar2 = FUN_00416db0(local_b0,&DAT_01b82e50);
                                  if (iVar2 == 0) {
                                    uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0,0x30);
                                    *(undefined8 *)param_2 = uVar3;
                                  }
                                  else {
                                    FUN_0043e1a0(&local_b8,
                                                 *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10))
                                    ;
                                    iVar2 = FUN_00416db0(local_b8,L"dflop");
                                    if (iVar2 == 0) {
                                      uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0xffffffb0,0
                                                          );
                                      *(undefined8 *)param_2 = uVar3;
                                    }
                                    else if (param_3 != 0) {
                                      iVar2 = FUN_00416db0(*(undefined8 *)
                                                            (*(longlong *)(param_1 + 8) + 0x18),
                                                           &LAB_01b82e7c);
                                      if (iVar2 == 0) {
                                        *param_2 = -local_c0;
                                        param_2[1] = -local_bc;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto code_r0x01b82c96;
                        }
                      }
                      uVar3 = FUN_01b80b10(*(undefined8 *)(param_1 + 8),0,0);
                      *(undefined8 *)param_2 = uVar3;
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
code_r0x01b82c96:
  FUN_00414560(&local_b8,0x12);
  return;
}

