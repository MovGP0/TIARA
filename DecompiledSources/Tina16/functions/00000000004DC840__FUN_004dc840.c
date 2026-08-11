/* Ghidra address: 004dc840 */
/* Ghidra symbol: FUN_004dc840 */


void FUN_004dc840(void)

{
  longlong lVar1;
  
  DAT_02011614 = DAT_02011614 + -1;
  if (DAT_02011614 == -1) {
    FUN_0041b5a0(FUN_004d5770);
    lVar1 = FUN_00451ea0(&DAT_00438260,1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x48;
    }
    FUN_0041b840(&DAT_020115f0,lVar1);
    DAT_02011620 = FUN_00410e60(&PTR_FUN_005926b0,1);
    DAT_02011618 = FUN_0049fac0(&DAT_00498b00,1);
    DAT_02011628 = FUN_004e9ab0(&DAT_004a2c00,1);
    DAT_02011648 = FUN_004f28b0(&DAT_004bd108,1);
  }
  return;
}

