/* Ghidra address: 0102a6d0 */
/* Ghidra symbol: FUN_0102a6d0 */


void FUN_0102a6d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 int param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18;
  longlong local_res20;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_0102ae0c);
  if (iVar1 == -1) {
    FUN_00416ba0(&local_20,local_res18,L" addr error ------------------------------");
    FUN_01028360(param_1,local_20);
    FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_28,7,local_30,local_38,local_40,local_48,&DAT_0102ae80,local_res18,
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_28);
  }
  else {
    iVar2 = 0;
    if (local_res20 != 0) {
      iVar2 = *(int *)(local_res20 + -4);
    }
    if (iVar2 == 1) {
      iVar2 = FUN_0043fc00(local_res20);
    }
    else {
      iVar2 = FUN_00f794e0(param_1,local_res20,&DAT_0102ae0c);
    }
    if (iVar2 != -1) {
      FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_70,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_78,iVar1);
      puVar3 = &DAT_0102ae80;
      puVar5 = &DAT_0102ae90;
      uVar4 = local_res18;
      uVar6 = local_78;
      FUN_00416cd0(&local_50,8,local_58,local_60,local_68,local_70,&DAT_0102ae80,local_res18,
                   &DAT_0102ae90,local_78);
      FUN_00f787d0(param_1,param_2,local_50);
      if (iVar1 < 0x40) {
        FUN_00416780(&local_98,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_90,4,&DAT_0102aed4,local_98,L"R16, ",local_res18,puVar3,uVar4,puVar5,
                     uVar6);
        FUN_00f787d0(param_1,param_2,local_90);
      }
      else {
        FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_80,4,L"LDS ",local_88,L"R16, ",local_res18,puVar3,uVar4,puVar5,uVar6);
        FUN_00f787d0(param_1,param_2,local_80);
      }
      if (param_5 == 1) {
        FUN_00f787d0(param_1,param_2,L"SET ");
      }
      else {
        FUN_00f787d0(param_1,param_2,L"CLT ");
      }
      FUN_00416780(&local_a8,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_b0,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_b8,iVar2);
      FUN_00416cd0(&local_a0,7,L"BLD ",local_a8,L"R16, ",local_res20,local_b0,L"; pos=",local_b8);
      FUN_00f787d0(param_1,param_2,local_a0);
      iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_0102ae0c);
      if (iVar1 < 0x40) {
        FUN_00416780(&local_e0,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416780(&local_e8,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_d8,7,L"OUT ",local_e0,local_res18,L", R16",local_e8,&DAT_0102ae80,
                     param_6);
        FUN_00f787d0(param_1,param_2,local_d8);
      }
      else {
        FUN_00416780(&local_c8,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416780(&local_d0,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_c0,7,L"STS ",local_c8,local_res18,L", R16",local_d0,&DAT_0102ae80,
                     param_6);
        FUN_00f787d0(param_1,param_2,local_c0);
      }
    }
  }
  FUN_00414560(&local_e8,0x1a);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_6);
  return;
}

