/* Ghidra address: 013b9480 */
/* Ghidra symbol: FUN_013b9480 */


undefined1 FUN_013b9480(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 local_res8;
  int *local_res10;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  undefined1 local_21;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_21 = 1;
  *local_res10 = 0;
  (**(code **)(*local_20 + 0x60))(local_20,local_res8);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_28 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_30,local_28);
      local_38 = 0;
      if (local_30 != 0) {
        local_38 = *(int *)(local_30 + -4);
      }
      if (0xff < local_38) {
        *local_res10 = local_28 + 1;
        local_21 = 0;
        FUN_013b9590(0,local_40);
        goto LAB_013b956a;
      }
      local_28 = local_28 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
LAB_013b956a:
  FUN_00414480(&local_30);
  FUN_00414480(&local_res8);
  return local_21;
}

