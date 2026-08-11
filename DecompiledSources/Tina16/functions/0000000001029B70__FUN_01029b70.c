/* Ghidra address: 01029b70 */
/* Ghidra symbol: FUN_01029b70 */


void FUN_01029b70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uVar6;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_140 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_128 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_7);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_0102a56c);
  if (iVar1 == -1) {
    FUN_00416ba0(&local_140,local_res18,L" addr error ------------------------------");
    FUN_01028360(param_1,local_140);
    FUN_00416780(&local_150,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_158,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_160,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_168,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_148,7,local_150,local_158,local_160,local_168,&DAT_0102a5e0,local_res18,
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_148);
  }
  else {
    iVar2 = FUN_00f794e0(param_1,local_res20,&DAT_0102a56c);
    if (iVar2 == -1) {
      FUN_00416ba0(local_30,local_res20,L" addr error ------------------------------");
      FUN_01028360(param_1,local_30[0]);
      FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_50,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_38,7,local_40,local_48,local_50,local_58,&DAT_0102a5e0,local_res20,
                   L" addr error ------------------------------");
      FUN_00f787d0(param_1,param_2,local_38);
    }
    else {
      FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_70,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_78,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_80,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_88,iVar2);
      FUN_00416cd0(&local_60,8,local_68,local_70,local_78,local_80,&DAT_0102a5e0,local_res20,
                   &DAT_0102a5f0,local_88);
      FUN_00f787d0(param_1,param_2,local_60);
      FUN_00416780(&local_98,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_a8,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_b0,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_b8,iVar1);
      uVar6 = local_b8;
      FUN_00416cd0(&local_90,8,local_98,local_a0,local_a8,local_b0,&DAT_0102a5e0,local_res18,
                   &DAT_0102a604,local_b8);
      FUN_00f787d0(param_1,param_2,local_90);
      iVar4 = 1;
      iVar3 = 1;
      iVar5 = iVar2;
      if (0 < iVar2) {
        do {
          param_6 = param_6 * 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_5 = iVar2 + param_5;
      iVar5 = 1;
      if (0 < param_5) {
        do {
          iVar4 = iVar4 * 2;
          if (iVar5 == iVar2) {
            iVar3 = iVar4;
          }
          iVar5 = iVar5 + 1;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      if (iVar1 < 0x40) {
        FUN_00416780(&local_e0,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416780(&local_e8,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_d8,7,&DAT_0102a648,local_e0,L"R16, ",local_res18,local_e8,&DAT_0102a5e0,
                     param_7,uVar6);
        FUN_00f787d0(param_1,param_2,local_d8);
      }
      else {
        FUN_00416780(&local_c8,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416780(&local_d0,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_c0,7,L"LDS ",local_c8,L"R16, ",local_res18,local_d0,&DAT_0102a5e0,
                     param_7,uVar6);
        FUN_00f787d0(param_1,param_2,local_c0);
      }
      FUN_00416780(&local_f8,*(undefined2 *)(param_1 + 0xb0));
      FUN_0043f750(&local_100,0xff - (iVar4 - iVar3));
      FUN_00416cd0(&local_f0,4,L"ANDI",local_f8,L"R16, ",local_100);
      FUN_00f787d0(param_1,param_2,local_f0);
      FUN_00416780(&local_110,*(undefined2 *)(param_1 + 0xb0));
      FUN_0043f750(&local_118,param_6);
      FUN_00416cd0(&local_108,4,L"ORI ",local_110,L"R16, ",local_118);
      FUN_00f787d0(param_1,param_2,local_108);
      if (iVar1 < 0x40) {
        FUN_00416780(&local_138,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_130,4,L"OUT ",local_138,local_res18,L", R16");
        FUN_00f787d0(param_1,param_2,local_130);
      }
      else {
        FUN_00416780(&local_128,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_120,4,L"STS ",local_128,local_res18,L", R16");
        FUN_00f787d0(param_1,param_2,local_120);
      }
    }
  }
  FUN_00414560(&local_168,0x28);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_7);
  return;
}

