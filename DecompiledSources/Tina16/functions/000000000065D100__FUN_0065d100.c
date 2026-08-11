/* Ghidra address: 0065d100 */
/* Ghidra symbol: FUN_0065d100 */


void FUN_0065d100(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_00651a90(param_1,param_2,param_3);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if ((cVar1 != '\0') && (((char)param_3 == '\0' || (*(int *)(param_1 + 0x2a8) == 0)))) {
    FUN_0064cf60(param_1,*(undefined4 *)(param_2 + 0xe0));
  }
  return;
}

