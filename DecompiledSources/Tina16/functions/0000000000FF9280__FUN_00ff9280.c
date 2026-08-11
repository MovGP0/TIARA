/* Ghidra address: 00ff9280 */
/* Ghidra symbol: FUN_00ff9280 */


void FUN_00ff9280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 local_res18;
  undefined8 local_res20;
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
  undefined8 local_18;
  undefined8 local_10;
  
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_00ff966c);
  if (iVar1 == -1) {
    FUN_00416cd0(&local_70,3,L";***************************************",local_res18,
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_70);
    FUN_00416cd0(&local_78,3,L";***************************************",local_res20,
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_78);
  }
  else {
    FUN_00416780(&local_18,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_20,(longlong)param_5 / 0x100 & 0xffffffff);
    FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_10,6,L"movlw ",local_18,local_20,local_28,&DAT_00ff9698,param_6);
    FUN_00f787d0(param_1,param_2,local_10);
    FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416ba0(&local_30,L"movwf ",local_38);
    FUN_00ff8e40(param_1,param_2,local_30,local_res20,0);
    FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_50,(longlong)param_5 % 0x100 & 0xffffffff);
    FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_40,6,L"movlw ",local_48,local_50,local_58,&DAT_00ff9698,param_6);
    FUN_00f787d0(param_1,param_2,local_40);
    FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416ba0(&local_60,L"movwf ",local_68);
    FUN_00ff8e40(param_1,param_2,local_60,local_res18,0);
  }
  FUN_00414560(&local_78,0xe);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_6);
  return;
}

