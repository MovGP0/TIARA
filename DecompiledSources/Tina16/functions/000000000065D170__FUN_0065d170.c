/* Ghidra address: 0065d170 */
/* Ghidra symbol: FUN_0065d170 */


void FUN_0065d170(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  FUN_00651e00(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0xf8))(param_2,*(undefined4 *)(param_1 + 0x2a8));
  }
  return;
}

