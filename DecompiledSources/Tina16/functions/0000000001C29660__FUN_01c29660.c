/* Ghidra address: 01c29660 */
/* Ghidra symbol: FUN_01c29660 */


longlong * FUN_01c29660(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_a8 [32];
  undefined **local_88;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  local_70 = param_1;
  FUN_00414610(param_2);
  FUN_0043e130(&local_50,local_res10[0]);
  FUN_00414b50(local_res10,local_50);
  FUN_01c286b0(&local_58,local_res10);
  FUN_01c286b0(local_20,local_res10);
  FUN_01c286b0(&local_28,local_res10);
  iVar1 = FUN_004170c0(&DAT_01c29b18,local_28,1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(&DAT_01c29b18,local_28,1);
    FUN_00416dc0(&local_28,local_28,1,iVar1 + -1);
  }
  iVar1 = FUN_00416db0(local_28,&DAT_01c29b28);
  if (iVar1 == 0) {
    FUN_01c29560(auStack_a8,&local_60,DAT_01fe5bb0);
    local_88 = (undefined **)&DAT_01c29b48;
    FUN_00416cd0(&local_30,3,&DAT_01c29b38,local_60);
    FUN_01c29560(auStack_a8,&local_68,DAT_01fe5bb0);
    local_88 = (undefined **)&DAT_01c29b68;
    FUN_00416cd0(&local_38,3,&DAT_01c29b58,local_68);
  }
  else {
    iVar1 = FUN_00416db0(local_28,L"NMOS");
    if (iVar1 != 0) {
      iVar1 = FUN_00416db0(local_28,L"PMOS");
      if (iVar1 != 0) {
        local_88 = (undefined **)&DAT_01c29b48;
        FUN_00416cd0(&local_30,3,&DAT_01c29b38,local_28);
        local_88 = (undefined **)&DAT_01c29b68;
        FUN_00416cd0(&local_38,3,&DAT_01c29b58,local_28);
        goto LAB_01c29a08;
      }
    }
    uVar2 = FUN_004170c0(&DAT_01c29ba8,local_res10[0],1);
    FUN_00416e20(local_res10,1,uVar2);
    uVar2 = FUN_004170c0(&DAT_01c29bbc,local_res10[0],1);
    FUN_00416e20(local_res10,1,uVar2);
    FUN_01c286b0(&local_40,local_res10);
    dVar3 = (double)FUN_00410100(local_40,local_44);
    iVar1 = FUN_00416db0(local_28,L"NMOS");
    if ((iVar1 != 0) || (0.0 <= (float)dVar3)) {
      iVar1 = FUN_00416db0(local_28,L"PMOS");
      if ((iVar1 != 0) || ((float)dVar3 <= 0.0)) {
        local_88 = (undefined **)&DAT_01c29bcc;
        FUN_00416cd0(&local_30,3,&DAT_01c29b38,local_28);
        local_88 = &PTR_DAT_01c29be0;
        FUN_00416cd0(&local_38,3,&DAT_01c29b58,local_28);
        goto LAB_01c29a08;
      }
    }
    local_88 = (undefined **)&DAT_01c29bcc;
    FUN_00416cd0(&local_30,3,&DAT_01c29b38,local_28);
    local_88 = &PTR_DAT_01c29be0;
    FUN_00416cd0(&local_38,3,&DAT_01c29b58,local_28);
  }
LAB_01c29a08:
  FUN_00414ad0(local_70,local_20[0]);
  do {
    FUN_00416ad0(local_70,&LAB_01c29bf4);
    iVar1 = 0;
    if (*local_70 != 0) {
      iVar1 = *(int *)(*local_70 + -4);
    }
  } while (iVar1 < 0x10);
  FUN_00416ad0(local_70,local_30);
  do {
    FUN_00416ad0(local_70,&LAB_01c29bf4);
    iVar1 = 0;
    if (*local_70 != 0) {
      iVar1 = *(int *)(*local_70 + -4);
    }
  } while (iVar1 < 0x18);
  FUN_00416ad0(local_70,local_38);
  FUN_00414560(&local_68,4);
  FUN_00414560(&local_40,5);
  FUN_00414480(local_res10);
  return local_70;
}

