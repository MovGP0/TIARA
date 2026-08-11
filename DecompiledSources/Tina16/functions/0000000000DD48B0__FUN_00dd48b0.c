/* Ghidra address: 00dd48b0 */
/* Ghidra symbol: FUN_00dd48b0 */


void FUN_00dd48b0(char *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,char param_6,char param_7,char param_8)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 extraout_XMM0_Qa;
  double dVar6;
  double dVar7;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  undefined1 auStack_98 [32];
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  longlong local_30;
  
  local_60 = (double)FUN_016ed780(param_3,param_6);
  local_68 = FUN_016ed7b0(param_3,param_6);
  uVar4 = FUN_016ed7d0(param_3,param_6);
  if ((byte)(param_6 - 8U) < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (param_6 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    local_58 = extraout_XMM0_Qa;
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if (param_6 == '\x06') {
        local_78 = 0.0;
        unaff_XMM6_Qa = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 2);
        local_78 = 0.0;
        unaff_XMM7_Qa = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 1);
      }
      if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
        if ((*(byte *)(param_3 + 0x88) & 0x40) == 0) {
          if ((*(byte *)(param_3 + 0x88) & 0x80) == 0) {
            if (param_6 == '\x06') {
              local_78 = 0.0;
              FUN_016eebe0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 3);
              uVar3 = FUN_0040c770();
              *(undefined4 *)(param_1 + 700) = uVar3;
            }
            else {
              local_78 = 0.0;
              FUN_016eebe0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 3);
              uVar3 = FUN_0040c770();
              *(undefined4 *)(param_1 + 700) = uVar3;
            }
            FUN_00dd4650(auStack_98);
            if ((param_6 == '\x06') && (param_1[0x2c0] != param_7)) {
              local_58 = 0;
            }
          }
          else {
            local_78 = 0.0;
            FUN_016eebe0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 3);
            uVar3 = FUN_0040c770();
            *(undefined4 *)(param_1 + 700) = uVar3;
            local_78 = 0.0;
            FUN_016eebe0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 4);
            cVar2 = FUN_0040c770();
            param_1[0x2c0] = cVar2;
            local_78 = 0.0;
            uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 5);
            *(undefined8 *)(param_1 + 0x2c8) = uVar4;
            FUN_00dd4650(auStack_98);
            if (param_1[0x2c0] == param_7) {
              if ((*(double *)(local_30 + 8) + *(double *)(param_1 + 0x2c8)) -
                  *(double *)(local_30 + 8) * 1e-06 <= local_60) {
                dVar7 = (double)FUN_00c42930(local_40 * local_40);
                *(double *)(param_1 + 0x2d0) = dVar7 * 0.5;
                param_1[0x2d8] = '\0';
                param_1[0x2d9] = '\0';
                param_1[0x2da] = '\0';
                param_1[0x2db] = '\0';
                param_1[0x2dc] = '\0';
                param_1[0x2dd] = '\0';
                param_1[0x2de] = '\0';
                param_1[0x2df] = '\0';
                dVar7 = (double)FUN_00c42930(local_38 * local_38);
                *(double *)(param_1 + 0x2e0) = dVar7 * 0.5;
                param_1[0x2e8] = '\0';
                param_1[0x2e9] = '\0';
                param_1[0x2ea] = '\0';
                param_1[0x2eb] = '\0';
                param_1[0x2ec] = '\0';
                param_1[0x2ed] = '\0';
                param_1[0x2ee] = '\0';
                param_1[0x2ef] = '\0';
              }
              else {
                dVar7 = (double)FUN_00c42930(local_40 * unaff_XMM7_Qa);
                *(double *)(param_1 + 0x2d0) = dVar7 * 0.5;
                uVar4 = FUN_00c42930(local_40 / unaff_XMM7_Qa);
                *(undefined8 *)(param_1 + 0x2d8) = uVar4;
                dVar7 = (double)FUN_00c42930(local_38 * unaff_XMM6_Qa);
                *(double *)(param_1 + 0x2e0) = dVar7 * 0.5;
                uVar4 = FUN_00c42930(local_38 / unaff_XMM6_Qa);
                *(undefined8 *)(param_1 + 0x2e8) = uVar4;
              }
            }
            else {
              *(double *)(param_1 + 0x2c8) = local_60;
              local_58 = 0;
              local_78 = *(double *)(param_1 + 0x2c8);
              local_70 = 0;
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 5);
              local_78 = (double)(int)param_7;
              local_70 = 0;
              FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 4);
              dVar7 = (double)FUN_00c42930(unaff_XMM7_Qa * unaff_XMM7_Qa);
              *(double *)(param_1 + 0x2d0) = dVar7 * 0.5;
              param_1[0x2d8] = '\0';
              param_1[0x2d9] = '\0';
              param_1[0x2da] = '\0';
              param_1[0x2db] = '\0';
              param_1[0x2dc] = '\0';
              param_1[0x2dd] = '\0';
              param_1[0x2de] = '\0';
              param_1[0x2df] = '\0';
              dVar7 = (double)FUN_00c42930(unaff_XMM6_Qa * unaff_XMM6_Qa);
              *(double *)(param_1 + 0x2e0) = dVar7 * 0.5;
              param_1[0x2e8] = '\0';
              param_1[0x2e9] = '\0';
              param_1[0x2ea] = '\0';
              param_1[0x2eb] = '\0';
              param_1[0x2ec] = '\0';
              param_1[0x2ed] = '\0';
              param_1[0x2ee] = '\0';
              param_1[0x2ef] = '\0';
            }
          }
        }
        else {
          local_78 = 0.0;
          FUN_016eebe0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 3);
          uVar3 = FUN_0040c770();
          *(undefined4 *)(param_1 + 700) = uVar3;
          FUN_00dd4650(auStack_98);
          param_1[0x2c8] = '\0';
          param_1[0x2c9] = '\0';
          param_1[0x2ca] = '\0';
          param_1[0x2cb] = '\0';
          param_1[0x2cc] = '\0';
          param_1[0x2cd] = '\0';
          param_1[0x2ce] = '\0';
          param_1[0x2cf] = '\0';
          param_1[0x2c0] = param_8;
          local_78 = local_40;
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 1);
          local_78 = local_38;
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 2);
          dVar1 = local_38;
          dVar7 = local_40;
          dVar6 = (double)FUN_00c42930(local_40 * local_40);
          *(double *)(param_1 + 0x2d0) = dVar6 * 0.5;
          uVar4 = FUN_00c42930(local_40 / dVar7);
          *(undefined8 *)(param_1 + 0x2d8) = uVar4;
          dVar7 = (double)FUN_00c42930(local_38 * dVar1);
          *(double *)(param_1 + 0x2e0) = dVar7 * 0.5;
          uVar4 = FUN_00c42930(local_38 / dVar1);
          *(undefined8 *)(param_1 + 0x2e8) = uVar4;
          local_58 = 0;
          local_78 = local_40;
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 1);
          local_78 = local_38;
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 2);
          local_78 = (double)*(int *)(param_1 + 700);
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 3);
          local_78 = (double)(int)param_1[0x2c0];
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 4);
          local_78 = *(double *)(param_1 + 0x2c8);
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 5);
          local_78 = (double)(int)param_1[0x2c0];
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 4);
          local_78 = *(double *)(param_1 + 0x2c8);
          local_70 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(byte)param_1[0x2b8] + 5);
        }
      }
      else {
        param_1[700] = '\0';
        param_1[0x2bd] = '\0';
        param_1[0x2be] = '\0';
        param_1[0x2bf] = '\0';
        local_78 = 0.0;
        local_70 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 3);
        FUN_00dd4650(auStack_98);
      }
      FUN_00dd4790(auStack_98);
      local_78 = 0.0;
      FUN_016ed320(param_2,*param_1,0,1.0 / (local_50 + 1e-06));
      local_78 = 0.0;
      FUN_016ed320(param_2,*param_1 + '\x01',0,1.0 / (local_48 + 1e-06));
      local_78 = local_50;
      local_70 = 0;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 1);
      local_78 = local_48;
      local_70 = 0;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 2);
      local_78 = (double)*(int *)(param_1 + 700);
      local_70 = 0;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 3);
    }
    else {
      param_1[700] = '\0';
      param_1[0x2bd] = '\0';
      param_1[0x2be] = '\0';
      param_1[0x2bf] = '\0';
      local_78 = 0.0;
      local_70 = 0;
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(byte)param_1[0x2b8] + 3);
    }
  }
  return;
}

