/* Ghidra address: 017b4e70 */
/* Ghidra symbol: FUN_017b4e70 */


void FUN_017b4e70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c5a450(*(undefined8 *)(param_2 + 0x6e8));
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x7e0);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x7e4);
  return;
}

