/* Ghidra address: 0103dd90 */
/* Ghidra symbol: FUN_0103dd90 */


void FUN_0103dd90(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 int param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 uVar5;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_7);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_0103e6dc);
  if (iVar1 == -1) {
    FUN_00416780(&local_128,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_130,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_138,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_140,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_120,7,local_128,local_130,local_138,local_140,&DAT_0103e6ec,local_res18,
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_120);
  }
  else {
    iVar2 = 0;
    if (local_res20 != 0) {
      iVar2 = *(int *)(local_res20 + -4);
    }
    if (iVar2 < 2) {
      iVar2 = FUN_0043fc00(local_res20);
    }
    else {
      iVar2 = FUN_00f794e0(param_1,local_res20,&DAT_0103e6dc);
    }
    if (iVar2 == -1) {
      FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_20,7,local_28,local_30,local_38,local_40,&DAT_0103e6ec,local_res20,
                   L" addr error ------------------------------");
      FUN_00f787d0(param_1,param_2,local_20);
    }
    else {
      FUN_00416780(&local_50,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_70,iVar2);
      FUN_00416cd0(&local_48,8,local_50,local_58,local_60,local_68,&DAT_0103e6ec,local_res20,
                   &DAT_0103e760,local_70);
      FUN_00f787d0(param_1,param_2,local_48);
      FUN_00416780(&local_80,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_90,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_98,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_a0,iVar1);
      uVar5 = local_a0;
      FUN_00416cd0(&local_78,8,local_80,local_88,local_90,local_98,&DAT_0103e6ec,local_res18,
                   &DAT_0103e774,local_a0);
      FUN_00f787d0(param_1,param_2,local_78);
      iVar1 = 1;
      iVar3 = 1;
      iVar4 = iVar2;
      if (0 < iVar2) {
        do {
          param_6 = param_6 * 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_5 = iVar2 + param_5;
      iVar4 = 1;
      if (0 < param_5) {
        do {
          iVar1 = iVar1 * 2;
          if (iVar4 == iVar2) {
            iVar3 = iVar1;
          }
          iVar4 = iVar4 + 1;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      FUN_00416780(&local_b0,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_b8,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_a8,7,L"MOV  ",local_b0,&DAT_0103e7a0,local_res18,local_b8,&DAT_0103e6ec,
                   param_7,uVar5);
      FUN_00f787d0(param_1,param_2,local_a8);
      FUN_00416780(&local_c8,*(undefined2 *)(param_1 + 0xb0));
      FUN_0043f750(&local_d0,0xff - (iVar1 - iVar3));
      FUN_00416cd0(&local_c0,4,L"MOV ",local_c8,L"R6, #",local_d0);
      FUN_00f787d0(param_1,param_2,local_c0);
      FUN_00416780(&local_e0,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_d8,3,&DAT_0103e7e4,local_e0,L"A,R6");
      FUN_00f787d0(param_1,param_2,local_d8);
      FUN_00416780(&local_f0,*(undefined2 *)(param_1 + 0xb0));
      FUN_0043f750(&local_f8,param_6);
      FUN_00416cd0(&local_e8,4,L"MOV ",local_f0,L"R6, #",local_f8);
      FUN_00f787d0(param_1,param_2,local_e8);
      FUN_00416780(&local_108,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_100,3,L"ORL ",local_108,L"A,R6");
      FUN_00f787d0(param_1,param_2,local_100);
      FUN_00416780(&local_118,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_110,4,L"MOV ",local_118,local_res18,&DAT_0103e828);
      FUN_00f787d0(param_1,param_2,local_110);
    }
  }
  FUN_00414560(&local_140,0x25);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_7);
  return;
}

