/* Ghidra address: 01028d30 */
/* Ghidra symbol: FUN_01028d30 */


void FUN_01028d30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_90 = 0;
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
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  iVar1 = FUN_00f794e0(param_1,local_res18[0],&DAT_01029248);
  if (iVar1 == -1) {
    FUN_00416ba0(&local_90,local_res18[0],L" addr error ------------------------------");
    FUN_01028360(param_1,local_90);
    FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_a8,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_b0,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_b8,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_98,7,local_a0,local_a8,local_b0,local_b8,&DAT_01029258,local_res18[0],
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_98);
  }
  else {
    FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_48,iVar1);
    FUN_00416cd0(local_20,8,local_28,local_30,local_38,local_40,&DAT_01029258,local_res18[0],
                 &DAT_01029268,local_48);
    FUN_00f787d0(param_1,param_2,local_20[0]);
    FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
    FUN_0043f750(&local_60,param_4);
    FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
    puVar3 = &DAT_01029258;
    uVar2 = local_68;
    uVar4 = param_5;
    FUN_00416cd0(&local_50,7,L"LDI ",local_58,L"R16, ",local_60,local_68,&DAT_01029258,param_5);
    FUN_00f787d0(param_1,param_2,local_50);
    if (iVar1 < 0x40) {
      FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_80,4,L"OUT ",local_88,local_res18[0],L", R16",uVar2,puVar3,uVar4);
      FUN_00f787d0(param_1,param_2,local_80);
    }
    else {
      FUN_00416780(&local_78,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_70,4,L"STS ",local_78,local_res18[0],L", R16",uVar2,puVar3,uVar4);
      FUN_00f787d0(param_1,param_2,local_70);
    }
  }
  FUN_00414560(&local_b8,0x14);
  FUN_00414480(local_res18);
  FUN_00414480(&param_5);
  return;
}

