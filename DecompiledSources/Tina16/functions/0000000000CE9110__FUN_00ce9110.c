/* Ghidra address: 00ce9110 */
/* Ghidra symbol: FUN_00ce9110 */


void FUN_00ce9110(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_0043ea00(&local_30,param_2);
  if (local_30 != 0) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    do {
      local_58 = 1;
      FUN_00874ee0(&local_28,&local_30,&LAB_00ce9288,1);
      if (local_28 != 0) {
        (**(code **)(*local_20 + 0x78))(local_20,local_28);
      }
    } while (local_30 != 0);
    iVar1 = (**(code **)(*local_20 + 0x28))();
    local_34 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_48,local_34);
        FUN_00ce9000(param_1,local_48);
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,2);
  return;
}

