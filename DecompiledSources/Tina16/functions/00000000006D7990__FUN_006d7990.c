/* Ghidra address: 006d7990 */
/* Ghidra symbol: FUN_006d7990 */


void FUN_006d7990(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006ad968);
  if ((cVar1 != '\0') && (*(longlong *)(param_2 + 0x498) == param_1)) {
    FUN_006d78a0(param_1,param_2);
  }
  FUN_0065b240(param_1,param_2);
  return;
}

