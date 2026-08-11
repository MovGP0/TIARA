/* Ghidra address: 0195e570 */
/* Ghidra symbol: FUN_0195e570 */


undefined4 FUN_0195e570(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01920040);
  if (cVar2 == '\0') {
    uVar3 = 0x1fffffff;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 8);
  }
  return uVar3;
}

