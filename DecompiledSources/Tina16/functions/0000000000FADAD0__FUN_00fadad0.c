/* Ghidra address: 00fadad0 */
/* Ghidra symbol: FUN_00fadad0 */


undefined8 FUN_00fadad0(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong local_res18 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043ea00(&local_40,local_res18[0]);
  FUN_00414b50(local_res18,local_40);
  iVar5 = 1;
  bVar1 = 1;
  while( true ) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x28))(*(longlong **)(param_1 + 0x740));
    if (!(bool)(bVar1 & iVar5 < iVar3)) break;
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
              (*(longlong **)(param_1 + 0x740),&local_48,iVar5);
    FUN_00416cd0(local_30,3,&DAT_00fadd6c,local_48,&DAT_00fadd6c);
    iVar5 = iVar5 + 1;
    FUN_00450070(&local_50,local_30[0],&DAT_00fadd7c,&DAT_00fadd6c,1);
    FUN_00414b50(local_30,local_50);
    iVar3 = FUN_004170c0(local_res18[0],local_30[0],1);
    iVar2 = FUN_004170c0(&DAT_00fadd90,local_30[0],1);
    if ((iVar3 != 0) && ((iVar2 == 0 || (iVar3 < iVar2)))) {
      FUN_0043e130(&local_58,local_30[0]);
      FUN_00414b50(local_30,local_58);
      iVar3 = FUN_004170c0(&LAB_00fadda0,local_30[0],1);
      if (iVar3 != 0) {
        iVar2 = 0;
        if (local_30[0] != 0) {
          iVar2 = *(int *)(local_30[0] + -4);
        }
        iVar4 = 0;
        if (local_res18[0] != 0) {
          iVar4 = *(int *)(local_res18[0] + -4);
        }
        FUN_005b8850(&local_38,local_30[0],((iVar2 - iVar4) - iVar3) + -3);
        FUN_0043ea00(&local_60,local_38);
        FUN_00414b50(&local_38,local_60);
        bVar1 = 0;
      }
    }
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x28))(*(longlong **)(param_1 + 0x740));
  if (iVar5 == iVar3) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,local_38);
  }
  FUN_00414560(&local_60,7);
  FUN_00414480(local_res18);
  return param_2;
}

