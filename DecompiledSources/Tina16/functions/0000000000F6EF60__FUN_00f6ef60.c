/* Ghidra address: 00f6ef60 */
/* Ghidra symbol: FUN_00f6ef60 */


longlong FUN_00f6ef60(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00f6dfb0(&PTR_FUN_00f68790,1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  *(undefined1 *)(lVar1 + 0x11) = param_3;
  FUN_00f6e180(lVar1,param_2);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar1);
  return lVar1;
}

