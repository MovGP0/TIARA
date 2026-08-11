/* Ghidra address: 008acad0 */
/* Ghidra symbol: FUN_008acad0 */


void FUN_008acad0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_198;
  undefined1 *local_190;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  short local_16a;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  short local_14e;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  short local_132;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  undefined8 local_120;
  int local_114;
  int local_110;
  char local_109;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_190 = auStack_1c8;
  local_198 = 0;
  local_100 = 0;
  local_108 = 0;
  local_120 = 0;
  local_10 = 0;
  local_18 = 0;
  local_58 = 0;
  local_50 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_98 = 0;
  local_90 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  FUN_00414480(param_3);
  iVar4 = local_110;
  if (param_1 != 0) {
    FUN_004b6dc0(param_1,0);
    FUN_00874520(&local_120);
    FUN_008787b0(&local_100,param_1,0xffffffff,local_120);
    FUN_0041b800(&local_120);
    local_109 = '\0';
    local_110 = 0;
    local_124 = 0;
    if (local_100 != 0) {
      local_124 = *(int *)(local_100 + -4);
    }
    local_114 = local_124;
    iVar4 = local_110;
LAB_008acd02:
    do {
      local_110 = iVar4;
      iVar4 = local_110 + 1;
      if (local_114 < iVar4) goto LAB_008aec13;
    } while (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != 0x3c);
    iVar4 = local_110 + 2;
    if (local_114 < iVar4) goto LAB_008aec13;
    sVar1 = *(short *)(local_100 + -2 + (longlong)iVar4 * 2);
    if (sVar1 == 0x3f) {
      iVar4 = local_110 + 3;
      if (local_114 < iVar4) goto LAB_008aec13;
    }
    else if (sVar1 == 0x21) {
      local_110 = local_110 + 3;
      iVar4 = local_110;
      if (local_114 < local_110) goto LAB_008aec13;
      FUN_00416dc0(&local_198,local_100,local_110,2);
      iVar3 = FUN_00416db0(local_198,&DAT_008af19c);
      iVar4 = local_110;
      if (iVar3 == 0) {
        iVar4 = local_110 + 2;
        while ((iVar4 <= local_114 && (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != 0x2d))) {
          iVar4 = iVar4 + 1;
        }
        local_128 = 0;
        for (; iVar4 <= local_114; iVar4 = iVar4 + 1) {
          if (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) == 0x2d) {
            if (local_128 < 2) {
              local_128 = local_128 + 1;
            }
          }
          else {
            if ((*(short *)(local_100 + -2 + (longlong)iVar4 * 2) == 0x3e) && (local_128 == 2))
            break;
            local_128 = 0;
          }
        }
        goto LAB_008acd02;
      }
    }
    local_110 = iVar4;
    if (local_110 <= local_114) {
      do {
        cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
        if (cVar2 == '\0') break;
        local_110 = local_110 + 1;
      } while (local_110 <= local_114);
    }
    FUN_00414480(&local_10);
    local_12c = local_110;
    if (local_110 <= local_114) {
      do {
        cVar2 = FUN_008791b0(local_100,local_110,
                             L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:.");
        if (cVar2 == '\0') break;
        local_110 = local_110 + 1;
      } while (local_110 <= local_114);
    }
    FUN_00416dc0(&local_10,local_100,local_12c,local_110 - local_12c);
    FUN_00414b50(&local_108,local_10);
    FUN_00414480(&local_10);
    if (local_109 == '\0') {
      while ((local_110 <= local_114 &&
             (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e))) {
        local_110 = local_110 + 1;
      }
      cVar2 = FUN_00879070(local_108,L"HTML");
      iVar4 = local_110;
      if (cVar2 != '\0') {
        local_109 = '\x01';
      }
      goto LAB_008acd02;
    }
    if (local_109 == '\x01') {
      while ((local_110 <= local_114 &&
             (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e))) {
        local_110 = local_110 + 1;
      }
      iVar3 = FUN_00874bb0(local_108,&PTR_u_TITLE_01e25878,2,0);
      if (iVar3 == 0) {
        local_109 = '\x02';
        iVar4 = local_110;
      }
      else if (iVar3 == 1) {
        local_109 = '\x03';
        iVar4 = local_110;
      }
      else {
        iVar4 = local_110;
        if (iVar3 == 2) {
          local_109 = '\x04';
        }
      }
      goto LAB_008acd02;
    }
    if (local_109 == '\x03') {
      iVar3 = FUN_00874bb0(local_108,&PTR_u_META_01e25890,3,0);
      if (iVar3 == 0) {
        if (local_110 <= local_114) {
          do {
            cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
            if (cVar2 == '\0') break;
            local_110 = local_110 + 1;
          } while (local_110 <= local_114);
        }
        FUN_00414480(&local_18);
        local_130 = local_110;
        if (local_110 <= local_114) {
          do {
            cVar2 = FUN_008791b0(local_100,local_110,
                                 L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:."
                                );
            if (cVar2 == '\0') break;
            local_110 = local_110 + 1;
          } while (local_110 <= local_114);
        }
        FUN_00416dc0(&local_18,local_100,local_130,local_110 - local_130);
        FUN_00414b50(&local_108,local_18);
        FUN_00414480(&local_18);
        iVar4 = FUN_00874bb0(local_108,&PTR_u_HTTP_EQUIV_01e258b0,1,0);
        if (iVar4 == 0) {
          if (local_110 <= local_114) {
            do {
              cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
              if (cVar2 == '\0') break;
              local_110 = local_110 + 1;
            } while (local_110 <= local_114);
          }
          iVar4 = local_110;
          if (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x3d) {
            local_110 = local_110 + 1;
            iVar4 = local_110;
            if (local_114 < local_110) goto LAB_008aec13;
            if (param_2 == (longlong *)0x0) {
              FUN_00414480(&local_98);
              local_90 = 0;
              local_60 = 0;
              local_68 = 0;
              local_70 = 0;
              local_78 = 0;
              local_80 = 0;
              local_88 = 0;
              FUN_00414480(&local_98);
              if (local_110 <= local_114) {
                do {
                  cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                  if (cVar2 == '\0') break;
                  local_110 = local_110 + 1;
                } while (local_110 <= local_114);
              }
              cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af274);
              if (cVar2 == '\0') {
                if (local_110 <= local_114) {
                  FUN_00414480(&local_68);
                  local_158 = local_110;
                  if (local_110 <= local_114) {
                    do {
                      cVar2 = FUN_008791b0(local_100,local_110,
                                           L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:."
                                          );
                      if (cVar2 == '\0') break;
                      local_110 = local_110 + 1;
                    } while (local_110 <= local_114);
                  }
                  FUN_00416dc0(&local_68,local_100,local_158,local_110 - local_158);
                  FUN_00414b50(&local_90,local_68);
                  FUN_00414480(&local_68);
                  goto LAB_008adcee;
                }
              }
              else {
                local_14e = *(short *)(local_100 + -2 + (longlong)local_110 * 2);
                local_110 = local_110 + 1;
                if (local_110 <= local_114) {
                  FUN_00414480(&local_60);
                  iVar3 = local_110;
                  local_154 = local_110;
                  iVar4 = local_110;
                  while ((iVar4 <= local_114 &&
                         (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != local_14e))) {
                    iVar4 = iVar4 + 1;
                  }
                  iVar5 = iVar4 - local_110;
                  local_110 = iVar4;
                  FUN_00416dc0(&local_60,local_100,iVar3,iVar5);
                  FUN_00414b50(&local_90,local_60);
                  FUN_00414480(&local_60);
                  local_110 = local_110 + 1;
LAB_008adcee:
                  FUN_00416ba0(&local_98,local_90,&DAT_008af288);
                  do {
                    if (local_110 <= local_114) {
                      do {
                        cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                        if (cVar2 == '\0') break;
                        local_110 = local_110 + 1;
                      } while (local_110 <= local_114);
                    }
                    if ((local_114 < local_110) ||
                       (((*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x2f &&
                         (local_110 = local_110 + 1, local_114 < local_110)) ||
                        (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x3e)))) break;
                    FUN_00414480(&local_70);
                    local_15c = local_110;
                    if (local_110 <= local_114) {
                      do {
                        cVar2 = FUN_008791b0(local_100,local_110,
                                             L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:."
                                            );
                        if (cVar2 == '\0') break;
                        local_110 = local_110 + 1;
                      } while (local_110 <= local_114);
                    }
                    FUN_00416dc0(&local_70,local_100,local_15c,local_110 - local_15c);
                    FUN_00414b50(&local_90,local_70);
                    FUN_00414480(&local_70);
                    if (local_114 < local_110) break;
                    if (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x3d) {
                      local_110 = local_110 + 1;
                      if (local_110 <= local_114) {
                        do {
                          cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                          if (cVar2 == '\0') break;
                          local_110 = local_110 + 1;
                        } while (local_110 <= local_114);
                      }
                      cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af274);
                      if (cVar2 == '\0') {
                        cVar2 = FUN_00879070(local_90,L"CONTENT");
                        if (cVar2 == '\0') {
                          while (((local_110 <= local_114 &&
                                  (sVar1 = *(short *)(local_100 + -2 + (longlong)local_110 * 2),
                                  sVar1 != 0x20)) && (sVar1 != 0x3e))) {
                            local_110 = local_110 + 1;
                          }
                        }
                        else {
                          FUN_00414480(&local_88);
                          iVar3 = local_110;
                          local_168 = local_110;
                          iVar4 = local_110;
                          while (((iVar4 <= local_114 &&
                                  (sVar1 = *(short *)(local_100 + -2 + (longlong)iVar4 * 2),
                                  sVar1 != 0x20)) && (sVar1 != 0x3e))) {
                            iVar4 = iVar4 + 1;
                          }
                          iVar5 = iVar4 - local_110;
                          local_110 = iVar4;
                          FUN_00416dc0(&local_88,local_100,iVar3,iVar5);
                          local_1a8 = local_88;
                          FUN_00416cd0(&local_98,3,local_98,&DAT_008af2b4);
                          FUN_00414480(&local_88);
                        }
                      }
                      else {
                        local_14e = *(short *)(local_100 + -2 + (longlong)local_110 * 2);
                        local_110 = local_110 + 1;
                        cVar2 = FUN_00879070(local_90,L"CONTENT");
                        if (cVar2 == '\0') {
                          while ((local_110 <= local_114 &&
                                 (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != local_14e)
                                 )) {
                            local_110 = local_110 + 1;
                          }
                          local_110 = local_110 + 1;
                        }
                        else {
                          FUN_00414480(&local_78);
                          iVar3 = local_110;
                          local_160 = local_110;
                          iVar4 = local_110;
                          while ((iVar4 <= local_114 &&
                                 (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != local_14e))) {
                            iVar4 = iVar4 + 1;
                          }
                          iVar5 = iVar4 - local_110;
                          local_110 = iVar4;
                          FUN_00416dc0(&local_78,local_100,iVar3,iVar5);
                          local_1a8 = local_78;
                          FUN_00416cd0(&local_98,3,local_98,&DAT_008af2b4);
                          FUN_00414480(&local_78);
                          local_110 = local_110 + 1;
                          if (local_114 < local_110) break;
                          cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af2c4);
                          if (cVar2 == '\0') {
                            FUN_00414480(&local_80);
                            iVar3 = local_110;
                            local_164 = local_110;
                            iVar4 = local_110;
                            while ((iVar4 <= local_114 &&
                                   (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != local_14e)))
                            {
                              iVar4 = iVar4 + 1;
                            }
                            iVar5 = iVar4 - local_110;
                            local_110 = iVar4;
                            FUN_00416dc0(&local_80,local_100,iVar3,iVar5);
                            FUN_00416ad0(&local_98,local_80);
                            FUN_00414480(&local_80);
                            local_110 = local_110 + 1;
                          }
                        }
                      }
                    }
                    else {
                      local_110 = local_110 + 1;
                    }
                  } while( true );
                }
              }
              FUN_00414480(&local_88);
              FUN_00414480(&local_80);
              FUN_00414480(&local_78);
              FUN_00414480(&local_70);
              FUN_00414480(&local_68);
              FUN_00414480(&local_60);
              FUN_00414480(&local_90);
              FUN_00414480(&local_98);
              iVar4 = local_110;
            }
            else {
              FUN_00414480(&local_58);
              local_50 = 0;
              local_20 = 0;
              local_28 = 0;
              local_30 = 0;
              local_38 = 0;
              local_40 = 0;
              local_48 = 0;
              FUN_00414480(&local_58);
              if (local_110 <= local_114) {
                do {
                  cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                  if (cVar2 == '\0') break;
                  local_110 = local_110 + 1;
                } while (local_110 <= local_114);
              }
              cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af274);
              if (cVar2 == '\0') {
                if (local_110 <= local_114) {
                  FUN_00414480(&local_28);
                  local_13c = local_110;
                  if (local_110 <= local_114) {
                    do {
                      cVar2 = FUN_008791b0(local_100,local_110,
                                           L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:."
                                          );
                      if (cVar2 == '\0') break;
                      local_110 = local_110 + 1;
                    } while (local_110 <= local_114);
                  }
                  FUN_00416dc0(&local_28,local_100,local_13c,local_110 - local_13c);
                  FUN_00414b50(&local_50,local_28);
                  FUN_00414480(&local_28);
                  goto LAB_008ad4e1;
                }
              }
              else {
                local_132 = *(short *)(local_100 + -2 + (longlong)local_110 * 2);
                local_110 = local_110 + 1;
                if (local_110 <= local_114) {
                  FUN_00414480(&local_20);
                  iVar3 = local_110;
                  local_138 = local_110;
                  iVar4 = local_110;
                  while ((iVar4 <= local_114 &&
                         (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != local_132))) {
                    iVar4 = iVar4 + 1;
                  }
                  iVar5 = iVar4 - local_110;
                  local_110 = iVar4;
                  FUN_00416dc0(&local_20,local_100,iVar3,iVar5);
                  FUN_00414b50(&local_50,local_20);
                  FUN_00414480(&local_20);
                  local_110 = local_110 + 1;
LAB_008ad4e1:
                  FUN_00416ba0(&local_58,local_50,&DAT_008af288);
                  do {
                    if (local_110 <= local_114) {
                      do {
                        cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                        if (cVar2 == '\0') break;
                        local_110 = local_110 + 1;
                      } while (local_110 <= local_114);
                    }
                    if ((local_114 < local_110) ||
                       (((*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x2f &&
                         (local_110 = local_110 + 1, local_114 < local_110)) ||
                        (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x3e)))) break;
                    FUN_00414480(&local_30);
                    local_140 = local_110;
                    if (local_110 <= local_114) {
                      do {
                        cVar2 = FUN_008791b0(local_100,local_110,
                                             L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:."
                                            );
                        if (cVar2 == '\0') break;
                        local_110 = local_110 + 1;
                      } while (local_110 <= local_114);
                    }
                    FUN_00416dc0(&local_30,local_100,local_140,local_110 - local_140);
                    FUN_00414b50(&local_50,local_30);
                    FUN_00414480(&local_30);
                    if (local_114 < local_110) break;
                    if (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x3d) {
                      local_110 = local_110 + 1;
                      if (local_110 <= local_114) {
                        do {
                          cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                          if (cVar2 == '\0') break;
                          local_110 = local_110 + 1;
                        } while (local_110 <= local_114);
                      }
                      cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af274);
                      if (cVar2 == '\0') {
                        cVar2 = FUN_00879070(local_50,L"CONTENT");
                        if (cVar2 == '\0') {
                          while (((local_110 <= local_114 &&
                                  (sVar1 = *(short *)(local_100 + -2 + (longlong)local_110 * 2),
                                  sVar1 != 0x20)) && (sVar1 != 0x3e))) {
                            local_110 = local_110 + 1;
                          }
                        }
                        else {
                          FUN_00414480(&local_48);
                          iVar3 = local_110;
                          local_14c = local_110;
                          iVar4 = local_110;
                          while (((iVar4 <= local_114 &&
                                  (sVar1 = *(short *)(local_100 + -2 + (longlong)iVar4 * 2),
                                  sVar1 != 0x20)) && (sVar1 != 0x3e))) {
                            iVar4 = iVar4 + 1;
                          }
                          iVar5 = iVar4 - local_110;
                          local_110 = iVar4;
                          FUN_00416dc0(&local_48,local_100,iVar3,iVar5);
                          local_1a8 = local_48;
                          FUN_00416cd0(&local_58,3,local_58,&DAT_008af2b4);
                          FUN_00414480(&local_48);
                        }
                      }
                      else {
                        local_132 = *(short *)(local_100 + -2 + (longlong)local_110 * 2);
                        local_110 = local_110 + 1;
                        cVar2 = FUN_00879070(local_50,L"CONTENT");
                        if (cVar2 == '\0') {
                          while ((local_110 <= local_114 &&
                                 (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != local_132)
                                 )) {
                            local_110 = local_110 + 1;
                          }
                          local_110 = local_110 + 1;
                        }
                        else {
                          FUN_00414480(&local_38);
                          iVar3 = local_110;
                          local_144 = local_110;
                          iVar4 = local_110;
                          while ((iVar4 <= local_114 &&
                                 (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != local_132))) {
                            iVar4 = iVar4 + 1;
                          }
                          iVar5 = iVar4 - local_110;
                          local_110 = iVar4;
                          FUN_00416dc0(&local_38,local_100,iVar3,iVar5);
                          local_1a8 = local_38;
                          FUN_00416cd0(&local_58,3,local_58,&DAT_008af2b4);
                          FUN_00414480(&local_38);
                          local_110 = local_110 + 1;
                          if (local_114 < local_110) break;
                          cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af2c4);
                          if (cVar2 == '\0') {
                            FUN_00414480(&local_40);
                            iVar3 = local_110;
                            local_148 = local_110;
                            iVar4 = local_110;
                            while ((iVar4 <= local_114 &&
                                   (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != local_132)))
                            {
                              iVar4 = iVar4 + 1;
                            }
                            iVar5 = iVar4 - local_110;
                            local_110 = iVar4;
                            FUN_00416dc0(&local_40,local_100,iVar3,iVar5);
                            FUN_00416ad0(&local_58,local_40);
                            FUN_00414480(&local_40);
                            local_110 = local_110 + 1;
                          }
                        }
                      }
                    }
                    else {
                      local_110 = local_110 + 1;
                    }
                  } while( true );
                }
              }
              FUN_00414480(&local_48);
              FUN_00414480(&local_40);
              FUN_00414480(&local_38);
              FUN_00414480(&local_30);
              FUN_00414480(&local_28);
              FUN_00414480(&local_20);
              FUN_00414480(&local_50);
              (**(code **)(*param_2 + 0x78))(param_2,local_58);
              FUN_00414480(&local_58);
              iVar4 = local_110;
            }
          }
        }
        else if (iVar4 == 1) {
          if (local_110 <= local_114) {
            do {
              cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
              if (cVar2 == '\0') break;
              local_110 = local_110 + 1;
            } while (local_110 <= local_114);
          }
          iVar4 = local_110;
          if (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x3d) {
            local_110 = local_110 + 1;
            iVar4 = local_110;
            if (local_114 < local_110) goto LAB_008aec13;
            FUN_00414480(&local_b8);
            local_b0 = 0;
            local_a0 = 0;
            local_a8 = 0;
            FUN_00414480(&local_b8);
            if (local_110 <= local_114) {
              do {
                cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                if (cVar2 == '\0') break;
                local_110 = local_110 + 1;
              } while (local_110 <= local_114);
            }
            cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af274);
            if (cVar2 == '\0') {
              if (local_110 <= local_114) {
                FUN_00414480(&local_a8);
                local_174 = local_110;
                if (local_110 <= local_114) {
                  do {
                    cVar2 = FUN_008791b0(local_100,local_110,
                                         L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:."
                                        );
                    if (cVar2 == '\0') break;
                    local_110 = local_110 + 1;
                  } while (local_110 <= local_114);
                }
                FUN_00416dc0(&local_a8,local_100,local_174,local_110 - local_174);
                FUN_00414b50(&local_b0,local_a8);
                FUN_00414480(&local_a8);
                goto joined_r0x008ae50d;
              }
            }
            else {
              local_16a = *(short *)(local_100 + -2 + (longlong)local_110 * 2);
              local_110 = local_110 + 1;
              if (local_110 <= local_114) {
                FUN_00414480(&local_a0);
                iVar3 = local_110;
                local_170 = local_110;
                iVar4 = local_110;
                while ((iVar4 <= local_114 &&
                       (*(short *)(local_100 + -2 + (longlong)iVar4 * 2) != local_16a))) {
                  iVar4 = iVar4 + 1;
                }
                iVar5 = iVar4 - local_110;
                local_110 = iVar4;
                FUN_00416dc0(&local_a0,local_100,iVar3,iVar5);
                FUN_00414b50(&local_b0,local_a0);
                FUN_00414480(&local_a0);
                local_110 = local_110 + 1;
joined_r0x008ae50d:
                while ((local_110 <= local_114 &&
                       (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e))) {
                  local_110 = local_110 + 1;
                }
                FUN_00414b50(&local_b8,local_b0);
              }
            }
            FUN_00414480(&local_a8);
            FUN_00414480(&local_a0);
            FUN_00414480(&local_b0);
            FUN_00414ad0(param_3,local_b8);
            FUN_00414480(&local_b8);
            iVar4 = local_110;
          }
        }
        else {
          while ((iVar4 = local_110, local_110 <= local_114 &&
                 (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e))) {
            local_110 = local_110 + 1;
          }
        }
      }
      else {
        if (iVar3 == 1) {
          while ((local_110 <= local_114 &&
                 (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e))) {
            local_110 = local_110 + 1;
          }
          local_d8 = 0;
          local_d0 = 0;
          local_c0 = 0;
          local_c8 = 0;
          if (local_110 <= local_114) {
            do {
              while ((local_110 <= local_114 &&
                     (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3c))) {
                local_110 = local_110 + 1;
              }
              if (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x3c) {
                local_110 = local_110 + 1;
              }
              FUN_00414480(&local_c0);
              local_178 = local_110;
              if (local_110 <= local_114) {
                do {
                  cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                  if (cVar2 == '\0') break;
                  local_110 = local_110 + 1;
                } while (local_110 <= local_114);
              }
              FUN_00416dc0(&local_c0,local_100,local_178,local_110 - local_178);
              FUN_00416ba0(&local_d0,&DAT_008af2e0,local_c0);
              FUN_00414480(&local_c0);
              if (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x2f) {
                local_110 = local_110 + 1;
                FUN_00416ad0(&local_d0,&DAT_008af2f0);
                FUN_00414480(&local_c8);
                local_17c = local_110;
                if (local_110 <= local_114) {
                  do {
                    cVar2 = FUN_008791b0(local_100,local_110,
                                         L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:."
                                        );
                    if (cVar2 == '\0') break;
                    local_110 = local_110 + 1;
                  } while (local_110 <= local_114);
                }
                FUN_00416dc0(&local_c8,local_100,local_17c,local_110 - local_17c);
                FUN_00414b50(&local_d8,local_c8);
                FUN_00414480(&local_c8);
                cVar2 = FUN_00879070(local_d8,L"TITLE");
                if (cVar2 != '\0') goto joined_r0x008ae838;
              }
              while ((local_110 <= local_114 &&
                     (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e))) {
                local_110 = local_110 + 1;
              }
              local_110 = local_110 + 1;
            } while (local_110 <= local_114);
          }
          goto code_r0x008ae8bd;
        }
        if (iVar3 == 2) {
          while ((local_110 <= local_114 &&
                 (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e))) {
            local_110 = local_110 + 1;
          }
          local_f8 = 0;
          local_f0 = 0;
          local_e0 = 0;
          local_e8 = 0;
          if (local_110 <= local_114) {
            do {
              while ((local_110 <= local_114 &&
                     (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3c))) {
                local_110 = local_110 + 1;
              }
              if (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x3c) {
                local_110 = local_110 + 1;
              }
              FUN_00414480(&local_e0);
              local_180 = local_110;
              if (local_110 <= local_114) {
                do {
                  cVar2 = FUN_008791b0(local_100,local_110,&DAT_008af1b0);
                  if (cVar2 == '\0') break;
                  local_110 = local_110 + 1;
                } while (local_110 <= local_114);
              }
              FUN_00416dc0(&local_e0,local_100,local_180,local_110 - local_180);
              FUN_00416ba0(&local_f0,&DAT_008af2e0,local_e0);
              FUN_00414480(&local_e0);
              if (*(short *)(local_100 + -2 + (longlong)local_110 * 2) == 0x2f) {
                local_110 = local_110 + 1;
                FUN_00416ad0(&local_f0,&DAT_008af2f0);
                FUN_00414480(&local_e8);
                local_184 = local_110;
                if (local_110 <= local_114) {
                  do {
                    cVar2 = FUN_008791b0(local_100,local_110,
                                         L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-_:."
                                        );
                    if (cVar2 == '\0') break;
                    local_110 = local_110 + 1;
                  } while (local_110 <= local_114);
                }
                FUN_00416dc0(&local_e8,local_100,local_184,local_110 - local_184);
                FUN_00414b50(&local_f8,local_e8);
                FUN_00414480(&local_e8);
                cVar2 = FUN_00879070(local_f8,L"SCRIPT");
                if (cVar2 != '\0') goto joined_r0x008aeb52;
              }
              local_110 = local_110 + 1;
            } while (local_110 <= local_114);
          }
          goto code_r0x008aeb9d;
        }
        iVar4 = local_110;
        if (iVar3 == 3) {
          while ((iVar4 = local_110, local_110 <= local_114 &&
                 (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e))) {
            local_110 = local_110 + 1;
          }
        }
      }
      goto LAB_008acd02;
    }
    iVar4 = local_110;
    if (local_109 != '\x04') goto LAB_008acd02;
  }
LAB_008aec13:
  local_110 = iVar4;
  FUN_00414480(&local_198);
  FUN_0041b800(&local_120);
  FUN_00414560(&local_108,2);
  FUN_00414480(&local_b8);
  FUN_00414480(&local_98);
  FUN_00414480(&local_58);
  FUN_00414560(&local_18,2);
  return;
joined_r0x008ae838:
  while ((local_110 <= local_114 && (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e)))
  {
    local_110 = local_110 + 1;
  }
code_r0x008ae8bd:
  FUN_00414480(&local_c8);
  FUN_00414480(&local_c0);
  FUN_00414480(&local_d0);
  FUN_00414480(&local_d8);
  iVar4 = local_110;
  goto LAB_008acd02;
joined_r0x008aeb52:
  while ((local_110 <= local_114 && (*(short *)(local_100 + -2 + (longlong)local_110 * 2) != 0x3e)))
  {
    local_110 = local_110 + 1;
  }
code_r0x008aeb9d:
  FUN_00414480(&local_e8);
  FUN_00414480(&local_e0);
  FUN_00414480(&local_f0);
  FUN_00414480(&local_f8);
  iVar4 = local_110;
  goto LAB_008acd02;
}

