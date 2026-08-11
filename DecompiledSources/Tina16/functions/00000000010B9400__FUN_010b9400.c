/* Ghidra address: 010b9400 */
/* Ghidra symbol: FUN_010b9400 */


undefined8 * FUN_010b9400(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_RSI;
  
  if (param_2 == '\x04') {
    unaff_RSI = (undefined8 *)FUN_004095c0(0x18);
    uVar1 = FUN_00498310(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    *unaff_RSI = uVar1;
    unaff_RSI[1] = *(undefined8 *)(param_1 + 0x58);
    unaff_RSI[2] = *(undefined8 *)(param_1 + 0x60);
  }
  else if (param_2 == '\x05') {
    unaff_RSI = (undefined8 *)FUN_004095c0(0x20);
    *unaff_RSI = *(undefined8 *)(param_1 + 0x58);
    unaff_RSI[1] = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(unaff_RSI + 2) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)((longlong)unaff_RSI + 0x14) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined1 *)(unaff_RSI + 3) = *(undefined1 *)(param_1 + 0x80);
  }
  return unaff_RSI;
}

