/* Ghidra address: 00a55f70 */
/* Ghidra symbol: FUN_00a55f70 */


void FUN_00a55f70(byte param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  ushort uVar1;
  byte *pbVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  byte local_211;
  longlong local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40 [2];
  undefined4 local_30;
  byte local_29 [9];
  
  local_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40[0] = 0;
  uVar6 = (ulonglong)param_1;
  local_211 = param_1;
  local_210 = param_2;
  local_208 = param_4;
  if (0x14 < uVar6) {
    if (uVar6 < 0x27) {
      if (uVar6 == 0x26) {
        uVar6 = (ulonglong)param_1;
        cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
        if (cVar3 == '\0') {
          uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
          if (uVar1 < 0x20) {
            bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            FUN_00468530(&local_1e0,0xff439eb2,0xfffffffffffffffc);
            cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_1e0);
            if (cVar3 == '\0') {
              uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
            }
            else {
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0xff4392a3;
            }
          }
          else {
            *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0xff4392a3;
          }
        }
        else {
          FUN_00467e90(&local_1c8,local_210 + -0xc0 + uVar6 * 0x18);
          local_228 = param_3[3];
          local_220 = 0xff4392a3;
          uVar4 = FUN_00a61c40(local_1c8,0,*param_3,param_3[2]);
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
        }
        if (*(int *)(local_208 + -0x20 + uVar6 * 4) == -0xbc6d5d) {
          param_3[5] = param_3[5] + 1;
        }
        goto code_r0x00a57123;
      }
      if (uVar6 == 0x15) {
LAB_00a569dc:
        uVar6 = (ulonglong)param_1;
        cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
        if (cVar3 == '\0') {
          uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
          if (uVar1 < 0x20) {
            bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            FUN_00468530(&local_168,0xff439eb2,0xfffffffffffffffc);
            cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_168);
            if (cVar3 == '\0') {
              uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
            }
            else {
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
            }
          }
          else {
            *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
          }
        }
        else {
          FUN_00468a10(&local_148,L"auto");
          cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_148);
          if (cVar3 == '\0') {
            FUN_00467e90(&local_150,local_210 + -0xc0 + uVar6 * 0x18);
            local_228 = param_3[3];
            local_220 = 0;
            uVar4 = FUN_00a61c40(local_150,0,*param_3,param_3[2]);
            *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
          }
          else {
            *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0xff4392a3;
            param_3[5] = param_3[5] + 1;
          }
        }
        goto code_r0x00a57123;
      }
      if (uVar6 - 0x16 < 4) {
LAB_00a566df:
        uVar6 = (ulonglong)param_1;
        cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
        if (cVar3 == '\0') {
          uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
          if (uVar1 < 0x20) {
            bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            FUN_00468530(&local_108,0xff439eb2,0xfffffffffffffffc);
            cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_108);
            if (cVar3 == '\0') {
              uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
            }
            else {
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
            }
          }
          else {
            *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
          }
        }
        else {
          FUN_00467e90(&local_f0,local_210 + -0xc0 + uVar6 * 0x18);
          uVar4 = FUN_00a55ee0(auStack_248,local_211);
          local_228 = param_3[3];
          local_220 = 0;
          uVar4 = FUN_00a61c40(local_f0,0,uVar4,param_3[2]);
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
        }
        goto code_r0x00a57123;
      }
      if (uVar6 - 0x1a < 4) {
        FUN_00468530(&local_58,0,1);
        cVar3 = FUN_0046f320(local_210 + -0xc0 + (ulonglong)(byte)(param_1 + 8) * 0x18,&local_58);
        if (cVar3 == '\0') {
          uVar6 = (ulonglong)local_211;
          cVar3 = FUN_0046c390(local_210 + -0xc0 + uVar6 * 0x18);
          if (cVar3 == '\0') {
            uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
            if (uVar1 < 0x20) {
              bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
            }
            else {
              bVar8 = false;
            }
            if (bVar8) {
              FUN_00468530(&local_c0,0xff439eb2,0xfffffffffffffffc);
              cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_c0);
              if (cVar3 == '\0') {
                uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
                *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
              }
              else {
                *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = param_3[4];
              }
            }
          }
          else {
            FUN_00468a10(&local_70,L"thin");
            cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_70);
            if (cVar3 == '\0') {
              FUN_00468a10(&local_88,L"medium");
              cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_88);
              if (cVar3 == '\0') {
                FUN_00468a10(&local_a0,L"thick");
                cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_a0);
                if (cVar3 == '\0') {
                  FUN_00467e90(&local_a8,local_210 + -0xc0 + (ulonglong)local_211 * 0x18);
                  uVar4 = FUN_00a55ee0(auStack_248,param_1);
                  local_228 = param_3[3];
                  local_220 = param_3[4];
                  uVar4 = FUN_00a61c40(local_a8,0,uVar4,param_3[2]);
                  *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
                }
                else {
                  *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 6;
                }
              }
              else {
                *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 4;
              }
            }
            else {
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 2;
            }
          }
        }
        else {
          *(undefined4 *)(local_208 + -0x20 + (ulonglong)local_211 * 4) = 0;
        }
        goto code_r0x00a57123;
      }
      if (uVar6 - 0x1e < 4) goto LAB_00a561f2;
    }
    else {
      if (uVar6 == 0x27) goto LAB_00a56537;
      if (uVar6 - 0x28 < 4) {
        uVar6 = (ulonglong)param_1;
        cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
        if (cVar3 == '\0') {
          uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
          if (uVar1 < 0x20) {
            bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            FUN_00468530(&local_128,0xff439eb2,0xfffffffffffffffc);
            cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_128);
            if (cVar3 == '\0') {
              uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
            }
            else {
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0xff4392a3;
            }
          }
          else {
            *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0xff4392a3;
          }
        }
        else {
          FUN_00467e90(&local_110,local_210 + -0xc0 + uVar6 * 0x18);
          uVar4 = FUN_00a55ee0(auStack_248,local_211);
          local_228 = param_3[3];
          local_220 = 0xff4392a3;
          uVar4 = FUN_00a61c40(local_110,0,uVar4,param_3[2]);
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
        }
        goto code_r0x00a57123;
      }
      if (uVar6 - 0x2c < 2) goto LAB_00a566df;
    }
LAB_00a56fed:
    uVar6 = (ulonglong)param_1;
    cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
    if (cVar3 == '\0') {
      uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
      if (uVar1 < 0x20) {
        bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_00468530(&local_200,0xff439eb2,0xfffffffffffffffc);
        cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_200);
        if (cVar3 == '\0') {
          uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
        }
        else {
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
        }
      }
      else {
        *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
      }
    }
    else {
      FUN_00467e90(&local_1e8,local_210 + -0xc0 + uVar6 * 0x18);
      uVar4 = FUN_00a55ee0(auStack_248,local_211);
      local_228 = param_3[3];
      local_220 = 0;
      uVar4 = FUN_00a61c40(local_1e8,0,uVar4,param_3[2]);
      *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
    }
    goto code_r0x00a57123;
  }
  if (uVar6 != 0x14) {
    if (uVar6 < 0x11) {
      if (uVar6 == 0x10) {
LAB_00a56d4d:
        uVar6 = (ulonglong)param_1;
        cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
        if (cVar3 == '\0') {
          uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
          if (uVar1 < 0x20) {
            bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            FUN_00468530(&local_1c0,0xff439eb2,0xfffffffffffffffc);
            cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_1c0);
            if (cVar3 == '\0') {
              uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
            }
            else {
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
            }
          }
          else {
            *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
          }
        }
        else {
          FUN_00467e90(&local_1a8,local_210 + -0xc0 + uVar6 * 0x18);
          local_228 = param_3[3];
          local_220 = 0xff4392a3;
          uVar4 = FUN_00a61c40(local_1a8,0,*param_3,param_3[2]);
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
        }
      }
      else {
        if (uVar6 == 8) {
LAB_00a561f2:
          uVar6 = (ulonglong)param_1;
          if (*(ushort *)(param_2 + -0xc0 + uVar6 * 0x18) < 2) {
            *(undefined4 *)(param_4 + -0x20 + uVar6 * 4) = 0x1fffffff;
          }
          else {
            cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
            if (cVar3 == '\0') {
              uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
            }
            else {
              FUN_00467e90(local_40,local_210 + -0xc0 + uVar6 * 0x18);
              cVar3 = FUN_00a602d0(local_40[0],0,&local_30);
              if (cVar3 != '\0') {
                *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = local_30;
              }
            }
          }
          goto code_r0x00a57123;
        }
        if (uVar6 != 0xd) {
          if (uVar6 == 0xe) goto LAB_00a56d4d;
          if (uVar6 != 0xf) goto LAB_00a56fed;
        }
LAB_00a56537:
        uVar6 = (ulonglong)param_1;
        cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
        if (cVar3 == '\0') {
          uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
          if (uVar1 < 0x20) {
            bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            FUN_00468530(&local_e8,0xff439eb2,0xfffffffffffffffc);
            cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_e8);
            if (cVar3 == '\0') {
              uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
            }
            else {
              *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
            }
          }
          else {
            *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
          }
        }
        else {
          FUN_00467e90(&local_c8,local_210 + -0xc0 + uVar6 * 0x18);
          uVar4 = FUN_00a55ee0(auStack_248,local_211);
          local_228 = param_3[3];
          local_220 = 0;
          uVar4 = FUN_00a61c40(local_c8,0,uVar4,param_3[2]);
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
          FUN_00467e90(&local_d0,local_210 + -0xc0 + uVar6 * 0x18);
          iVar5 = FUN_004170c0(&DAT_00a573e0,local_d0,1);
          if (0 < iVar5) {
            *(int *)(local_208 + -0x20 + uVar6 * 4) =
                 (((*(int *)(local_208 + -0x20 + uVar6 * 4) - *(int *)(local_208 + 0x48)) -
                  *(int *)(local_208 + 0x50)) - *(int *)(local_208 + 0x38)) -
                 *(int *)(local_208 + 0x40);
          }
        }
      }
      goto code_r0x00a57123;
    }
    if (uVar6 == 0x11) {
      uVar6 = (ulonglong)param_1;
      FUN_00467e90(&local_130,param_2 + -0xc0 + uVar6 * 0x18);
      cVar3 = FUN_00a2bd80(local_130,local_29);
      if (cVar3 == '\0') {
        *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
      }
      else {
        *(uint *)(local_208 + -0x20 + uVar6 * 4) = (uint)local_29[0];
      }
      goto code_r0x00a57123;
    }
    if (uVar6 != 0x12) {
      if (uVar6 != 0x13) goto LAB_00a56fed;
      goto LAB_00a569dc;
    }
  }
  uVar6 = (ulonglong)param_1;
  cVar3 = FUN_0046c390(param_2 + -0xc0 + uVar6 * 0x18);
  if (cVar3 == '\0') {
    uVar1 = *(ushort *)(local_210 + -0xc0 + uVar6 * 0x18);
    if (uVar1 < 0x20) {
      bVar8 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      FUN_00468530(&local_188,0xff439eb2,0xfffffffffffffffc);
      cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_188);
      if (cVar3 == '\0') {
        FUN_00468530(&local_1a0,0xff4392a2,0xfffffffffffffffc);
        cVar3 = FUN_0046f320(local_210 + -0xc0 + uVar6 * 0x18,&local_1a0);
        if (cVar3 == '\0') {
          uVar4 = FUN_00462650(local_210 + -0xc0 + uVar6 * 0x18);
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
        }
        else {
          *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0xe;
          if (local_211 < 0x58) {
            uVar7 = (ulonglong)(param_3 + 6) & 7;
            uVar6 = ((ulonglong)local_211 & 0x7f) + uVar7 * 8;
            pbVar2 = (byte *)((longlong)(param_3 + 6) + (((longlong)uVar6 >> 3) - uVar7));
            *pbVar2 = *pbVar2 | '\x01' << (uVar6 & 7);
          }
        }
      }
      else {
        *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
      }
    }
    else {
      *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = 0;
    }
  }
  else {
    FUN_00467e90(&local_170,local_210 + -0xc0 + uVar6 * 0x18);
    local_228 = param_3[3];
    local_220 = 0;
    uVar4 = FUN_00a61c40(local_170,0,param_3[1],param_3[2]);
    *(undefined4 *)(local_208 + -0x20 + uVar6 * 4) = uVar4;
  }
code_r0x00a57123:
  FUN_00460ba0(&local_200);
  FUN_00414480(&local_1e8);
  FUN_00460ba0(&local_1e0);
  FUN_00414480(&local_1c8);
  FUN_00460ba0(&local_1c0);
  FUN_00414480(&local_1a8);
  FUN_00417840(&local_1a0,&DAT_004013d8,2);
  FUN_00414480(&local_170);
  FUN_00460ba0(&local_168);
  FUN_00414480(&local_150);
  FUN_00460ba0(&local_148);
  FUN_00414480(&local_130);
  FUN_00460ba0(&local_128);
  FUN_00414480(&local_110);
  FUN_00460ba0(&local_108);
  FUN_00414480(&local_f0);
  FUN_00460ba0(&local_e8);
  FUN_00414560(&local_d0,2);
  FUN_00460ba0(&local_c0);
  FUN_00414480(&local_a8);
  FUN_00417840(&local_a0,&DAT_004013d8,4);
  FUN_00414480(local_40);
  return;
}

