/* Ghidra address: 01a05100 */
/* Ghidra symbol: FUN_01a05100 */


void FUN_01a05100(longlong param_1,undefined *param_2,int param_3,char param_4,undefined8 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined *local_res10 [3];
  undefined8 in_stack_fffffffffffffd58;
  undefined *puVar9;
  ulonglong uVar10;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [256];
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
  
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
  local_268 = 0;
  local_270 = 0;
  local_258 = 0;
  local_260 = 0;
  local_248 = 0;
  local_250 = 0;
  local_238 = 0;
  local_240 = 0;
  local_230 = 0;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if (sVar3 == 0x3ee) {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_48)
    ;
    FUN_019ee820(param_1,&local_40,0x15,local_48,CONCAT44(uVar4,0xb));
    FUN_00416ad0(&local_40,&DAT_01a05cac);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_40);
    iVar6 = 0;
    if (-1 < param_3 + -1) {
      do {
        FUN_019f0400(param_1,&local_58,iVar6,0);
        FUN_00416ba0(&local_50,&DAT_01a05cac,local_58);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_50);
        iVar6 = iVar6 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_00414b50(local_30,L"7414");
    FUN_00416ba0(&local_60,&DAT_01a05cd4,local_30[0]);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_60);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xc0);
    if (bVar1 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x23U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),&local_78);
      FUN_019ee820(param_1,&local_70,0x13,local_78,CONCAT44(uVar4,0xb));
      puVar9 = local_res10[0];
      FUN_00416cd0(&local_68,3,local_70,&DAT_01a05cac,local_res10[0]);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_68)
      ;
      if (param_4 != '\0') {
        FUN_0043f750(&local_88,param_3 + -1);
        puVar9 = &DAT_01a05cf8;
        FUN_00416cd0(&local_80,3,&DAT_01a05ce8,local_88,&DAT_01a05cf8);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_80);
      }
      uVar10 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
      FUN_01a04e90(param_1,&local_98,7,0,uVar10);
      FUN_01a04e90(param_1,&local_a0,6,0,uVar10 & 0xffffffffffffff00);
      FUN_00416cd0(&local_90,5,&DAT_01a05cac,local_98,&DAT_01a05cac,local_a0,&DAT_01a05cac);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_90)
      ;
      iVar6 = 0;
      if (-1 < param_3 + -1) {
        do {
          FUN_019f0400(param_1,&local_b0,iVar6,0);
          FUN_00416ba0(&local_a8,&DAT_01a05cac,local_b0);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),local_a8);
          iVar6 = iVar6 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      iVar6 = FUN_00416db0(local_res10[0],L"BUF3");
      if (iVar6 == 0) {
        uVar5 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
        FUN_019f2df0(param_1,local_1b0,uVar5);
        FUN_004169a0(&local_1b8,local_1b0);
        uVar5 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
        FUN_019f29b0(param_1,local_30,local_1b8,0x13,uVar5,param_5);
      }
      else {
        iVar6 = FUN_00416db0(local_res10[0],&DAT_01a05d20);
        if (iVar6 == 0) {
          uVar5 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
          FUN_019f2df0(param_1,local_1b0,uVar5);
          FUN_004169a0(&local_1c0,local_1b0);
          uVar5 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
          FUN_019f29b0(param_1,local_30,local_1c0,0x13,uVar5,param_5);
        }
        else {
          uVar5 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
          FUN_019f2df0(param_1,local_1b0,uVar5);
          FUN_004169a0(&local_1c8,local_1b0);
          uVar5 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
          FUN_019f29b0(param_1,local_30,local_1c8,0x13,uVar5,param_5);
        }
      }
      FUN_019f2e60(param_1,&local_1d8,1);
      FUN_00416cd0(&local_1d0,4,&DAT_01a05cd4,local_30[0],&DAT_01a05cac,local_1d8);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_1d0)
      ;
    }
    else {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 0x8d) = 1;
      }
      else if (bVar1 == 3) {
        *(undefined1 *)(param_1 + 0x8e) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x8f) = 1;
      }
      if (*(char *)(param_1 + 0xc0) == '\x04') {
        FUN_00414b50(&local_38,L" VARS: ");
      }
      else {
        FUN_00414b50(&local_38,L" PARAMS: ");
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),&local_1e8);
      uVar5 = CONCAT44(uVar4,0xb);
      FUN_019ee820(param_1,&local_1e0,0x15,local_1e8,uVar5);
      FUN_00416ad0(&local_1e0,&DAT_01a05cac);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_1e0);
      iVar7 = 0;
      iVar6 = param_3;
      if (-1 < param_3 + -1) {
        do {
          FUN_019f0400(param_1,&local_1f8,iVar7,0);
          FUN_00416ba0(&local_1f0,&DAT_01a05cac,local_1f8);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),local_1f0);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar10 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      FUN_01a04e90(param_1,&local_208,7,0,uVar10);
      FUN_01a04e90(param_1,&local_210,6,0,uVar10 & 0xffffffffffffff00);
      FUN_00416cd0(&local_200,6,&DAT_01a05cac,local_208,&DAT_01a05cac,local_210,&DAT_01a05cac,
                   local_res10[0]);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_200);
      if (param_4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))
                  (*(longlong **)(param_1 + 0x20),param_3 + -1);
      }
      iVar6 = FUN_019edff0(param_1,5,0);
      if (iVar6 == 1) {
        FUN_019ed1f0(param_1,&local_220,1,1);
        FUN_019ed1f0(param_1,&local_228,1,2);
        FUN_00416cd0(&local_218,5,local_38,L"DLH=",local_220,L" DHL=",local_228);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_218);
      }
      else {
        FUN_00416ba0(&local_230,local_38,L"DLH=0 DHL=0");
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_230);
      }
      uVar2 = FUN_019f31f0(param_1);
      FUN_0043f750(&local_240,uVar2);
      FUN_00416ba0(&local_238,L" IOMod=",local_240);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_238);
      iVar6 = FUN_019edff0(param_1,3,0);
      FUN_0043f750(&local_250,iVar6 + 1);
      FUN_00416ba0(&local_248,L" InMode=",local_250);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_248);
      iVar6 = FUN_019edff0(param_1,4,0);
      FUN_0043f750(&local_260,iVar6 + 1);
      FUN_00416ba0(&local_258,L" OutMode=",local_260);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_258);
      uVar4 = FUN_019edff0(param_1,1,3);
      FUN_0043f750(&local_270,uVar4);
      FUN_00416ba0(&local_268,L" OutTyp=",local_270);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_268)
      ;
    }
  }
  FUN_00414560(&local_270,0x18);
  FUN_00414560(&local_b0,0x11);
  FUN_00414480(local_res10);
  return;
}

