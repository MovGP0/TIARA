/* Ghidra address: 00a74830 */
/* Ghidra symbol: FUN_00a74830 */


void FUN_00a74830(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00410e60(&DAT_00a6ab68,1);
  *(undefined4 *)(lVar1 + 0xc) = param_3;
  *(undefined4 *)(lVar1 + 0x10) = 9999999;
  *(undefined4 *)(lVar1 + 8) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar1);
  return;
}

