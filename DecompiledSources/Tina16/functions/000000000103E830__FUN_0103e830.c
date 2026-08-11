/* Ghidra address: 0103e830 */
/* Ghidra symbol: FUN_0103e830 */


void FUN_0103e830(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 int param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18;
  longlong local_res20;
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
  
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_0103edcc);
  if (iVar1 == -1) {
    iVar2 = FUN_00416db0(local_res18,&PTR_DAT_0103eddc);
    if (iVar2 != 0) {
      FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(local_20,7,local_28,local_30,local_38,local_40,&DAT_0103edf0,local_res18,
                   L" addr error ------------------------------");
      FUN_00f787d0(param_1,param_2,local_20[0]);
      goto code_r0x0103ed48;
    }
  }
  iVar2 = 0;
  if (local_res20 != 0) {
    iVar2 = *(int *)(local_res20 + -4);
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = FUN_00f794e0(param_1,local_res20,&DAT_0103edcc);
  }
  if (iVar2 != -1) {
    FUN_00416780(&local_50,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_70,iVar1);
    FUN_00416cd0(&local_48,8,local_50,local_58,local_60,local_68,&DAT_0103edf0,local_res18,
                 &DAT_0103ee64,local_70);
    FUN_00f787d0(param_1,param_2,local_48);
    FUN_00416780(&local_80,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_78,4,L"MOV  ",local_80,&DAT_0103ee90,local_res18);
    FUN_00f787d0(param_1,param_2,local_78);
    if (param_5 == 1) {
      FUN_00416780(&local_90,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_88,4,L"SETB",local_90,L"ACC.",local_res20);
      FUN_00f787d0(param_1,param_2,local_88);
    }
    else {
      FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_98,4,&DAT_0103eed4,local_a0,L"ACC.",local_res20);
      FUN_00f787d0(param_1,param_2,local_98);
    }
    FUN_00416780(&local_b0,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_b8,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_a8,7,L"MOV ",local_b0,local_res18,&LAB_0103ef00,local_b8,&DAT_0103edf0,
                 param_6);
    FUN_00f787d0(param_1,param_2,local_a8);
  }
code_r0x0103ed48:
  FUN_00414560(&local_b8,0x14);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_6);
  return;
}

