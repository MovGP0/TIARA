/* Ghidra address: 0195ce70 */
/* Ghidra symbol: FUN_0195ce70 */


undefined1 FUN_0195ce70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x210);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01920040);
  if (cVar2 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined1 *)(lVar1 + 0x10);
  }
  return uVar3;
}

