/* Ghidra address: 01ab4be0 */
/* Ghidra symbol: FUN_01ab4be0 */


int FUN_01ab4be0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_005dcf20(*(undefined8 *)(param_1 + 0xa0),uVar2);
  iVar1 = FUN_01d31f80(uVar2);
  FUN_00410f20(uVar2);
  return iVar1 + 0x37;
}

