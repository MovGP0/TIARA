/* Ghidra address: 007fbfd0 */
/* Ghidra symbol: FUN_007fbfd0 */


void FUN_007fbfd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00654c00();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00654bc0(param_2,iVar4);
      cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00640c18);
      if (cVar2 != '\0') {
        uVar1 = FUN_00654bc0(param_2,iVar4);
        FUN_007fbfd0(param_1,uVar1);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00654ce0(param_2,0xb00e);
  return;
}

