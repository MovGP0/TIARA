/* Ghidra address: 01028510 */
/* Ghidra symbol: FUN_01028510 */


void FUN_01028510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  undefined8 local_20 [2];
  
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_01028bfc);
  if (iVar1 == -1) {
    FUN_00416ba0(&local_c8,local_res18,L" addr error ------------------------------");
    FUN_01028360(param_1,local_c8);
    FUN_00416780(&local_d8,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_e0,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_e8,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_f0,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_d0,7,local_d8,local_e0,local_e8,local_f0,&DAT_01028c0c,local_res18,
                 L" addr error");
    FUN_00f787d0(param_1,param_2,local_d0);
  }
  else {
    FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_48,iVar1);
    FUN_00416cd0(local_20,8,local_28,local_30,local_38,local_40,&DAT_01028c0c,local_res18,
                 &DAT_01028c1c,local_48);
    FUN_00f787d0(param_1,param_2,local_20[0]);
    FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
    FUN_0043f750(&local_60,(longlong)param_5 % 0x100 & 0xffffffff);
    FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
    puVar3 = &DAT_01028c0c;
    uVar2 = local_68;
    uVar4 = param_6;
    FUN_00416cd0(&local_50,7,L"LDI ",local_58,L"R16, ",local_60,local_68,&DAT_01028c0c,param_6);
    FUN_00f787d0(param_1,param_2,local_50);
    if (iVar1 < 0x40) {
      FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_80,4,L"OUT ",local_88,local_res18,L", R16",uVar2,puVar3,uVar4);
      FUN_00f787d0(param_1,param_2,local_80);
    }
    else {
      FUN_00416780(&local_78,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_70,4,L"STS ",local_78,local_res18,L", R16",uVar2,puVar3,uVar4);
      FUN_00f787d0(param_1,param_2,local_70);
    }
    FUN_00416780(&local_98,*(undefined2 *)(param_1 + 0xb0));
    FUN_0043f750(&local_a0,(longlong)param_5 / 0x100 & 0xffffffff);
    FUN_00416cd0(&local_90,4,L"LDI ",local_98,L"R16, ",local_a0);
    FUN_00f787d0(param_1,param_2,local_90);
    iVar1 = FUN_00f794e0(param_1,local_res20,&DAT_01028bfc);
    if (iVar1 < 0x40) {
      FUN_00416780(&local_c0,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_b8,4,L"OUT ",local_c0,local_res20,L", R16");
      FUN_00f787d0(param_1,param_2,local_b8);
    }
    else {
      FUN_00416780(&local_b0,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_a8,4,L"STS ",local_b0,local_res20,L", R16");
      FUN_00f787d0(param_1,param_2,local_a8);
    }
  }
  FUN_00414560(&local_f0,0x1b);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_6);
  return;
}

