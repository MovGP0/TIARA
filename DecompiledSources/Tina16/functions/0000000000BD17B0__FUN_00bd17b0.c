/* Ghidra address: 00bd17b0 */
/* Ghidra symbol: FUN_00bd17b0 */


undefined8 FUN_00bd17b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  iVar1 = 1;
  while ((iVar1 <= iVar2 && (*(ushort *)(param_2 + -2 + (longlong)iVar1 * 2) < 0x21))) {
    iVar1 = iVar1 + 1;
  }
  if (iVar2 < iVar1) {
    FUN_00414480(param_1);
  }
  else {
    while (*(ushort *)(param_2 + -2 + (longlong)iVar2 * 2) < 0x21) {
      iVar2 = iVar2 + -1;
    }
    FUN_00416dc0(param_1,param_2,iVar1,(iVar2 - iVar1) + 1);
  }
  return param_1;
}

