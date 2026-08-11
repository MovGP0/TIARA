/* Ghidra address: 00dd8710 */
/* Ghidra symbol: FUN_00dd8710 */


undefined4 FUN_00dd8710(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_004097b0();
  cVar1 = FUN_004113d0(lVar3,&PTR_FUN_00620998);
  if ((cVar1 == '\0') || (-1 < *(int *)(lVar3 + 0x30))) {
    uVar2 = 0x8000ffff;
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 0x30);
  }
  return uVar2;
}

