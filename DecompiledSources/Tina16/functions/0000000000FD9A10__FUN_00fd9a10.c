/* Ghidra address: 00fd9a10 */
/* Ghidra symbol: FUN_00fd9a10 */


void FUN_00fd9a10(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 8) != param_3) {
    iVar1 = FUN_00f794e0(param_1,&DAT_00fd9d78,&DAT_00fd9d8c);
    if (iVar1 == -1) {
      iVar1 = FUN_00f794e0(param_1,&DAT_00fd9d78,0);
    }
    iVar2 = FUN_00f794e0(param_1,&DAT_00fd9d9c,&DAT_00fd9d8c);
    if (iVar2 == -1) {
      iVar2 = FUN_00f794e0(param_1,&DAT_00fd9d9c,0);
    }
    if ((((*(int *)(param_1 + 8) < 0) || (*(int *)(param_1 + 8) % 2 == 0)) && (param_3 % 2 == 1)) &&
       (iVar1 != -1)) {
      FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_20,5,L"bsf   ",local_28,L"STATUS",&DAT_00fd9de8,&DAT_00fd9d78);
      FUN_00f787d0(param_1,param_2,local_20);
    }
    if (((*(int *)(param_1 + 8) < 0) || (*(int *)(param_1 + 8) % 2 == 1)) &&
       ((param_3 % 2 == 0 && (iVar1 != -1)))) {
      FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_30,5,L"bcf   ",local_38,L"STATUS",&DAT_00fd9de8,&DAT_00fd9d78);
      FUN_00f787d0(param_1,param_2,local_30);
    }
    if (((*(int *)(param_1 + 8) < 2) && (1 < param_3)) && (iVar2 != -1)) {
      FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_40,5,L"bsf   ",local_48,L"STATUS",&DAT_00fd9de8,&DAT_00fd9d9c);
      FUN_00f787d0(param_1,param_2,local_40);
    }
    if ((((1 < *(int *)(param_1 + 8)) || (*(int *)(param_1 + 8) < 0)) && (param_3 < 2)) &&
       (iVar2 != -1)) {
      FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_50,5,L"bcf   ",local_58,L"STATUS",&DAT_00fd9de8,&DAT_00fd9d9c);
      FUN_00f787d0(param_1,param_2,local_50);
    }
    *(int *)(param_1 + 8) = param_3;
  }
  FUN_00414560(&local_58,8);
  return;
}

