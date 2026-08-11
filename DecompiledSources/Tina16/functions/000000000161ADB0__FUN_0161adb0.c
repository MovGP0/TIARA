/* Ghidra address: 0161adb0 */
/* Ghidra symbol: FUN_0161adb0 */


longlong FUN_0161adb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0161acc0(&DAT_0161a258,1);
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_1 + 8);
  FUN_00414ad0(lVar1 + 0x10,*(undefined8 *)(param_1 + 0x10));
  FUN_00414ad0(lVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
  FUN_004af610(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(param_1 + 0x20),0,0);
  return lVar1;
}

