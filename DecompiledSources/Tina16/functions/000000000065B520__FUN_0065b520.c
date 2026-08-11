/* Ghidra address: 0065b520 */
/* Ghidra symbol: FUN_0065b520 */


void FUN_0065b520(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_004d3e30();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004d3de0(param_1,iVar4);
      cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00640c18);
      if (cVar2 != '\0') {
        uVar1 = FUN_004d3de0(param_1,iVar4);
        FUN_0064fca0(uVar1,0xb056,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

