/* Ghidra address: 00cfacb0 */
/* Ghidra symbol: FUN_00cfacb0 */


undefined8 FUN_00cfacb0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480(param_2);
  FUN_00419430(local_20,&DAT_0086e978);
  iVar1 = (int)param_1[1];
  if (iVar1 == 1) {
    FUN_00cddbf0(param_1,local_30);
    iVar1 = 0;
    if (local_30[0] != 0) {
      iVar1 = *(int *)(local_30[0] + -4);
    }
    if (iVar1 == 0) {
      FUN_00cfaa30(param_1[6]);
    }
    else {
      FUN_00cfb0a0(param_1,&local_38);
      FUN_00cddbf0(param_1,&local_40);
      FUN_00cddba0(param_1,&local_48);
      FUN_00cfaa00(param_1[6],local_38,local_40,local_48);
    }
    FUN_00cfaa50(param_1[6],&local_58);
    FUN_00cdb4b0(&PTR_FUN_00cdc838,&local_50,local_58);
    FUN_00416ba0(param_2,L"NTLM ",local_50);
    FUN_00414480(param_1 + 5);
  }
  else if (iVar1 == 2) {
    iVar1 = 0;
    if (param_1[5] != 0) {
      iVar1 = *(int *)(param_1[5] + -4);
    }
    if (iVar1 == 0) {
      FUN_00cdda50(param_1,&local_60,L"NTLM");
      FUN_00414ad0(param_1 + 5,local_60);
      FUN_00874ee0(&local_68,param_1 + 5,&LAB_00cfb030,1,1);
    }
    iVar1 = 0;
    if (param_1[5] != 0) {
      iVar1 = *(int *)(param_1[5] + -4);
    }
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_0044d440();
    }
    FUN_00cdac40(&PTR_FUN_00cdca40,local_20,param_1[5]);
    FUN_00cfaa70(param_1[6],&local_78,local_20[0]);
    FUN_00cdb4b0(&PTR_FUN_00cdc838,&local_70,local_78);
    FUN_00416ba0(param_2,L"NTLM ",local_70);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 1) = 4;
  }
  FUN_00419430(&local_78,&DAT_0086e978);
  FUN_00414560(&local_70,3);
  FUN_00419430(&local_58,&DAT_0086e978);
  FUN_00414560(&local_50,5);
  FUN_00419430(local_20,&DAT_0086e978);
  return param_2;
}

