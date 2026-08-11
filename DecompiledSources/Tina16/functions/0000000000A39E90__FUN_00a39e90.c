/* Ghidra address: 00a39e90 */
/* Ghidra symbol: FUN_00a39e90 */


undefined8 FUN_00a39e90(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x160) + 0x10) != 0) {
    local_28 = FUN_00a33e20(*(longlong *)(param_1 + 0x160),0);
    cVar1 = FUN_004113d0(local_28,&PTR_FUN_00a30a98);
    if (cVar1 != '\0') goto LAB_00a39f08;
  }
  FUN_0041ddd0(local_20,PTR_PTR_02005580);
  FUN_00a39bd0(param_1,&PTR_FUN_00a2e470,local_20[0]);
  local_28 = 0;
LAB_00a39f08:
  FUN_00414480(local_20);
  return local_28;
}

