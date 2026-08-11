/* Ghidra address: 00a7c870 */
/* Ghidra symbol: FUN_00a7c870 */


longlong FUN_00a7c870(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_00410e60(&DAT_00a7bc88,1);
  *(undefined1 *)(lVar1 + 0x38) = param_2;
  FUN_00414ad0(lVar1 + 8,param_3);
  FUN_00414ad0(lVar1 + 0x20,param_4);
  FUN_00414ad0(lVar1 + 0x28,param_5);
  FUN_00414ad0(lVar1 + 0x18,param_6);
  return lVar1;
}

