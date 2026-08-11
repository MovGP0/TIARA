/* Ghidra address: 017bda20 */
/* Ghidra symbol: FUN_017bda20 */


undefined8 * FUN_017bda20(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_RSI;
  
  if (param_2 == '\x04') {
    unaff_RSI = (undefined8 *)FUN_004095c0(0x1c);
    uVar1 = FUN_00498310(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    *unaff_RSI = uVar1;
    uVar1 = FUN_00498310(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
    unaff_RSI[1] = uVar1;
    uVar1 = FUN_00498310(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    unaff_RSI[2] = uVar1;
    *(undefined1 *)(unaff_RSI + 3) = *(undefined1 *)(param_1 + 0xa8);
  }
  else if (param_2 == '\x05') {
    unaff_RSI = (undefined8 *)FUN_00418560(8,&DAT_017bd9d0);
    FUN_00414ad0(unaff_RSI,*(undefined8 *)(param_1 + 0x98));
  }
  return unaff_RSI;
}

