/* Ghidra address: 00affd30 */
/* Ghidra symbol: FUN_00affd30 */


int FUN_00affd30(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  while( true ) {
    if (param_3 < 1) {
      return param_3;
    }
    lVar2 = FUN_00affd00(param_1,param_3 + -1);
    iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 8),param_2);
    if (iVar1 != 0) break;
    param_3 = param_3 + -1;
  }
  return param_3;
}

