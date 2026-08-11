/* Ghidra address: 00a390c0 */
/* Ghidra symbol: FUN_00a390c0 */


void FUN_00a390c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a31730);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02003830);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2cf00,local_10);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  FUN_00414480(&local_10);
  return;
}

