/* Ghidra address: 00fda4f0 */
/* Ghidra symbol: FUN_00fda4f0 */


void FUN_00fda4f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_00fda6c0);
  if (iVar1 != -1) {
    FUN_00416780(&local_18,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416780(&local_20,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_10,6,L"movlw ",local_18,local_res20,local_20,&DAT_00fda6ec,param_5);
    FUN_00f787d0(param_1,param_2,local_10);
    FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416ba0(&local_28,L"movwf ",local_30);
    FUN_00fd97d0(param_1,param_2,local_28,local_res18,0);
  }
  FUN_00414560(&local_30,5);
  FUN_00414560(&local_res18,3);
  return;
}

