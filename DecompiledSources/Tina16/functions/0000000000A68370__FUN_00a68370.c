/* Ghidra address: 00a68370 */
/* Ghidra symbol: FUN_00a68370 */


undefined8 * FUN_00a68370(longlong param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  longlong local_res18;
  undefined1 local_res20;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = 0;
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  local_70 = param_1;
  local_68 = param_2;
  FUN_00414610(param_3);
  FUN_00414480(local_68);
  iVar4 = 0;
  iVar2 = 1;
  while( true ) {
    iVar1 = 0;
    if (local_res18 != 0) {
      iVar1 = *(int *)(local_res18 + -4);
    }
    if (iVar1 < iVar2) break;
    if (*(short *)(local_res18 + -2 + (longlong)iVar2 * 2) == 0x3e) {
      if (iVar2 == 1) {
        bVar5 = true;
      }
      else {
        iVar1 = 0;
        if (local_res18 != 0) {
          iVar1 = *(int *)(local_res18 + -4);
        }
        bVar5 = iVar2 == iVar1;
      }
      if (bVar5) {
        FUN_00416e20(&local_res18,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      else {
        if (*(short *)(local_res18 + -2 + (longlong)(iVar2 + 1) * 2) != 0x20) {
          FUN_00416ea0(&DAT_00a6870c,&local_res18,iVar2 + 1);
        }
        while ((1 < iVar2 && (*(short *)(local_res18 + -2 + (longlong)(iVar2 + -1) * 2) == 0x20))) {
          FUN_00416e20(&local_res18,iVar2 + -1,1);
          iVar2 = iVar2 + -1;
        }
      }
    }
    iVar2 = iVar2 + 1;
  }
  iVar2 = FUN_004170c0(&DAT_00a6870c,local_res18,1);
  if (iVar2 < 1) {
    FUN_00a682f0(auStack_a8,&local_60,local_res18);
    FUN_00414ad0(local_68,local_60);
  }
  else {
    while (0 < iVar2) {
      iVar4 = iVar4 + 1;
      FUN_00416dc0(&local_28,local_res18,1,iVar2 + -1);
      FUN_00a682f0(auStack_a8,&local_20,local_28);
      FUN_00416ad0(&local_20,&DAT_00a6870c);
      FUN_00416ea0(local_20,local_68,1);
      uVar3 = 0;
      if (local_res18 != 0) {
        uVar3 = *(undefined4 *)(local_res18 + -4);
      }
      FUN_00416dc0(&local_38,local_res18,iVar2 + 1,uVar3);
      FUN_0043ea00(&local_30,local_38);
      FUN_00414b50(&local_res18,local_30);
      iVar2 = FUN_004170c0(&DAT_00a6870c,local_res18,1);
    }
    if (local_res18 != 0) {
      FUN_00a682f0(auStack_a8,&local_40,local_res18);
      local_88 = *local_68;
      FUN_00416cd0(local_68,3,local_40,&DAT_00a6870c);
    }
    iVar2 = FUN_004170c0(&DAT_00a6870c,*local_68,1);
    FUN_0043f750(&local_50,iVar4);
    FUN_009ec420(&local_48,local_50);
    FUN_00a5cb30(*(undefined8 *)(*(longlong *)(local_70 + 0x80) + 0x40),&local_58);
    FUN_00416ad0(&local_48,local_58);
    FUN_00416ea0(local_48,local_68,iVar2 + 1);
  }
  FUN_00414560(&local_60,9);
  FUN_00414480(&local_res18);
  return local_68;
}

