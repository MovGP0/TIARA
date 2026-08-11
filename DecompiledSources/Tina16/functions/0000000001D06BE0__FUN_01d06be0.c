/* Ghidra address: 01d06be0 */
/* Ghidra symbol: FUN_01d06be0 */


undefined8 * FUN_01d06be0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *unaff_RSI;
  
  if (param_2 == '\x04') {
    unaff_RSI = (undefined8 *)FUN_004095c0(0x14);
    uVar2 = FUN_00498310(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    *unaff_RSI = uVar2;
    uVar2 = FUN_00498310(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    unaff_RSI[1] = uVar2;
    *(undefined1 *)(unaff_RSI + 2) = *(undefined1 *)(param_1 + 0xd3);
    *(undefined1 *)((longlong)unaff_RSI + 0x11) = *(undefined1 *)(param_1 + 0xd1);
    *(undefined1 *)((longlong)unaff_RSI + 0x12) = *(undefined1 *)(param_1 + 0xa8);
  }
  else if (param_2 == '\x05') {
    unaff_RSI = (undefined8 *)FUN_00418560(0x30,&DAT_01d06ad0);
    FUN_00414ad0(unaff_RSI,*(undefined8 *)(param_1 + 0x98));
    FUN_00414ad0(unaff_RSI + 1,*(undefined8 *)(param_1 + 0x180));
    *(undefined1 *)(unaff_RSI + 4) = *(undefined1 *)(param_1 + 0x560);
    cVar1 = FUN_01d04d40(param_1);
    if (cVar1 != '\0') {
      FUN_00414ad0(unaff_RSI + 2,*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x50));
      FUN_00414ad0(unaff_RSI + 3,*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x58));
    }
    uVar2 = FUN_01cfd4d0(param_1,*(undefined8 *)(param_1 + 0xc0));
    unaff_RSI[5] = uVar2;
  }
  return unaff_RSI;
}

