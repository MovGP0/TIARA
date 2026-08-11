/* Ghidra address: 00452f70 */
/* Ghidra symbol: FUN_00452f70 */


void FUN_00452f70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  while( true ) {
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = *(longlong *)(param_2 + -8);
    }
    if ((lVar2 <= iVar1) || (*(short *)(param_2 + (longlong)iVar1 * 2) == 0)) break;
    iVar1 = iVar1 + 1;
  }
  FUN_00453140(param_1,param_2,0,iVar1);
  return;
}

