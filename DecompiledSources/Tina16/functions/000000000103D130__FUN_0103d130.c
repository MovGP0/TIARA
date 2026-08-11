/* Ghidra address: 0103d130 */
/* Ghidra symbol: FUN_0103d130 */


void FUN_0103d130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 local_res18 [2];
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
  
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
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
  iVar1 = FUN_00f794e0(param_1,local_res18[0],&DAT_0103d588);
  if (iVar1 == -1) {
    FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_90,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_98,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_80,7,local_88,local_90,local_98,local_a0,&DAT_0103d598,local_res18[0],
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_80);
  }
  else {
    FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_48,iVar1);
    FUN_00416cd0(local_20,8,local_28,local_30,local_38,local_40,&DAT_0103d598,local_res18[0],
                 &DAT_0103d5a8,local_48);
    FUN_00f787d0(param_1,param_2,local_20[0]);
    FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
    FUN_0043f750(&local_60,param_4);
    FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_50,7,L"MOV ",local_58,L"R6, #",local_60,local_68,&DAT_0103d598,param_5);
    FUN_00f787d0(param_1,param_2,local_50);
    FUN_00416780(&local_78,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_70,4,L"MOV ",local_78,local_res18[0],L", R6");
    FUN_00f787d0(param_1,param_2,local_70);
  }
  FUN_00414560(&local_a0,0x11);
  FUN_00414480(local_res18);
  FUN_00414480(&param_5);
  return;
}

