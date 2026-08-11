/* Ghidra address: 00ff9780 */
/* Ghidra symbol: FUN_00ff9780 */


void FUN_00ff9780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  iVar1 = FUN_00f794e0(param_1,local_res18[0],&DAT_00ff99b8);
  if (iVar1 == -1) {
    FUN_00416cd0(&local_40,3,L";***************************************",local_res18[0],
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_40);
  }
  else {
    FUN_00416780(&local_18,*(undefined2 *)(param_1 + 0xb0));
    FUN_00f61040(&local_20,param_4);
    FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_10,6,L"movlw ",local_18,local_20,local_28,&DAT_00ff99e4,param_5);
    FUN_00f787d0(param_1,param_2,local_10);
    FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416ba0(&local_30,L"movwf ",local_38);
    FUN_00ff8e40(param_1,param_2,local_30,local_res18[0],0);
  }
  FUN_00414560(&local_40,7);
  FUN_00414480(local_res18);
  FUN_00414480(&param_5);
  return;
}

