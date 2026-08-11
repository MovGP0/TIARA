/* Ghidra address: 0114dc00 */
/* Ghidra symbol: FUN_0114dc00 */


longlong FUN_0114dc00(char param_1,longlong param_2,wchar_t *param_3,undefined1 param_4,char param_5
                     ,byte *param_6,double param_7,int param_8,undefined1 param_9)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  undefined8 uVar7;
  wchar_t *local_res18;
  undefined1 local_res20;
  undefined1 auStack_178 [32];
  double local_158;
  ulonglong local_150;
  longlong local_148;
  undefined1 local_140;
  int local_12c;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined4 local_fc;
  bool local_f5;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40 [3];
  
  local_110 = auStack_178;
  local_128 = 0;
  local_120 = (undefined8 *)0x0;
  local_118 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_40[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(param_7);
  local_60 = 0;
  FUN_01cc6020(param_2);
  local_58 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_2);
  FUN_01cc37d0(*(undefined8 *)(param_2 + 8),&local_118);
  local_158 = param_7;
  local_150 = local_150 & 0xffffffffffffff00;
  FUN_017cc020(&local_60,8,param_1 == '\x01',local_118);
  local_50 = FUN_0113e810(&DAT_0113e408,1,param_5,local_res20);
  local_48 = FUN_00409570(0x100010);
  iVar3 = *(int *)(*(longlong *)(param_2 + 8) + 0x10);
  local_12c = iVar3 + -1;
  local_68 = 0;
  if (-1 < local_12c) {
    do {
      local_12c = iVar3;
      lVar4 = FUN_01d347d0(*(undefined8 *)(param_2 + 8),local_68);
      if (*(int *)(lVar4 + 0x158) == param_8) {
        local_d0 = FUN_01d347d0(*(undefined8 *)(param_2 + 8),local_68);
        if (local_res18 == L"<EVERYCURVE>") {
          local_f5 = true;
        }
        else if (local_res18 == (wchar_t *)0x0) {
          local_f5 = false;
        }
        else {
          iVar3 = FUN_0043e420(local_res18,L"<EVERYCURVE>");
          local_f5 = iVar3 == 0;
        }
        if (local_f5 == false) {
          FUN_01cc0ae0(local_d0,&local_120);
          iVar3 = FUN_00416db0(local_res18,local_120);
          if (iVar3 != 0) goto LAB_0114e4e6;
        }
        local_e8 = *(undefined8 *)(local_60 + 8);
        FUN_01cc0ae0(local_d0,&local_d8);
        local_78 = FUN_00456820(&local_d8,0x5b);
        if (0 < local_78) {
          FUN_00414480(local_40);
          FUN_00414b50(local_40,local_d8);
          local_fc = 0;
          if (local_40[0] != 0) {
            local_fc = *(undefined4 *)(local_40[0] + -4);
          }
          FUN_00416e20(local_40,local_78 + 1,local_fc);
          FUN_00414b50(&local_f0,local_40[0]);
          FUN_00457870(&local_f0,&local_d8);
          FUN_00414480(local_40);
        }
        FUN_01cc1600(local_d0,&local_128);
        local_158 = (double)((ulonglong)local_158 & 0xffffffffffffff00);
        local_150 = local_128;
        local_148 = CONCAT71(local_148._1_7_,1);
        local_140 = 0;
        FUN_01cc2930(local_e8,local_d8,0,1);
        FUN_0040d200(local_48,0x100010,0);
        FUN_0113f830(local_d0,local_58,&local_80,&local_88);
        FUN_0113f760(local_80,local_88,param_6);
        local_a0 = (double)FUN_00c42750((double)(int)-(uint)(byte)*PTR_DAT_02005310);
        local_6c = 1 << (*param_6 & 0x1f);
        local_158 = (*(double *)(param_6 + 9) - *(double *)(param_6 + 1)) / (double)local_6c;
        local_150 = CONCAT44(local_150._4_4_,local_6c);
        local_148 = local_48;
        local_140 = param_9;
        FUN_0113eac0(local_50,local_d0,local_58,*(undefined8 *)(param_6 + 1));
        bVar2 = param_6[0x2a];
        if (bVar2 < 4) {
          if (bVar2 == 3) {
            FUN_010bf370(*param_6,local_48,&local_a8,&local_b0);
          }
          else if (bVar2 == 0) {
            local_a8 = 1.0;
            local_b0 = 1.0;
          }
          else if (bVar2 == 1) {
            FUN_010bf1f0(*param_6,local_48,&local_a8,&local_b0);
          }
          else if (bVar2 == 2) {
            FUN_010bf470(*param_6,local_48,&local_a8,&local_b0);
          }
        }
        else if (bVar2 == 4) {
          FUN_010bf2b0(*param_6,local_48,&local_a8,&local_b0);
        }
        else if (bVar2 == 5) {
          FUN_010bf130(*param_6,local_48,&local_a8,&local_b0);
        }
        else if (bVar2 == 6) {
          local_a8 = 1.0;
        }
        FUN_0113edb0(local_50,*param_6,local_48);
        FUN_0113e930(local_50,*param_6);
        local_74 = FUN_0040c840(*(double *)(param_6 + 0x11) *
                                (*(double *)(param_6 + 9) - *(double *)(param_6 + 1)));
        iVar3 = FUN_0040c840((*(double *)(param_6 + 0x19) *
                              (*(double *)(param_6 + 9) - *(double *)(param_6 + 1)) - local_a0) +
                             1.0);
        local_70 = (iVar3 - local_74) + 1;
        if (local_6c / 2 < local_70) {
          local_70 = local_6c / 2;
        }
        local_98 = (*(double *)(param_6 + 9) - *(double *)(param_6 + 1)) / (double)local_6c;
        local_90 = 1.0 / ((double)local_6c * local_98);
        *(double *)(local_60 + 0x38) = local_b0 * local_90;
        *(undefined8 *)(local_60 + 0x60) = *(undefined8 *)(param_6 + 0x21);
        local_64 = 0;
        iVar3 = local_70;
        if (-1 < local_70 + -1) {
          do {
            iVar5 = local_64 + local_74;
            FUN_01cc5240(local_60,(double)iVar5 * local_90);
            if (param_5 == '\0') {
              puVar1 = (undefined8 *)(local_48 + (longlong)iVar5 * 0x10);
              local_c0 = *puVar1;
              uStack_b8 = puVar1[1];
            }
            else {
              FUN_010bf090(*(undefined8 *)(local_50 + 0x20),
                           ((double)(local_64 + local_74) * 6.283185307179586) /
                           (double)(local_6c * *(int *)PTR_DAT_020056c0),&local_c0);
              FUN_00c44790(local_48 + (longlong)iVar5 * 0x10,&local_c0);
            }
            if (param_6[0x2b] == 0) {
              dVar6 = (double)FUN_00c44590(&local_c0);
              uVar7 = FUN_00c445d0(&local_c0);
              FUN_01cc52d0(local_60,local_a8 * local_98 * dVar6,uVar7);
            }
            else if (param_6[0x2b] == 1) {
              dVar6 = (double)FUN_00c44590(&local_c0);
              uVar7 = FUN_00c445d0(&local_c0);
              FUN_01cc52d0(local_60,(local_a8 * dVar6) / (double)local_6c,uVar7);
            }
            local_64 = local_64 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
LAB_0114e4e6:
      local_68 = local_68 + 1;
      local_12c = local_12c + -1;
      iVar3 = local_12c;
    } while (local_12c != 0);
  }
  FUN_004095f0(local_48);
  FUN_00410f20(local_50);
  FUN_00410f20(local_58);
  FUN_01cc6080(param_2,1,0);
  FUN_00414560(&local_128,3);
  FUN_00414480(&local_f0);
  FUN_00414480(&local_d8);
  FUN_00414480(local_40);
  FUN_00414480(&local_res18);
  FUN_00414480(&param_7);
  return local_60;
}

