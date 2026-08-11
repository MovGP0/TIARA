/* Ghidra address: 00bd6ce0 */
/* Ghidra symbol: FUN_00bd6ce0 */


void FUN_00bd6ce0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bd50c0);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00bd6eb0(param_1,*(undefined2 *)(param_2 + 0x20));
    FUN_00bd6ec0(param_1,*(undefined2 *)(param_2 + 0x18));
    FUN_00bd6ff0(param_1,*(undefined2 *)(param_2 + 0x1c));
    FUN_00bd6ed0(param_1,*(undefined2 *)(param_2 + 0x1a));
    FUN_00bd7000(param_1,*(undefined2 *)(param_2 + 0x1e));
  }
  return;
}

