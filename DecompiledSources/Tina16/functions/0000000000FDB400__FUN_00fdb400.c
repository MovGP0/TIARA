/* Ghidra address: 00fdb400 */
/* Ghidra symbol: FUN_00fdb400 */


void FUN_00fdb400(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 int param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_10 = 0;
  local_20 = 0;
  local_18 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_00fdb69c);
  if (iVar1 != -1) {
    iVar1 = 0;
    if (local_res20 != 0) {
      iVar1 = *(int *)(local_res20 + -4);
    }
    if (iVar1 == 1) {
      iVar1 = FUN_0043fc00(local_res20);
    }
    else {
      iVar1 = FUN_00f794e0(param_1,local_res20,&DAT_00fdb69c);
    }
    if (iVar1 != -1) {
      uVar2 = FUN_00ff1970(param_1,local_res18);
      FUN_00fd9a10(param_1,param_2,uVar2);
      if (param_5 == 1) {
        FUN_00416780(&local_18,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416ba0(&local_10,L"bsf   ",local_18);
        FUN_00416cd0(&local_20,4,&DAT_00fdb6c8,local_res20,&DAT_00fdb6dc,param_6);
        FUN_00fd97d0(param_1,param_2,local_10,local_res18,local_20);
      }
      else {
        FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
        FUN_00416ba0(&local_28,L"bcf   ",local_30);
        FUN_00416cd0(&local_38,4,&DAT_00fdb6c8,local_res20,&DAT_00fdb6dc,param_6);
        FUN_00fd97d0(param_1,param_2,local_28,local_res18,local_38);
      }
    }
  }
  FUN_00414560(&local_38,6);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_6);
  return;
}

