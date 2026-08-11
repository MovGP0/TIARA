/* Ghidra address: 0089eee0 */
/* Ghidra symbol: FUN_0089eee0 */


void FUN_0089eee0(longlong param_1)

{
  undefined2 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00874ee0(&local_10,*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xe8),1,1);
  uVar1 = FUN_00877cc0(local_10,1);
  *(undefined2 *)(param_1 + 0xe6) = uVar1;
  FUN_0043eb50(&local_18,**(undefined8 **)(param_1 + 0x100));
  FUN_00414ad0(*(undefined8 *)(param_1 + 0x100),local_18);
  FUN_00414560(&local_18,2);
  return;
}

