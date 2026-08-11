/* Ghidra address: 00e768b0 */
/* Ghidra symbol: FUN_00e768b0 */


void FUN_00e768b0(undefined8 param_1)

{
  DAT_0202e980 = FUN_00427c10(param_1,L"JFETsetup");
  DAT_0202e988 = FUN_00427c10(param_1,L"JFETtemp");
  DAT_0202e990 = FUN_00427c10(param_1,L"JFETload");
  DAT_0202e998 = FUN_00427c10(param_1,L"JFETacLoad");
  DAT_0202e9a0 = FUN_00427c10(param_1,L"JFETgetic");
  DAT_0202e9a8 = FUN_00427c10(param_1,L"JFETLoadMatrix");
  DAT_0202e9b0 = FUN_00427c10(param_1,L"JFETacLoadMatrix");
  DAT_0202e9b8 = FUN_00427c10(param_1,L"JFETtrunc");
  if (((((DAT_0202e980 == 0) || (DAT_0202e988 == 0)) || (DAT_0202e990 == 0)) ||
      ((DAT_0202e998 == 0 || (DAT_0202e9a0 == 0)))) ||
     ((DAT_0202e9a8 == 0 || ((DAT_0202e9b0 == 0 || (DAT_0202e9b8 == 0)))))) {
    DAT_01edf020 = 0;
  }
  else {
    DAT_01edf020 = 1;
  }
  return;
}

