/* Ghidra address: 00cb6490 */
/* Ghidra symbol: FUN_00cb6490 */


void FUN_00cb6490(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00c8d5d0(param_1);
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0x438;
  *(undefined1 *)(param_1 + 0x102) = 0;
  uVar1 = FUN_00882920(&PTR_FUN_00cb3a38,1);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  return;
}

