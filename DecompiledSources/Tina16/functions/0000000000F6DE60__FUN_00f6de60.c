/* Ghidra address: 00f6de60 */
/* Ghidra symbol: FUN_00f6de60 */


void FUN_00f6de60(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00410e60(&DAT_00f6cde0,1);
  *(undefined4 *)(lVar1 + 8) = 2;
  *(undefined4 *)(lVar1 + 0xc) = param_1;
  *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x14) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x18) = 0xffffffff;
  return;
}

