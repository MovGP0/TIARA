/* Ghidra address: 00f16550 */
/* Ghidra symbol: FUN_00f16550 */


int FUN_00f16550(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00f11cb0(param_1);
  iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0xe8));
  return iVar1 + iVar2 + 0x2c;
}

