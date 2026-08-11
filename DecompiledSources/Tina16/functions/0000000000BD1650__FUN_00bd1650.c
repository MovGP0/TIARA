/* Ghidra address: 00bd1650 */
/* Ghidra symbol: FUN_00bd1650 */


int FUN_00bd1650(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if (DAT_02019b08 == '\0') {
    iVar2 = param_2;
    if (0 < param_2) {
      do {
        uVar1 = FUN_00bd1520(*param_1);
        *param_1 = uVar1;
        param_1 = param_1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    param_2 = thunk_FUN_03e5c312(param_1);
  }
  return param_2;
}

