/* Ghidra address: 01c07070 */
/* Ghidra symbol: FUN_01c07070 */


undefined1 FUN_01c07070(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 800) != 0) {
    uVar2 = FUN_01bfd980(*(longlong *)(param_1 + 800));
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_0061c2b8);
    if (cVar1 != '\0') {
      lVar3 = FUN_01bfd980(*(undefined8 *)(param_1 + 800));
      uVar4 = *(undefined1 *)(lVar3 + 0xd8);
    }
  }
  return uVar4;
}

