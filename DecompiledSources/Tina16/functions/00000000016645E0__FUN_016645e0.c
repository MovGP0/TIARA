/* Ghidra address: 016645e0 */
/* Ghidra symbol: FUN_016645e0 */


void FUN_016645e0(undefined8 param_1)

{
  DAT_0210f888 = FUN_00427c10(param_1,L"BSIM3v32setup");
  DAT_0210f890 = FUN_00427c10(param_1,L"BSIM3v32temp");
  DAT_0210f898 = FUN_00427c10(param_1,L"BSIM3v32load");
  DAT_0210f8a0 = FUN_00427c10(param_1,L"BSIM3v32acLoad");
  DAT_0210f8a8 = FUN_00427c10(param_1,L"BSIM3v32getic");
  DAT_0210f8b0 = FUN_00427c10(param_1,L"BSIM3v32LoadMatrix");
  DAT_0210f8b8 = FUN_00427c10(param_1,L"BSIM3v32acLoadMatrix");
  DAT_0210f8c0 = FUN_00427c10(param_1,L"BSIM3v32trunc");
  DAT_0210f8c8 = FUN_00427c10(param_1,L"BSIM3v32convTest");
  if ((((((DAT_0210f888 == 0) || (DAT_0210f890 == 0)) || (DAT_0210f898 == 0)) ||
       ((DAT_0210f8a0 == 0 || (DAT_0210f8a8 == 0)))) ||
      ((DAT_0210f8b0 == 0 || ((DAT_0210f8b8 == 0 || (DAT_0210f8c0 == 0)))))) || (DAT_0210f8c8 == 0))
  {
    DAT_01f7e120 = 0;
  }
  else {
    DAT_01f7e120 = 1;
  }
  return;
}

