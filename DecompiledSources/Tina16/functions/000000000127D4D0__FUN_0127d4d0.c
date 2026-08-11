/* Ghidra address: 0127d4d0 */
/* Ghidra symbol: FUN_0127d4d0 */


void FUN_0127d4d0(longlong *param_1,byte *param_2,uint param_3,char param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t **ppwVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  longlong *local_res8 [4];
  int local_1a4;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
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
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  wchar_t *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (wchar_t *)0x0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  bVar1 = *param_2;
  uVar6 = 0;
  uVar7 = (ulonglong)param_3;
  if (bVar1 != param_3) {
    if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0xfeU) != 0) {
      FUN_004095f0(*(undefined8 *)(param_2 + 1));
      if (*(longlong *)(param_2 + 9) != 0) {
        uVar7 = (ulonglong)*param_2;
        uVar10 = (uint)(byte)PTR_DAT_02001408[uVar7 - 1];
        iVar9 = 0;
        if (-1 < (int)(uVar10 - 1)) {
          do {
            FUN_004095f0(*(undefined8 *)(*(longlong *)(param_2 + 9) + (longlong)iVar9 * 8));
            iVar9 = iVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      FUN_004095f0(*(undefined8 *)(param_2 + 9));
    }
    if (*param_2 == 8) {
      FUN_00410f20(*(undefined8 *)(param_2 + 9));
    }
    if (*param_2 == 9) {
      FUN_00410f20(*(undefined8 *)(param_2 + 0x11));
    }
    if (*param_2 == 10) {
      FUN_00442c30(*(undefined8 *)(param_2 + 2));
      FUN_00410f20(*(undefined8 *)(param_2 + 0xe));
    }
    uVar6 = (ulonglong)param_3;
    bVar1 = (byte)param_3;
    *param_2 = bVar1;
    if (bVar1 < 8) {
      bVar12 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (bVar1 & 0x1f) & 0xfeU) != 0;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      bVar1 = PTR_DAT_02001408[(ulonglong)bVar1 - 1];
      *(ushort *)(param_2 + 0x11) = (ushort)bVar1 * 8;
      uVar5 = FUN_00409570((ushort)bVar1 * 8);
      *(undefined8 *)(param_2 + 1) = uVar5;
      uVar6 = FUN_00409570((ulonglong)(byte)PTR_DAT_02001408[(ulonglong)*param_2 - 1] << 3);
      *(ulonglong *)(param_2 + 9) = uVar6;
    }
    if (*param_2 == 8) {
      uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)(param_2 + 9) = uVar5;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      uVar6 = 0x3ef4f8b588e368f1;
      param_2[0x11] = 0xf1;
      param_2[0x12] = 0x68;
      param_2[0x13] = 0xe3;
      param_2[0x14] = 0x88;
      param_2[0x15] = 0xb5;
      param_2[0x16] = 0xf8;
      param_2[0x17] = 0xf4;
      param_2[0x18] = 0x3e;
      param_2[0x19] = 100;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
    }
    if (*param_2 == 10) {
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
    }
    if (*param_2 == 9) {
      uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(ulonglong *)(param_2 + 0x11) = uVar6;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0x10] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[0x19] = 0;
    }
    if (*param_2 == 0xb) {
      param_2[1] = 0;
      param_2[0x17] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
    }
  }
  if (*param_2 < 8) {
    bVar12 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (*param_2 & 0x1f) & 0xfeU) != 0;
  }
  else {
    bVar12 = false;
  }
  if (bVar12) {
    if (local_res8[0] != (longlong *)0x0) {
      iVar9 = 0;
      FUN_0043f750(&local_80,0);
      uVar5 = 0;
      FUN_00416cd0(&local_78,3,L"parameter[@idx=\"",local_80,&DAT_0127e868);
      (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],local_70,local_78);
      FUN_0041b890(&local_38,local_70[0],&DAT_0127e86e);
      while (uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20), local_38 != (longlong *)0x0) {
        ppwVar8 = &local_40;
        (**(code **)(*local_38 + 0x100))(local_38,ppwVar8,L"value");
        bVar1 = *param_2;
        if (bVar1 < 8) {
          bVar12 = ((int)CONCAT71((int7)((ulonglong)ppwVar8 >> 8),1) << (bVar1 & 0x1f) & 0x90U) != 0
          ;
        }
        else {
          bVar12 = false;
        }
        if ((bVar12) && (iVar9 == 2)) {
          lVar11 = *(longlong *)(param_2 + 1);
          uVar5 = FUN_016d7c10(bVar1,3);
          uVar5 = FUN_00b8f2f0(local_40,uVar5);
          *(undefined8 *)(lVar11 + 0x10) = uVar5;
          FUN_01d3a230(lVar11,*(undefined8 *)(param_2 + 9),2,
                       *(undefined8 *)(*(longlong *)(param_2 + 1) + 0x10));
        }
        else {
          lVar11 = (longlong)iVar9;
          FUN_004095f0(*(undefined8 *)(*(longlong *)(param_2 + 9) + lVar11 * 8));
          iVar3 = 0;
          if (local_40 != (wchar_t *)0x0) {
            iVar3 = *(int *)(local_40 + -2);
          }
          uVar5 = FUN_00409570((longlong)(iVar3 + 1));
          *(undefined8 *)(*(longlong *)(param_2 + 9) + lVar11 * 8) = uVar5;
          FUN_00415dd0(&local_88,local_40,0);
          FUN_004425e0(*(undefined8 *)(*(longlong *)(param_2 + 9) + lVar11 * 8),local_88);
          uVar5 = FUN_016d7c10(*param_2,iVar9 + 1);
          uVar5 = FUN_00b8f2f0(local_40,uVar5);
          *(undefined8 *)(*(longlong *)(param_2 + 1) + lVar11 * 8) = uVar5;
        }
        if (param_4 != '\0') {
          bVar1 = *param_2;
          if (bVar1 < 5) {
            if (bVar1 == 4) {
              local_1a4 = 0x230;
            }
            else if (bVar1 == 1) {
              local_1a4 = 0x22b;
            }
            else if (bVar1 == 2) {
              local_1a4 = 0x23c;
            }
            else if (bVar1 == 3) {
              local_1a4 = 0x233;
            }
          }
          else if (bVar1 == 5) {
            local_1a4 = 0x240;
          }
          else if (bVar1 == 6) {
            local_1a4 = 0x23e;
          }
          else if (bVar1 == 7) {
            local_1a4 = 0x22d;
          }
          FUN_00de88c0(&local_90,local_1a4 + iVar9,*(undefined8 *)PTR_DAT_02001f18);
          FUN_004168b0(&local_58,local_90);
          FUN_0127c510(param_5,param_6,local_38,param_7,CONCAT44(uVar4,param_8),iVar9,local_58);
        }
        iVar9 = iVar9 + 1;
        FUN_0043f750(&local_a8,iVar9);
        uVar5 = 0;
        FUN_00416cd0(&local_a0,3,L"parameter[@idx=\"",local_a8,&DAT_0127e868);
        (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_98,local_a0);
        FUN_0041b890(&local_38,local_98,&DAT_0127e86e);
      }
    }
    if (*param_2 == 4) {
      FUN_016da8e0(*(undefined8 *)(param_2 + 1));
    }
  }
  if ((*param_2 == 8) && (local_res8[0] != (longlong *)0x0)) {
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_b0,L"parameter[@idx=\"0\"]");
    FUN_0041b890(&local_38,local_b0,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0xb8))(local_38,&local_c0);
      FUN_0043ea00(&local_b8,local_c0);
      (**(code **)(**(longlong **)(param_2 + 9) + 0x60))(*(longlong **)(param_2 + 9),local_b8);
    }
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_c8,L"parameter[@idx=\"max\"]");
    FUN_0041b890(&local_38,local_c8,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_d0,L"value");
      uVar5 = FUN_00b8f2f0(local_d0,0x3ef4f8b588e368f0);
      *(undefined8 *)(param_2 + 0x11) = uVar5;
    }
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_d8,L"parameter[@idx=\"subdiv\"]");
    FUN_0041b890(&local_38,local_d8,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_e0,L"value");
      uVar4 = FUN_0043fc50(local_e0,100);
      *(undefined4 *)(param_2 + 0x19) = uVar4;
    }
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_e8,L"parameter[@idx=\"periodic\"]");
    FUN_0041b890(&local_38,local_e8,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_f0,L"value");
      bVar1 = FUN_0043fed0(local_f0,0);
      param_2[0x1d] = bVar1;
    }
  }
  if ((*param_2 == 9) && (local_res8[0] != (longlong *)0x0)) {
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_f8,L"parameter");
    FUN_0041b890(&local_38,local_f8,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0xb8))(local_38,&local_108);
      FUN_0043ea00(&local_100,local_108);
      (**(code **)(**(longlong **)(param_2 + 0x11) + 0x60))
                (*(longlong **)(param_2 + 0x11),local_100);
      (**(code **)(*local_38 + 0xd8))(local_38,&local_110,L"exparameter");
      FUN_0041b890(&local_30,local_110,&DAT_0127e86e);
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x100))(local_30,&local_118,L"repeat");
        uVar4 = FUN_0043fc50(local_118,0);
        *(undefined4 *)(param_2 + 5) = uVar4;
      }
    }
  }
  if ((*param_2 == 10) && (local_res8[0] != (longlong *)0x0)) {
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_120,L"parameter[@idx=\"wav\"]");
    FUN_0041b890(&local_38,local_120,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_40,L"value");
      (**(code **)(*local_38 + 0xd8))(local_38,&local_128,L"exparameter");
      FUN_0041b890(&local_30,local_128,&DAT_0127e86e);
      if (local_40 == (wchar_t *)0x0) {
        bVar12 = false;
      }
      else {
        if (local_40 == L"<embedded>") {
          bVar12 = true;
        }
        else if (local_40 == (wchar_t *)0x0) {
          bVar12 = false;
        }
        else {
          iVar9 = FUN_0043e420(local_40,L"<embedded>");
          bVar12 = iVar9 == 0;
        }
        bVar12 = !bVar12;
      }
      if (bVar12) {
        if (local_30 == (longlong *)0x0) {
          FUN_00414480(&local_50);
          cVar2 = '\0';
        }
        else {
          (**(code **)(*local_30 + 0x100))(local_30,&local_50,L"path");
          (**(code **)(*local_30 + 0x100))(local_30,&local_130,L"abspath");
          cVar2 = FUN_0043fc50(local_130,0);
        }
        if (cVar2 == '\0') {
          uVar5 = FUN_00416740(local_40);
          uVar5 = FUN_00442bd0(uVar5);
          *(undefined8 *)(param_2 + 2) = uVar5;
        }
        else {
          FUN_00416ba0(&local_138,local_50,local_40);
          uVar5 = FUN_00416740(local_138);
          uVar5 = FUN_00442bd0(uVar5);
          *(undefined8 *)(param_2 + 2) = uVar5;
          param_2[1] = param_2[1] | 0x40;
        }
      }
      else {
        uVar5 = FUN_00442bd0(L"<embedded>");
        *(undefined8 *)(param_2 + 2) = uVar5;
        if (local_30 == (longlong *)0x0) {
          FUN_00414480(&local_40);
        }
        else {
          (**(code **)(*local_30 + 0xb8))(local_30,&local_140);
          FUN_0043ea00(&local_40,local_140);
        }
        if (local_40 != (wchar_t *)0x0) {
          uVar5 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
          *(undefined8 *)(param_2 + 0xe) = uVar5;
          FUN_00c7b9b0(local_40,uVar5);
          FUN_004b6dc0(*(undefined8 *)(param_2 + 0xe),0);
        }
      }
    }
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_148,L"parameter[@idx=\"rep\"]");
    FUN_0041b890(&local_38,local_148,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_150,L"value");
      cVar2 = FUN_0043fc50(local_150,0);
      if (cVar2 != '\0') {
        param_2[1] = param_2[1] | 0x80;
      }
    }
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_158,L"parameter[@idx=\"mv\"]");
    FUN_0041b890(&local_38,local_158,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_160,L"value");
      uVar5 = FUN_00b8f2f0(local_160,0x3ff0000000000000);
      *(undefined8 *)(param_2 + 0x16) = uVar5;
    }
  }
  if ((*param_2 == 0xb) && (local_res8[0] != (longlong *)0x0)) {
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_168,L"parameter[@idx=\"rms\"]");
    FUN_0041b890(&local_38,local_168,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_170,L"value");
      uVar5 = FUN_00b8f2f0(local_170,0x3eb0c6f7a0b5ed8d);
      *(undefined8 *)(param_2 + 3) = uVar5;
    }
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_178,L"parameter[@idx=\"bw\"]");
    FUN_0041b890(&local_38,local_178,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_180,L"value");
      uVar5 = FUN_00b8f2f0(local_180,0x416312d000000000);
      *(undefined8 *)(param_2 + 0xb) = uVar5;
    }
    (**(code **)(*local_res8[0] + 0xd8))(local_res8[0],&local_188,L"parameter[@idx=\"ft\"]");
    FUN_0041b890(&local_38,local_188,&DAT_0127e86e);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_190,L"value");
      bVar1 = FUN_0043fc50(local_190,0);
      param_2[2] = bVar1;
    }
  }
  FUN_00414480(&local_190);
  FUN_0041b800(&local_188);
  FUN_00414480(&local_180);
  FUN_0041b800(&local_178);
  FUN_00414480(&local_170);
  FUN_0041b800(&local_168);
  FUN_00414480(&local_160);
  FUN_0041b800(&local_158);
  FUN_00414480(&local_150);
  FUN_0041b800(&local_148);
  FUN_00414560(&local_140,3);
  FUN_00417840(&local_128,&DAT_00b9f8e0,2);
  FUN_00414480(&local_118);
  FUN_0041b800(&local_110);
  FUN_00414560(&local_108,2);
  FUN_0041b800(&local_f8);
  FUN_00414480(&local_f0);
  FUN_0041b800(&local_e8);
  FUN_00414480(&local_e0);
  FUN_0041b800(&local_d8);
  FUN_00414480(&local_d0);
  FUN_0041b800(&local_c8);
  FUN_00414560(&local_c0,2);
  FUN_0041b800(&local_b0);
  FUN_00414560(&local_a8,2);
  FUN_0041b800(&local_98);
  FUN_00414520(&local_90);
  FUN_004144d0(&local_88);
  FUN_00414560(&local_80,2);
  FUN_0041b800(local_70);
  FUN_00414560(&local_60,5);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_0041b800(local_res8);
  return;
}

