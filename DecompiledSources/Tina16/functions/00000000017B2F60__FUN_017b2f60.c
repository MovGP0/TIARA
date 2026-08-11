/* Ghidra address: 017b2f60 */
/* Ghidra symbol: FUN_017b2f60 */


void FUN_017b2f60(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c5a450(*(undefined8 *)(param_2 + 0x6e8));
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x7e0);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x7e4);
  return;
}

