/* Ghidra address: 0046af50 */
/* Ghidra symbol: FUN_0046af50 */


void FUN_0046af50(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if ((uVar1 < 0x10f) && (uVar2 < 0x10f)) {
    FUN_0046a7a0();
  }
  else if (uVar1 == 0x400c) {
    FUN_0046af50(*(undefined8 *)(param_1 + 4));
  }
  else if (uVar2 == 0x400c) {
    FUN_0046af50(param_1,*(undefined8 *)(param_2 + 4));
  }
  else if (((uVar1 & 0xfff) < 0x10f) && ((uVar2 & 0xfff) < 0x10f)) {
    FUN_0046a7a0();
  }
  else {
    FUN_0046aa10();
  }
  return;
}

