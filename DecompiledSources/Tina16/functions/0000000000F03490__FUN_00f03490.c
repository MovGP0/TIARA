/* Ghidra address: 00f03490 */
/* Ghidra symbol: FUN_00f03490 */


void FUN_00f03490(longlong param_1)

{
  ushort uVar1;
  undefined8 unaff_RSI;
  
  uVar1 = *(ushort *)(param_1 + 0x4f);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(*(longlong **)(param_1 + 0x20));
  *(undefined2 *)(param_1 + 0x4f) = 0;
  FUN_00f033d0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_00f03530(param_1,2);
  FUN_004b1830(param_1,CONCAT71((int7)((ulonglong)unaff_RSI >> 8),(uVar1 & 4) != 0) & 0xffffffff);
  return;
}

