/* Ghidra address: 008a1ef0 */
/* Ghidra symbol: FUN_008a1ef0 */


undefined8
FUN_008a1ef0(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  FUN_00414480(param_2);
  iVar3 = 0;
  while( true ) {
    iVar2 = 0;
    if (*param_3 != 0) {
      iVar2 = *(int *)(*param_3 + -4);
    }
    if ((iVar2 <= iVar3) || (param_5 <= iVar3)) break;
    cVar1 = FUN_00875360(*(undefined2 *)(*param_3 + -2 + (longlong)(iVar3 + 1) * 2));
    if (cVar1 == '\0') break;
    iVar3 = iVar3 + 1;
  }
  if ((0 < iVar3) && (param_4 <= iVar3)) {
    FUN_00416dc0(param_2,*param_3,1,iVar3);
    FUN_00416dc0(param_3,*param_3,iVar3 + 1,0x7fffffff);
  }
  return param_2;
}

