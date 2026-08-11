/* Ghidra address: 012964d0 */
/* Ghidra symbol: FUN_012964d0 */


longlong * FUN_012964d0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *local_res10;
  undefined8 local_res18 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18[0]);
  FUN_00414480(param_1);
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0xd8))(local_res10,local_40,local_res18[0]);
    FUN_0041b890(local_20,local_40[0],&DAT_01296734);
    if (local_20[0] != (longlong *)0x0) {
      (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_28,L"options");
      (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_30,L"value");
      FUN_004168e0(&local_50,local_28);
      uVar1 = FUN_0043fc50(local_30,0);
      FUN_01242410(&local_48,local_50,uVar1,0x7c);
      FUN_004168b0(param_1,local_48);
      FUN_00415dd0(&local_60,*param_1,0);
      FUN_00b0d000(&local_58,local_60,0xfde9);
      FUN_004168b0(param_1,local_58);
      iVar2 = 0;
      if (*param_1 != 0) {
        iVar2 = *(int *)(*param_1 + -4);
      }
      FUN_00416e20(param_1,iVar2 + -1,2);
    }
  }
  FUN_004144d0(&local_60);
  FUN_004145c0(&local_58,3);
  FUN_0041b800(local_40);
  FUN_00414560(&local_30,2);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res10);
  FUN_00414480(local_res18);
  return param_1;
}

