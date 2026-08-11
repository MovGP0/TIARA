/* Ghidra address: 01133ba0 */
/* Ghidra symbol: FUN_01133ba0 */


undefined8 FUN_01133ba0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  
  local_38 = 0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_0046f180(param_1);
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (0 < iVar1) {
    local_30 = 0;
    local_2c = (**(code **)(*param_2 + 0x28))(param_2);
    local_2c = local_2c + -1;
    FUN_0046c750(param_1,&local_30,1,8);
    iVar1 = (**(code **)(*param_2 + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar2);
        FUN_004168e0(&local_40,local_38);
        FUN_004689d0(&local_58,local_40);
        local_60[0] = iVar2;
        FUN_0046ccc0(param_1,&local_58,1,local_60);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00460ba0(&local_58);
  FUN_00414520(&local_40);
  FUN_00414480(&local_38);
  return param_1;
}

