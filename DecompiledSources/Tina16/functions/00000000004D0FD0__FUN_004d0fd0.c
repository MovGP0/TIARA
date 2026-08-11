/* Ghidra address: 004d0fd0 */
/* Ghidra symbol: FUN_004d0fd0 */


undefined1 FUN_004d0fd0(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_004d11f0();
  cVar1 = FUN_004113d0(lVar2,&PTR_FUN_004ce150);
  if (cVar1 != '\0') {
    uVar3 = FUN_0044d710(&PTR_FUN_004832e8,1,PTR_PTR_02004c50);
    FUN_004134c0(uVar3);
  }
  return *(undefined1 *)(lVar2 + 0x1a);
}

