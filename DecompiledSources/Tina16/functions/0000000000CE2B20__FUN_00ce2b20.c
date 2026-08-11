/* Ghidra address: 00ce2b20 */
/* Ghidra symbol: FUN_00ce2b20 */


void FUN_00ce2b20(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_5c;
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_50 = auStack_98;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_0043ea00(&local_38,param_2);
  (**(code **)(*param_1 + 0x40))(param_1);
  FUN_004b1e70(param_1);
  iVar1 = FUN_004170c0(&DAT_00ce2d78,local_38,1);
  if (0 < iVar1) {
    local_78 = 1;
    FUN_00874ee0(&local_30,&local_38,&DAT_00ce2d78,1);
  }
  FUN_00ce2d90(param_1,local_30);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_78 = 0;
  FUN_008766b0(local_38,local_28,1,&LAB_00ce2d88);
  iVar1 = (**(code **)(*local_28 + 0x28))();
  local_5c = iVar1 + -1;
  local_3c = 0;
  if (-1 < local_5c) {
    do {
      local_5c = iVar1;
      (**(code **)(*local_28 + 0x18))(local_28,&local_58,local_3c);
      FUN_0043ea00(&local_38,local_58);
      if (local_38 != 0) {
        local_20 = FUN_00ce29d0(param_1);
        FUN_00ce2770(local_20,local_38);
      }
      local_3c = local_3c + 1;
      local_5c = local_5c + -1;
      iVar1 = local_5c;
    } while (local_5c != 0);
  }
  FUN_00410f20(local_28);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00414480(&local_58);
  FUN_00414560(&local_38,2);
  return;
}

