/* Ghidra address: 0149ec60 */
/* Ghidra symbol: FUN_0149ec60 */


undefined8 FUN_0149ec60(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined8 unaff_RSI;
  
  if (param_2 == '\x04') {
    uVar1 = FUN_00b92120(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    unaff_RSI = FUN_00b95a80(uVar1);
  }
  else if (param_2 == '\x05') {
    unaff_RSI = FUN_01a5d940(&PTR_FUN_01a5c280,1);
    FUN_01a5eb60(unaff_RSI,*(undefined8 *)(param_1 + 0x28));
  }
  return unaff_RSI;
}

