/* Ghidra address: 00814a90 */
/* Ghidra symbol: FUN_00814a90 */


ulonglong FUN_00814a90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_78 [2];
  int local_70;
  int local_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  iVar1 = (int)local_38;
  iStack_5c = FUN_004230c0(&local_38);
  iStack_5c = local_38._4_4_ + iStack_5c;
  local_60 = iVar1;
  iVar5 = iStack_5c + *(int *)(*(longlong *)(param_1 + 0x20) + 300) + *(int *)(param_1 + 0x10);
  local_50 = CONCAT44(iVar5,iVar1 + *(int *)(*(longlong *)(param_1 + 0x20) + 0xf8) +
                            *(int *)(param_1 + 0xc));
  local_68 = FUN_004230a0(&local_38);
  local_68 = (int)local_50 + local_68;
  local_58 = CONCAT44(iVar5,local_68);
  iStack_64 = iVar5;
  lVar2 = FUN_00809b30(DAT_02012670,&local_50,0);
  lVar3 = FUN_00809b30(DAT_02012670,&local_58,0);
  if (lVar2 != lVar3) {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) == '\x01') {
      uVar4 = FUN_00809b30(DAT_02012670,&local_50,0);
      FUN_00807850(uVar4,local_78);
      iVar1 = FUN_004230a0(&local_38);
      local_50 = CONCAT44(local_50._4_4_,(local_70 - iVar1) + -1);
    }
    else {
      uVar4 = FUN_00809b30(DAT_02012670,&local_58,0);
      FUN_00807850(uVar4,local_78);
      local_50 = CONCAT44(local_50._4_4_,local_78[0]);
    }
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) == '\x01') {
    iVar1 = FUN_004230a0(&local_38);
    local_50 = (ulonglong)(uint)((int)local_50 + iVar1);
  }
  return local_50;
}

