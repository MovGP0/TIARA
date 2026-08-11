/* Ghidra address: 01610090 */
/* Ghidra symbol: FUN_01610090 */


undefined8 FUN_01610090(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)*param_2;
  FUN_00b909d0(param_2,4);
  *param_3 = *param_3 + 4;
  FUN_00415d10(param_1,iVar1,0);
  if (0 < iVar1) {
    uVar2 = FUN_00414df0(param_1);
    FUN_00409a70(*param_2,uVar2,(longlong)iVar1);
    FUN_00b909d0(param_2,iVar1);
    *param_3 = *param_3 + iVar1;
  }
  return param_1;
}

