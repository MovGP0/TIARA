/* Ghidra address: 00ffa270 */
/* Ghidra symbol: FUN_00ffa270 */


void FUN_00ffa270(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 int param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_c0;
  undefined8 local_b8;
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
  
  local_c0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_48 = 0;
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
  iVar1 = FUN_00f794e0(param_1,local_res18,&DAT_00ffa89c);
  if (iVar1 == -1) {
    FUN_00416cd0(&local_c0,3,L";***************************************",local_res18,
                 L" addr error ------------------------------");
    FUN_00f787d0(param_1,param_2,local_c0);
  }
  else {
    iVar1 = 0;
    if (local_res20 != 0) {
      iVar1 = *(int *)(local_res20 + -4);
    }
    if (iVar1 == 1) {
      iVar1 = FUN_0043fc00(local_res20);
    }
    else {
      iVar1 = FUN_00f794e0(param_1,local_res20,&DAT_00ffa89c);
    }
    if (iVar1 == -1) {
      FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_38,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_20,7,local_28,local_30,local_38,local_40,&DAT_00ffa8ac,local_res20,
                   L" address error");
      FUN_00f787d0(param_1,param_2,local_20);
      FUN_00416cd0(&local_48,3,L";***************************************",local_res20,
                   L" address error");
      FUN_00f787d0(param_1,param_2,local_48);
    }
    else {
      FUN_01025bf0(param_1,local_res18);
      FUN_00416780(&local_58,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_68,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416780(&local_70,*(undefined2 *)(param_1 + 0xb0));
      FUN_00f61040(&local_78,iVar1);
      FUN_00416cd0(&local_50,8,local_58,local_60,local_68,local_70,&DAT_00ffa8ac,local_res20,
                   &DAT_00ffa948,local_78);
      FUN_00f787d0(param_1,param_2,local_50);
      iVar3 = iVar1 + param_5 + -1;
      if (iVar1 <= iVar3) {
        iVar3 = (iVar3 - iVar1) + 1;
        do {
          iVar2 = param_6 % 2;
          param_6 = param_6 / 2;
          if (iVar2 == 1) {
            FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
            FUN_0043f750(&local_90,iVar1);
            FUN_00416780(&local_98,*(undefined2 *)(param_1 + 0xb0));
            FUN_00416cd0(&local_80,8,L"bsf ",local_88,local_res18,&DAT_00ffa974,local_90,local_98,
                         &DAT_00ffa8ac,param_7);
            FUN_00f787d0(param_1,param_2,local_80);
          }
          else {
            FUN_00416780(&local_a8,*(undefined2 *)(param_1 + 0xb0));
            FUN_0043f750(&local_b0,iVar1);
            FUN_00416780(&local_b8,*(undefined2 *)(param_1 + 0xb0));
            FUN_00416cd0(&local_a0,8,L"bcf ",local_a8,local_res18,&DAT_00ffa974,local_b0,local_b8,
                         &DAT_00ffa8ac,param_7);
            FUN_00f787d0(param_1,param_2,local_a0);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00414560(&local_c0,0x15);
  FUN_00414560(&local_res18,2);
  FUN_00414480(&param_7);
  return;
}

