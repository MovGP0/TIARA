/* Ghidra address: 01c89850 */
/* Ghidra symbol: FUN_01c89850 */


void FUN_01c89850(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0xd10) + 0x80),uVar2);
    FUN_007e2d20(uVar1,(byte)PTR_DAT_02004010[0x813] == uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 != 5);
  return;
}

