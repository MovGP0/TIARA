/* Ghidra address: 01899bf0 */
/* Ghidra symbol: FUN_01899bf0 */


undefined8 FUN_01899bf0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_01896af8);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  return uVar3;
}

