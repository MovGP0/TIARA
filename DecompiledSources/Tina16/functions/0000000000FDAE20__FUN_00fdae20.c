/* Ghidra address: 00fdae20 */
/* Ghidra symbol: FUN_00fdae20 */


void FUN_00fdae20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 int param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_98 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_7);
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_00fdb35c);
  if (iVar1 != -1) {
    iVar1 = 0;
    if (local_res20 != 0) {
      iVar1 = *(int *)(local_res20 + -4);
    }
    if (iVar1 == 1) {
      iVar1 = FUN_0043fc00(local_res20);
    }
    else {
      iVar1 = FUN_00f794e0(param_1,local_res20,&DAT_00fdb35c);
    }
    if (iVar1 == -1) {
      FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_20,7,local_28,local_30,local_38,local_40,&DAT_00fdb36c,local_res20,
                   L" address error");
      FUN_00f787d0(param_1,param_2,local_20);
    }
    else {
      uVar2 = FUN_00ff1970(param_1,local_res18);
      FUN_00fd9a10(param_1,param_2,uVar2);
      FUN_00416780(&local_50,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_70,iVar1);
      FUN_00416cd0(&local_48,8,local_50,local_58,local_60,local_68,&DAT_00fdb36c,local_res20,
                   &DAT_00fdb3a8,local_70);
      FUN_00f787d0(param_1,param_2,local_48);
      iVar4 = iVar1 + param_5 + -1;
      if (iVar1 <= iVar4) {
        iVar4 = (iVar4 - iVar1) + 1;
        do {
          iVar3 = param_6 % 2;
          param_6 = param_6 / 2;
          if (iVar3 == 1) {
            FUN_00416780(&local_80,*(undefined2 *)(param_1 + 0xb0));
            FUN_00416ba0(&local_78,L"bsf   ",local_80);
            FUN_0043f750(&local_90,iVar1);
            FUN_00416ba0(&local_88,&DAT_00fdb3d8,local_90);
            FUN_00fd97d0(param_1,param_2,local_78,local_res18,local_88);
          }
          else {
            FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
            FUN_00416ba0(&local_98,L"bcf   ",local_a0);
            FUN_0043f750(&local_b0,iVar1);
            FUN_00416ba0(&local_a8,&DAT_00fdb3d8,local_b0);
            FUN_00fd97d0(param_1,param_2,local_98,local_res18,local_a8);
          }
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  FUN_00414560(&local_b0,0x13);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_7);
  return;
}

