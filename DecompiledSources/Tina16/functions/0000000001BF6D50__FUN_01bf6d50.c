/* Ghidra address: 01bf6d50 */
/* Ghidra symbol: FUN_01bf6d50 */


void FUN_01bf6d50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf1690);
  if (cVar2 != '\0') {
    lVar1 = FUN_01bfd980(param_2);
    if (lVar1 == *(longlong *)(param_1 + 0xd8)) {
      *(undefined8 *)(param_1 + 0x110) = param_2;
    }
  }
  return;
}

