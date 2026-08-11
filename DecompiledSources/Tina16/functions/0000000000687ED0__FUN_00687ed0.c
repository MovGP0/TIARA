/* Ghidra address: 00687ed0 */
/* Ghidra symbol: FUN_00687ed0 */


void FUN_00687ed0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_00687830(param_1,param_2,param_3);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if ((cVar1 != '\0') && (((char)param_3 == '\0' || (*(int *)(param_1 + 0x4d0) == -1)))) {
    FUN_00688630(param_1,*(undefined4 *)(param_2 + 0x110));
  }
  return;
}

