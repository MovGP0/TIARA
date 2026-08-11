/* Ghidra address: 010aff20 */
/* Ghidra symbol: FUN_010aff20 */


undefined8 FUN_010aff20(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(&local_40);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_30 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_24);
      FUN_010af640(local_30,&local_58,0);
      FUN_0043e1a0(&local_38,local_58);
      local_28 = *(int *)(local_30 + 0x4c);
      if (local_28 == param_3) {
        FUN_0043f750(&local_60,local_28);
        local_78 = local_60;
        FUN_00416cd0(&local_40,3,local_38,&DAT_010b00ec);
        (**(code **)(*local_20 + 0x78))(local_20,local_40);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b37d0(local_20,param_2);
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_40,2);
  return param_2;
}

