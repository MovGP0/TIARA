/* Ghidra address: 01a07990 */
/* Ghidra symbol: FUN_01a07990 */


void FUN_01a07990(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 int param_5)

{
  int iVar1;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  if (local_res18 == 0) {
    FUN_00414b50(local_30,&PTR_DAT_01a07bd8);
  }
  else {
    FUN_00416cd0(local_30,3,L"the \'",local_res18,&DAT_01a07c04);
  }
  FUN_00416cd0(local_40,5,L"; Please insert here ",local_res18,&DAT_01a07c4c,local_res10,
               L" converter.");
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_40[0]);
  FUN_00416cd0(&local_48,3,L"; The pins",local_res20,&LAB_01a07ca4);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_48);
  iVar1 = 0;
  if (-1 < param_5 + -1) {
    do {
      FUN_019f0400(param_1,&local_58,iVar1,0);
      FUN_00416ba0(&local_50,&DAT_01a07c4c,local_58);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_50)
      ;
      iVar1 = iVar1 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),0);
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  FUN_00414560(&local_res10,3);
  return;
}

