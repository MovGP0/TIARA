/* Ghidra address: 008f7ac0 */
/* Ghidra symbol: FUN_008f7ac0 */


void FUN_008f7ac0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_008f5ce8);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else if (param_2 != param_1) {
    (**(code **)(*param_1 + 0x68))(param_1);
    (**(code **)(*param_1 + 0x60))(param_1,param_2);
  }
  return;
}

