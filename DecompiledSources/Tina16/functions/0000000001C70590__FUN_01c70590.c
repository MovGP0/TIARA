/* Ghidra address: 01c70590 */
/* Ghidra symbol: FUN_01c70590 */


void FUN_01c70590(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined *local_60;
  undefined1 *local_50;
  double local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_38 = 0;
  local_20[0] = 0;
  local_30 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0xb80),&local_38);
  local_3c = (**(code **)(**(longlong **)(param_1 + 0x1b78) + 0xb0))
                       (*(longlong **)(param_1 + 0x1b78),local_38);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b78) + 0x28))(*(longlong **)(param_1 + 0x1b78));
  if (local_3c < iVar1 + -3) {
    iVar1 = FUN_004170c0(&LAB_01c70958,local_38,1);
    if (iVar1 != 0) {
      lVar2 = FUN_00414de0(&local_38);
      iVar1 = FUN_004170c0(&LAB_01c70958,local_38,1);
      *(undefined2 *)(lVar2 + -2 + (longlong)iVar1 * 2) = 0x20;
    }
    FUN_00448650(local_38,PTR_DAT_02004830);
    lVar2 = FUN_0040c770();
    local_28 = (double)lVar2;
    if (local_28 < 10.0) {
      local_28 = 10.0;
    }
    if (500.0 < local_28) {
      local_28 = 500.0;
    }
    FUN_00414480(&local_30);
    local_68 = 0;
    local_60 = PTR_DAT_02004830;
    FUN_00448510(&local_30,local_28,2,0x12);
    FUN_00416ba0(&local_38,local_30,&LAB_01c70958);
    FUN_00414480(&local_30);
    FUN_0064de00(*(undefined8 *)(param_1 + 0xb80),local_38);
    *(float *)(param_1 + 0x1924) = (float)(local_28 / 100.0);
    FUN_01c67f20(param_1);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b78) + 0x28))
                      (*(longlong **)(param_1 + 0x1b78));
    iVar1 = local_3c - iVar1;
    if (iVar1 == -3) {
      FUN_01c75310(param_1,param_2);
    }
    else if (iVar1 == -2) {
      FUN_01c83ef0(param_1,param_2);
    }
    else if (iVar1 == -1) {
      FUN_01c83f50(param_1,param_2);
    }
    FUN_00414480(local_20);
    local_48 = (double)*(float *)(param_1 + 0x1924) * 100.0;
    local_68 = 0;
    local_60 = PTR_DAT_02004830;
    FUN_00448510(local_20,local_48,2,0x12);
    FUN_00416ba0(&local_38,local_20[0],&LAB_01c70958);
    FUN_00414480(local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0xb80),local_38);
  }
  FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0xa10));
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

