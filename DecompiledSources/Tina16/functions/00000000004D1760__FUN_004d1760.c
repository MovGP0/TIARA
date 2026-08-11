/* Ghidra address: 004d1760 */
/* Ghidra symbol: FUN_004d1760 */


void FUN_004d1760(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = FUN_004d11f0();
  cVar3 = FUN_004113d0(lVar1,&PTR_FUN_004ce150);
  if (cVar3 != '\0') {
    uVar2 = FUN_0044d710(&PTR_FUN_004832e8,1,PTR_PTR_02002a60);
    FUN_004134c0(uVar2);
  }
  *(undefined4 *)(lVar1 + 0x20) = param_1;
  return;
}

