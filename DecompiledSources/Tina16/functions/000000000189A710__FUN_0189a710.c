/* Ghidra address: 0189a710 */
/* Ghidra symbol: FUN_0189a710 */


void FUN_0189a710(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_01895500);
  if (cVar2 != '\0') {
    FUN_01898e70(uVar1);
  }
  FUN_006df8b0(param_1,param_2);
  return;
}

