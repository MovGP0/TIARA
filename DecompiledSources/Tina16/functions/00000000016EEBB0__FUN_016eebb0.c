/* Ghidra address: 016eebb0 */
/* Ghidra symbol: FUN_016eebb0 */


int FUN_016eebb0(undefined8 param_1,short param_2,longlong param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = FUN_01b057d0(param_1,param_2 + 1);
  }
  else {
    iVar1 = FUN_01b057d0(param_3,param_2 + 1);
  }
  return iVar1 + -1;
}

