/* Ghidra address: 00709d80 */
/* Ghidra symbol: FUN_00709d80 */


undefined1 FUN_00709d80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006abd68);
  if (cVar2 != '\0') {
    uVar3 = *(undefined1 *)(lVar1 + 0x4c2);
  }
  return uVar3;
}

