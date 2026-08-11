/* Ghidra address: 01c07b40 */
/* Ghidra symbol: FUN_01c07b40 */


void FUN_01c07b40(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_01bfc590(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01befca0);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  return;
}

