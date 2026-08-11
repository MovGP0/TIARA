/* Ghidra address: 00b9be50 */
/* Ghidra symbol: FUN_00b9be50 */


void FUN_00b9be50(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00b97e28);
  if (cVar2 != '\0') {
    FUN_00b988a0(uVar1);
  }
  return;
}

