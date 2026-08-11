/* Ghidra address: 01898670 */
/* Ghidra symbol: FUN_01898670 */


void FUN_01898670(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_01895500);
  if (cVar2 != '\0') {
    FUN_01898e70(uVar1);
  }
  FUN_006e1900(param_1);
  FUN_01899160(*(undefined8 *)(param_1 + 0x6f8));
  return;
}

