/* Ghidra address: 006faab0 */
/* Ghidra symbol: FUN_006faab0 */


void FUN_006faab0(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  FUN_00651e00(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0xe0))(param_2,*(undefined1 *)(param_1 + 0x31a));
    (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_1 + 0x31c));
  }
  return;
}

