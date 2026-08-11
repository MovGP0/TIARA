/* Ghidra address: 00ce6ba0 */
/* Ghidra symbol: FUN_00ce6ba0 */


undefined8 FUN_00ce6ba0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00879090(*(undefined8 *)(param_2 + 0x28),&DAT_00ce6c1c);
  if ((cVar1 != '\0') &&
     (iVar2 = FUN_0089fe30(&DAT_00ce6c1c,*(undefined8 *)(param_2 + 0x28),0xffffffff), 1 < iVar2)) {
    FUN_00416dc0(param_1,*(undefined8 *)(param_2 + 0x28),1,iVar2 + -1);
    return param_1;
  }
  FUN_00414ad0(param_1,&DAT_00ce6c1c);
  return param_1;
}

