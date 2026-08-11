/* Ghidra address: 009e97d0 */
/* Ghidra symbol: FUN_009e97d0 */


void FUN_009e97d0(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_54;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar1 = FUN_00416420(param_3,0);
  if (iVar1 == 0) {
    if (-1 < param_2) {
      (**(code **)(*param_1 + 0x98))(param_1,param_2);
    }
  }
  else {
    local_54 = param_2;
    if (param_2 < 0) {
      local_54 = (**(code **)(*param_1 + 0x70))(param_1,0);
    }
    FUN_009e7fb0(param_1,&local_28,local_54);
    FUN_004168b0(&local_30,local_28);
    uVar2 = FUN_009e9660(param_1);
    FUN_00416780(&local_38,uVar2);
    FUN_004168b0(&local_40,param_3);
    FUN_00416cd0(local_20,3,local_30,local_38,local_40);
    FUN_004168e0(&local_48,local_20[0]);
    (**(code **)(*param_1 + 0x40))(param_1,local_54,local_48);
  }
  FUN_00414520(&local_48);
  FUN_00414560(&local_40,3);
  FUN_00414520(&local_28);
  FUN_00414480(local_20);
  return;
}

