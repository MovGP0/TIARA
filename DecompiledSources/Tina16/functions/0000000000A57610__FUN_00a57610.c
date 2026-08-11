/* Ghidra address: 00a57610 */
/* Ghidra symbol: FUN_00a57610 */


void FUN_00a57610(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30[0] = 0;
  bVar4 = 8;
  lVar5 = param_1;
  do {
    if (((byte)(bVar4 - 0xd) < 4) || ((byte)(bVar4 - 0x12) < 4)) {
      cVar2 = FUN_0046c390(lVar5);
      if (cVar2 == '\0') {
        uVar1 = *(ushort *)(param_1 + -0xc0 + (ulonglong)bVar4 * 0x18);
        if (uVar1 < 0x20) {
          bVar6 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          FUN_00468530(&local_68,0xff439eb2,0xfffffffffffffffc);
          cVar2 = FUN_0046f320(lVar5,&local_68);
          if (cVar2 == '\0') {
            uVar3 = FUN_00462650(lVar5);
            *param_7 = uVar3;
          }
          else {
            *param_7 = 0xff439eb2;
          }
        }
        else {
          *param_7 = 0xff439eb2;
        }
      }
      else {
        FUN_00467e90(&local_50,lVar5);
        uVar3 = FUN_00a61c40(local_50,0,param_2,param_4,param_5,0);
        *param_7 = uVar3;
      }
    }
    else if ((byte)(bVar4 - 0x1a) < 4) {
      FUN_00468530(&local_80,0,1);
      cVar2 = FUN_0046f320(param_1 + -0xc0 + (ulonglong)(byte)(bVar4 + 8) * 0x18);
      if (cVar2 == '\0') {
        cVar2 = FUN_0046c390(lVar5);
        if (cVar2 == '\0') {
          uVar1 = *(ushort *)(param_1 + -0xc0 + (ulonglong)bVar4 * 0x18);
          if (uVar1 < 0x20) {
            bVar6 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            FUN_00468530(&local_e8,0xff439eb2,0xfffffffffffffffc);
            cVar2 = FUN_0046f320(lVar5);
            if (cVar2 == '\0') {
              uVar3 = FUN_00462650(lVar5);
              *param_7 = uVar3;
            }
            else {
              *param_7 = 4;
            }
          }
        }
        else {
          FUN_00468a10(&local_98,L"thin");
          cVar2 = FUN_0046f320(lVar5);
          if (cVar2 == '\0') {
            FUN_00468a10(&local_b0,L"medium");
            cVar2 = FUN_0046f320(lVar5);
            if (cVar2 == '\0') {
              FUN_00468a10(&local_c8,L"thick");
              cVar2 = FUN_0046f320(lVar5);
              if (cVar2 == '\0') {
                FUN_00467e90(&local_d0);
                uVar3 = FUN_00a61c40(local_d0,0,param_2,param_4,param_5,param_6);
                *param_7 = uVar3;
              }
              else {
                *param_7 = 6;
              }
            }
            else {
              *param_7 = 4;
            }
          }
          else {
            *param_7 = 2;
          }
        }
      }
      else {
        *param_7 = 0;
      }
    }
    else if ((byte)(bVar4 - 0x26) < 2) {
      cVar2 = FUN_0046c390(lVar5);
      if (cVar2 == '\0') {
        uVar1 = *(ushort *)(param_1 + -0xc0 + (ulonglong)bVar4 * 0x18);
        if (uVar1 < 0x20) {
          bVar6 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          FUN_00468530(&local_48,0xff439eb2,0xfffffffffffffffc);
          cVar2 = FUN_0046f320(lVar5);
          if (cVar2 == '\0') {
            uVar3 = FUN_00462650(lVar5);
            *param_7 = uVar3;
          }
          else {
            *param_7 = 0xff439eb2;
          }
        }
        else {
          *param_7 = 0xff439eb2;
        }
      }
      else {
        FUN_00467e90(local_30);
        uVar3 = FUN_00a61c40(local_30[0],0,param_2,param_4,param_5,0xff4392a3);
        *param_7 = uVar3;
      }
    }
    bVar4 = bVar4 + 1;
    param_7 = param_7 + 1;
    lVar5 = lVar5 + 0x18;
  } while (bVar4 != 0x2e);
  FUN_00460ba0(&local_e8);
  FUN_00414480(&local_d0);
  FUN_00417840(&local_c8,&DAT_004013d8,5);
  FUN_00414480(&local_50);
  FUN_00460ba0(&local_48);
  FUN_00414480(local_30);
  return;
}

