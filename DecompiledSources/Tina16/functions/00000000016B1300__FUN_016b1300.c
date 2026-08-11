/* Ghidra address: 016b1300 */
/* Ghidra symbol: FUN_016b1300 */


undefined8 FUN_016b1300(longlong param_1)

{
  int iVar1;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  longlong local_30;
  int local_24;
  undefined8 local_20;
  
  local_90 = auStack_c8;
  local_a0 = 0;
  local_98 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38));
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_30 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),local_24);
      FUN_00415430(&local_40,*(undefined8 *)(local_30 + 8),0);
      local_38 = *(undefined4 **)(local_30 + 0x10);
      if ((*(longlong *)(local_38 + 2) == 0) && (*(longlong *)(local_38 + 4) == 0)) {
        local_58 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_016b0ee0(param_1,&local_48,local_38,local_68);
        FUN_00416880(&local_98,local_48);
        (**(code **)(*local_58 + 0x78))(local_58,local_98);
        FUN_00414c70(&local_50,local_40);
        FUN_00416880(&local_a0,local_50);
        (**(code **)(*local_58 + 0x78))(local_58,local_a0);
        local_60 = FUN_016b0320(&DAT_016afe50,1,*local_38,local_58);
        *(longlong *)(local_60 + 0x18) = param_1;
        FUN_016b0de0(param_1,local_40);
        FUN_016b0590(local_60,local_68);
        FUN_016b0590(local_60,local_70);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),local_60);
      }
      else {
        FUN_016b1110(param_1,local_38);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_a0,2);
  FUN_00414590(&local_50,3);
  return local_20;
}

