/* Ghidra address: 00f6ee50 */
/* Ghidra symbol: FUN_00f6ee50 */


longlong FUN_00f6ee50(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                     undefined1 param_9)

{
  longlong lVar1;
  
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  lVar1 = FUN_00f6dfb0(&PTR_FUN_00f68790,1);
  *(undefined1 *)(lVar1 + 0x10) = 3;
  *(undefined1 *)(lVar1 + 0x11) = 1;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar1);
  *(undefined4 *)(lVar1 + 0x40) = param_2;
  *(undefined4 *)(lVar1 + 0x44) = param_3;
  *(undefined4 *)(lVar1 + 0x50) = param_4;
  *(undefined4 *)(lVar1 + 0x54) = param_5;
  *(undefined4 *)(lVar1 + 0x58) = param_6;
  FUN_00414ad0(lVar1 + 0x60,param_7);
  FUN_00414ad0(lVar1 + 0x68,param_8);
  *(undefined1 *)(lVar1 + 0x70) = param_9;
  FUN_00414560(&param_7,2);
  return lVar1;
}

