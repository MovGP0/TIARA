/* Ghidra address: 0103d660 */
/* Ghidra symbol: FUN_0103d660 */


void FUN_0103d660(longlong param_1,undefined8 param_2,undefined *param_3,undefined4 param_4,
                 short param_5,undefined *param_6)

{
  int iVar1;
  undefined *local_res18 [2];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = (undefined *)0x0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = (undefined *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = (undefined *)0x0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414610(param_6);
  iVar1 = FUN_00f794e0(param_1,local_res18[0],&DAT_0103dcb8);
  if (iVar1 == -1) {
    FUN_00416780(&local_c8,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_d0,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_d8,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_e0,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_c0,7,local_c8,local_d0,local_d8,local_e0,&DAT_0103dcc8,local_res18[0],
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_c0);
  }
  else {
    FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_48,iVar1);
    puVar2 = &DAT_0103dcc8;
    puVar4 = &DAT_0103dcd8;
    puVar3 = local_res18[0];
    uVar5 = local_48;
    FUN_00416cd0(local_20,8,local_28,local_30,local_38,local_40,&DAT_0103dcc8,local_res18[0],
                 &DAT_0103dcd8,local_48);
    FUN_00f787d0(param_1,param_2,local_20[0]);
    if ((param_5 == 100) || (param_5 == 0x44)) {
      FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
      FUN_0043f750(&local_60,param_4);
      FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
      puVar3 = &DAT_0103dcc8;
      puVar2 = local_68;
      puVar4 = param_6;
      FUN_00416cd0(&local_50,7,L"MOV ",local_58,L"R6, #",local_60,local_68,&DAT_0103dcc8,param_6);
      FUN_00f787d0(param_1,param_2,local_50);
    }
    else if ((param_5 == 0x68) || (param_5 == 0x48)) {
      FUN_00416780(&local_78,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_80,param_4);
      FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
      puVar3 = &DAT_0103dcc8;
      puVar2 = local_88;
      puVar4 = param_6;
      FUN_00416cd0(&local_70,7,L"MOV ",local_78,L"R6, #",local_80,local_88,&DAT_0103dcc8,param_6);
      FUN_00f787d0(param_1,param_2,local_70);
    }
    else if ((param_5 == 0x62) || (param_5 == 0x42)) {
      FUN_00416780(&local_98,*(undefined2 *)(param_1 + 0xb0));
      FUN_0103c9d0(&local_a0,param_4);
      FUN_00416780(&local_a8,*(undefined2 *)(param_1 + 0xb0));
      puVar3 = &DAT_0103dcc8;
      puVar2 = local_a8;
      puVar4 = param_6;
      FUN_00416cd0(&local_90,7,L"MOV ",local_98,L"R6, #",local_a0,local_a8,&DAT_0103dcc8,param_6);
      FUN_00f787d0(param_1,param_2,local_90);
    }
    FUN_00416780(&local_b8,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_b0,4,L"MOV ",local_b8,local_res18[0],L", R6",puVar2,puVar3,puVar4,uVar5);
    FUN_00f787d0(param_1,param_2,local_b0);
  }
  FUN_00414560(&local_e0,0x19);
  FUN_00414480(local_res18);
  FUN_00414480(&param_6);
  return;
}

