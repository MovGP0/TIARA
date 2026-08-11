/* Ghidra address: 00bad1a0 */
/* Ghidra symbol: FUN_00bad1a0 */


undefined8 FUN_00bad1a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  for (; iVar2 <= iVar3; iVar2 = iVar2 + 1) {
    cVar1 = FUN_00bac6b0(*(undefined2 *)(param_2 + -2 + (longlong)iVar2 * 2));
    if (cVar1 == '\0') break;
  }
  if (iVar3 < iVar2) {
    FUN_00414480(param_1);
  }
  else {
    while( true ) {
      cVar1 = FUN_00bac6b0(*(undefined2 *)(param_2 + -2 + (longlong)iVar3 * 2));
      if ((cVar1 == '\0') || (iVar3 <= iVar2)) break;
      iVar3 = iVar3 + -1;
    }
    FUN_00416dc0(param_1,param_2,iVar2,(iVar3 - iVar2) + 1);
  }
  return param_1;
}

