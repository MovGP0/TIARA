/* Ghidra address: 00cc4c30 */
/* Ghidra symbol: FUN_00cc4c30 */


void FUN_00cc4c30(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414ad0(param_1 + 3,param_2);
  FUN_00cc4b60(*param_1,param_1 + 3);
  FUN_00414b50(&local_28,param_1[3]);
  FUN_00414480(param_1 + 6);
  FUN_00414480(param_1 + 2);
  FUN_00414480(param_1 + 5);
  FUN_00414480(param_1 + 1);
  FUN_00414480(param_1 + 4);
  FUN_00414480(param_1 + 7);
  FUN_00414480(param_1 + 8);
  FUN_00414480(param_1 + 9);
  FUN_00414480(param_1 + 10);
  *(undefined1 *)(param_1 + 0xb) = 0;
  iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc5308,local_28);
  if (iVar1 < 1) {
    iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc531c,local_28);
    if (iVar1 < 1) {
      iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc532c,local_28);
      if (0 < iVar1) {
        FUN_00416dc0(param_1 + 7,local_28,iVar1 + 1,0x7fffffff);
        FUN_00416dc0(&local_28,local_28,1,iVar1 + -1);
      }
    }
    else {
      FUN_00416dc0(param_1 + 10,local_28,iVar1 + 1,0x7fffffff);
      FUN_00416dc0(&local_28,local_28,1,iVar1 + -1);
      iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc532c,param_1[10]);
      if (0 < iVar1) {
        FUN_00414ad0(param_1 + 7,param_1[10]);
        FUN_00874ee0(&local_68,param_1 + 7,&DAT_00cc532c,1,1);
        FUN_00414ad0(param_1 + 10,local_68);
      }
    }
    iVar1 = FUN_0089fe30(&DAT_00cc533c,local_28,0xffffffff);
    if (0 < iVar1) {
      FUN_00416dc0(param_1 + 5,local_28,1,iVar1);
      FUN_00416e20(&local_28,1,iVar1);
    }
    goto LAB_00cc52a9;
  }
  FUN_00416dc0(param_1 + 2,local_28,1,iVar1 + -1);
  FUN_00416e20(&local_28,1,iVar1 + 2);
  iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc531c,local_28);
  if (iVar1 < 1) {
    iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc532c,local_28);
    if (0 < iVar1) {
      FUN_00416dc0(param_1 + 7,local_28,iVar1 + 1,0x7fffffff);
      FUN_00416dc0(&local_28,local_28,1,iVar1 + -1);
    }
  }
  else {
    FUN_00416dc0(param_1 + 10,local_28,iVar1 + 1,0x7fffffff);
    FUN_00416dc0(&local_28,local_28,1,iVar1 + -1);
    iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc532c,param_1[10]);
    if (0 < iVar1) {
      FUN_00414ad0(param_1 + 7,param_1[10]);
      FUN_00874ee0(&local_30,param_1 + 7,&DAT_00cc532c,1,1);
      FUN_00414ad0(param_1 + 10,local_30);
    }
  }
  FUN_00874ee0(local_20,&local_28,&DAT_00cc533c,1,1);
  iVar1 = FUN_0089fe30(&DAT_00cc534c,local_20[0],0xffffffff);
  if (0 < iVar1) {
    FUN_00416dc0(param_1 + 9,local_20[0],1,iVar1 + -1);
    FUN_00416e20(local_20,1,iVar1);
    FUN_00874ee0(&local_38,param_1 + 9,&DAT_00cc535c,1,1);
    FUN_00414ad0(param_1 + 8,local_38);
    iVar1 = 0;
    if (param_1[8] != 0) {
      iVar1 = *(int *)(param_1[8] + -4);
    }
    if (iVar1 == 0) {
      FUN_00414480(param_1 + 9);
    }
  }
  iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc536c,local_20[0]);
  if (iVar1 < 1) {
LAB_00cc506d:
    FUN_00874ee0(&local_58,local_20,&DAT_00cc535c,1,1);
    FUN_00414ad0(param_1 + 6,local_58);
  }
  else {
    iVar1 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc537c,local_20[0]);
    iVar2 = (**(code **)PTR_PTR_020018b0)(&DAT_00cc536c,local_20[0]);
    if (iVar1 <= iVar2) goto LAB_00cc506d;
    FUN_00874ee0(&local_40,local_20,&DAT_00cc537c,1,1);
    FUN_00414ad0(param_1 + 6,local_40);
    FUN_00874ee0(&local_48,param_1 + 6,&DAT_00cc536c,1,1);
    FUN_00874ee0(&local_50,local_20,&DAT_00cc535c,1,1);
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  FUN_00414ad0(param_1 + 4,local_20[0]);
  iVar1 = FUN_0089fe30(&DAT_00cc533c,local_28,0xffffffff);
  if (iVar1 < 1) {
    FUN_00414ad0(param_1 + 5,&DAT_00cc533c);
  }
  else {
    FUN_00416dc0(&local_60,local_28,1,iVar1);
    FUN_00416ba0(param_1 + 5,&DAT_00cc533c,local_60);
    FUN_00416e20(&local_28,1,iVar1);
  }
LAB_00cc52a9:
  FUN_00414ad0(param_1 + 1,local_28);
  FUN_00414560(&local_68,10);
  return;
}

