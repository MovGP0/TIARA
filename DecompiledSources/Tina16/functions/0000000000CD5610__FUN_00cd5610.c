/* Ghidra address: 00cd5610 */
/* Ghidra symbol: FUN_00cd5610 */


ulonglong FUN_00cd5610(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  cVar1 = FUN_00cd71e0(param_2,&PTR_FUN_00cd3fc8);
  if (cVar1 != '\0') {
    if (param_2 == *(longlong *)(param_1 + 0x40)) {
      uVar3 = 0;
    }
    else {
      uVar2 = FUN_00cd5610(param_1,*(undefined8 *)(param_2 + 0x18));
      uVar3 = (ulonglong)uVar2;
    }
  }
  return uVar3 & 0xffffffff;
}

