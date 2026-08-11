/* Ghidra address: 018c5930 */
/* Ghidra symbol: FUN_018c5930 */


void FUN_018c5930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_00410e60(&DAT_018c3668,1);
  *(undefined8 *)(lVar1 + 8) = param_2;
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  *(undefined1 *)(lVar1 + 0x18) = param_4;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar1);
  return;
}

