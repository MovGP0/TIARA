/* Ghidra address: 00a640f0 */
/* Ghidra symbol: FUN_00a640f0 */


void FUN_00a640f0(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong unaff_R14;
  undefined6 uVar6;
  longlong local_res8 [4];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00417600(param_2,&DAT_00401390,(longlong)param_3 + 1);
  FUN_0043ea00(local_50,local_res8[0]);
  FUN_00414b50(local_res8,local_50[0]);
  iVar2 = FUN_004170c0(&DAT_00a644f4,local_res8[0],1);
  while (0 < iVar2) {
    FUN_00416e20(local_res8,iVar2 + 1,1);
    iVar2 = FUN_004170c0(&DAT_00a644f4,local_res8[0],1);
  }
  iVar2 = FUN_004170c0(&DAT_00a64508,local_res8[0],1);
  while (0 < iVar2) {
    FUN_00416e20(local_res8,iVar2 + 1,1);
    iVar2 = FUN_004170c0(&DAT_00a64508,local_res8[0],1);
  }
  iVar2 = 0;
  while ((iVar2 <= param_3 && (local_res8[0] != 0))) {
    FUN_00414480(local_40);
    do {
      bVar1 = true;
      iVar3 = FUN_004170c0(&DAT_00a6451c,local_res8[0],1);
      iVar4 = FUN_004170c0(&DAT_00a6452c,local_res8[0],1);
      iVar5 = FUN_004170c0(&DAT_00a6453c,local_res8[0],1);
      uVar6 = (undefined6)(unaff_R14 >> 0x10);
      if ((iVar5 < 1) || (((iVar4 < 1 || (iVar4 <= iVar5)) && (iVar4 != 0)))) {
        unaff_R14 = CONCAT62(uVar6,0x22);
      }
      else {
        unaff_R14 = CONCAT62(uVar6,0x27);
        iVar4 = iVar5;
      }
      if (iVar3 == 0) {
        FUN_00416ad0(local_40,local_res8[0]);
        FUN_00414480(local_res8);
      }
      else if ((iVar4 == 0) || (iVar3 < iVar4)) {
        FUN_00416dc0(&local_58,local_res8[0],1,iVar3 + -1);
        FUN_00416ad0(local_40,local_58);
        FUN_00416e20(local_res8,1,iVar3);
      }
      else {
        FUN_00416dc0(&local_60,local_res8[0],1,iVar4);
        FUN_00416ad0(local_40,local_60);
        FUN_00416e20(local_res8,1,iVar4);
        FUN_00416780(&local_68,unaff_R14 & 0xffffffff);
        iVar4 = FUN_004170c0(local_68,local_res8[0],1);
        if (iVar4 < 1) {
          FUN_00416ad0(local_40,local_res8[0]);
          FUN_00414480(local_res8);
        }
        else {
          FUN_00416dc0(&local_70,local_res8[0],1,iVar4);
          FUN_00416ad0(local_40,local_70);
          FUN_00416e20(local_res8,1,iVar4);
          bVar1 = false;
        }
      }
    } while (!bVar1);
    iVar4 = FUN_004170c0(&DAT_00a6454c,local_40[0],1);
    if (1 < iVar4) {
      FUN_00416dc0(param_2 + (longlong)iVar2 * 8,local_40[0],1,iVar4 + -1);
      FUN_00416e20(local_40,1,iVar4 + -1);
      iVar2 = iVar2 + 1;
    }
    if (iVar2 <= param_3) {
      FUN_00414ad0(param_2 + (longlong)iVar2 * 8,local_40[0]);
    }
    iVar2 = iVar2 + 1;
  }
  *param_4 = iVar2;
  FUN_00414560(&local_70,5);
  FUN_00414480(local_40);
  FUN_00414480(local_res8);
  return;
}

