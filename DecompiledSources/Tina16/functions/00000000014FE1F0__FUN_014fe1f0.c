/* Ghidra address: 014fe1f0 */
/* Ghidra symbol: FUN_014fe1f0 */


int FUN_014fe1f0(int param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_01cc5c60(*(undefined8 *)PTR_DAT_02001440);
  iVar3 = 0;
  lVar2 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_02001440);
  while( true ) {
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_01cb4260);
    if ((cVar1 != '\0') && (*(int *)(lVar2 + 0x38) == param_1)) break;
    lVar2 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_02001440);
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

