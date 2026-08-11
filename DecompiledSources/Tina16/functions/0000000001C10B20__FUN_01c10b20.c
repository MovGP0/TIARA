/* Ghidra address: 01c10b20 */
/* Ghidra symbol: FUN_01c10b20 */


void FUN_01c10b20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_res20;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414b50(local_20,local_res20);
  lVar1 = *(longlong *)(param_1 + 0x78);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01bf3cc0);
  if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x4f8) == '\0')) {
    FUN_00414b50(local_20,*(undefined8 *)(param_1 + 0x388));
  }
  FUN_00414b50(&local_res20,local_20[0]);
  FUN_01bea860(param_1,param_2,param_3,local_res20);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return;
}

