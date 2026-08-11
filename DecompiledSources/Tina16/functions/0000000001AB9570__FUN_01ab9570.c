/* Ghidra address: 01ab9570 */
/* Ghidra symbol: FUN_01ab9570 */


int FUN_01ab9570(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_01d31350(*(undefined8 *)(param_1 + 0xe0));
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_005dcf20(*(undefined8 *)(param_1 + 0x68),uVar3);
  iVar2 = FUN_01d31f80(uVar3);
  FUN_00410f20(uVar3);
  return iVar1 + 0x29 + iVar2;
}

