/* Ghidra address: 00e8f6c0 */
/* Ghidra symbol: FUN_00e8f6c0 */


undefined8
FUN_00e8f6c0(longlong *param_1,undefined4 *param_2,uint *param_3,uint *param_4,undefined4 *param_5)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  short local_98 [32];
  longlong *local_58;
  uint *local_50;
  uint *local_48;
  
  lVar6 = *param_1;
  lVar7 = lVar6 + 2;
  sVar2 = *(short *)(lVar6 + 2);
  uVar9 = 0x2e;
  if (sVar2 == 0) goto LAB_00e8f7e8;
  *param_2 = 0;
  if (sVar2 == 0x7b) {
    if (*(short *)(lVar6 + 4) == 0x5e) {
      *param_2 = 1;
      lVar7 = 2;
    }
    else {
      lVar7 = 1;
    }
    lVar1 = lVar6 + 2 + lVar7 * 2;
    sVar2 = *(short *)(lVar6 + 2 + lVar7 * 2);
    lVar7 = lVar1;
    if (sVar2 == 0) goto LAB_00e8f7e8;
    if (sVar2 == 0x7d) {
      lVar6 = 0;
    }
    else {
      sVar3 = *(short *)(lVar1 + 2);
      lVar7 = lVar1 + 2;
      if (sVar3 == 0) goto LAB_00e8f7e8;
      if (sVar3 == 0x7d) goto LAB_00e8f715;
      sVar4 = *(short *)(lVar1 + 4);
      lVar7 = lVar1 + 4;
      if (sVar4 == 0) goto LAB_00e8f7e8;
      local_98[0] = sVar2;
      local_98[1] = sVar3;
      if (sVar4 == 0x7d) {
        lVar6 = 2;
      }
      else {
        sVar2 = *(short *)(lVar1 + 6);
        lVar7 = lVar1 + 6;
        if (sVar2 == 0) goto LAB_00e8f7e8;
        local_98[2] = sVar4;
        if (sVar2 == 0x7d) {
          lVar6 = 3;
        }
        else {
          sVar3 = *(short *)(lVar1 + 8);
          lVar7 = lVar1 + 8;
          if (sVar3 == 0) goto LAB_00e8f7e8;
          local_98[3] = sVar2;
          if (sVar3 == 0x7d) {
            lVar6 = 4;
          }
          else {
            sVar2 = *(short *)(lVar1 + 10);
            lVar7 = lVar1 + 10;
            if (sVar2 == 0) goto LAB_00e8f7e8;
            local_98[4] = sVar3;
            if (sVar2 == 0x7d) {
              lVar6 = 5;
            }
            else {
              sVar3 = *(short *)(lVar1 + 0xc);
              lVar7 = lVar1 + 0xc;
              if (sVar3 == 0) goto LAB_00e8f7e8;
              local_98[5] = sVar2;
              if (sVar3 == 0x7d) {
                lVar6 = 6;
              }
              else {
                sVar2 = *(short *)(lVar1 + 0xe);
                lVar7 = lVar1 + 0xe;
                if (sVar2 == 0) goto LAB_00e8f7e8;
                local_98[6] = sVar3;
                if (sVar2 == 0x7d) {
                  lVar6 = 7;
                }
                else {
                  sVar3 = *(short *)(lVar1 + 0x10);
                  lVar7 = lVar1 + 0x10;
                  if (sVar3 == 0) {
                    uVar9 = 0x2e;
                    goto LAB_00e8f7e8;
                  }
                  local_98[7] = sVar2;
                  if (sVar3 == 0x7d) {
                    lVar6 = 8;
                  }
                  else {
                    sVar2 = *(short *)(lVar1 + 0x12);
                    lVar7 = lVar1 + 0x12;
                    if (sVar2 == 0) {
LAB_00e8fd20:
                      uVar9 = 0x2e;
                      goto LAB_00e8f7e8;
                    }
                    local_98[8] = sVar3;
                    if (sVar2 == 0x7d) {
                      lVar6 = 9;
                    }
                    else {
                      sVar3 = *(short *)(lVar1 + 0x14);
                      lVar7 = lVar1 + 0x14;
                      if (sVar3 == 0) goto LAB_00e8fd20;
                      local_98[9] = sVar2;
                      if (sVar3 == 0x7d) {
                        lVar6 = 10;
                      }
                      else {
                        sVar2 = *(short *)(lVar1 + 0x16);
                        lVar7 = lVar1 + 0x16;
                        if (sVar2 == 0) goto LAB_00e8fd20;
                        local_98[10] = sVar3;
                        if (sVar2 == 0x7d) {
                          lVar6 = 0xb;
                        }
                        else {
                          sVar3 = *(short *)(lVar1 + 0x18);
                          lVar7 = lVar1 + 0x18;
                          if (sVar3 == 0) goto LAB_00e8fd20;
                          local_98[0xb] = sVar2;
                          if (sVar3 == 0x7d) {
                            lVar6 = 0xc;
                          }
                          else {
                            sVar2 = *(short *)(lVar1 + 0x1a);
                            lVar7 = lVar1 + 0x1a;
                            if (sVar2 == 0) goto LAB_00e8fd20;
                            local_98[0xc] = sVar3;
                            if (sVar2 == 0x7d) {
                              lVar6 = 0xd;
                            }
                            else {
                              sVar3 = *(short *)(lVar1 + 0x1c);
                              lVar7 = lVar1 + 0x1c;
                              if (sVar3 == 0) goto LAB_00e8fd20;
                              local_98[0xd] = sVar2;
                              if (sVar3 == 0x7d) {
                                lVar6 = 0xe;
                              }
                              else {
                                sVar2 = *(short *)(lVar1 + 0x1e);
                                lVar7 = lVar1 + 0x1e;
                                if (sVar2 == 0) goto LAB_00e8fd20;
                                local_98[0xe] = sVar3;
                                if (sVar2 == 0x7d) {
                                  lVar6 = 0xf;
                                }
                                else {
                                  sVar3 = *(short *)(lVar1 + 0x20);
                                  lVar7 = lVar1 + 0x20;
                                  if (sVar3 == 0) goto LAB_00e8fd20;
                                  local_98[0xf] = sVar2;
                                  if (sVar3 == 0x7d) {
                                    lVar6 = 0x10;
                                  }
                                  else {
                                    sVar2 = *(short *)(lVar1 + 0x22);
                                    lVar7 = lVar1 + 0x22;
                                    if (sVar2 == 0) goto LAB_00e8fd20;
                                    local_98[0x10] = sVar3;
                                    if (sVar2 == 0x7d) {
                                      lVar6 = 0x11;
                                    }
                                    else {
                                      sVar3 = *(short *)(lVar1 + 0x24);
                                      lVar7 = lVar1 + 0x24;
                                      if (sVar3 == 0) goto LAB_00e8fd20;
                                      local_98[0x11] = sVar2;
                                      if (sVar3 == 0x7d) {
                                        lVar6 = 0x12;
                                      }
                                      else {
                                        sVar2 = *(short *)(lVar1 + 0x26);
                                        lVar7 = lVar1 + 0x26;
                                        if (sVar2 == 0) goto LAB_00e8fd20;
                                        local_98[0x12] = sVar3;
                                        if (sVar2 == 0x7d) {
                                          lVar6 = 0x13;
                                        }
                                        else {
                                          sVar3 = *(short *)(lVar1 + 0x28);
                                          lVar7 = lVar1 + 0x28;
                                          if (sVar3 == 0) goto LAB_00e8fd20;
                                          local_98[0x13] = sVar2;
                                          if (sVar3 == 0x7d) {
                                            lVar6 = 0x14;
                                          }
                                          else {
                                            sVar2 = *(short *)(lVar1 + 0x2a);
                                            lVar7 = lVar1 + 0x2a;
                                            if (sVar2 == 0) goto LAB_00e8fd20;
                                            local_98[0x14] = sVar3;
                                            if (sVar2 == 0x7d) {
                                              lVar6 = 0x15;
                                            }
                                            else {
                                              sVar3 = *(short *)(lVar1 + 0x2c);
                                              lVar7 = lVar1 + 0x2c;
                                              if (sVar3 == 0) goto LAB_00e8fd20;
                                              local_98[0x15] = sVar2;
                                              if (sVar3 == 0x7d) {
                                                lVar6 = 0x16;
                                              }
                                              else {
                                                sVar2 = *(short *)(lVar1 + 0x2e);
                                                lVar7 = lVar1 + 0x2e;
                                                if (sVar2 == 0) goto LAB_00e8fd20;
                                                local_98[0x16] = sVar3;
                                                if (sVar2 == 0x7d) {
                                                  lVar6 = 0x17;
                                                }
                                                else {
                                                  sVar3 = *(short *)(lVar1 + 0x30);
                                                  lVar7 = lVar1 + 0x30;
                                                  if (sVar3 == 0) goto LAB_00e8fd20;
                                                  local_98[0x17] = sVar2;
                                                  if (sVar3 == 0x7d) {
                                                    lVar6 = 0x18;
                                                  }
                                                  else {
                                                    sVar2 = *(short *)(lVar1 + 0x32);
                                                    lVar7 = lVar1 + 0x32;
                                                    if (sVar2 == 0) goto LAB_00e8fd20;
                                                    local_98[0x18] = sVar3;
                                                    if (sVar2 == 0x7d) {
                                                      lVar6 = 0x19;
                                                    }
                                                    else {
                                                      sVar3 = *(short *)(lVar1 + 0x34);
                                                      lVar7 = lVar1 + 0x34;
                                                      if (sVar3 == 0) goto LAB_00e8fd20;
                                                      local_98[0x19] = sVar2;
                                                      if (sVar3 == 0x7d) {
                                                        lVar6 = 0x1a;
                                                      }
                                                      else {
                                                        sVar2 = *(short *)(lVar1 + 0x36);
                                                        lVar7 = lVar1 + 0x36;
                                                        if (sVar2 == 0) goto LAB_00e8fd20;
                                                        local_98[0x1a] = sVar3;
                                                        if (sVar2 == 0x7d) {
                                                          lVar6 = 0x1b;
                                                        }
                                                        else {
                                                          sVar3 = *(short *)(lVar1 + 0x38);
                                                          lVar7 = lVar1 + 0x38;
                                                          if (sVar3 == 0) goto LAB_00e8fd20;
                                                          local_98[0x1b] = sVar2;
                                                          if (sVar3 == 0x7d) {
                                                            lVar6 = 0x1c;
                                                          }
                                                          else {
                                                            sVar2 = *(short *)(lVar1 + 0x3a);
                                                            lVar7 = lVar1 + 0x3a;
                                                            if (sVar2 == 0) goto LAB_00e8fd20;
                                                            local_98[0x1c] = sVar3;
                                                            if (sVar2 == 0x7d) {
                                                              lVar6 = 0x1d;
                                                            }
                                                            else {
                                                              lVar7 = lVar1 + 0x3c;
                                                              if ((*(short *)(lVar1 + 0x3c) == 0) ||
                                                                 (*(short *)(lVar1 + 0x3c) != 0x7d))
                                                              goto LAB_00e8fd20;
                                                              lVar6 = 0x1e;
                                                              local_98[0x1d] = sVar2;
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
  else {
LAB_00e8f715:
    local_98[0] = sVar2;
    lVar6 = 1;
  }
  local_98[lVar6] = 0;
  *param_1 = lVar7;
  uVar9 = 0x2f;
  if (0 < DAT_01ee1ff8) {
    iVar11 = 0;
    iVar8 = DAT_01ee1ff8;
    local_58 = param_1;
    local_50 = param_3;
    local_48 = param_4;
    do {
      while( true ) {
        iVar10 = iVar8 + iVar11 >> 1;
        lVar6 = (longlong)iVar10;
        iVar5 = FUN_00ea1320(local_98,&DAT_01ee16f0 + *(ushort *)(&DAT_01ee1c00 + lVar6 * 6));
        if (iVar5 == 0) {
          *local_50 = (uint)*(ushort *)(lVar6 * 6 + 0x1ee1c02);
          *local_48 = (uint)*(ushort *)(lVar6 * 6 + 0x1ee1c04);
          return 1;
        }
        if (0 < iVar5) break;
        iVar8 = iVar10;
        if (iVar10 <= iVar11) goto LAB_00e8f7db;
      }
      iVar11 = iVar10 + 1;
    } while (iVar11 < iVar8);
LAB_00e8f7db:
    uVar9 = 0x2f;
    param_1 = local_58;
  }
LAB_00e8f7e8:
  *param_5 = uVar9;
  *param_1 = lVar7;
  return 0;
}

