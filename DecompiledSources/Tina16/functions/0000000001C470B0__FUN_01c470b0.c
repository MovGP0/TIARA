/* Ghidra address: 01c470b0 */
/* Ghidra symbol: FUN_01c470b0 */


undefined8
FUN_01c470b0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_0043e130(&local_18,local_res18);
  FUN_00416dc0(&local_10,local_18,1,9);
  iVar1 = FUN_00416db0(L"<TINADIR>",local_10);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (local_res18 != 0) {
      uVar2 = *(undefined4 *)(local_res18 + -4);
    }
    FUN_00416dc0(&local_20,local_res18,10,uVar2);
    FUN_00416ba0(param_2,local_res20,local_20);
  }
  else {
    FUN_0043e130(&local_30,local_res18);
    FUN_00416dc0(&local_28,local_30,1,0xd);
    iVar1 = FUN_00416db0(L"<SETTINGSDIR>",local_28);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (local_res18 != 0) {
        uVar2 = *(undefined4 *)(local_res18 + -4);
      }
      FUN_00416dc0(&local_38,local_res18,0xe,uVar2);
      FUN_00416ba0(param_2,param_5,local_38);
    }
    else {
      FUN_0043e130(&local_48,local_res18);
      FUN_00416dc0(&local_40,local_48,1,0xc);
      iVar1 = FUN_00416db0(L"<CATALOGDIR>",local_40);
      if (iVar1 == 0) {
        uVar2 = 0;
        if (local_res18 != 0) {
          uVar2 = *(undefined4 *)(local_res18 + -4);
        }
        FUN_00416dc0(&local_50,local_res18,0xd,uVar2);
        FUN_00416ba0(param_2,param_6,local_50);
      }
      else {
        FUN_00414ad0(param_2,local_res18);
      }
    }
  }
  FUN_00414560(&local_50,9);
  FUN_00414560(&local_res18,4);
  return param_2;
}

