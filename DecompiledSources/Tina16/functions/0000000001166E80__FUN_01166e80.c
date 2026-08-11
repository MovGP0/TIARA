/* Ghidra address: 01166e80 */
/* Ghidra symbol: FUN_01166e80 */


void FUN_01166e80(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0203d978 != 0) {
    iVar1 = *(int *)(DAT_0203d978 + -4);
  }
  FUN_00416dc0(&DAT_0203d980,DAT_0203d978,1,iVar1 + -1);
  FUN_00414ad0(&DAT_0203d978,DAT_0203d980);
  if (DAT_0203d978 != 0) {
    FUN_01165eb0(&DAT_0203d978);
  }
  FUN_00414480(&DAT_0203d978);
  DAT_0203d998 = param_2;
  DAT_0203d99c = param_3;
  return;
}

