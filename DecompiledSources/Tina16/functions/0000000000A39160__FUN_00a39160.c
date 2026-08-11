/* Ghidra address: 00a39160 */
/* Ghidra symbol: FUN_00a39160 */


void FUN_00a39160(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a31488);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02003830);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2cf00,local_10);
  }
  else {
    uVar2 = FUN_00a392b0(param_2);
    FUN_00a39480(param_1,uVar2);
  }
  FUN_00414480(&local_10);
  return;
}

