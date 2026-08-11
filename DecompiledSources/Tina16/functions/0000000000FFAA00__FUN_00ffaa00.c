/* Ghidra address: 00ffaa00 */
/* Ghidra symbol: FUN_00ffaa00 */


void FUN_00ffaa00(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 int param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_00ffad6c);
  if (iVar1 == -1) {
    FUN_00416cd0(&local_48,3,L";***************************************",local_res18,
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_48);
  }
  else {
    iVar1 = 0;
    if (local_res20 != 0) {
      iVar1 = *(int *)(local_res20 + -4);
    }
    if (iVar1 == 1) {
      iVar1 = FUN_0043fc00(local_res20);
    }
    else {
      iVar1 = FUN_00f794e0(param_1,local_res20,&DAT_00ffad6c);
    }
    if (iVar1 == -1) {
      FUN_00416cd0(&local_40,3,L";***************************************",local_res20,
                   L" addr error ------------------------------");
      FUN_00f787d0(param_1,param_2,local_40);
    }
    else {
      FUN_01025bf0(param_1,local_res18);
      if (param_5 == 1) {
        FUN_00416780(&local_18,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416780(&local_20,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_10,8,L"bsf  ",local_18,local_res18,&DAT_00ffad94,local_res20,local_20,
                     &DAT_00ffada8,param_6);
        FUN_00f787d0(param_1,param_2,local_10);
      }
      else {
        FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416cd0(&local_28,8,L"bcf  ",local_30,local_res18,&DAT_00ffad94,local_res20,local_38,
                     &DAT_00ffada8,param_6);
        FUN_00f787d0(param_1,param_2,local_28);
      }
    }
  }
  FUN_00414560(&local_48,8);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_6);
  return;
}

