/* Ghidra address: 019b9d20 */
/* Ghidra symbol: FUN_019b9d20 */


void FUN_019b9d20(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_019b5d30(&DAT_019b9d90,*param_1,param_2);
    if (iVar1 < 1) break;
    FUN_019b5f00(param_1,1,1,param_2);
  }
  iVar1 = FUN_019b5ce0(*param_1,param_2);
  if (iVar1 == 0) {
    FUN_019b6e50(param_1,&LAB_019b9da0,param_2);
  }
  return;
}

